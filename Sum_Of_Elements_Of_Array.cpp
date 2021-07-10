#include<iostream>
using namespace std;

int main()
{
    int i,a[50],sum=0,size;
    cout << "Enter array size( Max:50 ) : ";
    cin >> size;
        cout << "\nEnter array elements : \n";

        for(i=0; i<size; i++)
        {
            cout << "\nEnter arr["<<i<<"] Element : ";
                cin >> a[i];
        }

  cout << "\nStored Data in Array : \n\n";

  for(i=0; i<size; i++)
  {
  cout << " "<<a[i]<<" ";
  }

   cout << "\n\nSum of all Elements of array is : ";

   for(i=0; i<size; i++)
   {
    sum = sum + a[i];
   }

  cout << sum << "\n";

  return 0;

}
