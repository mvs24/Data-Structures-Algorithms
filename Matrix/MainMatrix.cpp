#include <iostream>
#include "Matrix.cpp"
using namespace std;
int main(int argc, char const *argv[])
{
	
	int H[2][1]={{2},{3}};
	Matrix matrix(2,2);
	
	// matrix.scalarProduction(4);
	// matrix.transposition();
	matrix.vectorialProduction(H);
	
	return 0;
}



//1 2 3
//4 5 6