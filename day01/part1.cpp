#include<bits/stdc++.h>

using namespace std;

#define forab(i,a,b) for(ll i = a; i < b; i++)
#define rep(i, n) for(ll i = 0; i < n; i++)
#define all(x) begin(x), end(x)
#define PB push_back
#define MP make_pair
#define F first
#define S second
#define endl "\n"
#define T int t; cin >> t; while(t--)
#define read(n) int n; cin >> n;
#define readl(n) long long n; cin >> n;
#define readv(v, n) vi v(n); for(auto& e: v) cin >> e;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pi;

template<typename U>
void print(U nums) {
	for(auto& num: nums) {
		cout << num;
		if(num != *nums.rbegin()) cout << " ";
	}
	cout << "\n";
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
#ifdef LOCAL_PROJECT
	(void) freopen("input.txt", "r", stdin);
#endif
	vi v;
	int num;
	while(cin >> num) v.push_back(num);
	int n = v.size();
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(i == j) continue;
			if(v[i] + v[j] == 2020) cout << v[i]*v[j] << endl;
		}
	}


	return 0;
}

