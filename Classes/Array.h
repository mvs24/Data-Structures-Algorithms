#ifndef ARRAY_H
#define ARRAY_H

class Array
{	
private:
	int n;
	struct Field
	{
		int max=INT_MIN;
		int index;
	};
public:

	Array(int);
	bool member(int *,int );
	int greaterThan(int *,int);	
	void remove(int *,int);
	bool ordering(int *);
	void reverse(int *);
	int smallestMissingElementInSortedArray(int *);
	int maxDifference(int *);
	
	 struct Field largest(int A[]){
		struct Field f;
		for (int i = 0; i < n; ++i)
		{
			if (A[i]>f.max)
			{
				f.max=A[i];
				f.index=i;
				
			}
		}
		return f;
	}
};

#endif