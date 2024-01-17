#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int i=1;
    string str = to_string(num);
    for(auto a : str)
    {
        if(a==k+48)
            return i;
        i++;
    }
    return -1;
}