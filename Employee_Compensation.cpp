#include <iostream>

using namespace std;

struct Employee {
    int emp_no;
    float emp_comp;
};

int main(){
    const int MAX = 3;
    Employee emps[MAX];
    
    for(int i=0; i < MAX; i++){
        cout << "Enter employee no: for emp " << i+1 << ": ";
        cin >> emps[i].emp_no;
        
        cout << "Enter employee compensaion: for emp " << i+1 << ": ";
        cin >> emps[i].emp_comp;
    }
    
    for(int i=0; i < MAX; i++){
        cout << "Employee " << i+1 << "\n";
        cout << "ID : " << emps[i].emp_no << "\n";
        cout << "Compensation : " << emps[i].emp_comp << "\n\n";
    }
	
	return 0;
}
