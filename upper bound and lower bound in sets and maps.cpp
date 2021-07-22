
//lower bound and upper bound in set and maps--> set and maps are already sorted
//                                                                        SETS
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

//                                                                        Map example-
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<char,int>mp;
    char a;
    int b,n;
    cin>>n;
    for(int i = 0; i<n; i++){
        cin>>a>>b;
        mp.insert(pair<char,int>(a,b));
    }
    cout<<endl;
    for(auto&x:mp)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }
	cout<<endl;
    
	auto it=mp.lower_bound('a');//lower_bound in maps.
	cout<<(it->first)<<" "<< (it->second)<<endl;
	return 0;
}

/*input-
5
a  1
f   6
r   3
e   5
d   4
output-
a 1
d 4
e 5
f 6
r 3
a 1 */
