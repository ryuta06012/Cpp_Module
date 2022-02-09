#include <iostream>
using namespace std;

class Base {
public:
	void paint() { cout << "Kitty on your lap\n"; }
};

class Derived : public Base {
public:
	void paint() { cout << "Di Gi Gharat\n"; }
} obj ;

int main() {
	Base *po = &obj;
	obj.paint();
	po->paint();

	return 0;
}