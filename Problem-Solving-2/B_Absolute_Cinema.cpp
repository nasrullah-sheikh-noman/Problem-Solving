// starting with the name of almighty ALLAH
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define yes cout << \"YES\" << endl; 
#define no cout << \"NO\" << endl; 
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;
  while(t--) {
    int n;
        cin >> n;
        vc<ll> v1(n);
        vc<ll> v2(n);
        
        for(int i = 0; i < n; i++) cin >> v1[i];
        for(int i = 0; i < n; i++) cin >> v2[i];
        
        for(int i = 0; i < n; i++) {
            if(v1[i] > v2[i]) {
                swap(v1[i], v2[i]);
            }
        }
        
        ll sum_b = 0;
        for(int i = 0; i < n; i++) {
            sum_b += v2[i];
        }
        
        ll final_ans = 0;
        for(int i = 0; i < n; i++) {
            final_ans = max(final_ans, sum_b + v1[i]);
        }
        
        cout << final_ans << "\n";
  }

  return 0;
}