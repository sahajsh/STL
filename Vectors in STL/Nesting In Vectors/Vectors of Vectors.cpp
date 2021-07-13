/*Syntax:

vector<vector<data_type>> v;
where v is the vector of vectors (2-d vector) with a variable number of rows where each row is vector.
                                                  
*/


#include<bits/stdc++.h>
using namespace std;
void printVector(vector<int>v){
    
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
 
}

int main(){
   int N;
   cin>>N;
   vector<vector<int>>v;
   for(int i=0;i<N;i++){
       int n;
       cin>>n;
       vector<int>temp;
       for(int j=0;j<n;j++){
           int x;
           cin>>x;
           temp.push_back(x);

       }
       v.push_back(temp);
   }
   for(int i=0;i<v.size();i++){
       printVector(v[i]);
   }

        
        
    }
    /* input
    3
    3
    1 2 3
    3
    4 5 6
    4
    7 8 9 4
    output
    
    { { 1, 2, 3 },     //   v[0]
    { 4, 5, 6 },      //   v[1]
    { 7, 8, 9, 4 } }; //  v[2]
     
*/
