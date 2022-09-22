#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	int i = 1, j = 1;
	int count = 0;
	int flag = 1;

	while (i <= n or j <= n) {
		int sum = i + j;
		if (sum == n) {
			i++;
			j = 1;
			count++;
			continue;
		}
		if (j >= n) {
			i++;
			j = 1;

			if (i >= n) {
				j = n + 1;
			}
		}

		j++;

	}


	cout << count << endl;

	return 0;
}
