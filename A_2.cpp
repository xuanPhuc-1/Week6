#include<iostream>
using namespace std;
double H(int N) {
 return H(N-1) + 1.0/N;
}
int main () {
	int a;
	cin >> a;
	return 0;
}
// Chương trình không có lỗi nhưng không hiện kết quả vì trong hàm đệ quy không có điều kiện dừng
// cũng như là return