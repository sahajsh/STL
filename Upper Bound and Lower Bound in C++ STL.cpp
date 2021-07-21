//Example of lower_bound 
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
         cout<<a[i]<<endl;
     }
     cout<<endl;
     
     int *ptr=lower_bound(a,a+n,4);
     cout<<(*ptr)<<endl;//4
 }
/*
     Input- 6 3 2 5 1 7 4
     output- 1 2 3 4 5 7 
             4
*/
//Example of upper_bound
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
         cout<<a[i]<<" ";
     }
     cout<<endl;
    
    
     int *ptr=upper_bound(a+4,a+n,3);//6
     cout<<(*ptr)<<" ";
 }
 /* 
 input - 6 
        4 3 2 6 1 8
 
 
 output -1 2 3 4 6 8 
        6

    
  */
