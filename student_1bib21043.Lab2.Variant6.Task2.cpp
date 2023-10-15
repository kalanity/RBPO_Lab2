#include <cmath>

module student_1bib21043.Lab2.Variant6.Task2;

double a(int i) {
	return pow(-1, i) * (1 - pow((i + 1), 2) / pow((i + 2), 2));
}

double RBPO::Lab2::Variant6::Task2::f1(double x) {
	return cos(x) + cos(2 * x) + cos(6 * x) + cos(7 * x);
}

double RBPO::Lab2::Variant6::Task2::f2(double x) {
	if (x <= 3) {
		return x * x + 3 * x + 9;
	}
	else {
		return sin(x) / (x * x - 9);
	}
}

double RBPO::Lab2::Variant6::Task2::f3(int n) {
	double sum = 0.0;
	int i = 0;
	while (i <= n) {
		sum += a(i);
		i++;
	}
	return sum;
}

double RBPO::Lab2::Variant6::Task2::f4(double eps) {
	double sum = 0.0, term = 0.0, curr = a(0);
	int i = 1;
	while (fabs(curr - term) > eps) {
		sum += curr;
		term = curr;
		curr = a(i);
		i++;
	}
	return sum;
}