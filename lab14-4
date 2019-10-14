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
  int k=0;
  for (int i=1; i<n-1; i++)
  {
    if ((a[i]>a[i-1]) and(a[i]>a[i+1]))
    {
      k=i;
    }
  }
  if (k==0)
  {
    cout<<"ERROR";
  }
  else 
  {
    cout<<"Nomer lmax="<<k<<endl;
  }
  return 0;
}
