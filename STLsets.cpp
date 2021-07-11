                        //SETS---->//

#include<bits/stdc++.h>
using namespace std;

void setDemo(){           //we can also erase an element from set in log(N) time.
    set <int>S;
    S.insert(1);
    S.insert(2);
    S.insert(-1);
    S.insert(-10);
    for(int x:S)
        cout<<x<<" ";

    cout<<endl;
   
     //-10 -1 1 2 
    auto it=S.find(-1);
    if(it==S.end()){
        cout<<"not present";
    }
    else{
        cout<<"present";//yes
        cout<<*it<<endl;//-1
    }
   auto it2=S.lower_bound(-1);//greator and equal to =-1
   auto it3=S.upper_bound(1); //strictly greator = 2
   //print both the iterators to see the result-->
   cout<<*it2<<" "<<*it3<<endl;//-1 2
   auto it4=S.upper_bound(2);
    if(it4==S.end()){
        cout<<"not print";
    }
}
int main(){
    setDemo();
  }