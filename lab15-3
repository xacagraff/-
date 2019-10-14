#include <iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Vvedite N"<<endl;
  cin>>n;
  int a[n];
  cout<<"Vvedite massiv"<<endl;
  for (int i=0; i<n; i++)
  {
    cin>>a[i];
  }
  int pos=0;
  for (int i=0; i<n; i++)
  {
    if (a[i]%2==1)
    {
      pos=a[i];
    }
  }
  for (int i=0; i<n; i++)
  {
    if (a[i]%2==1)
    {
      a[i]+=pos;
    }
  }
  for (int i=0; i<n; i++)
  {
    cout<<a[i]<<endl;
  }
  return 0;
}
