#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a;
	string b;
	cin>>a; // bo dem chi nhan gtri k nhan enter
	cin.ignore();  // xoa ki tu dau tien cua bo dem : ki tu enter
	// fflush(stdin); // x�a het cac ki tu trong b� dem;
	
	getline(cin, b);
	cout<<a;
	cout<<" "<<b;
}


