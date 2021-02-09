#include <iostream>
using namespace std;

void union(int arr1[], int n, int arr2[], int m) {
    int i = 0, j = 0;

    while (i < n && j < m) {

        if (arr1[i] && arr2[j]) {
            cout<< arr1[i++]<< " ";

        } else if (arr2[j] < arr1[j]) {
            cout<< arr2[j++]<<" ";

        } else {
            cout<<arr1[i++]<< " ";
            j++;
        }
    }

    while (i < n) {
        cout<<arr1[i++]<<" ";
    }

    while (j < m) {
        cout<<arr2[j++]<<" ";
    }
}

int main() {
    int n, m;
    cout<<"Enter the size of first array";
    cin>>n;

    int arr1[n];
    cout<<"Enter the elements of the first array";

    for (int i = 0; i < n; i++) {
        cin>>arr1[i];
    }

    cout<<"Enter the size of second array";
    cin>>m;

    int arr2[m];
    cout<<"Enter the elements of the second array";

    for (int j = 0; j < n; j++) {
        cin>>arr2[j];
    }

    union (arr1, n, arr2, m);

    return 0;
}
