#include "data_storage.h"


void Load(byte* acc, byte value, byte* stat) {
    if (value > 255) {
        *stat = OVERFLOW;
        exit(1);
    }

    if (value < 0) {
        *stat = OVERFLOW;
        exit(1);
    }

    if (value == 0) {
        *stat = ZERO_ACC;
    }

    *acc = value;
}

void Store(byte* mem, byte address, byte acc) {
    mem[address] = acc;
}