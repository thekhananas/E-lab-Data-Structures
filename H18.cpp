#include <iostream>
using namespace std;

int main()
{
    int N, Q;
    cin >> N >> Q;
    string str;
    cin >> str;
    int count[N][26];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < 26; j++)
            count[i][j] = 0;
    for (int i = 0; i < N; i++)
    {
        count[i][str[i] - 'a']++;
        if (i != 0)
            for (int j = 0; j < 26; j++)
                count[i][j] += count[i - 1][j];
    }
    while (Q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        int arr[26] = {0};
        if (l == 0)
            for (int i = 0; i < 26; i++)
                arr[i] = count[r][i] % 26;
        else
            for (int i = 0; i < 26; i++)
                arr[i] = (count[r][i] - count[l - 1][i]) % 26;
        string answer;
        for (int i = 0; i < 26; i++)
            answer += arr[i] + 'a';
        ///Suffix Length
        for (int i = 25; i >= 0; i--)
        {
            bool flag = true;
            for (int j = 26 - i, k = 0; j < 26; j++, k++)
                if (answer[j] != answer[k])
                {
                    flag = false;
                    break;
                }
            if (flag == true)
            {
                if (i == 0)
                    cout << "None";
                for (int j = 0; j < i; j++)
                    cout << answer[j];
                break;
            }
        }
        cout << endl;
    }

    return 0;
}