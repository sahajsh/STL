                                          //Vector of pairs --->

//Example:
#include<bits/stdc++.h>
using namespace std;

void printVector(vector<pair<int,int>>&v){
        cout<<"size: "<<v.size()<<endl;
        for(int i=0;i<v.size();i++){
    cout<<v[i].first<<"   "<<v[i].second<<endl;

   }
       cout<<endl;
}

int main(){
    vector<pair<int,int>>v={{1,2},{2,3},{4,5}};
    printVector(v);    //size: 3
	               //1  2
		       //2  3
		       //4  5   
}

//How to take input of vector of pairs----->

#include<bits/stdc++.h>
using namespace std;
void printVector(vector<pair<int,int>>&v){
      cout<<"size: "<<v.size()<<endl;//v.size() has O(1) time complexity
      for(int i=0;i<v.size();i++){
          cout<<v[i].first<<"  "<<v[i].second<<endl;
      }
      cout<<endl;
}
int main(){
    vector<pair<int,int>>v;
    printVector(v);// nothing got printed empty vector of pairs.
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});// or we can use v.push_back(make_pair(x,y));
    }
    printVector(v);
}
/*
input= 2
        3 4
        4 5

output= size: 0
        size: 2
         3  4
         4  5
*/
