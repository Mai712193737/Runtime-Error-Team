#include <iostream>
#include <string>
using namespace std;

/*Run-length encoding (RLE) is a compression method where consecutive occurrences of the same data are replaced with a count of the repetition. For example, the string "AAAABBBCCDAA" would be encoded as "4A3B2C1D2A".

However, Farid has a unique twist to his RLE algorithm: If a character occurs more than 9 consecutive times, he considers it a different character. For example, "ZAAAAAAAAAAAABB" would be encoded into "1Z9A3A2B".

Farid wanted to test this modified RLE encoding, so he wrote some random letters and encoded them. However, after encoding, the number of letters (without the numbers) became n
. Farid forgot how to decode them, so he asked for your help.

Given the n
 encoded characters, your task is to print the original sequence.

Input
The first line contains an integer n
 (1≤n≤105)
, the number of letters in the encoded sequence.
The second line contains n
 uppercase letters, representing the encoded sequence, each letter follows a number representing its count.
Output
Print the original sequence before it was encoded.*/