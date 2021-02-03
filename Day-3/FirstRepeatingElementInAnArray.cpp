#include <iostream>
using namespace std;

void FindRep(int n,int array[])
{
    cout<<"Enter the elements of the array"<<endl;
    for(int j=0; j<n; j++)
    {
        cin>>array[j];
    }

    for (int i = 0; i < n; i++)
    {
        int one=array[i];
        for(int k=i+1; k<n;k++)
        {
            if(array[k]==one)
            {
                cout<<"The first repeating element in the array is: "<<array[k];
                i=n;
                break;
            }
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the number of elements in your array: ";
    cin>>n;
    int array[n];
    FindRep(n,array);
    return 0;
}
