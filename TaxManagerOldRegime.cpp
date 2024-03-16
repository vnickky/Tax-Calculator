using namespace std;
#include"TaxManager.h"

void cOldRegime::deductions(long * deduction) {
	cout << "Calculating all deductions in Old Regime " << endl;
	
	deductions_24(deduction);
	deductions_80C(deduction);
	deductions_80CCD(deduction);
	deductions_80CCD2(deduction);
	deductions_80D(deduction);
	deductions_80DDB(deduction);
	deductions_80E(deduction);
	deductions_80EEB(deduction);
}

void cOldRegime::exemptions(long* exemption) {
	cout << "Calculating all exemptions in Old Regime " << endl;
	EPFexemption(exemption);
	hRAexemption(exemption);
	ChildrenEducationAllowance(exemption);
	ChildrenHostelAllowance(exemption);
	LTA(exemption);
	reimbursements(exemption);
}

long cOldRegime::calculateTaxableIncome(long* salary, long* deduction, long* exemption) {
	exemptions(exemption);
	deductions(deduction);
	
	long taxableIncome = *salary;
	taxableIncome -= (*deduction) + (*exemption) + StandardDeduction;
	return taxableIncome;
}

long cOldRegime::TaxCalculator(long* taxableIncome, long* tax) {
	*tax=slabTaxCalculator(taxableIncome,tax);
	return *tax;
}
long cOldRegime::slabTaxCalculator(long* taxableIncome,long* tax) {
	if (*taxableIncome <= 500000) {
		*tax = 0;
		return *tax;
	}
	else
	{
		if ((*taxableIncome > 250000)) {
			if (*taxableIncome > 500000) {
				*tax += (250000) * .05;
				if ((*taxableIncome > 500000)) {
					if (*taxableIncome > 1000000) {
						*tax += (500000) * .2;
						if ((*taxableIncome > 1000000)) {
							*tax += (*taxableIncome - 1000000) * (.3);
							return *tax;
						}
					}
					else
					{
						*tax += (*taxableIncome - 500000) * 0.2;
						return *tax;
					}
				}
			}
			else
			{
				*tax += (*taxableIncome - 250000) * 0.05;
				return *tax;
			}
		}

	}	
}




