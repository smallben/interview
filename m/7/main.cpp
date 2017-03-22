#include <iostream>
using namespace std;

class Foo
{
	public:
		void f()
		{
			cout << "Foo::f()" <<endl;
		}
		virtual void g()
		{
			cout << "Foo::g()" <<endl;
		}
};

class Bar: public Foo
{
	public:
		void f()
		{
			cout << "Bar::f()" <<endl;
		}
		virtual void g()
		{
			cout << "Bar::g()" <<endl;
		}
};

int main()
{
	Foo foo;
	Bar bar;
	Foo *baz = &bar;
	Bar *quux = &bar;

	foo.f();
	foo.g();
	bar.f();
	bar.g();
	baz->f();//This is use the foo function f
	baz->g();//This is use the virtual memory which is declared by Bar
	quux->f();
	quux->g();

	return 0;
}
