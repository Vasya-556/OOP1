#include "Triad.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

Triad::Triad() {
	this->x = 0;
	this->y = 0;
	this->z = 0;
}

Triad::Triad(float x, float y, float z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

void Triad::SetX(float x) {
	this->x = x;
}

void Triad::SetY(float y) {
	this->y = y;
}

void Triad::SetZ(float z) {
	this->z = z;
}

float Triad::GetX() {
	return this->x;
}

float Triad::GetY() {
	return this->y;
}

float Triad::GetZ() {
	return this->z;
}

float Triad::add(){
	return x + y + z;
}

float Triad::multiplication() {
	return x * y * z;
}

void Triad::equal(){
	if (x == y)
		cout << "x == y" << endl;
	else
		cout << "x != y" << endl;
	if (x == z)
		cout << "x == z" << endl;
	else
		cout << "x != z" << endl;
	if (z == y)
		cout << "z == y" << endl;
	else
		cout << "z != y" << endl;
}

ostream& operator<<(ostream& out, Triad& vector3D) {
	out << vector3D.x << endl;
	out << vector3D.y << endl;
	out << vector3D.z << endl;
	return out;
}

istream& operator>>(istream& in, Triad& vector3D) {
	cout << "Enter x: "; in >> vector3D.x;
	cout << "Enter y: "; in >> vector3D.y;
	cout << "Enter z: "; in >> vector3D.z;
	return in;
}