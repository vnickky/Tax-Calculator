using namespace std;
#include"TaxManager.h"


void cDeductionsandExemptions::deductions_24(long* deduction) {
	long amount_24;
	cout << "\nPlease enter amount invested under section 24\n\This includes Interest on Home Loan upto 2 Lakhs or Loss from let out property upto 2 Lakhs\nNote: Please enter 0 if no amount invested" << endl;
	cin >> amount_24;
	*deduction += amount_24;
}

void cDeductionsandExemptions::deductions_80C(long* deduction) {
	long amount_80C;
	cout << "\nPlease enter amount invested under section 80C\nThis includes investment done for EPF,PPF, HomeLoan Principal, Stamp Duty & Regn, ELSS, ULIP,Life Insurance Premium, SSY, NSC Post Office FD, 5 yr FD, TTution FEE\nNote: Please enter 0 if no amount invested" << endl;
	cin >> amount_80C;
	*deduction += amount_80C;
}

void cDeductionsandExemptions::deductions_80CCD(long* deduction) {
	long amount_80CCD;
	cout << "\nPlease enter amount invested under section 80CCD(NPS National Pension Scheme)\nNote: Please enter 0 if no amount invested" << endl;
	cin >> amount_80CCD;
	*deduction += amount_80CCD;
}

void cDeductionsandExemptions::deductions_80CCD2(long* deduction) {
	long amount_80CCD2;
	cout << "\nPlease enter amount invested under section 80CCD2(NPS National Pension Scheme from employer's behalf)\nNote: Please enter 0 if no amount invested by your organisation" << endl;
	cin >> amount_80CCD2;
	*deduction += amount_80CCD2;
}

void cDeductionsandExemptions::deductions_80D(long* deduction) {
	long amount_80D;
	cout << "\nPlease enter amount invested under section 80D\nThis includes investment done for Health Insurance Premium (Limit: 1 Lakh) \n\Note: Non-Resident Indians (NRIs) are not eligible for this deduction. Only Indian residents can claim such a deduction. No other entity can claim this deduction.nNote: Please enter 0 if no amount invested" << endl;
	cin >> amount_80D;
	*deduction += amount_80D;
}

void cDeductionsandExemptions::deductions_80DDB(long* deduction) {
	long amount_80DDB;
	cout << "\nPlease enter amount invested under section 80DDB\nThis includes money spent on certain specified disease\nNote: Please enter 0 if no amount invested" << endl;
	cin >> amount_80DDB;
	*deduction += amount_80DDB;
}

void cDeductionsandExemptions::deductions_80E(long* deduction) {
	long amount_80E;
	cout << "\nPlease enter amount invested under section 80E\nThis includes Interest on Education Loan (no Limit)Note: Please enter 0 if no amount invested" << endl;
	cin >> amount_80E;
	*deduction += amount_80E;
}

void cDeductionsandExemptions::deductions_80EEB(long* deduction) {
	long amount_80EEB;
	cout << "\nPlease enter amount invested under section 80EEB\nThis includes Interest on EV Loan (Limit: 1.5 lakhs)\nNote: Please enter 0 if no amount invested" << endl;
	cin >> amount_80EEB;
	*deduction += amount_80EEB;
}

void cDeductionsandExemptions::hRAexemption(long* exemption) {
	long amount_hraExemption;
	cout << "\nPlease enter HRA amount which is exempted from Tax\nNote: Please enter 0 if no amount is exempted" << endl;
	cin >> amount_hraExemption;
	*exemption += amount_hraExemption;
}

void cDeductionsandExemptions::reimbursements(long* exemption) {
	long amount_reimbursements;
	cout << "\nPlease enter reimbursements amount which is taken as meal card,internet,travel bills etc. Tax\nNote: Please enter 0 if no amount is reimbursed" << endl;
	cin >> amount_reimbursements;
	*exemption += amount_reimbursements;
}

void cDeductionsandExemptions::ChildrenEducationAllowance(long* exemption) {
	long amount_childreneducationallowance;
	cout << "\nPlease enter amount spent on Children's education.(Amount can't exceed 100 per month)\nNote: Please enter 0 if no amount is reimbursed" << endl;
	cin >> amount_childreneducationallowance;
	*exemption += amount_childreneducationallowance;
}

void cDeductionsandExemptions::ChildrenHostelAllowance(long* exemption) {
	long amount_childreneducationallowance;
	cout << "\nPlease enter amount spent on Children's hostel.(Amount can't exceed 300 per month)\nNote: Please enter 0 if no amount is reimbursed" << endl;
	cin >> amount_childreneducationallowance;
	*exemption += amount_childreneducationallowance;
}

void cDeductionsandExemptions::LTA(long* exemption) {
	long amount_reimbursements;
	cout << "\nPlease enter reimbursements amount which is taken as Leave Travel Allowance.( Can be taken twice in 4 years block)\nNote: Please enter 0 if no amount is reimbursed" << endl;
	cin >> amount_reimbursements;
	*exemption += amount_reimbursements;
}

void cDeductionsandExemptions::EPFexemption(long* exemption) {
	long amount_epfexemption;
	bool bProperAmount = false;
	while (bProperAmount != true) {
		cout << "\nPlease enter Employer's contribution towards PF(12% of basic salary. Max limit: 7.5 lakhs pr annum\n" << endl;
		cin >> amount_epfexemption;
		if (amount_epfexemption <= 0 || amount_epfexemption >= 750000)
			bProperAmount = false;
		else
			bProperAmount = true;
	}
	*exemption += amount_epfexemption;
}