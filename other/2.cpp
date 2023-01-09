
#include<bits/stdc++.h>
using namespace std;





void c_p_c()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
}

int32_t main()
{
    c_p_c();
    int n;
    cin >> n;
    map<string,int> mpp;
    while(n--){

        
        int x,m;
        string n;
        cin >> x >> n ;

        if(x==1){
            cin >> m;
            mpp[n]+=m;
        }
        else if(x==2){
            mpp[n]=0;       
            }
        else if(x==3){
        
            cout << mpp[n] << endl;
        }
    }
    return 0;
}

