#include <iostream>
#include <string>
using namespace std;

bool IsOrNot(char* s, size_t i)
{
    if (s[i] == '*' && s[i + 1] == '*' && s[i + 2] == '*')
        return true;
    else
        if (i < strlen(s) - 2)
            return  IsOrNot(s, ++i);
        else
            return false;
}

char* change(char* s, char* sNew, size_t l, size_t i)
{
    if (i < strlen(s) - 2)
    {
        if (s[i] == '*' && s[i + 1] == '*' && s[i + 2] == '*')
        {
            sNew[l] = '!';
            sNew[l + 1] = '!';
            l += 2;
            i += 2;
        }
        else
        {
            sNew[l] = s[i];
            ++l;
        }
        return   change(s, sNew, l, ++i);
    }
    else
    {
        sNew[l++] = s[i++];
        sNew[l++] = s[i];
        sNew[l] = '\0';
        strcpy_s(s, strlen(sNew) + 1, sNew);
        return s;
    }
}

int main()
{
    char* s = new char[101];
    char* sNew = new char[101];
    cout << "Enter string:" << endl;
    cin.getline(s, 100);
    if (IsOrNot(s, 0))
    {//забрав t
        cout << change(s, sNew, 0, 0);
    }
    delete[] sNew;
    delete[] s;
    cout << endl;
    return 0;
}