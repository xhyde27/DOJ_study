//시바 이게 실3이라고
//안풀려서 던짐
//개시키

#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

typedef long long int ll;
ll arr[200001];
map<ll, ll> M;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll n, q;
    cin >> n >> q;
    
    for(ll i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    
    for(ll i = 0; i < q; i++) {
        ll a, l, r;
        cin >> a >> l >> r;
        
        if(a == 1 || a == 2 || a == 3 || a == 4 || a == 10) {
            ll x, cnt = 0, sum = 0;
            cin >> x;
            
            for(int j = l; j <= r; j++) {
                if(a == 1) arr[j] += x;
                else if(a == 2) arr[j] = arr[j] / x;
                else if(a == 3) arr[j] = max(arr[j], x);
                else if(a == 4) arr[j] = min(arr[j], x);
                else
                    if(arr[j] >= x) cnt++;
            }
            if(a == 10) cout << cnt << "\n";
        }
        else if(a == 5) {
            ll k = arr[l];
            for(int j = l + 1; j <= r; j++) {
                arr[j - 1] = arr[j];
            }
            arr[r] = k;
        }
        else if(a == 6) {
            reverse(arr + l, arr + r + 1);
        }
        else if(a == 7 || a == 8 || a == 9) {
            ll m, sum = 0;
            if(a == 8) m = 1000000001;
            if(a == 9) m = -1;
            
            for(int j = l; j <= r; j++) {
                if(a == 7) sum += arr[j];
                if(a == 8 && m > arr[j]) m = arr[j];
                if(a == 9 && m < arr[j]) m = arr[j];
            }
            if(a == 7)  cout << sum << "\n";
            else        cout << m << "\n";
        }
        else if(a == 11) {
            ll sum = 0;
            for(ll j = l + 1; j <= r; j++) {
                sum += abs(arr[j] - arr[j - 1]);
            }
            cout << sum << "\n";
        }
        else if(a == 12) {
            M.clear();
            for(ll j = l; j <= r; j++) M[arr[j]]++;
            cout << M.size() << "\n";
        }
        else {
            ll sum = 0, k = (r - l + 2) / 2;
            M.clear();

            for(ll j = l; j <= r; j++) M[arr[j]]++;

            for(auto b : M) {
                sum += M[b.first];
                
                if(sum >= k) {
                    cout << b.first << "\n";
                    break;
                }
            }
        }
    }
    
    return 0;
}