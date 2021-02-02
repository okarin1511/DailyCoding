#include <iostream>
using namespace std;

int gcdCheck(int a, int m)
{
    if (a == 0)
        return m;
    if (m == 0)
        return a;

    if (a == m)
        return a;

    if (a > m)
        return gcdCheck(a - m, m);
    return gcdCheck(a, m - a);
}

void mulInv(int x, int a, int m) {


    for (int x = 1; x<m; x++) {
        int c = a*x;
        if (c%m == 1) {
            cout<<x;
            break;
        }
    }
}

int main()
{
    int x;
    int a, m;
    cout<<"\nEnter the First Number: ";
    cin>>a;

    cout<<"\nEnter the Second Number: ";
    cin>>m;

    if (gcdCheck(a,m) == 1){
        mulInv(x,a,m);
    } else {
        cout<<"The numbers are not relatively prime, you fool.";
    }

    return 0;
}
