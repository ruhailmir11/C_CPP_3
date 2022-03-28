using namespace std;

class Person {
    public:
        string name;
        int age;
        Person(string n, int a): name(n), age(a){};
        Person():name("foo"), age(0){};
        
        friend ostream& operator<<(ostream& os, Person& p){
            cout << "Name : " << p.name << "\n";
            cout << "Age : " << p.age << "\n";
            return os;
        }
        
        friend istream& operator>>(istream& is, Person& p){
            is >> p.name >> p.age;
            return is;
        }
};

int main() {
    Person p1;
    cin >> p1;
    cout << p1;
    return 0;
}