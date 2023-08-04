#include<iostream>
using namespace std;
#include"Duck.h"
#include"Turkey.h"
#include"TurkeyAdpater.h"
int main()
{
	Turkey* turkey = new Turkey();
	TurkeyAdapter* turkeyAdapter = new TurkeyAdapter(turkey);
	turkeyAdapter->fly();
	turkeyAdapter->quack();
	return 0;
}