#pragma once
#ifndef TURKEYADPATER_H
#define TURKEYADPATER_H
#include"Duck.h"
#include"Turkey.h"
class TurkeyAdapter :public Duck {
private:
	Turkey* turkry;
public:
	TurkeyAdapter() = default;
	TurkeyAdapter(Turkey* turkey);
	void quack() override;
	void fly() override;
};
#endif
