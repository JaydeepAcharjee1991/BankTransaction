#include<iostream>
#include<conio.h>
using namespace std;

class student
{
	int accountNumber;
	double balance;
public:
	void setaccountNumber(int acntNum)
	{
		accountNumber = acntNum;
	}
	void setbalance(double bal)
	{
		balance = bal;
		
	}
	int getaccountNumber()
	{
		return accountNumber;
	}
	double getbalance()
	{
		return balance;
	}

};
int main()
{
	student s1;
	char op = 'a';double withdraw=0.0, add=0.0;
	s1.setaccountNumber(11001123);
	cout << "Your account number is " << s1.getaccountNumber()<<endl;
	double Initial_balance = 10000;
	bank:
	cout << "Do u want to do any transaction (Withdraw - 'w'  && add- 'a')"<<endl;
	op = tolower(op);
	cin >> op;
	if (op == 'w')
	{
		cout << "Enter the amount you want to witdraw" << endl;
		cin >> withdraw;
		if (s1.getbalance() > 5000) {
			Initial_balance = Initial_balance - withdraw;
			s1.setbalance(Initial_balance);
		}
		else
			s1.setbalance(Initial_balance);
			cout << "Too low " << endl;
	}
	 if (op == 'a')
	{
		cout << "Enter the amount you want to add" << endl;
		cin >> add;
		Initial_balance = Initial_balance + add;
		s1.setbalance(Initial_balance);
	}
	 cout << "Your balance is " << s1.getbalance() << endl;
	char sel;
	cout << "Do you want any more transaction (Y / N)" << endl;
	cin >> sel;
	sel = tolower(sel);
	if (sel == 'y')
	{
		goto bank;
	}
	else
	{
		cout << "Thank you visit again!!" << endl;
	}	
	_getch();
}