#include<iostream>
#include<string>
#include "TaxManager.h"
using namespace std;


class TaxCalculator {
public:
	TaxCalculator() {
		tax = 0;
		deduction = 0;
		exemption = 0;
	}
	void oldRegimeTaxCalculator(long *salary) {
		cOldRegime objOld;
		long taxableincome=objOld.calculateTaxableIncome(salary, &deduction, &exemption);
		tax=objOld.TaxCalculator(&taxableincome,&tax);
	}

	void newRegimeTaxCalculator(long* salary) {
		cNewRegime objNew;
		long taxableincome = objNew.calculateTaxableIncome(salary, &deduction, &exemption);
		tax = objNew.TaxCalculator(&taxableincome, &tax);
	}

	void showTax(string name) {
		cout << "Income tax for " << name << " is:" << tax << endl;
	}

private:
	long deduction;
	long exemption;
	long tax;
};

void main() {
	long sal;
	int reg=-1;
	string name;
	cout << "Please enter your name" << endl;
	getline(cin, name);
	cout << "Enter total Salary" << endl;
	cin>>sal;
	cout << "Please choose regime:\nEnter 1 for Old Regime\nEnter 2 for New Regime" << endl;
	cin >> reg;
	if (reg == 1) {
		cout << "Choosen regime is Old Regime" << endl;
		TaxCalculator objtaxCalcOld;
		objtaxCalcOld.oldRegimeTaxCalculator(&sal);
		objtaxCalcOld.showTax(name);
	}
	else if (reg == 2) {
		cout << "Choosen regime is New Regime" << endl;
		TaxCalculator objtaxCalcNew;
		objtaxCalcNew.newRegimeTaxCalculator(&sal);
		objtaxCalcNew.showTax(name);
	}
	else
	{
		cout << "Please choose regime wisely. Program exiting" << endl;
	}
}

