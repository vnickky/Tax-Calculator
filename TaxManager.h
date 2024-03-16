#include<iostream>
#include<string>

class TaxSlab {
public:
	virtual long TaxCalculator(long* salary, long* tax) = 0;
	virtual long calculateTaxableIncome(long* salary, long* deduction, long* exemption)=0;
};

class cDeductionsandExemptions {
public:
	long StandardDeduction;
	cDeductionsandExemptions() {
		StandardDeduction = 50000;
	}

	
	void deductions_24(long* deduction);
	void deductions_80C(long* deduction);
	void deductions_80CCD(long* deduction);
	void deductions_80CCD2(long* deduction);
	void deductions_80D(long* deduction);
	void deductions_80DDB(long* deduction);
	void deductions_80E(long* deduction);
	void deductions_80EEB(long* deduction);
	void hRAexemption(long* exemption);
	void ChildrenEducationAllowance(long* exemption);
	void ChildrenHostelAllowance(long* exemption);
	void LTA(long* exemption);
	void reimbursements(long* exemption);
	void EPFexemption(long* exemption);


};

class cOldRegime : public TaxSlab, public cDeductionsandExemptions {
public:

	void deductions(long* deduction);

	void exemptions(long* exemption);

	long TaxCalculator(long* salary, long* tax);

	long slabTaxCalculator(long* taxableIncome, long* tax);

	long calculateTaxableIncome(long* salary, long* deduction, long* exemption);
};

class cNewRegime : public TaxSlab, public cDeductionsandExemptions {
public:

	void deductions(long* deduction);
	void exemptions(long* exemption);
	long TaxCalculator(long* salary, long* tax);
	long slabTaxCalculator(long* taxableIncome, long* tax);
	long calculateTaxableIncome(long* salary, long* deduction, long* exemption);
};

