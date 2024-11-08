#include <iostream>
#include "forwardList.h"
using namespace std;

int main()
{
	forwardList list;
	list.PushBack(1);
	list.PushBack(2);
	list.PushBack(3);
	list.Print();

	return 0;
}