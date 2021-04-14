#include<bits/stdc++.h>
using namespace std;
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	char x[1000], *p=x;
	scanf("%[^\n]", x); // nhap xau co dau cach
	dau:
		if(*p==' '){
			p++; goto dau;
		}
		else if(*p=='\0') goto ket;
		else { printf("%c", toupper(*p++)); goto than;}
	than:
		if(*p==' '){
			printf("%c", *p++); goto dau;
		}
		else if(*p=='\0'){
			goto ket;
		}
		else{
			printf("%c", tolower(*p++)); goto than;
		}
	ket: return 0;
}


