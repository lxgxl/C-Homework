#include <iostream>
#include <string>

using namespace std;

void encode(string &src,string &dst, char code)
{
	string::iterator src_iter = src.begin();
	string::iterator src_iter_end = src.end();

	string::iterator dst_iter = dst.begin();
	string::iterator dst_iter_end = dst.end();

	while(src_iter != src_iter_end)
	{
		*dst_iter = *src_iter ^ code;
		src_iter++;
		dst_iter++;
	}
}

int main()
{
	int choose;
	char code;
	string src, dst;

	cout << "\n\n\n\t\t\t1.����\n\t\t\t2.����\n\n�����������:";
	cin >> choose;
	switch(choose)
	{
	case 1:
		cout << "����Դ��:\n";
		cin >> src;
		cout << "�������ڼ��ܵ��ַ�:\n";
		cin >> code;
		dst = src;
		encode(src, dst, code);
		break;
	case 2:
		break;
	default:
		cout << "No such choose!" << endl;
	}

	cout << dst << endl;

	system("pause");
	return 0;
}