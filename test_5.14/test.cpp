#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

class Solution 
{
public:
    int countKeyChanges(string s) 
    {
        int ret = 0;

        for (int i = 1; i < s.size(); i++)
            ret += tolower(s[i]) == tolower(s[i - 1]) ? 0 : 1;

        return ret;
    }
};