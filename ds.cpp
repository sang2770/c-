#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct phim {
   char tenphim[50];
   char daodien[30];
   int namsx;
   char hangsx;
   };

   
void nhapDS (phim& x)
{
   int n;
   cout<<"Nhap so bo phim: ";
   cin>>n;
   for(int i=1; i<=n; i++)
   {
     cout<<endl<<endl<<"Nhap thong tin phim thu"<<i<<endl;
 cout<<"---------------------------------"<<endl;
 cout<<"\nNhap ten phim: ";
 cin.get(x.tenphim,30);
 cout<<"\nNhap ten dao dien: ";
 cin.get(x.daodien,30);
 cout<<"\nNhap nam san xuat: ";
 cin>>x.namsx;
 cout<<"\nNhap hang san xuat: ";
 cin>>x.hangsx;
}
};
void hienDS (phim& x)
{
 cout<<"\nTen phim: "<< x.tenphim;
cout<<"\nTen dao dien: "<< x.daodien ;
cout<<"\nNam san xuat: "<< x.namsx ;
cout<<"\nHang san xuat: "<< x.hangsx;
};
//tao node 
struct Node
{
phim infor;
struct Node *Next;
} ;
//tao danh sach
struct LIST
{
Node *Head; 
Node *Tail;
}; 
LIST l;
void init( LIST &l )
{
l.Head = NULL;
l.Tail = NULL;
}
//them phim
void Themdau( LIST &l, Node *p){
  if (l.Head==NULL)
  {
    l.Head=l.Tail=p;
  }
  else
  {
    p->Next=l.Head;
    l.Head=p; 
  }
};
void Themcuoi(LIST &l, Node *p){
  if (l.Head==NULL)
  {
    l.Head=l.Tail=p; 
  }
  else 
  {
    l.Tail->Next=p;
    l.Tail=p; 
  }
};
void Themsauq( LIST l, Node *q,Node *t){
if( q!=NULL){
    t->Next = q -> Next;
    q -> Next = t;
if (q == l.Tail)
    l.Tail = t;
}
};
//xoa phim
void xoadau(LIST &l)
{
   Node *p;
   if( l.Head!= NULL)
   {
     p=l.Head;
     l.Head=l.Head->Next;
     free(p);
     if(l.Head==NULL)
        l.Tail=NULL;
         }
 };
 void xoasauq( LIST &l , Node *q )
{
Node *p;
if (q != NULL)
{
p = q -> Next;
if (p != NULL)
{
if (p == l.Tail) { q->Next = NULL; l.Tail = q;}
q -> Next = p -> Next;
free(p);
}
}
else xoadau(l);
};
void xoatheok(LIST &l, Data k)
{
  Node *p = l.Head, *q = NULL; 
  while( p != NULL) 
  { 
    if ((p->infor) == k) break; 
    q = p; 
    p = p->Next; 
  } 
if (p == NULL) return 0;
if (q != NULL) 
{ 
  if(p == l.Tail) l.Tail = q; 
  q->Next = p->Next; 
  free( p); 
} 
else 
{ 
l.Head = p -> Next; 
if ( l.Head == NULL) l.Tail = NULL; 
} 
return 1; 
};
//sap xep
void tangdannamsx( int a[ ], int n )
{
int min, i, j, tg;
for( i=0 ; i<n-1 ; i++ )
{
min = i;
for( j=i+1 ; j<n ; j++ )
if ( a[j] < a[min] ) min = j;
if( min != i ) 
{
tg=a[min]; a[min]=a[i]; a[i]=tg;
}
}
};
void giamdannamsx( int a[ ], int n )
{
int max, i, j, tg;
for( i=0 ; i<n-1 ; i++ )
{
max = i;
for( j=i+1 ; j<n ; j++ )
if ( a[j] < a[max] ) max = j;
if( max != i ) 
{
tg=a[max]; a[max]=a[i]; a[i]=tg;
}
}
};
//tim kiem 
Node *timdau(LIST &l, Data k )
{
Node *p;
p = l.Head;
while ((p!= NULL) && (p->infor!=k))
p = p -> Next;
return p;
}
Node *timcuoi(LIST &l, Data k )
{
Node *p;
p = l.Tail;,
while ((p != NULL) && (p->infor!=k))
p = p -> Next;
return p;
}
main()
{
void nhapDS (phim & x);
void hienDS (phim & x);
void Themdau(LIST &l, Node *p);
void Themcuoi(LIST &l, Node *p);
void Themsauq( LIST l, Node *q, Node *t);
void xoadau(LIST &l);
void xoasauq( LIST &l, Node *q );
void xoatheok( LIST &l, Data k);
void tangdannamsx( int a[], int n);
void giamdannamsx( int a[], int n);
Node *timdau(LIST &l, Data k);
Node *timcuoi(LIST &l, Data k);
}
