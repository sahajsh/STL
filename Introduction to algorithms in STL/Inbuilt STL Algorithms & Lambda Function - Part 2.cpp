//                   Inbuilt STL Algorithms- All_of ,Any_of, None_of Algorithms all returns true /false



//                                          Lambda Functions example-

/* #include<bits/stdc++.h>
using namespace std;
int main(){
  cout<< [](int x,int y){return (x+y);}(2,8)<<endl;

} */


// isko BAAR BAAR use krskty h kitny k liy bhi-
#include<bits/stdc++.h>
using namespace std;
int main(){
  auto sum =[](int x,int y){return (x+y);};//syntax
  cout<<sum(2,3);

}
