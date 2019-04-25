#ifndef MATRIX_H
#define MATRIX_H 
#include <iostream>
using namespace std;


class Matrix
{
private:
	int row;
	int column;
	int *A[9];
public:

	Matrix(int row,int column){
	this->row=row;
	this->column=column;
	this->setElements();
	this->getElements();
}

	void setElements(){
		for (int i = 0; i <row; ++i)
		{
			A[i]=new int[column];
		}

		cout<<"Give elements of Matrix";

		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < column; ++j)
			{
				cin>>A[i][j];
			}
		}
	}

	void getElements(){
		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < column; ++j)
			{
				cout<<A[i][j];
			}
		}
	}

	
	void scalarProduction(int k){
		for (int i = 0; i < row; ++i){
			for (int j = 0; j < column; ++j)
			{
				cout<<"  "<<k*A[i][j]<<endl;
			}
		}
	}

	void transposition(){
	int transpositionRow=0,transpositionColumn=0;
	int transpositionMatrix[10][10];
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			transpositionMatrix[transpositionColumn][transpositionRow]=A[i][j];
			transpositionColumn++;
		}
		transpositionRow++;
		transpositionColumn=0;
	}

		for (int i = 0; i < column; ++i)
			{
				for (int j = 0; j < row; ++j)
				{
					cout<<" "<<transpositionMatrix[i][j];
				}
			}	
}

// int A[2][2]={
// 		{1,2},
// 		{4,2}
// 	};
// 	int B[2][1]={
// 		{2},
// 		{3}
// 	};
// 	vectorialProduction(A,B);
// 	// matrix 2*1======> // 1*2+2*3=8
// 						//  4*2+2*3=14
void vectorialProduction(int B[][1]){
	int Mul[10][5];
		for (int i = 0; i < row; ++i)
		{
			for (int j = 0; j < column; ++j)
			{
				Mul[i][j]=0;
					for (int k = 0; k < column; ++k)
					{
						Mul[i][j]+=A[i][k]*B[k][j];
					}
			}
		}
	for (int i = 0; i < 2; ++i)
			{
				for (int j = 0; j < 1; ++j)
				{
					cout<<" "<<Mul[i][j];	
				}	
			}
		}



~Matrix(){
	delete [] A;
}



};


#endif
