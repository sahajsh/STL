//                                                         C++ STL Inbuilt Algorithms - Part1
// Algorithms using vectors-----
#include <bits/stdc++.h>
using namespace std;
int main() {
    
    // Taking initial sum as 0
    int sum = 0;
    vector<int> v = {3, 3, 8, 7, 3};
    int min=*min_element(v.begin()+1,v.end());
    cout<<"the minimum element present in vector is: "<<min<<endl;
    int max=*max_element(v.begin(),v.end());
    cout<<"the maximum element present in vector is: "<<max<<endl;
    // Demonstration of accumulate function
	// to sum all the elements of the vector
    sum = accumulate(v.begin(), v.end(), 0);
    cout<<"sum of all elements in vector: "<<sum<<endl;
    int ct=count(v.begin()+1,v.end(),3);
    cout << "Number of times 3 appears : "<<ct<<endl;
	
    auto it=find(v.begin(),v.end(),3);
    if(it!=v.end()){
        cout<<*it<<" is found"<<endl;
    }else{
        cout<<"element not found";
    }
	
   reverse(v.begin(),v.end());
   for(auto value:v){
       cout<<value<<" ";//it will print reverse vector.
   }
   cout<<endl;
	
   string s="eurt emoc od smaerd";
   reverse(s.begin(),s.end());
   cout<<s<<endl;//

	
}
/*Output-
the minimum element present in vector is: 3
the maximum element present in vector is: 8
sum of all elements in vector: 24
Number of times 3 appears : 2
3 is found
3 7 8 3 3 
dreams do come true
*/
// Algorithms for arrays--->

#include <bits/stdc++.h>
using namespace std;

int main() {
	
    // Taking initial sum as 0
	int sum = 0;
    int n;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int min=*min_element(v,v+n);
    cout<<"the minimum element present in vector is: "<<min<<endl;
    int max=*max_element(v,v+n);
    cout<<"the maximum element present in vector is: "<<max<<endl;
    // Demonstration of accumulate function
	// to sum all the elements of the vector
	sum = accumulate(v, v+n, 0);
    cout<<"sum of all elements in vector: "<<sum<<endl;
    int ct=count(v,v+n,3);
    cout << "Number of times 3 appears : "<<ct<<endl;
    auto it=find(v,v+n,3);
    if(it!=v+n){
        cout<<*it<<" is found"<<endl;
    }else{
        cout<<"element not found";
    }
   reverse(v,v+n);
   for(auto value:v){
       cout<<value<<" ";//it will print reverse vector.
   }
   cout<<endl;
   string s="eurt emoc od smaerd";
   reverse(s.begin(),s.end());
   cout<<s<<endl;

	
}

/*
input
7
3 
4
9
8
2
3
4
Output-
the minimum element present in vector is: 2
the maximum element present in vector is: 9
sum of all elements in vector: 33
Number of times 3 appears : 2
3 is found
4 3 2 8 9 4 3 
dreams do come true
*/
