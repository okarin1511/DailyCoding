#include <bits/stdc++.h>
using namespace std;

string RevString(string s[], int l)
{
    if (l % 2 == 0)
    {
        int j = l / 2;
        while (j <= l - 1)
        {
            string temp;
            temp = s[l - j - 1];
            s[l - j - 1] = s[j];
            s[j] = temp;
            j += 1;
        }
    }
    else
    {
        int j = (l / 2) + 1;

       while (j <= l - 1)
        {
            string temp;
            temp = s[l - j - 1];
            s[l - j - 1] = s[j];
            s[j] = temp;
            j += 1;
        }
    }

    string S = s[0];

   for(int i = 1; i < 9; i++)
    {
        S = S + " " + s[i];
    }
    return S;
}

int main()
{
    string s = "getting good at coding "
               "needs a lot of practice";

    string words[] = { "getting", "good", "at",
                       "coding", "needs", "a",
                       "lot", "of", "practice"};

    cout << RevString(words, 9) << endl;

    return 0;
}