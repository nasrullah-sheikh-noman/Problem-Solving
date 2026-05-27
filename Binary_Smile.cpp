// starting with the name of almighty ALLAH
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define endl "\n" 
#define yes cout << "YES" << endl; 
#define no cout << "NO" << endl; 
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t; cin >> t;
    while(t--){
        int n; cin >> n;
        static char A[100005], B[100005];
        cin >> A >> B;
        vector<int> pa, pb;
        for(int i=0;i<n;i++){ if(A[i]=='1') pa.push_back(i); if(B[i]=='1') pb.push_back(i); }
        if(pa.size()!=pb.size()){ cout << "-1" << endl; continue; }
        int ans=0;
        for(size_t i=0;i<pa.size();i++) if(pa[i]!=pb[i]) ans++;
        cout << ans << endl;
    }

  return 0;
}