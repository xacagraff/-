#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
int main()
{
    int n,k;
    k=1;
    
    cout<<"Vvedite razmer massiva"<<endl;
    cin>>n;
    
    float a[n+1];
    cout<<"Vvedite massiv"<<endl;
    
    a[0]=-4389385;
    
    vector<int> vecb;
    vector<float> vecc;
    
    for (int i=1; i<n+1; i++)
    {
        cin>>a[i];
    }
    
    int t=1;
    
    cout<<endl;
    
    while (t<n+1)
    {
        if (a[t]==a[t+1])
        {
            k++;
            t++;
            continue;
        }
        else
        {
        vecb.insert(vecb.end(), k);
        k=1;
        vecc.insert(vecc.end(),a[t]);
        t++;
        }
        
    }
    
    copy(vecb.begin(), vecb.end(), ostream_iterator<int>(cout, " "));
    cout<<endl;
    copy(vecc.begin(), vecc.end(), ostream_iterator<float>(cout, " "));
    
    return o;
}
