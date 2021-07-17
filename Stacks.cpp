//--------------------------------------STACK-----------------------------------------------------\\

//syntax--     stack<object_type> stack_name;
//Last in first out

#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>s;//creates an empty stack of integer s 
    s.push(2);// pushes 2 in the stack  , now top =2
    s.push(3);//pushing 3 in stack ,now top is 3
    s.push(4);
    s.push(8);
    //empty returns true if the stack is empty else false is returned.
    while(!s.empty()){//we have to print all the elements of the stack
        cout<<s.top()<<endl;// returns the topmost element of the stack
        s.pop();//pop() function used to remove  element from the top of stack(newest element in the stack).
    }
}
