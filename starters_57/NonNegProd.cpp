#include<bits/stdc++.h>
using namespace std;

const int N = 0;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int T, n;

	cin >> T;
	while (T > 0) {
		cin >> n;
		int arr[n] = {0};
		int negNum = 0;
		int zeros = 0;

		for (int i = 0; i < n; i++) {
			cin >> arr[i];

			if (arr[i] < 0) {
				negNum++;
			}
			if (arr[i] == 0) {
				zeros++;
			}
		}

		if (zeros >= 1) {
			cout << "0" << endl;
		}
		else if (negNum >= 1) {
			if (negNum % 2 == 0) {
				cout << "0" << endl;
			}
			else {
				cout << "1" << endl;
			}
		}
		else {
			cout << "0" << endl;
		}

		T--;
	}

	return 0;
}
