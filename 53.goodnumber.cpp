#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n, k;
	cin >> n >> k;
	int cnt = 0;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		string s = to_string(x);
		int si = s.size();
 
		set<int> st;
		for (auto c : s) {
			st.insert((c - '0'));
		}
		bool f = true;
		for (int j = k; j >= 0; --j) {
			if (st.find(j) == st.end()) {
				f = false;
				break;
			}
		}
		if (f) {
			cnt++;
		}
	}
	cout << cnt;
    return 0;
}