/*Modify the program ii) to store marks in 5 subjects. Calculate the total marks and
percentage of a student and display it.*/
#include <iostream>
using namespace std;
class student
{
string name;
int roll;
int marks[5];
int tMarks=0;
double percentage;
public:
void data()
{
cout<<"Enter Name: ";
cin>>name;
cout<<"Enter Roll Number: ";
cin>>roll;
cout<<"Enter Marks of five subjects: ";
for(int i=0; i<5; i++)
{
cout<<"Enter Marks of Subject "<<i+1<<" : ";
cin>>marks[i];
tMarks = (tMarks + marks[i]);
}
}
void display()
{
cout<<"*********************"<<endl;
cout<<"Student's Name: "<<name<<endl;
cout<<"Roll Number: "<<roll<<endl;
for(int i=0; i<5; i++)
{
cout<<"Marks of Subject "<<i<<" : ";
cout<<marks[i]<<endl;
}
cout<<"Total Marks: "<<(tMarks)<<endl;
cout<<"Percentage : "<<(tMarks/5)<<"%"<<endl;
}
};
int main()
{
student ob;
ob.data();
ob.display();
return 0;
}