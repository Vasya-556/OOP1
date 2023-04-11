#include <iostream> // std::cout
#include <iostream> // std::cout
#include <list> // std::list
#include <algorithm> // std::generate
#include <ctime> // std::time
#include <numeric> // std::accumulate

using namespace std;

int RandomNumber() { return rand() % 100; }
void print(list<int> a)
{
	for (int i : a)
		cout << i << " ";
	cout << endl;
}
int main()
{
	srand((unsigned int)time(NULL));
	int n;
	cout << "input n : "; cin >> n;
	list<int> l(n);
	generate(l.begin(), l.end(), RandomNumber);
	print(l);
	cout << "count = " << count_if(l.begin(), l.end(), [](int i) {return i % 2; }) << endl;
	return 0;
}