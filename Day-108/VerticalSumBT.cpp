#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *left, *right;
};

Node* newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}

void verticalSumUtil(Node *node, int hd,
                     map<int, int> &Map)
{
    if (node == NULL) return;

    verticalSumUtil(node->left, hd-1, Map);

    Map[hd] += node->data;

    verticalSumUtil(node->right, hd+1, Map);
}

void verticalSum(Node *root)
{
    map < int, int> Map;
    map < int, int> :: iterator it;

    verticalSumUtil(root, 0, Map);

    for (it = Map.begin(); it != Map.end(); ++it)
    {
        if(it->first>=0)
        {
            cout << " "<<it->first << " : \t"
                 << it->second << endl;
        }
        else {
            cout << it->first << " : \t"
                 << it->second << endl;
        }

    }
}

int main()
{
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->left->right = newNode(8);
    root->right->right->right = newNode(9);

    cout << "Following are the values of vertical"
            " sums with the positions of the "
            "columns with respect to root\n"
            <<"\npos\t"<<"sum\n";
    verticalSum(root);

    return 0;
}
