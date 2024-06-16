#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--){
        int n,k;
        cin >> n >> k;
        vector<pair<int, int> > v(n);
        for (int i=0;i<n;i++){
            cin >> v[i].first >> v[i].second;
        }
        vector<int> maxi(k+1,0);
        for (int i=0;i<n;i++){
            int cost=v[i].first;
            int num=v[i].second;
            for (int j=k;j>=cost;j--){
                maxi[j]=max(maxi[j],maxi[j-cost]+num);
            }
        }
        cout << maxi[k] << endl;
    }
    return 0;
}
