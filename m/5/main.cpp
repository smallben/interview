#include <iostream>
using namespace std;

class GO 
{
	public:
		GO(int i)
			: _i(i)
		{
		}
		void go (int &i)
		{
			cout << "go : I = " << i << endl;
			i = _i;
		}
	private:
		int _i;
};

int main()
{
	int x = 10;
	GO cgo(100);
	cgo.go(x);
	cgo.go(x);
	return 0;
}
