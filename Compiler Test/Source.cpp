#include <iostream>
#include "Header.h"

using namespace std;

int main() {

	__if_exists(Test::name) {
		cout << "It has name" << endl;
	}

	__if_exists(Test::func_2) {
		cout << "It has func_2" << endl;
	}


}