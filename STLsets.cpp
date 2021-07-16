                        //SETS---->//




//Set is a  C++ STL container used to store the unique elements all elements are stored in a sorted manner.
//Once the value is stored in the set, it cannot be modified within the set; 
//instead, we can remove this value and can add the modified value of the element.

#include <bits/stdc++.h>
using namespace std;
void print(set<string>s){
    for(auto string:s){
        cout<<string<<endl;
    }
}
int main() {
	set<string>s;
    s.insert("abc");//log(n) insertion 
    s.insert("dfg");
    s.insert("tyh");
    
    print(s);

	return 0;
}
//output- abc
//        dfg
//        tyh



//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
using namespace std;

void setDemo(){           //we can also erase an element from set in log(N) time for example-----> S.erase(1) by using this function
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
