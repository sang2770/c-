#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct ss{
	int operator() (int a, int b) {
		return a%3==b%3? a<b:a%3<b%3;
	}
};
int main()
{
	cin.tie(0); ios::sync_with_stdio(0); cout.tie(0);
	ss x;
	int a=3, b=4;
	if(x(a, b))
	cout<<a<<"<"<<b;
	else
	cout<<a<<"k nho hon"<<b;
}


