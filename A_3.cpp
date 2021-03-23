#include<iostream>
using namespace std;
double H(int N) {
 if (N == 1) return 1.0;
 return H(N) + 1.0/N;
}
int main () {
	int a;
	cin >> a;
	cout << H(a);
	return 0;
}
// hàm đện quy không dừng lại vì điều kiện dừng lại ở đây là N=1, nhưng
// hàm này không làm thay đổi giá trị của N nên hàm sẽ không dừng lại nếu N != 1