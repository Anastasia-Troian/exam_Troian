#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void Mario(int height, char* constraction)
{
	
}

	
int main()
{
	int  height = 0;
	char constraction[4];
	cout << "Enter height: ";
	cin >> height;

	if (height < 1)
		while (true)
		{
			cout << "Enter height: ";
			cin >> height;
			if (!cin)
			{
				cin.clear();
				while (cin.get() != '\n')
					continue;
				continue;
			}
			break;
		}

	cout << "Enter constraction: ";
	cin >> constraction;
	while ((constraction[0] != '0' && constraction[0] != '1') && (constraction[0] != 'y' && constraction[1] != 'e' && constraction[2] != 's'))
	{
		cout << "Error.Enter corect constractions: ";
		cin >> constraction;
	}
	Mario(height, constraction);
	return 0;
}

