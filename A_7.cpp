#include<iostream>
#define MAX 1000
using namespace std;
 
int n;
int Bool[MAX] = { 0 };
int Arr[MAX];
 
void xuat() {
    for (int i = 1; i <= n; i++)
        cout << Arr[i] << " ";
    cout << endl;
}
 
void Try(int k) {
    for (int i = 1; i <= n; i++) {
        if (!Bool[i]) {
            Arr[k] = i; 
            Bool[i] = 1;
            if (k == n)
                xuat();
            else
                Try(k + 1);
            Bool[i] = 0;
        }
    }
}
 
int main() {
    cout << "Nhap n: ";
    cin >> n;
    while(n < 0){
    	cout << "Nhap lai: ";
    	cin >> n;
	}
    Try(1);
    return 0;
}