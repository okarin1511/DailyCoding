#include <iostream>
using namespace std;

void Search(int arr[], int n, int b) {

    for (int i=0; i < n; i++) {
        if (b == arr[i]) {
            b = b * 2;
        }
    }

    cout<<b;
}

int main() {

    int n ;
    cout<<"enter n\n";
    cin>>n;
    int arr[n];
    int b;


    cout<<"enter elements of the sorted array:\n";
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Enter b\n";
    cin>> b;

    Search(arr, n, b);

    return 0;
}
