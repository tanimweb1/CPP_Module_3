#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
int a[n];
for(int i = 0;i<n;i++){
cin>>a[i];
}
int st = 0, end = n-1;
int search = 12;
int ans = -1;
while(st<=end){
    int mid = (st+end)/2;
    if(a[mid]==search){
        ans = mid;
        break;
    }
    else if(a[mid]<search){
        st = mid+1;
    }
    else{
        end = mid-1;
    }
}

if(ans!=-1) cout<<"Found at index "<<ans<<endl;
else cout<<"Not found"<<endl;

    return 0;
}