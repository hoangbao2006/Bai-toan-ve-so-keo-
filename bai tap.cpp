#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

long long minimunDifference(int* a, int N) {
	sort(a, a + N);
	long long total_mini_diff = 0;
	for (int i = 0; i < N - 1; i += 2) {
		long long difference = (long long)a[i + 1] - a[i];
		total_mini_diff += difference;
	}
	return total_mini_diff;
}
int main() {
	int N;
	cout << "Nhap so luong keo N(so chan)";
	if (!(cin >> N) || N <= 0 || N % 2 != 0) {
		cout << "Gia tri khong hop le. Vui long nhap so nguyen duong chan." << endl;
		return 1;
	}
	int* a = new int[N];
	cout << "Nhap" << N << "Khoi luong keo:";
	for (int i = 0; i < N; ++i) {
		if (!(cin >> a[i])) {
			delete[] a;
			return 1;
		}
		long long result = minimunDifference(a, N);
		cout << "\n---Ket qua---\n";
		cout << "Tong do chen lech khoi luong nho nhat:" << result << endl;
		delete[]a;
		return 0;
	}
}