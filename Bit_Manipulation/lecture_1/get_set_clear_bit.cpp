#include <iostream>
#include <string>
using namespace std;
int setBit(int num, int i)
{
    // Sets the ith bit and return
    // the updated value
    return num | (1 << i);
}
int clearBit(int num, int i)
{

    // Create the mask for the ith
    // bit unset
    int mask = ~(1 << i);

    // Return the updated value
    return num & mask;
}
bool getBit(int num, int i)
{
    // Return true if the bit is
    // set. Otherwise return false
    return ((num & (1 << i)) != 0);
}
int main() {
    int num = 5; // 0101 in binary
    int i = 0;
    int updatedNum = setBit(num, i);
    cout << "Updated number: " << updatedNum << endl; // Should print 7 (0111 in binary)

    int clearedNum = clearBit(updatedNum, i);
    cout << "Cleared number: " << clearedNum << endl; // Should print 5 (0101 in binary)

    bool isBitSet = getBit(num, i);
    cout << "Is bit " << i << " set? " << (isBitSet ? "Yes" : "No") << endl; // Should print No
    return 0;
}
