#include "vector3D.h"

vector3D::vector3D() {
	this->x1 = 0;
	this->x2 = 0;
	this->x3 = 0;
}

vector3D::vector3D(float x1, float x2, float x3) {
	this->x1 = x1;
	this->x3 = x2;
	this->x2 = x3;
}

float vector3D::add() {
	return x1 + x2 + x3;
}


float vector3D::ScalarProduct(vector3D& a,vector3D& b){
	return a.x1 * b.x1 + a.x2 * b.x2 + a.x3 * b.x3;
}


ostream& operator<<(ostream& out, vector3D& vector3D) {
	out << vector3D.x1 << endl;
	out << vector3D.x2 << endl;
	out << vector3D.x3 << endl;
	return out;
}

istream& operator>>(istream& in, vector3D& vector3D) {
	cout << "Enter x1: "; in >> vector3D.x1;
	cout << "Enter x2: "; in >> vector3D.x2;
	cout << "Enter x3: "; in >> vector3D.x3;
	return in;
}
