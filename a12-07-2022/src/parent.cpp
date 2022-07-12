nclude <parent.h>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void Emp::get()
{
cout<<"Enter Employee id:"<<endl;
cin>>empid;
cout<<"Enter Name:"<<endl;
cin>>name;
cout<<"Enter Adress:"<<endl;
cin>>address;
cout<<"Enter department Name:"<<endl;
cin>>dept;
cout<<"Enter Age:"<<endl;
cin>>age;
}
void insert()
{
Emp e;
ofstream fout;
fout.open("Employee",ios::in | ios::out);
if (fout.fail())
{
cout<<"Unable to open the file!!";
}
e.get();
fout.write((char*)&e,sizeof(e));
if (fout.tellp()%sizeof(e)==0)
{
cout<<"Record inserted";
}
else
{
cout<<"insertion failed";
}
fout.close();
}
