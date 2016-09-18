#pragma once

#include <iostream>
#include "lib.h"

using namespace std;

int main() {
	GpuUtil::Rectangle rect(0);
	GpuUtil::Triangle trgl(1);
	rect.set_values(4, 5);
	trgl.set_values(4, 5);
	cout << rect.area() << '\n';
	cout << trgl.area() << '\n';
	system("pause");
	return 0;
}
