//Formatted Number
#include <iostream>
#include <string>

using namespace std;

string formatWithCommas(int number)
{
    string result = to_string(number); // converting number in string
    for (int i = result.size()-3; i>0; i=i-3)
    {
        result.insert(i, ",");
    }
    return result;
}

int main()
{
    int num;

    cin >> num;

    string formattedNumber = formatWithCommas(num);
    cout << formattedNumber << endl;

    return 0;
}
