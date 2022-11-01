#include <iostream>
using namespace std;

//Functions prototype
int getdata();
bool check(int Number);
int absolute(int Number);
void Display(int getdata);
int main() {
	int Number, ABSNumber;
	bool Flag;
	cout << "enter an integer number\n";
	Number = getdata();
	cout << "Number = ";
	Display(Number);
	Flag = check(Number);
	if (Flag)
	{
		ABSNumber = absolute(Number);
		cout << "Absoulte value of the Number =  ";
		Display(ABSNumber);
	}
	system("pause");
	return 0;
}
int getdata()
{
	int data;
	cin >> data;
	return data;
}
bool check(int Number)
{
	bool CheckNumber;
	if (Number < 0) {
		CheckNumber = true;
	}
	else {
		CheckNumber = false;
	}
	return CheckNumber;
}
int absolute(int Number)
{
	if (Number < 0) {
		Number = Number * (-1);
		return Number;
	}
}
void Display(int data)
{
	cout << data << endl;
}