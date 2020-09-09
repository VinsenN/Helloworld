#include <bits/stdc++.h>

#define debug_input freopen("stdin.in", "r", stdin)
#define debug_output freopen("stdout.out", "w", stdout)
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORALL(i, n) for(int i = 0; i < n; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define SORT(a) sort(a.begin(), a.end())
#define REV(a) reverse(a.begin(), a.end())
#define NP(a) next_permutation(a.begin(), a.end())
#define ALL(a) a.begin, a.end()
#define mp make_pair
#define pb push_back
#define endl "\n"
using namespace std;

typedef long long ll;
typedef unsigned long long ull;

int main() {
	ios_base::sync_with_stdio(0); cin.tie(0);

	int t, n;
	int num;

	cin >> t;
	while(t--) {
		cin >> n;

		int one = 0, zero = 0;
		for(int i = 0; i < n; i++) {
			cin >> num;
			if(num) one++;
			else zero++;
		}

		if(zero >= one) {
			cout << zero << endl;
			FORALL(i, zero) {
				if(i) cout << " ";
				cout << 0;
			}
			cout << endl;
		}
		else {
			if(one % 2) one--;
			cout << one << endl;
			FORALL(i, one) {
				if(i) cout << " ";
				cout << 1;
			}
			cout << endl;
		}
	}	

	return 0;
}