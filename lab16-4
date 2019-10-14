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
    vector<int> vec(n);
    for (int i=0; i<n; i++)
    {
        cin>>vec[i];
    }
    int i=0;
    while (i<vec.size())
    {
        if (vec[i]<0)
        {
            vec.insert(vec.begin()+i+1,0);
        }
        i++;
    }
    copy(vec.begin(), vec.end(), ostream_iterator<float>(cout, " "));
    return 0;
}
