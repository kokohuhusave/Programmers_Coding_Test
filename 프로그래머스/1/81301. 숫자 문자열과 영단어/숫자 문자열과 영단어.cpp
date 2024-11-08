
#include <string>
#include <vector>
#include <map>

using namespace std;

map<string, int> convert;

int solution(string s) {
    string answer = "";

    convert["zero"] = 0;
    convert["one"] = 1;
    convert["two"] = 2;
    convert["three"] = 3;
    convert["four"] = 4;
    convert["five"] = 5;
    convert["six"] = 6;
    convert["seven"] = 7;
    convert["eight"] = 8;
    convert["nine"] = 9;

    string temp = "";
    for (char c : s) {
        if (isdigit(c)) answer += c;
        else temp += c;

        if (convert.find(temp) != convert.end()) {
            answer += to_string(convert[temp]);
            temp = "";
        }
    }

    return stoi(answer);
}