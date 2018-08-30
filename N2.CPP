#include<iostream.h>
#include<conio.h>
int i,n,a;
class item
{
public:char name[10];
public:int code;
public:int quantity ;
public:int price;
public:int total;
public:void get();
public:void put();
};
void item::get()
{
cout<<"NAME";
cin>> name;
cout<<"CODE";
cin>> code;
cout<<"QUANTITY";
cin>> quantity;
cout<<"PRICE";
cin>> price;
}
void item::put()
{
total=price*quantity;
cout<<"\n"<<name ;
cout<<"    "<<quantity;
cout<<"   "<<code;
cout<<"   "<<price;
cout<<"    "<<total;
}
void main()
{
clrscr();
item l[10];
int x;
cout<<"\nENTER NO.OF TYPE OF ITEM"<<" ";
cin>>n;
do
{
cout<<"\n1.MAKE\n 2.DISPLAY\n 3.delete an item\n4.sum\n5.quit";
cout<<"\nENTER YOUR CHOICE"<<" ";
cin>>x;
switch(x)
{
case 1:
for(i=1;i<=n;i++)
{
l[i].get();
}
break;
case 2:
cout<<"\n\nMEGA MART SALE"<<"\n";
cout<<"\n NAME QUANTITY CODE PRICE TOTAL \n";
for(i=1;i<=n;i++)
{
l[i].put();
}
break;
case 3:
int a;
cout<<"enter item code to delete\n";
cin>>a;
for(i=1;i<=n;i++)
if(l[i].code==a)
l[i].total=0;
cout<<"code of"<<a<<"has total as "<<l[i].total<<"\n";
break;
case 4:
long int m=0,z;
int amount,d,q;
for(i=1;i<=n;i++)
m=m+l[i].total;
cout<<"\ntotal value"<<m<<"\n";
z=m;
if(z>2000)
{
d=(z*15)/100;
amount=z-d;
cout<<"total amount after discount"<<amount<<"\n";
}
else
{
d=(z*10)/100;
amount=z-d;
cout<<"total amount after discount"<<amount<<"\n";
 }
break;
case 5:
break;
}
}while(x!=5);
getch();
}