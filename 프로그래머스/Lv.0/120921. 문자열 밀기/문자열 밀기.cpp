#include <string>
#include <vector>

using namespace std;

void push_right(string& A)
{
    string::iterator iter = A.begin();
    
    string temp = *(A.end()-1)+A;
    temp.erase(temp.end() - 1);
    A = temp;
}

int solution(string A, string B) {
    int answer = 0;

    while (answer != A.length())
    {
        if (A == B)
        {
            return answer;
            break;
        }
        else
        {
            push_right(A);
        }

        answer++;
    }

    if(answer==A.length())
        return -1;
}