#include <stdio.h>
#include <iostream>
#include <string>
#define print(x) std::cout<<x<<endl
using namespace std;
class Human{
public:
	string Name;
	int age;
	string gender;
	string nationality;
	string religion;
	Human(string Name, int age, string gender) {
		this->age = age;
		this->Name = Name;
		this->gender = gender;
	}
	void displayInfo() 
	{
		cout << "I am " << Name << ", I am " << age << " years old, " << " I am a " << gender;
	}
	void Man(string nationality, string religion)
	{
		
	}

};
int main() {
	Human h1("Ritham", 18, "Male");
	h1.displayInfo();
}