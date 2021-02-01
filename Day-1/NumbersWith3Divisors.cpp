#include <iostream>
using namespace std;

void div(int N) {

    int flag;

    for(int i=2; i<=N; i++) {

        flag=1;
        for (int j = 2; j<= i/2; j++) {
            if (i%j == 0) {
                flag = 0;
                break;
            }
        }

        if (flag == 1) {

            if(i*i<=N) {
                cout<<i*i<<"\t";
            }

        }

    }


}


int main() {
    int N;
    cout<<"Enter a number: "<< endl;
    cin>>N;
    cout << "The numbers having 3 divisors: ";
    div(N);
    return 0;
}
