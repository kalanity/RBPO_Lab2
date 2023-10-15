module;
#include <math.h>
export module student_1bib21043.Lab2.Variant6.Task4:f2;

namespace RBPO::Lab2::Variant6::Task4 {
    export double f2(double x) {
        return (x <= 3) ? (x * x + 3 * x + 9) : (sin(x) / (x * x - 9));
    }
}