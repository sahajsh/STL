#include<bits/stdc++.h>
using namespace std;
int main(){

    vector<int>A={11,2,3,14};
    cout<<A[1]<<endl;  //2
    sort(A.begin(),A.end());  //2,3,11,14.
    bool present=binary_search(A.begin(),A.end(),3);//true
    present =binary_search(A.begin(),A.end(),4);//false
    A.push_back(100); //100 is inserted into list A.
    //2,3,11,14,100
    present=binary_search(A.begin(),A.end(),100); //check if 100 is present
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(100);
    A.push_back(123);
   //2 3 11 14 100 100 100 100 100 123
   for(int i=0;i<A.size();i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
   //i want to get iterator on the first occurence of 100 so we use lowerbound ->return iterator of vector int 
    vector<int>::iterator it=lower_bound(A.begin(),A.end(),100); //   >=   100 100 present to 100 vrna ek bdi
    vector<int>::iterator it2=upper_bound(A.begin(),A.end(),100);//   >    123 100 se ek badi
    cout<<*it<<" "<<*it2<<endl;// 100   123
    cout<< it2- it<<endl;//5     (9-4=5) index

    //sort vector in reverse order
    sort(A.begin(), A.end(), greater<int>());
   //print the vector in reverse order
 /*   vector<int>::iterator it3;
    for(it3=A.begin();it3!=A.end();it3++){
        cout<<*it3<<" ";
    }
    cout<<endl;
    */ 
    /*for(int x:A){
        
        cout<<x<<" "; //123 100 100 100 100 100 14 11 3 2 
    }
    */
    for(int x:A){
        x++;    
        cout<<x<<" "; //124 101 101 101 101 101 15 12 4 3 
    }
   
   
  


  }

    
    
