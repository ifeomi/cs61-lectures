#include "hexdump.hh"
#include <cstdint>

struct example {
    const char* name1;
    char bytes[90];
    int ints[12];
    long longs[4];
    short shorts[1];
    char* bptrs[4];
    int* iptrs[4];
};

int main() {
    example e;

    e.name1 = "Name goes here";
    for (size_t i = 0; i != 90; ++i) {
        e.bytes[i] = i;
    }
    for (size_t i = 0; i != 12; ++i) {
        e.ints[i] = i;
    }
    for (size_t i = 0; i != 4; ++i) {
        e.longs[i] = i;
    }
    for (size_t i = 0; i != 1; ++i) {
        e.shorts[i] = i;
    }
    e.bptrs[0] = &e.bytes[10];
    e.bptrs[1] = &e.bytes[20];
    e.bptrs[2] = &e.bytes[30];
    e.bptrs[3] = &e.bytes[40];
    e.iptrs[0] = &e.ints[1];
    e.iptrs[1] = &e.ints[2];
    e.iptrs[2] = &e.ints[3];
    e.iptrs[3] = &e.ints[5];

    char* b4_ptr = &e.bytes[4]; // pointer to value at index 4
    char* b8_ptr = &e.bytes[8];

    printf("%p\n", b4_ptr * b8_ptr);

    uintptr_t b4_addr = (uintptr_t) b4_ptr;
    uintptr_t b8_addr = (uintptr_t) b8_ptr;

    hexdump_object(b4_ptr);
    hexdump_object(b4_addr);

    hexdump_object(*b4_ptr);

    // tell the compiler to treat the addr as a pointer to a char/int
    // then dereference it, printing 1/4 bytes
    hexdump_object(* (char *) b4_addr);
    hexdump_object(* (int *) b4_addr);

    // hexdump_object(e);
}
