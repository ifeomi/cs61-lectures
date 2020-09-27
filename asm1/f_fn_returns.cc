#include <cstdlib>

const char* char_star_function() {
    const char* hello_world = "Hello world";
    return hello_world;
}

int int_function() {
    int sixtyone = 61;
    return sixtyone;
}

int main() {
    char_star_function();
    int_function();
}