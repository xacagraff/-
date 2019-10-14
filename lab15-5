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
  int b;
  for (int i=0; i<n-1; i++)
  {
    if (a[i]>a[i+1])
    {
      b=a[i+1];
      a[i+1]=a[i];
      a[i]=b;
    }
  }
  for (int i=0; i<n; i++)
  {
    cout<<a[i]<<endl;
  }
  return 0;
}
