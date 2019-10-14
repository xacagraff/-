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
  float b[n];
  b[0]=0;
  float sum=0;
  for (int i=1; i<n; i++)
  {
    sum+=a[i];
    b[i]=sum/i;
  }
  for (int i=0; i<n; i++)
  {
    cout<<b[i]<<endl;
  }
  return 0;
}
