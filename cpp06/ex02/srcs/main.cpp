#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <string>


int main()
{
	Base	*a_ptr = new A();
	Base	*b_ptr = new B();
	Base	*c_ptr = new C();
	identify(a_ptr);
	identify(b_ptr);
	identify(c_ptr);
	delete a_ptr;
	delete b_ptr;
	delete c_ptr;

	A		a;
	B		b;
	C		c;
	identify(a);
	identify(b);
	identify(c);
}
