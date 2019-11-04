#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

void Mario(int height, char* constraction)
{
	if (constraction[0] == '0')
	{
		int temp = 0;
		for (int i = 0; i < height; i++)
		{
			temp++;
			for (int j = 0; j < height; j++)
			{
				if (temp + j == height)
				{
					for (int l = 0; l < temp; l++)
					{
						cout << "#";
					}
				}
				else
					cout << " ";
			}
			cout << endl;
		}
	}
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

