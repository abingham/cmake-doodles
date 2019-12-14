#include <pybind11/pybind11.h>

namespace py=pybind11;

namespace {
    int square(int x) {
        return x * x;
    }
}

PYBIND11_MODULE(mymod, mod) {
    mod.def("square", ::square);
}
