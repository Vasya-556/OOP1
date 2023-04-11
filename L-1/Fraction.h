#pragma once

class Fraction
{
private:
	int first;
	int second;
	double action;
public:
	int GetFirst() const { return first; }
	unsigned int GetSecond() const { return second; }
	void SetFirst(int value);
	void SetSecond(unsigned int value);
	bool Init(int x, int y);
	void Display() const;
	void Read();
	void ipart();
};
