#include<bits/stdc++.h>
using namespace std;

const int N = 0;

void palindrome(char ch1[], char ch2[], int n) {
	int i = 0;
	for (int k = n - 1; k >= 0; k--) {
		ch2[k] = ch1[i++];
	}
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int T;
	cin >> T;

	while (T > 0) {

		int a, b;
		cin >> a >> b;

		char ch1[a + b + 1];
		char ch2[a + b + 1];
		int n = a + b - 1;
		string s = "";
		string pal = "";
		int k = 0;

		for (int i = 1; i <= a; i++) {
			s += "0";
			pal += "0";
			ch1[k++] = '0';
			ch2[n--] = '0';
		}

		for (int i = 1; i <= b; i++) {
			s += "1";
			pal = "1" + pal;
			ch1[k++] = '1';
			ch2[n--] = '1';
		}
		ch1[k] = '\0';
		ch2[k] = '\0';
		// cout << "ch1 and ch2 " << endl;
		// cout << ch1 << endl;
		// cout << ch2 << endl;

		int flag = 0;

		k = 0;
		n = a + b - 1;

		if ((ch1 == ch2) or (s == pal)) {
			flag = 1;
			cout << "YES" << endl;
			T--;
			continue;
		}

		for (int j = a, f = b; j > 0; j--, f++) {

			for (int i = j - 1, l = f - 1; i < n; i++, l--) {

				char temp = ch1[i];
				ch1[i] = ch1[i + 1];
				ch1[i + 1] = temp;
				// palindrome(ch1, ch2, a + b);
				temp = ch2[l];
				ch2[l] = ch2[l + 1];
				ch2[l + 1] = temp;
				s = ch1;
				pal = ch2;

				// cout << "for t: " << T << endl;
				// cout << s << endl;
				// cout << pal << endl;


				if (s == pal) {
					flag = 1;
					break;
				}
			}

			if (flag == 1) {
				break;
			}
		}

		if (flag == 1) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}


		T--;
	}

	return 0;
}
