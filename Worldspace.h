#pragma once
#include<string>
using namespace std;

class Worldspace
{
public:
	Worldspace(int num);
	
	~Worldspace();
	void setLocation(int location);
	int location;
	inline int getLocation() const { return this->location; }

	
private:
	

};

