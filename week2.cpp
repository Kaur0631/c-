
#include<iostream>


using namespace std;

namespace CST8219{
class Vehicle{
	private:
    		int numWheels;
   		 string make;
   		 int numDoors;
	public:
	Vehicle(int w,int d)
	{
		numWheels = w;
		numDoors = d;
	}
	Vehicle(int w)
	{
		numWheels = w;
		numDoors = 4;
		Vehicle(numWheels,numDoors);
	}
	Vehicle()
	{
		Vehicle(4);
	}

	



};
}
int main(int argc, char **argv)
{
   std::cout << "Hello World!" << std::endl;
   return 0;
}