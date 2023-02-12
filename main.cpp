#include <iostream>
#include"VariableTemplateClass.h"

int main() {
	
	SomeType<int, double, float>SUM;
	SUM.sum_all(9, 3.14, 5.86f);

	return 0;
}