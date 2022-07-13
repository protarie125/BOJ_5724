#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n;
	cin >> n;
	while (0 < n) {
		auto ans = n * (n + 1) * (2 * n + 1) / 6;

		cout << ans << '\n';

		cin >> n;
	}

	return 0;
}