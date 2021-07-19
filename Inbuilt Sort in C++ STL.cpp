//Sorting an array using inbuilt sort in Cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;;
    }
    cout<<endl;

}


//Sorting a vector using inbuilt sort in Cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());//in vector
    for(int i=0;i<n;i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
}
