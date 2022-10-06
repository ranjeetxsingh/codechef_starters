#include<bits/stdc++.h>
using namespace std;


void solution() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	deque<char> dq;
	int p1 = 0;
	int p2 = n - 1;

	for (int i = 0; i < n; i++)
	{
		if (i & 1)
		{
			if (s[p2] == '1')
			{
				dq.push_front(s[p2--]);
			}
			else
			{
				dq.push_back(s[p2--]);
			}
		}
		else
		{
			if (s[p1] == '0')
			{
				dq.push_front(s[p1++]);
			}
			else
			{
				dq.push_back(s[p1++]);
			}
		}

	}
	string ans(dq.begin(), dq.end());
	cout << ans << endl;

}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;
	while (t > 0) {
		solution();
		t--;
	}

	return 0;
}


