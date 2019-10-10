#include <iostream>
using namespace std;
char a[51][101];
int getnum(int sx, int ex) {
	if (a[sx][ex - 6] == '0' && a[sx][ex - 5] == '0' && a[sx][ex - 4] == '0' && a[sx][ex - 3] == '1' && a[sx][ex - 2] == '1' && a[sx][ex - 1] == '0' && a[sx][ex] == '1') return 0;
	else if (a[sx][ex - 6] == '0' && a[sx][ex - 5] == '0' && a[sx][ex - 4] == '1' && a[sx][ex - 3] == '1' && a[sx][ex - 2] == '0' && a[sx][ex - 1] == '0' && a[sx][ex] == '1') return 1;
	else if (a[sx][ex - 6] == '0' && a[sx][ex - 5] == '0' && a[sx][ex - 4] == '1' && a[sx][ex - 3] == '0' && a[sx][ex - 2] == '0' && a[sx][ex - 1] == '1' && a[sx][ex] == '1') return 2;
	else if (a[sx][ex - 6] == '0' && a[sx][ex - 5] == '1' && a[sx][ex - 4] == '1' && a[sx][ex - 3] == '1' && a[sx][ex - 2] == '1' && a[sx][ex - 1] == '0' && a[sx][ex] == '1') return 3;
	else if (a[sx][ex - 6] == '0' && a[sx][ex - 5] == '1' && a[sx][ex - 4] == '0' && a[sx][ex - 3] == '0' && a[sx][ex - 2] == '0' && a[sx][ex - 1] == '1' && a[sx][ex] == '1') return 4;
	else if (a[sx][ex - 6] == '0' && a[sx][ex - 5] == '1' && a[sx][ex - 4] == '1' && a[sx][ex - 3] == '0' && a[sx][ex - 2] == '0' && a[sx][ex - 1] == '0' && a[sx][ex] == '1') return 5;
	else if (a[sx][ex - 6] == '0' && a[sx][ex - 5] == '1' && a[sx][ex - 4] == '0' && a[sx][ex - 3] == '1' && a[sx][ex - 2] == '1' && a[sx][ex - 1] == '1' && a[sx][ex] == '1') return 6;
	else if (a[sx][ex - 6] == '0' && a[sx][ex - 5] == '1' && a[sx][ex - 4] == '1' && a[sx][ex - 3] == '1' && a[sx][ex - 2] == '0' && a[sx][ex - 1] == '1' && a[sx][ex] == '1') return 7;
	else if (a[sx][ex - 6] == '0' && a[sx][ex - 5] == '1' && a[sx][ex - 4] == '1' && a[sx][ex - 3] == '0' && a[sx][ex - 2] == '1' && a[sx][ex - 1] == '1' && a[sx][ex] == '1') return 8;
	else if (a[sx][ex - 6] == '0' && a[sx][ex - 5] == '0' && a[sx][ex - 4] == '0' && a[sx][ex - 3] == '1' && a[sx][ex - 2] == '0' && a[sx][ex - 1] == '1' && a[sx][ex] == '1') return 9;
	else return -1;
}
int main() {
	
	int T; cin >> T;
	for (int test_case = 1; test_case <= T; ++test_case) {
		int n, m;
		cin >> n >> m;
		int ex, ey;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			for (int j = 0; j < m; ++j) {
				if (a[i][j] == '1') {
					ex = i;
					ey = j;
				}
			}
		}
		int pass[8];
		int ans = 0;
		for (int k = 0; k < 8; ++k) {
			pass[7-k]=getnum(ex, ey);
			ans += pass[7 - k];
			ey -= 7;
		}
		if ((3 * (pass[0] + pass[2] + pass[4] + pass[6]) + pass[1] + pass[3] + pass[5] + pass[7]) % 10 == 0)
			cout << '#' << test_case << ' ' << ans << '\n';
		else cout << '#' << test_case << ' ' << 0 << '\n';		
	}
}