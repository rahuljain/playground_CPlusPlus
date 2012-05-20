#include "worker.h"

Worker::Worker()
{
	data = new int[5];
	for(int i = 0; i< 5; i++) {
		data[i] = i;
	}
};

int Worker::doubleValue()
{
	computeDouble d;
	return d.getDoubledValue(data[3]);
};

Worker::~Worker()
{
	delete [] data;
};
