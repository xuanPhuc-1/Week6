#include <iostream>
using namespace std;
int n;
bool a[100];

void show() {
    for (int i = 1; i <= n; i++)
        if (a[i])
            cout << i << " ";
    cout << endl;
}

void bt(int k) {
    if (k == n + 1) {
        show();
        return;
    }
    a[k] = 0;
    bt(k + 1);
    a[k] = 1;
    bt(k + 1);
}

int main() {
    cin >> n;
    while (n < 0)
    {
    	cout << "Nhap lai: ";
    	cin >> n;
	}
    bt(1);
}