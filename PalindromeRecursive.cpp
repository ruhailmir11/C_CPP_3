# include <iostream>
# include <string>

/* 
	Name: Ruhail Mir
	Roll No: CSE-20-LE-64
*/

int isPalindrome( std::string s, int a, int b){
	if ( b < a ){
		return 1;
	}
	
	char l = s[0];
	char r = s[s.length()-1];
	
	if ( l != r ){
		return 0;
	} else {
		return isPalindrome(s, a+1, b-1);	
	}
}

int main(){
	std::string s;
	std::cout << "Enter some word: ";
	std::cin >> s;
	
	std::cout << isPalindrome(s, 0, s.length()) << "\n";
	return 0;
}
