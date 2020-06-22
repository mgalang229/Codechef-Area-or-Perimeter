#include <bits/stdc++.h>

#define ll long long

using namespace std;

void decode() {
	int l, b;
	cin >> l >> b;
	int area = l * b;
	int peri = (2 * (l)) + (2 * (b));
	if(area > peri) {
		cout << "Area" << "\n" << area;
	}
	else if(area < peri) {
		cout << "Peri" << "\n" << peri;
	}
	else {
		cout << "Eq" << "\n" << area;
	}
	cout << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}
