#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main()
{
    int arr[]={1,2,1,1,2,3,3,3,3,6,6,7,7,7};
    int n=sizeof(arr)/sizeof(int);
    sort(arr, arr + n);
    int count;
    int previous=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=previous){
        int temp=arr[i];
        count =0;
        for(int j=0;j<n;j++){
            if(temp==arr[j]){
              count++;
            }
        }
        cout<<temp<<":"<<count<<endl;
        previous=arr[i];
        }
    }

}