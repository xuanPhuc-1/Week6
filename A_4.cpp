#include<iostream>
using namespace std;
double H(int N) {
 if (N == 1) return 0.0;
 return H(N-1) + 1.0/N;
}
int main () {
	int a;
	cin >> a;
	cout << H(a);
	return 0;
}
// hàm đệ quy chỉ dừng lại khi n == 1; chương trình chạy đúng khi N từ tầm 5000 đến 10000 nhưng 
// nếu lớn hơn thì chương trình sẽ gặp lỗi. lỗi này là do đệ quy quá sâu với input lớn