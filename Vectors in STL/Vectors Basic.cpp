                                        //   <---Vectors in STL---->  \\


#include <bits/stdc++.h>
using namespace std;
void printVec(vector<int>v){
    for(int i=0;i<v.size();i++){    //v.size()-->O(1)
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main() {
	
    vector<int>v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);

    }
  printVec(v);


	return 0;
}
