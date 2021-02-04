#include <iostream>
using namespace std;

void rearrange(int n, int ar[], int as[]) {
    for(int j=0; j<n; j++)
    {
        ar[j] = as[as[j]];
        cout<<ar[j]<<" ";
    }
}

int main()
{
    int n, ar[n], as[n];
    cout<<"Enter the size of your array: \n";
    cin>>n;

    cout << "Enter the elements of the array\n";
    for(int i=0; i<n; i++)
    {
        cin>>as[i];
    }

    rearrange(n, ar, as);
    return 0;
}
