#include<iostream>
#include<string.h>
using namespace std;

int main()
{
  char s1[50], s2[50];

  cout << "\nEnter any String 1 : ";
  cin>>s1;

  strcpy(s2, s1);

  cout << "\nAfter Copying,String 2 : "<<s2<<"\n";

  return 0;
}
