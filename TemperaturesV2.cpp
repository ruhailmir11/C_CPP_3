# include <iostream>
# include <vector>
# include <iomanip>
# include <string>

/*
	Name: Ruhail Mir
	Roll No: CSE-20-LE-64
*/

int main(){
	std::vector<int> hot, plesent, cold;	
	const int HOT_MIN = 85;
	const int PLESENT_MIN = 60;
	int MAX = 0;
	float hot_sum = 0.0, plesent_sum = 0.0, cold_sum = 0.0, total_sum = 0;
	float hot_mean = 0.0, plesent_mean = 0.0, cold_mean = 0.0, total_mean = 0.0;
	
	std::vector<int> dataset = {55, 62, 68, 74, 59, 45, 41, 58, 60, 67, 65, 78,
		82, 88, 91, 92, 90, 93, 87, 80, 78, 79, 72, 68, 61, 59};
		
	for( int i=0; i < dataset.size(); i++ ){
		if ( dataset[i] <= PLESENT_MIN){
			cold.push_back(dataset[i]);
			cold_sum += dataset[i];
		} else if ( dataset[i] <= HOT_MIN ){
			plesent.push_back(dataset[i]);
			plesent_sum += dataset[i];
		} else {
			hot.push_back(dataset[i]);
			hot_sum += dataset[i];
		}
		if ( cold.size() > MAX ){
			MAX = cold.size();
		}
		if ( plesent.size() > MAX ){
			MAX = plesent.size();
		}
		if ( hot.size() > MAX ) {
			MAX = hot.size();
		}
		total_sum += dataset[i];
	}
	
	// Calculating Means ...
	cold_mean = cold_sum / cold.size();
	plesent_mean = plesent_sum / plesent.size();
	hot_mean = hot_sum / hot.size();
	total_mean = total_sum / dataset.size();
	
	std::cout << std::setw(8) << "HOT DAYS" << std::setw(20) << "PLESENT DAYS" << std::setw(17) << "COLD DAYS" << std::endl;
	
	for( int i=0; i <= MAX; i++ ){		
		std::cout << std::setw(8) << ( i < hot.size() ? std::to_string(hot[i]): "-" ) << std::setw(20) << ( i < plesent.size() ? std::to_string(plesent[i]): "-" ) << std::setw(17) << ( i < cold.size() ? std::to_string(cold[i]): "-" ) << std::endl;
	}
	
	std::cout << std::setw(8) << "\n\nHOT Mean" << std::setw(20) << "PLESENT Mean" << std::setw(17) << "COLD Mean" << std::endl;
	std::cout << std::setw(8) << std::setprecision(4) << hot_mean << std::setw(20) << plesent_mean << std::setw(17) << cold_mean << std::endl;
	
	std::cout << std::setw(15) << "\n\nTotal Mean" << std::endl;
	std::cout << total_mean << std::endl;
	
	return 0;
}