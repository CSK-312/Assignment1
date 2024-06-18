 #include <bits/stdc++.h>
 using namespace std;
 int main(){
     int n,m;
     cin >> n >> m;
     if(n==1&&m==1){
         cout << 0;
     }else if(n==1||m==1){    
         cout << -1;
     }else{
        if(abs(m-n)&1){
            cout << n+m-2+abs(m-n)-1;
        }else{
            cout << n+m-2+abs(m-n);
        }
     }
     return 0;





