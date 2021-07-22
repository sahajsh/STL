//                                                         C++ STL Inbuilt Algorithms - Part1
// Algorithms using vectors-----



#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
    cin>>n;
    // Taking initial sum as 0
	int sum = 0;
    vector<int> v = {1, 3, 8, 7, 3};
    int min=*min_element(v.begin()+1,v.end());
    cout<<" the minimum element present in vector is: "<<min<<endl;
    int max=*max_element(v.begin(),v.end());
    cout<<" the maximum element present in vector is: "<<max<<endl;
    // Demonstration of accumulate function
   // to sum all the elements of the vector
    sum = accumulate(v.begin(), v.end(), 0);
    cout<<" sum of all elements in vector: "<<sum<<endl;
    int ct=count(v.begin(),v.end(),3);
    cout << " Number of times 3 appears : "<<ct<<endl;
    auto it=find(v.begin(),v.end(),3);
    if(it!=v.end()){
        cout<<" "<<*it<<" is found"<<endl;
    }else{
        cout<<"element not found";
    }
	
}

