//=====================ALL ABOUT MAPS ===================================================
//Creating a Map in C++ STL = map<key_type , value_type> map_name;

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	map<int,string>m;//This will create a map with key of type Key_type and value of type value_type.
	//inserting values-->
	m[1]="abd";// inserts key = 1 with value = "abd"
	m[5]="dcf";
	m[4]="sdf";
	//inserting values another method
	m.insert({3,"wer"});
	//print the map-->key of a map and corresponding values are always inserted as a pair
	map<int,string>::iterator it;
	for(it=m.begin();it!=m.end();it++){
		cout<<(*it).first<<" "<<(*it).second<<endl;//(it->first and it->second )
	}
	cout<<endl;
	return 0;
}
//output will print in sorted order
/*
1 abd
3 wer
4 sdf
5 dcf
Maps contain sorted key-value pair, in which each key is unique and cannot be changed, 
and it can be inserted or deleted but cannot be altered. Value associated with keys can be altered. 
We can search, remove and insert in a map within O(n) time complexity.
*/

//==================================================================================================================================================================

// map function code--->
#include<bits/stdc++.h>
using namespace std;
void print(map<int,string>&m){
	cout<<m.size()<<endl;
	for(auto &pr: m){
		cout<<pr.first<<" "<<pr.second<<endl;
	}
}
int main(){
	map<int,string>m;
	m[3]="abs";
	m[2]="sac";
	m[8]="wer";
	m.insert({5,"abc"});
	print(m);

}

//==============================================================================================
//maps program in short using auto keyword--->

#include<bits/stdc++.h>
using namespace std;
int main(){
	map<int,string>m;
	m[4]="saff";//inserting values to map
	m[2]="dfg";
	m[1]="wer";
	m.insert({9,"asd"});//inserting values another approach
	for(auto &pr:m){ 
		cout<<pr.first<<" "<<pr.second<<endl;
	}
	
}

