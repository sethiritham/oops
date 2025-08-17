#include <stdio.h>
#include <iostream>
#include <string>
#define print(x) std::cout<<x<<endl
using namespace std;
class Human {
public:
	string Name;
	string Gender;
	int age;
	string BloodGroup;
	Human() {
		print("I am a default constructor for human");
	}
	Human(string Name,string Gender,int age,string BloodGroup) {
		this->Name = Name;
		this->age = age;
		this->Gender = Gender;
		this->BloodGroup = BloodGroup;
	}
};
class Indian {
public:
	string Nationality = "Indian";
	Indian() {
		print("Hi, I am from India, I am an Indian");
	}
};
class IndianStudent : public Indian, public Human {
public:
string SchoolName = "Apeejay School Kharghar";
IndianStudent(string Name, string Gender, int age, string BloodGroup) {
	this->Name = Name;
	this->age = age;
	this->Gender = Gender;
	this->BloodGroup = BloodGroup;
}
void getInfo() {
	print(Name);
	print(age);
	print(Gender);
	print(BloodGroup);
	print(Nationality);
	print(SchoolName);
}
};
int main()
{
	IndianStudent I1("Ritham", "Male", 18, "B+ve");
	I1.getInfo();

}