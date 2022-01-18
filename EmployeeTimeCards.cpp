# include <iostream>
# include <vector>
# include <iomanip>

class Employee {
	private:
		int id, time_worked;
		float rate, tax;
	
	public:
		float * paid;
		
	void computeAndShow(){
		rate = (time_worked * 0.40);
		float payment = ( time_worked * rate );
		float tax_cutoff = payment * (tax / 100.0);
		float net_pay = payment - tax_cutoff;
		std::cout << std::setw(6) << id << std::setw(11) << net_pay << std::endl;	
		*paid = (*paid + net_pay);
	}
	
	Employee(int id_, int time_, float tax_, float * t){
		id = id_;
		time_worked = time_;
		tax = tax_;
		paid = t;
	}
};

int main(){
	const float TAX = 3.625f;
	float total_paid = 0.0f;
	
	std::vector<Employee> employees = {
		Employee(1, 50, TAX, &total_paid),
		Employee(2, 20, TAX, &total_paid),
		Employee(3, 35, TAX, &total_paid),
		Employee(4, 38, TAX, &total_paid),
		Employee(5, 46, TAX, &total_paid),
		Employee(6, 75, TAX, &total_paid),
		Employee(7, 43, TAX, &total_paid),
		Employee(8, 35, TAX, &total_paid),
		Employee(9, 12, TAX, &total_paid),
		Employee(10, 30, TAX, &total_paid)
	};
	
	std::cout << std::setw(6) << "Emp Id" << std::setw(11) << "Net Pay" << std::endl;
	for( auto e : employees ){
		e.computeAndShow();
	}
	
	float average_ = total_paid / employees.size();		
	std::cout << std::setw(10) << "\n---" << std::setw(15) << "Average" << std::endl;
	std::cout << std::setw(3) << "---" << std::setw(15) << average_ << std::endl;
	std::cout << std::setw(10) << "\nTotal Paid: " << total_paid << std::endl;
			
	return 0;
}
