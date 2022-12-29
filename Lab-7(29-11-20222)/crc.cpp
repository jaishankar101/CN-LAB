#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int xor_find(string &divident, string divisor, int start)
{
    int i = 0, new_start = -1;
    while (i != divisor.size())
    {
        divident[start + i] ^= divisor[i];
        if (divident[start + i] == '1')
            new_start = start + i;
        i++;
    }
    if (new_start == -1)
        return divident.length();
    return new_start;
}

int main()
{
    string data, divisor, divident, codeword;
    cout << "Ënter the data:";
    cin >> data;
    cout << "Ënter the divisor:";
    cin >> divisor;
    divident = codeword = data;
    for (int i = 0; i < divisor.length(); i++)
        divident = divident + '0';
    int k = 0;
    while (k < divident.length())
    {
        k = xor_find(divident, divisor, k);
    }
    for (int i = divident.length() - divisor.length() + 1; i < divident.length(); i++)
    {
        codeword = codeword + divident[i];
    }
    cout << "codeword is:" << codeword;
}