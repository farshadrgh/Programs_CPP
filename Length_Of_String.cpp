#include<iostream>
#include<string.h>
using namespace std;

int main()
{
   int i,count=0;
   char ch[50];

   cout<<"\nEnter any string :: ";
   cin>>ch;

   for(i=0;ch[i]!='\0';i++)
   {
        count++;
   }
   cout<<"\nLength of String [ "<<ch<<" ] is :: "<<count<<"\n";

   return 0;
}
