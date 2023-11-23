# 0x14. Binary - Bit manipulation

This repository contains C programs that demonstrate the manipulation of bits and the use of bitwise operators. The programs cover various tasks related to binary operations.

## List of Programs

1. **0-binary_to_uint.c**: A function that converts a binary number to an unsigned int.

2. **1-print_binary.c**: A function that prints the binary representation of a number.

3. **2-get_bit.c**: A function that returns the value of a bit at a given index.

4. **3-set_bit.c**: A function that sets the value of a bit to 1 at a given index.

5. **4-clear_bit.c**: A function that sets the value of a bit to 0 at a given index.

6. **5-flip_bits.c**: A function that returns the number of bits needed to flip to get from one number to another.

7. **100-get_endianness.c**: A function that checks the endianness of the system (0 for big endian, 1 for little endian).

## Compilation

All programs can be compiled on Ubuntu 20.04 LTS using `gcc` with the following flags:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o <output_file>

