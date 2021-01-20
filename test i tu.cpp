#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	string b;
	cin>>a; // bo dem chi nhan gtri k nhan enter
	cin.ignore();  // xoa ki tu dau tien cua bo dem : ki tu enter
	// fflush(stdin); // xóa het cac ki tu trong bô dem;
	
	getline(cin, b);
	cout<<a;
	cout<<" "<<b;
}


