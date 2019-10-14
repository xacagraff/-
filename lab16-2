#include <iostream>
#include <vector>
#include <iterator>
using namespace std;
int main()
{
    int n;
    cout<<"Vvedite razmer massiva"<<endl;
    cin>>n;
    cout<<"Vvedite massiv"<<endl;
    vector<float> vec(n);
    for (int i=0; i<vec.size(); i++)
    {
        cin>>vec[i];
    }
    int i=0;
    int b=0;
    int c;
    while (i<vec.size())
    {
        c=vec[i];
        for (int j=i; j<vec.size(); j++)
        {
          if (vec[j]==c)
          {
              b++;
          }
        }
        if (b==2)
        {
            for (int j=0; j<vec.size(); j++)
            {
                if (vec[j]==c)
                {
                    vec.erase(vec.begin()+j);
                }
            }
        }
        i++;
        b=0;
    }
    cout<<vec.size()<<endl;
    copy(vec.begin(), vec.end(), ostream_iterator<float>(cout, " "));
    return 0;
}
