#include <iostream>
#include <string>
using namespace std;

class person
{
	public:
		person(string name)
		{
			mName = name;
		}
		void tell()
		{
			cout<<"Hi! I am "<<mName << endl;
		}
		~person()
		{
			cout <<"d 1"<<endl;
		}
	private:
		string mName;
};

template <typename T>
class sp
{
	public:
		sp(T* p)
		{
			ptr = p;
		}
		~sp ()
		{
			cout << "d 2"<<endl;
			delete ptr;
		}
		T* operator->()
		{
			return ptr;
		}
	private:
		T* ptr;
};


int main()
{
	sp <person> p(new person("Ci"));
	p->tell();
	return 0;
}
