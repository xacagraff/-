#include <iostream>
using namespace std;
int main()
{
  int n;
  int min=2147483647;
  int max=-2147483648;
  int imin,imax;
  cout<<"Vvedite N"<<endl;
  cin>>n;
  int a[n];
  cout<<"Vvedite massiv"<<endl;
  for (int i=0; i<n; i++)
  {
    cin>>a[i];
    if (a[i]>max) 
    {
      max=a[i];
      imax=i;
    }
    if (a[i]<min)
    {
      min=a[i];
      imin=i;
    }
  }
  int c;
  if (imax<imin)
  {
    c=imax;
    imax=imin;
    imin=c;
  }
  for (int i=imin+1, i<imax, i++)
  {
    a[i]=0;
  }
  for (int i=0; i<n; i++)
  {
    cout<<a[i]<<endl;
  }
  return 0;
}
