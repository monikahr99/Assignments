#include <iostream>
#include <fstream>
#include <iostream>
#include <sys/types.h>
#include <unistd.h>
using namespace std;
int main()
{
  int pid;
  pid=fork();
  int n;
  cout<<"\n Enter the number of employees you want to dipaly: ";
  cin>>n;
  if(pid==0)
  {
  fstream f;
  f.write(reinterpret_const<char>& chr.sizeof(chr));
  f.close();
  }
  else
  {
  f.open("Employee",ios::in | ios::out);

  for(int i=0; i<n; i++)
  {
  insert();
  }
  sort();
  }
  return 0;
  }
