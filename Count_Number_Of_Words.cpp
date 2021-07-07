#include<iostream>
#include<string.h>
using namespace std;

int main()
{
        char strs[100], countw = 0, strw[15], i;
        cout << "\nEnter any string : ";
        gets(strs);

        int len = strlen(strs);

        for(i = 0; i < len; i++)
        {
                if(strs[i] == ' ')
                {
                        countw++;
                }
        }
        cout << "\nTotal Number of Words in a String is : "<<countw+1<<"\n";

        return 0;
}
