#include <iostream>
using namespace std;

class A
{
	public:
		A()
		{
			cout << "A" <<endl;
			p();
		}
		~A()
		{
			cout << "~A" <<endl;
			p();
		}
		virtual void p() 
		{
			q();
		}
		virtual void q()
		{
			cout << "AB"<<endl;
		}
};

class B: public A
{
	public:
		B()
		{
			cout << "B" <<endl;
			p();
		}
		~B()
		{
			cout << "~B" <<endl;
			p();
		}
		void q()
		{
			cout << "BA"<<endl;
		}
};

int main ()
{
	A *p = new B;
	// A will be first create. And then create B memory......
	// so will show AB then show BA
	delete p;
	//delete the A declare
	//show AB
	return 0;
}
