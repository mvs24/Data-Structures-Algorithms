#ifndef PIKE_H	
#define PIKE_H
#include <iostream>

using namespace std;

class Pike
{
private:
	float x;
	float y;

public:
	Pike(float,float);
	Pike krijimi(Pike);
	void getData();
	float getDistance(Pike );
	
};


#endif