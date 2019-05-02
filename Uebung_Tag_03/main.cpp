#include <iostream>

using namespace std;

int main()
{
	int zahlen[3] = { 0 };

	cout << "Geben Sie drei ganze Zahlen ein" << endl;
	
	for (int i = 0; i < 3; i++)
	{
		cout << "Geben Sie die " << i + 1 << ". Zahl ein" << endl;
		cin >> zahlen[i];
	}

	cout << "Sie haben die Zahlen " << zahlen[0] << " " << zahlen[1] << " " << zahlen[2] << " eingegeben" << endl;

	if (zahlen[0] >= zahlen[1] && zahlen[0] >= zahlen[2])
	{
		cout << "Die groesste Zahl ist: " << zahlen[0] << endl;
	}
	else if (zahlen[1] >= zahlen[0] && zahlen[1] >= zahlen[2])
	{
		cout << "Die groesste Zahl ist: " << zahlen[1] << endl;
	}
	else if (zahlen[2] >= zahlen[0] && zahlen[2] >= zahlen[1])
	{
		cout << "Die groesste Zahl ist: " << zahlen[2] << endl;
	}
	else
	{
		// Nichts machen
	}

	system("pause");
	return 0;
}