// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Solution {
public:
    int addDigits(int num) {
       num = (num-1)%9+1;
       return num;
    }
};

int main() {
    Solution S1;
   cout<<S1.addDigits(38);
    return 0;
}
