#include <iostream>
#include "computeDouble.h"

class Worker
{
	private:
		int *data;
	
	public:
		Worker();
		int doubleValue();
		virtual ~Worker();
};
