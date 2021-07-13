/*ITERATORS IN STL->An iterator is an object (like a pointer) that points to an element inside the container.
                  used to point at the memory addresses of STL containers

Operations of iterators :-

1. begin() :- This function is used to return the beginning position of the container.

2. end() :- This function is used to return the after end position of the container.
*/

#include<iostream>
#include<iterator> // for iterators
#include<vector> // for vectors
using namespace std;
int main(){
	vector<int>v={2,3,4,5,6,7};
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
	cout<<endl;
	vector<int>::iterator it=v.begin();
	cout<<(*it)<<endl;//2
	cout<<(*it+1)<<endl;//3
}

/*
// C++ code to demonstrate the working of
// iterator, begin() and end()
#include<iostream>
#include<iterator> // for iterators
#include<vector> // for vectors
using namespace std;
int main()
{
	vector<int> ar = { 1, 2, 3, 4, 5 };
	
	// Declaring iterator to a vector
	vector<int>::iterator ptr;
	
	// Displaying vector elements using begin() and end()
	cout << "The vector elements are : ";
	for (ptr = ar.begin(); ptr < ar.end(); ptr++)
		cout << *ptr << " ";
	
	return 0;	
}
*/
