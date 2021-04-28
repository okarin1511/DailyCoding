// push(s, x) operation’s step are described below:
// Enqueue x to q2
// One by one dequeue everything from q1 and enqueue to q2.
// Swap the names of q1 and q2


// pop(s) operation’s function are described below:
// Dequeue an item from q1 and return it.

#include <iostream>
#include<bits/stdc++.h>

using namespace std;


queue <int> q1, q2;

void push(int x) {
    
    q1.push(x);
    
} 

void pop() {
    
    while(q1.size() != 1) {
        
        q2.push(q1.front());
        q1.pop();
    }
    
    int a = q1.front();
    q1.pop();
    
    queue<int> q = q1;
    q1 = q2;
    q2 = q;
    
    cout<<"Pop-eye the Sailor man: "<< a;
}

int main()
{
    
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    
    pop();

    return 0;
}
