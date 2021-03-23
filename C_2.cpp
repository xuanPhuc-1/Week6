#include <iostream>
#define MAX 1000
using namespace std;
char f[MAX];
bool c[MAX];
string s;
void check(int n, int k, int length)
{
    for (int i = 0;i <= n;i++) 
        if (c[i] == true)
        {
            c[i] = false;
            s += f[i];
            if (length == k) cout << s << endl;
            else check(n, k, length + 1);
            c[i] = true;
            s.erase(s.length() - 1);
        }
}
int main()
{    
    int n,k;
	cin >> n >> k;
    while (n <= 0 || k <= 0)
    {
    	cout << "Nhap lai:";
    	cin >> n >> k;
	}
    for (int i = 0; i < n; i++) {f[i] = i + 97; c[i] = true;}
    check(n, k, 1);
    return 0;
}