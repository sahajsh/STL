//iterators point to pairs------->
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int>>v_p={{1,2},{2,3},{3,4}};
    vector<pair<int,int>>::iterator it;
    for(it=v_p.begin();it!=v_p.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
}
//  (*it).first   <==>  (it->first) we can also use it 
//   (*it).second  <==>  (it->second)
