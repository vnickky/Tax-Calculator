using namespace std;
#include"TaxManager.h"

void cNewRegime::deductions(long* deduction) {
	cout << "Calculating all deductions in New Regime" << endl;
	deductions_80CCD2(deduction);
	

}
void cNewRegime::exemptions(long* exemption) {
	cout << "Calculating all exemptions in New Regime" << endl;
	EPFexemption(exemption);
	reimbursements(exemption);
}
long cNewRegime::calculateTaxableIncome(long* salary, long* deduction, long* exemption) {
	deductions(deduction);
	exemptions(exemption);
	long taxableIncome = *salary;
	taxableIncome -= (*deduction) + (*exemption) + StandardDeduction;
	return taxableIncome;
}

long cNewRegime::TaxCalculator(long* taxableIncome, long* tax) {
	//long deduction = 0,exemption=0; 
	*tax = slabTaxCalculator(taxableIncome, tax);
	return *tax;
}

long cNewRegime::slabTaxCalculator(long* taxableIncome, long* tax) {
	if (*taxableIncome<=700000) {
		*tax = 0;
		return *tax;
	}
	else
	{
		if ((*taxableIncome > 300000)) {
			if (*taxableIncome > 600000) {
				*tax += (300000) * .05;
				if ((*taxableIncome > 600000)) {
					if (*taxableIncome > 900000) {
						*tax += (300000) * .1;
						if ((*taxableIncome > 900000)) {
							if (*taxableIncome > 1200000) {
								*tax += (300000) * .15;
								if ((*taxableIncome > 1200000)) {
									if (*taxableIncome > 1500000) {
										*tax += (300000) * .2;
										if ((*taxableIncome > 1200000)) {
											if (*taxableIncome > 1500000) {
												*tax += (*taxableIncome - 1500000) * (.3);
												return *tax;

											}
										}

									}
									else
									{
										*tax += (*taxableIncome - 1200000) * 0.2;
										return *tax;
									}
								}

							}
							else
							{
								*tax += (*taxableIncome - 900000) * 0.15;
								return *tax;
							}
						}

					}
					else
					{
						*tax += (*taxableIncome - 600000) * 0.1;
						return *tax;
					}
				}

			}
			else
			{
				*tax += (*taxableIncome - 300000) * 0.05;
				return *tax;
			}
		}
	}
}