#include <iostream>
using namespace std;

int T, k, n;

int main() {
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> k;
		cin >> n;
		int house[14] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 };
		int house1[14];
		for (int j = 1; j <= k; j++) {
			for (int h = 0; h < n; h++) {
				house1[h] = house[h];
			}
			
			for (int h = 0; h < n; h++) {
				for (int z = 0; z < h; z++) {
					house[h] += house1[z];
				}
			}
			
		}
		cout << house[n - 1] << endl;
	}
}
