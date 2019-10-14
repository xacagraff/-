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
    int max=-2147483648;
    int min=2147483647;
    int pa,pi;
    for (int i=0; i<vec.size(); i++)
    {
        cin>>vec[i];
        if (min>vec[i])
        {
            min=vec[i];
            pi=i;
        }
        if (max<vec[i])
        {
            max=vec[i];
            pa=i;
        }
    }
    if (pa==n-1)
    {
        vec.insert(vec.end(),0);
    }
    else
    {
        vec.insert(vec.begin()+pa+1,0);
    }
    vec.insert(vec.begin()+pi,0);
    copy(vec.begin(), vec.end(), ostream_iterator<float>(cout, " "));
    return 0;
}
