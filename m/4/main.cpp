#include <iostream>
using namespace std;

class Vehicle
{
	public:
		Vehicle()
		{
			cout << "Vehicle" << endl;
		}
		~Vehicle()
		{
			cout << "~Vehicle" << endl;
		}

		void go()
		{
			cout << "Go in Vehicle" << endl;
		}

		virtual void stop()
		{
			cout << "Stop in Vehicle" << endl;
		}
};

class Car : public Vehicle
{
	public:
		Car()
		{
			cout << "Car" << endl;
		}
		~Car()
		{
			cout << "~Car" << endl; 
		}

		void go()
		{
			cout << "go in Car" << endl;
		}
		virtual void stop()
		{
			cout << "stop in Car" << endl;
		}
};

int main ()
{
	Car * pCar = new Car();
	Vehicle* pVehicle = pCar;
	pVehicle->stop();
	pVehicle->go();
	pCar->stop();
	pCar->go();
	delete pVehicle;

	cout << "====================" << endl;

	Car car;
	pVehicle = &car;
	pCar = &car;

	pVehicle->stop();
	pVehicle->go();
	pCar->stop();
	pCar->go();

	cout << "====================" << endl;

	Vehicle vehicle;
	pVehicle = &vehicle;
	pVehicle->stop();
	pVehicle->go();

	return 0;
}
