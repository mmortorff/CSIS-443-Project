#include <process.h>
#include <Windows.h>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <istream>
using namespace std;

bool enableMutex = false; //Command line parameter
int count = 0;				  //Actual count after update by threads
unsigned long numberIter = 0; //Command line parameter

int main(int argc, char* argv[])
{
	//Local variables 
	int numberOfThreads = 1;

	//Get the command line parameters
	//If correct, argc should be 4 and argv[1] should be numberOfThreads,
	//argv[2] is number of Iterations, and argv[3] is enableMutex

	//Create a mutex (See your text for a description of how to do this with Win32 API

	//For each thread
	for (int i = 0; i < numberOfThreads; i++)
	{
		//Create a new thread to execute simulated work
		Sleep(10);
	}

	//Loop while the threads run to completion
	while (int i = 0)
	{
		Sleep(1000);
	}

	//Output the actual value of count and the theoretical value
}
