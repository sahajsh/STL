//=====================ALL ABOUT MAPS ===================================================

#include <bits/stdc++.h>
using namespace std;

int main() {
	
	map<int,string>m;//map declaration where key is of int datatype and value is of string dataype.
	//inserting values-->
	m[1]="abd";//key=m[1] and value "abd" is string ..Maps contain  key-value pair
	m[5]="dcf";
	m[4]="sdf";
	//inserting values another method
	m.insert({3,"wer"});
	//print the map-->
	map<int,string>::iterator it;
	for(it=m.begin();it!=m.end();it++){
		cout<<(*it).first<<" "<<(*it).second<<endl;//it->first and it->second
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


//==============================================================================================

