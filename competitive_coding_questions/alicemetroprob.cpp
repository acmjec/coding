#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int s;
    cin>>n>>s;
    int a_station_arr[n];
    int b_station_arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a_station_arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b_station_arr[i];
    }
    int mark=0;
    if (a_station_arr[0]==0)
    {
        mark=1;
    }
    else if(a_station_arr[s-1]==0)
    {
        int t1=0;
    for (int i = s; i < n; i++)
    {
        if (a_station_arr[i]==1 && b_station_arr[i]==1)
        {
            t1=1;
        }
        
    }
    //if we not get required station
    if(t1==0)
    {
        mark=1;
    }
    else if(t1==1)
    {   
        if (b_station_arr[s-1]==0)
    {
        mark=1;
    }
    }
    }
    if (mark==1)
    {
        cout<<"NO\n";
    }
    else
    {
        cout<<"YES\n";
    }
    
    return 0;
}