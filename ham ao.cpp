#include<bits/stdc++.h>
using namespace std;
#define ll long long
class format{
	public:
		void display();
		virtual void header()
		{
			cout<<"This is a header;";
		}
		virtual void body()=0;
		virtual void footer(){
			cout<<"this is a footer\n";
		}
		
};
void format::display(){
	header();
	for(int i=0;i<3;i++)
	 body();
	footer();
}
class myform:public format{
	public:
		void body()
		{
			cout<<"This is a new body of next\n";
		}
		void footer()
			{
				cout<<"this is new footer\n";
			}
			
		};
int main()
{
	format* form =new myform;
	form->display();
}


