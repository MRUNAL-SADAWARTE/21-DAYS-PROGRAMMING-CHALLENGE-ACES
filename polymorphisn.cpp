#include<iostream>
using namespace std;
class shape
{
public:
    int l,b,r,s;
    virtual void area()=0;
};

class rectangle:public shape
{
public:
void getdata()
{
cout<<"\n enter dimention of rectangle:\n length:";
cin>>l;
cout<<"\n breadth:";
cin>>b;
}
void area()
{
int a=l*b;
cout<<"\n area of rectangle:"<<a;
}
};

class circle:public shape
{
public:
void getdata()
{
cout<<"\n enter radius of cicle:\n radius:";
cin>>r;
}
void area()
{
int a=3.14*r*r;
cout<<"\n area of circle:"<<a;
}
};

class square:public shape
{
public:
void getdata()
{
cout<<"\n enter side of square:\n side lenth:";
cin>>s;
}
void area()
{
int a=s*s;
cout<<"\n area of square:"<<a;
}
};
int main()
{
shape*p;
rectangle r;
circle c;
square s;

p=&r;
r.getdata();
p->area();

p=&c;
c.getdata();
p->area();

p=&s;
s.getdata();
p->area();

return 0;
};

