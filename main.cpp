#include <stdio.h>
#include <iostream>
#include <string>
#define print(x) std::cout<<x<<endl
using namespace std;
class Parent{
public:
	void getInfo() {
		print("Parent class\n");

	}

};
class Child : public Parent {
public:
	void getInfo() {
		print("Child class\n");
	}
};
int main() {
	Child c1;
	c1.getInfo();
	Parent p1;
	p1.getInfo();

}