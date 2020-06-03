#include <iostream>
#include <vector>

using namespace std;

struct EuroMillionsBet {
    vector<unsigned> mainNumbers;
    vector<unsigned> luckyStars;
};

void readBet(EuroMillionsBet &playerBet) {
    unsigned num;
    for (int i = 0; i < 5; i++) {
        cout << "Enter the " << i+1 << " main number between 1 to 50: ";
        cin >> num;
        playerBet.mainNumbers.push_back(num);
    }
    unsigned star;
    for (int i = 0; i < 2; i++) {
        cout << "Enter the " << i+1 << " lucky star between 1 to 12: ";
        cin >> star;
        playerBet.luckyStars.push_back(star);
    }
}

void generateRandomKey(EuroMillionsBet &randomBet){
    for(int i=0;i<5;i++){
        randomBet.mainNumbers.push_back(rand()%50 + 1);
    }
    for(int i=0;i<2;i++){
        randomBet.luckyStars.push_back(rand()%12 + 1);
    }
}

int main() {
    EuroMillionsBet playerBet, randomBet, res;
    readBet(playerBet);
    generateRandomKey(randomBet);
    cout << "These are the main numbers: " << endl;
    for (int i = 0; i < randomBet.mainNumbers.size(); i++) {
        cout << randomBet.mainNumbers[i] << endl;
    }
    cout << "These are the lucky star numbers: " << endl;
    for (int i = 0; i < randomBet.luckyStars.size(); i++) {
        cout << randomBet.luckyStars[i] << endl;
    }
}
