// set test
#include <iostream>
#include "../mini_set.h"
#include <cstdlib>

using std::cout;
using std::endl;

int main() {
	using namespace ministl;
	int ia[5] = {0, 1, 2, 3, 4};
	set<int> iset(ia, ia + 5);

	cout << "size = " << iset.size() << endl;
	cout << "3 count = " << iset.count(3) << endl;
	iset.insert(3);
	cout << "size = " << iset.size() << endl;
	cout << "3 count = " << iset.count(3) << endl;
	iset.insert(5);
	cout << "size = " << iset.size() << endl;
	cout << "3 count = " << iset.count(3) << endl;
	iset.erase(1);
	cout << "size = " << iset.size() << endl;
	cout << "3 count = " << iset.count(3) << endl;
	cout << "1 count = " << iset.count(1) << endl;

	set<int>::iterator ite1 = iset.begin();
	set<int>::iterator ite2 = iset.end();
	for (; ite1 != ite2; ++ite1)
		cout << *ite1 << " ";
	cout << endl;

	ite1 = find(iset.begin(), iset.end(), 3);
	if (ite1 != iset.end())
		cout << "3 found" << endl;

	ite1 = find(iset.begin(), iset.end(), 1);
	if (ite1 == iset.end())
		cout << "1 not found" << endl;

	ite1 = iset.find(3);
	if (ite1 != iset.end())
		cout << "3 found" << endl;

	ite1 = iset.find(1);
	if (ite1 == iset.end())
		cout << "1 not found" << endl;

	// *ite1 = 9;
}