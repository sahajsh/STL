//Queues-----------FIFO(first in first out)

#include <bits/stdc++.h>
using namespace std;

int main() {
	queue<string>q;// creates an empty queue of integer q 
    q.push("abc");//push() is used to insert the element in the queue.
    // The element is inserted at the back  of the queue.
    q.push("efg");
    q.push("sdf");
    while(!q.empty()){
        //front() returns the front element of the queue.
        cout<<q.front()<<endl;
        q.pop();//This method removes single element from the front of the queue 
    }


	return 0;
}


