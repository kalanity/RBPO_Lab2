module;
#include <math.h>
export module student_1bib21043.Lab2.Variant6.Task4:a;

double a(int i) {
    return pow(-1, i) * (1 - pow((i + 1), 2) / pow((i + 2), 2));
}