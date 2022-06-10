#include <iostream>
using namespace std;
class Company
{
	string name;
	int RegistredNum;
	int Bsemestr1;
	int Bsemestr2;
	int Bsemestr3;
	double result;
	public:
		Company()
		{
			name = "Istanbul";
			RegistredNum = 001;
			Bsemestr1 = 100;
			Bsemestr2 = 100;
			Bsemestr3 = 100;
			result = (Bsemestr1+Bsemestr2+Bsemestr3);
		}
		Company(string a, int b , int c, int d, int e)
		{
			name = a;
			RegistredNum = b;
			Bsemestr1 = c;
			Bsemestr2 = d;
			Bsemestr3 = e;
			result = (Bsemestr1+Bsemestr2+Bsemestr3);
		}
		void GetCompanyInfo()
		{
			cout<<"Please enter name of the company: ";
			cin>>name;
			cout<<"Please enter registry number of the company: ";
			cin>>RegistredNum;
			cout<<"Please enter the first semestre benefit: ";
			cin>>Bsemestr1;
			cout<<"Please enter the second semestre benefit: ";
			cin>>Bsemestr2;
			cout<<"Please enter the third semestre benefit: ";
			cin>>Bsemestr3;
			result = (Bsemestr1+Bsemestr2+Bsemestr3);
		}
		void DisplayCompanyInfo()
		{
			cout<<"Company name is "<<name<<", registry number is "<<RegistredNum<<", first semestre benefit is "<<Bsemestr1<<","<<endl<<"second semestre benefit is "<<Bsemestr2<<" and third semestre benefit is "<<Bsemestr3<<"."<<endl;
			cout<<"****************************************************************************************"<<endl;
		}
		double CalculateAnnualBenefit()
		{
			return (Bsemestr1+Bsemestr2+Bsemestr3);
		}
		void DisplayAnnualBenefit()
		{
			cout<<name<<"'s annual benefit is "<<(Bsemestr1+Bsemestr2+Bsemestr3)<<"."<<endl;
			cout<<"****************************************************************************************"<<endl;
		}
		void CompareBenefit(Company b, Company c)
		{
			if (this->result > b.result && this->result > c.result)
			{
				cout<<this->name<<" company's annual benefit is bigger than others."<<endl;
			}
			else if (this->result > b.result && this->result < c.result)
			{
				cout<<this->name<<" company's annual benefit is bigger than "<<b.name<<" company's and smaller than "<<c.name<<" company's."<<endl;
			}
			else if (this->result < b.result && this->result > c.result)
			{
				cout<<this->name<<" company's annual benefit is smaller than "<<b.name<<" company's and bigger than "<<c.name<<" company's."<<endl;
			}
			else if (this->result < b.result && this->result < c.result)
			{
				cout<<this->name<<" company's annual benefit is smaller than others."<<endl;
			}
			else if (this->result == b.result && this->result == c.result)
			{
				cout<<this->name<<" company's annual benefit is equal to others"<<endl;
			}
			else if (this->result == b.result && this->result > c.result)
			{
				cout<<this->name<<" company's annual benefit is equal to "<<b.name<<" company's and bigger than "<<c.name<<" company's."<<endl;
			}
			else if (this->result == b.result && this->result < c.result)
			{
				cout<<this->name<<" company's annual benefit is equal to "<<b.name<<" company's and smaller than "<<c.name<<" company's."<<endl;
			}
			else if (this->result > b.result && this->result == c.result)
			{
				cout<<this->name<<" company's annual benefit is bigger than "<<b.name<<" company's and equal to "<<c.name<<" company's."<<endl;
			}
			else if (this->result < b.result && this->result == c.result)
			{
				cout<<this->name<<" company's annual benefit is smaller than "<<b.name<<" company's and equal to "<<c.name<<" company's."<<endl;
			}
		}
};
int main()
{
	Company company1,company2("Elimsan",150825,800.000,500.000,250.000),company3;
	company3.GetCompanyInfo();
	company1.DisplayCompanyInfo();
	company2.DisplayCompanyInfo();
	company3.DisplayCompanyInfo();
	company1.CalculateAnnualBenefit();
	company2.CalculateAnnualBenefit();
	company3.CalculateAnnualBenefit();
	company1.DisplayAnnualBenefit();
	company2.DisplayAnnualBenefit();
	company3.DisplayAnnualBenefit();
	company1.CompareBenefit(company2,company3);
}
