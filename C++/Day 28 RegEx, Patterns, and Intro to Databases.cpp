#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

bool isBiggerStr(string a, string b){
    int lenA = a.length(), lenB = b.length();
    int len = (lenA<lenB)*(lenA-lenB)+lenB;
    for(int i=0;i<len;i++){
        if(a[i]<b[i])
            return false;
        else if(a[i]>b[i])
            return true;
    }
    return true;
}

int main()
{
    string N_temp;
    getline(cin, N_temp);

    int N = stoi(ltrim(rtrim(N_temp)));
    vector<string> nameArr;
    for (int N_itr = 0; N_itr < N; N_itr++) {
        string first_multiple_input_temp;
        getline(cin, first_multiple_input_temp);

        vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

        string firstName = first_multiple_input[0];

        string emailID = first_multiple_input[1];
        
        size_t pos = emailID.find("@gmail.com");
        
        if(pos!=string::npos){
            nameArr.push_back(firstName);
        }
    }
    for(int i=0;i<nameArr.size()-1;i++){
        for(int j=i+1;j<nameArr.size();j++){
            if(isBiggerStr(nameArr[i], nameArr[j])){
                string temp = nameArr[i];
                nameArr[i] = nameArr[j];
                nameArr[j] = temp;
            }
        }
    }
    
    for(int i=0;i<nameArr.size();i++){
        cout << nameArr[i] << endl;
    }

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
