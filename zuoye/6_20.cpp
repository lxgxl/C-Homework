#include <iostream>
#include <string>

using namespace std;

bool multiple(int a, int b)
{
	if(b % a == 0)
		return true;
	else
		return false;
}

int main()
{
	int a, b;

	while(1)
	{
		cout << "Input a, b:\n";
		cin >> a >> b;
		if(multiple(a, b))
		{
			cout << "Yes\n";
		}
		else
		{
			cout << "No\n";
		}
	}
	
	system("pause");
	return 0;
}