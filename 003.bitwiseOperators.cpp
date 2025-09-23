#include<iostream>

using namespace std;

int main(){
    int a = 5;  // Binary: 0101
    int b = 3;  // Binary: 0011

    cout << "a & b = " << (a & b) << endl; // Bitwise AND
    cout << "a | b = " << (a | b) << endl; // Bitwise OR
    cout << "a ^ b = " << (a ^ b) << endl; // Bitwise XOR
    cout << "~a = " << (~a) << endl;       // Bitwise NOT
    cout << "a << 1 = " << (a << 1) << endl; // Left shift
    cout << "a >> 1 = " << (a >> 1) << endl; // Right shift

    return 0;
}

// Bitwise operators perform operations on the individual bits of integer types.
// They are often used in low-level programming, such as systems programming and embedded systems, where direct manipulation of bits is required.
// Common bitwise operators include AND (&), OR (|), XOR (^), NOT (~), left shift (<<), and right shift (>>).

//Bitwise OR (|): Compares each bit of two integers and returns a new integer where each bit is set to 1 if either of the corresponding bits of the operands is 1. For example, 5 | 3 results in 7 (binary 0111).
//Bitwise AND (&): Compares each bit of two integers and returns a new integer where each bit is set to 1 only if both corresponding bits of the operands are 1. For example, 5 & 3 results in 1 (binary 0001).
//Bitwise XOR (^): Compares each bit of two integers and returns a new integer where each bit is set to 1 if only one of the corresponding bits of the operands is 1. For example, 5 ^ 3 results in 6 (binary 0110).
//Bitwise NOT (~): Inverts all the bits of an integer. For example, ~5 results in -6 (in a system using two's complement representation).
//Left Shift (<<): Shifts the bits of an integer to the left by a specified number of positions, filling the rightmost bits with zeros. For example, 5 << 1 results in 10 (binary 1010). When bits are shifted out on the left, the original number is effectively multiplied by 2 for each position shifted i.e by n positions, the number is multiplied by 2^n.
//Right Shift (>>): Shifts the bits of an integer to the right by a specified number of positions. The behavior for the leftmost bits depends on whether the integer is signed or unsigned. For example, 5 >> 1 results in 2 (binary 0010). When bits are shifted out on the right, the original number is effectively divided by 2 for each position shifted i.e by n positions, the number is divided by 2^n.


// Note: The results of bitwise NOT (~) can be counterintuitive due to the way negative numbers are represented in binary (two's complement).

// 2's complement is a mathematical operation on binary numbers, and is used in computing as a method of signed number representation. In this system, positive numbers are represented as themselves in binary, while negative numbers are represented by the bitwise NOT of their absolute value plus one. This allows for simple binary arithmetic operations, as addition and subtraction can be performed without needing separate logic for positive and negative numbers.