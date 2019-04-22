#include <iostream>
#include "Pike.h"
#include <cmath>
using namespace std;

Pike::Pike(float x, float y){
	this->x=x;
	this->y=y;
}

float Pike::getDistance(Pike a){
		float xDiff=a.x-x;
		float yDiff=a.y-y;
		float dif1=xDiff*xDiff;
		float dif2=yDiff*yDiff;
		float dif=dif1-dif2;
		return sqrt(dif);
}

Pike Pike::krijimi(Pike temp){
	temp.x=x+2;
	temp.y=y+2;
	return(temp);
}

void Pike::getData(){
	cout<<"X eshte "<<this->x<<endl;
	cout<<"Y eshte "<<this->y;
}


