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
  for (int i=0; i<n-1; i++)
  {
    for (int j=i+1; j<n; j++)
    {
      if (a[i]==a[j])
      {
        cout<<i<<j<<endl;
        return 0;
      }
    }
  }
  return 0;
}
