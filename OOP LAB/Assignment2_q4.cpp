/*. Create a class complex which stores real and imaginary part of a complex number. Input
10 complex numbers and display them.*/
#include <iostream>
using namespace std;
class complex
{
int real;
int img;
public:
void getData()
{
cout<<"Enter Real Part: ";
cin>>real;
cout<<"Enter Imaginary Part: ";
cin>>img;
}
void display()
{
static int n=1;
cout<<"Number "<<n++<<" : "<<real<<"+"<<img<<"i"<<endl;
}
};
int main()
{
complex ob[10];
for(int i=0; i<2; i++)
{
ob[i].getData();
}
cout<<"*************************"<<endl;
for(int i=0; i<2; i++)
{
ob[i].display();
}
return 0;
}
