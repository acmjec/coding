#include<bits/stdc++.h>
using namespace std;

int main(){
 int t;
 cin>>t;
 while(t--){
     int n,i,m=0,count=0;
     cin>>n;
     int a[n];
     for(i=0;i<n;++i){
         cin>>a[i];
         if(a[i]>m)m=a[i];
     }
     int b[m+2]={0};
     for(i=0;i<n;++i){
         b[a[i]]++;
     }
     for(i=1;i<m+1;++i){
         if(b[i]>1){
                 b[i+1]++;
         }
     }
     for(i=0;i<m+2;++i){
         if(b[i]>0)count++;
     }
    cout <<count<<endl;
 }
  return 0;
}
