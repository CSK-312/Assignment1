#include <bits/stdc++.h>
using namespace std;
int main(){
    int N, Q;
    cin >> N >> Q;
    vector<int> v(N);
    for (int i= 0;i<N;++i) {
        cin >> v[i];
    }
    vector<int> q(Q);
    for (int i=0;i<Q;++i) {
        cin >> q[i];
    }
    vector<int> res(Q);
    for (int i=0;i<Q;++i) {
        priority_queue<int> maxHeap;
        priority_queue<int, vector<int>, greater<int>> minHeap;
        int sum = 0;
        for (int i=0;i<N;++i) {
            maxHeap.push(v[i]);
            minHeap.push(v[i]);
            sum+=v[i];
        }
        while(q[i]--){
            int maxi=maxHeap.top();
            maxHeap.pop();
            int mini = minHeap.top();
            minHeap.pop();
            int d=maxi-mini;
            sum=sum-maxi-mini+d;
            maxHeap.push(d);
            minHeap.push(d);
        }
        res[i] = sum;
    }
    for (int i=0;i<res.size();i++) {
        cout << res[i] << " ";
    }
    return 0;
}

