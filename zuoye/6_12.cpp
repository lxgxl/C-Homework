#include <iostream>
#include <string>

using namespace std;

double calculateCharges(double hour)
{
	if(hour <= 3)
		return 2;
	else if((hour - 3) * 0.5 + 2 <= 10)
		return (hour - 3) * 0.5 + 2;
	else
		return 10;
}

int main()
{
	double hour[4], hour_total = 0, charge_total = 0;
	for(int i = 1; i <= 3; i++)
	{
		cin >> hour[i];
		hour_total += hour[i];
	}
	
	cout << "Car\tHours\tCharge\n";
	
	for(i = 1; i <= 3; i++)
	{
		cout << i << '\t';
		cout << hour[i] << '\t';
		double charge = calculateCharges(hour[i]);
		charge_total += charge;
		cout << charge << endl;
	}
	
	cout << "TOTAL\t" << hour_total << '\t' << charge_total << endl;
	
	system("pause");
	return 0;
}