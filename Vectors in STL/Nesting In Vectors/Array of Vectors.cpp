#include <bits/stdc++.h>
using namespace std;
void printVector(vector<int>&v){
    cout<<"size: "<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<"  ";
    }
    cout<<endl;
}
int main() {
    int N;
    cin>>N;
    vector<int>v[N];
    for(int i=0;i<N;i++){
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }
        for(int i=0;i<N;i++){   //print the vector
            printVector(v[i]);
        }

    }
/*input= 3(vector size)
         2
         2 3
         4
         1 2 3 4
         3
         1 4 5
         
         
 output= size: 2
         2  3  
        size: 4
        1  2  3  4  
        size: 3
        1  4  5        
 */       
