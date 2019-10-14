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
    int b;
    while (i<vec.size()-1)
    {
        b=i;
        if (vec[i]==vec[i+1])
        {
            vec.erase(vec.begin()+i);
            i=b-1;
        }
        i++;
    }
    copy(vec.begin(), vec.end(), ostream_iterator<float>(cout, " "));
    return 0;
}
