#include <stdio.h>
#include <iostream>
#include <string>
#define print(x) std::cout<<x<<endl
using namespace std;
class Shape { //Abstract class
public:
	virtual void Draw() = 0; //pure virtual function
};
class Square : public Shape {
public:
	void Draw() {
		print("Drawing a square");
	}
};
int main() {
	Square s1;
	s1.Draw();

}
