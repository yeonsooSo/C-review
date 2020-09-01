#pragma once
#include <iostream>

class Vote {
public:
	Vote(std::string name)
		:_name{ name } {}
	void incrementCount() {
		_count++;
	}
	int getCount() const {
		return _count;
	}
	std::string getName() const {
		return _name;
	}

private:
	int _count{ 0 };
	std::string _name;

};