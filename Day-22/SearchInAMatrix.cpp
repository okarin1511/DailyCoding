#include <iostream>
using namespace std;

class matrix
{
    int row, col;
    int mat[10][10];

public:
    void getdata();
    void display();

}m1;

void matrix  ::getdata()
{

    cout<<"Number of rows: ";
    cin>>row;
    cout<<"Number of columns: ";
    cin>>col;
    cout<<"Enter the elements: ";

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cin>>mat[i][j];
        }
    }
    cout<<"\n";
}

void matrix ::display()
{
    int i, j, flag;
    int aseem;
    cout << "Enter the number you're looking for: \n";
    cin>>aseem;

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            if(mat[i][j] == aseem) {
                cout<<"Found at ("<<i<<","<<j<<")";
                flag = 0;
            }
        }
        cout<<endl;
    }
    if (flag != 0) {
        cout<<"\n Not Found";
    }
}

int main()
{
    m1.getdata();
    m1.display();

}
