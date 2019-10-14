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
  int d;
  d=a[1]-a[0];
  for (int i=2; i<n; i++)
  {
    if (a[i]-a[i-1]==d)
    {
      continue;
    }
    else
    {
      d=0;
    }
  }
  cout<<d;
}
