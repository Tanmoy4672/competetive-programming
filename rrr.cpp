#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

const int size=5;

void Display(int* iarr)
{
	for(int i=0; i<size; ++i)
		cout<<iarr[i]<<",";
	cout<<endl;
}

int main()
{
	int iarr[size] = {2,3,5,4,1};

	sort(iarr,iarr+size);
	Display(iarr);
	while(next_permutation(iarr,iarr+size))
		Display(iarr);

	system("pause");

	return 0;
}
