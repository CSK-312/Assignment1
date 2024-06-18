#include <bits/stdc++.h>
using namespace std;
bool check(const vector<int>& h,int maxHeight,long long k){
    long long cost = 0;
    for(long long h : h){
        if(h>maxHeight){
            long long m=maxHeight;
            cost+=(h*(h+1)/2)-(m*(m+1)/2);
            if(cost>k) return false;
        }
    }
    return cost<=k;
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        long long k;
        cin >> n >> k;
        vector<int> h(n);
        for(int i=0;i<n;i++){
            cin >> h[i];
        }
        int l=0;
        int r=*max_element(h.begin(), h.end());
        int res=r;
        while(l<=r){
            int mid=l+(r-l)/2;
            if(check(h,mid,k)){
                res=mid;
                r=mid-1;
            }else{
                l=mid+1;
            }
        }
        cout << res << endl;
    }
    return 0;
}
