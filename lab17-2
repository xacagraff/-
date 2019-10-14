#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{
	int l;
	cout << "Vvedite L" << endl;
	cin >> l;

	int n;
	cout << "Vvedite N" << endl;
	cin >> n;

	cout << "Vvedite massiv" << endl;
	vector<float> arr(n);
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int kolvo = 1;
	int counter = 0;
	int begin = counter;

	while (counter < arr.size()-1 )
	{
		if (arr[counter] == arr[counter + 1])
		{
			kolvo++;
			counter++;
		}
		else
		{
			if (kolvo > l)
			{
				for (int i = 0; i < counter - begin+1; i++)
				{
					arr.erase(arr.begin() + begin);
				}
				arr.insert(arr.begin() + begin, 0);
				counter = counter - kolvo;
				begin = counter;
				kolvo = 1;
			}
			counter++;
		}

	}

	copy(arr.begin(), arr.end(), ostream_iterator<float>(cout, " "));

	return 0;

}
