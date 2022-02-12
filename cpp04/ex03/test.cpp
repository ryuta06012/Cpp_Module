#include <iostream>
using namespace std;

class Base {
protected:
	std::string _name;
public:
	Base(): _name("hryuutaa") {std::cout << "Base constructer called" << std::endl;};
	~Base();
	Base(Base const &other) {
		std::cout << "Base Copyconstructer called" << std::endl;
		//*this = other
		}
	virtual void paint() { cout << "Kitty on your lap\n"; }
	std::string getType() {return _name;}
};

class Derived : public Base {
public:
	/* Derived() {
		std::cout << "Derived Copyconstructer called" << std::endl;
		_name = "ryutua";
	}
	~Derived() {std::cout << "Derived Copyconstructer called" << std::endl;} */
	void paint() { cout << "Di Gi Gharat\n"; }
	void check(Base *m) {
		std::string str = m->getType();
		std::cout << str << std::endl;
	}
};

int main() {
	Base *test = new Derived();

	test->paint();

	return 0;
}