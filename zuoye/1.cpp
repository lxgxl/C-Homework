#include <iostream>
#include <string>

using namespace std;

bool password(string username, string passwd)
{
	if(username == "root" && passwd == "toor")
	{
		return true;
	}

	return false;
}

int main()
{
	string username, passwd;
	cout << "请输入用户名和密码：\n";

	bool isSec = false;
	for(int i = 1; i <= 3; i++)
	{
		cin >> username >> passwd;
		if(password(username, passwd))
		{
			cout << "Welcome, root!\n";
			isSec = true;
			break;
		}
		else
		{
			cout << "Sorry, your username or password is not right!\n";
		}
	}

	if(isSec == false)
	{
		cout << "Sorry, you have no time to input!\n";
	}

	system("pause");
	return 0;
}