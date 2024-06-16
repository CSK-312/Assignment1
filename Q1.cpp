#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }
        priority_queue<int> maxHeap;
        for(int i=0;i<n;++i){
            maxHeap.push(v[i]);
        }
        while(!maxHeap.empty()&&maxHeap.top()<=k){
            k-=maxHeap.top();
            maxHeap.push(maxHeap.top()-1);
            maxHeap.pop();
        }
        cout << maxHeap.top() << "\n";
    }
    return 0;
}









