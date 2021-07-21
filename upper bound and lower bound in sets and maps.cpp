
//lower bound and upper bound in set and maps--> set and maps are already sorted
//SETS
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	set<int>s;
	for(int i=0;i<n;i++){
		int x;
		cin>>x;
		s.insert(x);
	}
	auto it=s.lower_bound(1);
	cout<<(*it)<<endl;
	return 0;
}
//input-5 4 1 7 2 8 
//output=1

