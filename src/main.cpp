#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, w, h, l;
	cin >> n >> w >> h >> l;

	auto wl = w / l;
	auto hl = h / l;
	auto c = wl * hl;

	cout << (c < n ? c : n);

	return 0;
}