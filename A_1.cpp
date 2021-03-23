#include<iostream>
using namespace std;
void f(int a[]){
	for(int i=0;i<10;i++)
	{
		cout << "Dia chi cua phan tu thu " << i << " sau khi truyen ham la " << &a[i] << endl;
	}
}

int main (){
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	for(int i=0;i<10;i++)
	{
		cout << "Dia chi cua phan tu thu " << i << " trong ham main la " << &arr[i] << endl;
	}
	cout << "___________________________________________" << endl;
	f(arr);
	return 0;
	// địa chỉ của hai mảng ko có sự khác biệt. Có thể kết luận mảng được truyền theo kiểu con trỏ
}