#include "header.h"
#include <iostream>

int main()
{
	using namespace std;

	Student son("Son", "Denis", "Enkhanovich", 19, true);
	Boss karpov("Karpov", "Dmitrii", "Anatolievich", 46, 28);
	son.print();
	cout << endl;
	karpov.print();
}