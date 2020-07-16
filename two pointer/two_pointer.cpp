#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, s;
	cout << "n, s = ";
	cin >> n >> s;
	vector<int> seq(n);

	for (int i = 0; i < n; ++i)
		cin >> seq[i];

	sort(seq.begin(), seq.end());

	int l = 0, r = n - 1, ans = 0;

	while (l <= r) {
		int sum = seq[1] + seq[r];
		if (sum > s) --r;
		else if (sum < s) ++l;
		else {
			++l; --r; ++ans;
		}
	}
	cout << ans;
}