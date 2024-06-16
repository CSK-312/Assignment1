#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i];
    }
    int a=0,b=0,sum=0,l=INT_MAX;
        while(b<v.size()) {
            sum+=v[b];
            b++;
            while(sum>=k){
                l=min(l,b-a);
                sum-=v[a];
                a++;
            }
        }
    if(l==INT_MAX){
        cout << -1;
    }else{
        cout << l;
    }
    return 0;
}
