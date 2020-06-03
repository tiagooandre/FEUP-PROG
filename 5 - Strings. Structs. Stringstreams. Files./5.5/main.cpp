#include <iostream>
#include <vector>

using namespace std;

string convert_to_upper(string name) {
    string res = "";
    for (int i = 0; i < name.size(); i++) {
        if (name[i] >= 65 && name[i] <= 92) { //Se a letra for maiúscula
            res += name[i];
        } else if (name[i] == ' ') {
            res = name[i];
        } else if (name[i] >= 97 && name[i] <= 122) {
            name[i] = name[i] - 32;
            res += name[i];
        }
    }
    return res;
}

string remove_spaces(string name) {
    bool previous_space = true;

    name.erase(std::remove_if(name.begin(), name.end(), [&previous_space](unsigned char curr) {
        bool r = std::isspace(curr) && previous_space;
        previous_space = std::isspace(curr);
        return r;
    }), name.end());
    return name;
}

string remove_spaces_beg_end(string name){
    int startName = name.find_first_not_of(' '); //índice do primeiro não espaço
    name = name.substr(startName); //substring que vai desde o primeiro não espaço até ao fim. ELIMINA OS PRIMEIROS ESPAÇOS.
    int endName = name.find_last_not_of(' '); //encontrar o índice do ultimo char q n é espaço
    name = name.substr(0, endName + 1); //ELIMINAR ESPAÇOS DO FIM
    return name;
}

string remove_des(string name){
    vector<string> v = {" DE ", " DO ", " DA ", " DOS ", " DAS ", " E "};
    for (const string& par : v) {
        size_t pos = name.find(par);
        while (pos != string::npos) {
            name.replace(pos, par.size(), " ");
            pos = name.find(par, pos);
        }
    }
    return name;
}

string normalizeName(string name){
    string result;
    result = convert_to_upper(name);
    result = remove_des(result);
    result = remove_spaces(result);
    result = remove_spaces_beg_end(result);
    return result;
}

int main() {
    string name;
    cout << "Enter a name: "; getline(cin,name);
    cout << "The normalized name is: " << normalizeName(name);
    return 0;
}