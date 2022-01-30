# include <iostream>
# include <iomanip>

/*
	Name: Ruhail Mir
	Roll No: CSE-20-LE-64
*/

int main(){
  float pTotal, tDiscountMin = 0.10f, tDiscountMax = 0.12f,
    tax_ = 0.05f, MAX_ = 100.0f;

  char isTeacher = 'N';
  std::cout << "Enter purchase total : ";
  std::cin >> pTotal;
  std::cout << "Are you a teacher ? : Y/y or N/n : ";
  std::cin >> isTeacher;
  
  if( isTeacher == 'Y' || isTeacher == 'y' ){
    float given, discount;
    if ( pTotal >= MAX_ ){
      discount = pTotal * tDiscountMax;
      given = 12;
    } else {
      discount = pTotal * tDiscountMin;
      given = 10;
    }
    
    float dTotal = pTotal - discount;
    float tax = dTotal * tax_;
    float total = dTotal + tax;

    std::cout << '\n' << std::setw(15) << "Total Purchases" << std::setw(16)
      << "$ " << pTotal << "\n";

    std::cout << std::setw(18) << "Teachers Discount(" 
      << given <<"%)"<<std::setw(7)
      << "" << discount << "\n";

    std::cout << std::setw(16) << "Discounted Total" 
      <<std::setw(13)
      << "" << dTotal << "\n";

    std::cout << std::setw(10) << "Sales Tax(" 
      << std::setprecision(3) <<(tax_ * 100) << "%)" << std::setw(16)
      << "" << tax << "\n";

    std::cout << std::setw(5) << "Total" 
      << std::setw(26)
      << "$ " << std::setprecision(5) << total << "\n";

  } else if ( isTeacher == 'N' || isTeacher == 'n' ) {
    float tax = pTotal * tax_;
    float total = pTotal + tax;

    std::cout << '\n' << std::setw(15) << "Total Purchases" << std::setw(16)
      << "$ " << pTotal << "\n";

    std::cout << std::setw(10) << "Sales Tax(" 
      << std::setprecision(3) <<(tax_ * 100) << "%)" << std::setw(16)
      << "" << tax << "\n";

    std::cout << std::setw(5) << "Total" 
      << std::setw(26)
      << "$ " << std::setprecision(4) << total << "\n";

  } else {
    std::cout << "Invalid Input !" << std::endl;
    exit(0);
  }
  std::cout << '\n';

  return 0;
}






