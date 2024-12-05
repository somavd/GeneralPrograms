#include<iostream.h>
#include<conio.h>
class Box
{
      int length;
      public:
void setl(int l)
{
length=l;
}
int area()
{
return length*length;
}
Box operator-(Box &a)
{
Box c;
c.length=a.length-this->length;
return c;
}
};
void main()
{
Box a,b,c;
a.setl(5);
b.setl(10);
c=a-b;
cout<<a.area()<<endl;
cout<<b.area()<<endl;
cout<<c.area()<<endl;
}
