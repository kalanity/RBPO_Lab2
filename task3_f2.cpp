#include <cmath>

module student_1bib21043.Lab2.Variant6.Task3;

double RBPO::Lab2::Variant6::Task3::f2(double x) {
	return (x <= 3) ? (x * x + 3 * x + 9) : (sin(x) / (x * x - 9));
}