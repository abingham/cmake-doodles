#include <iostream>
#include <vector>
#include <fancy/fancy.h>

int main(int, char**) {
    std::vector xs {1.2, 2.3, 3.4, 4.5, 5.6};
    for (auto x: xs) {
        std::cout << x << "\n";
    }
    fancy::fancy_thing();
    return 0;
}
