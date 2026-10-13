#include <iostream>
using namespace std;

class Player {
private:
    int score;   // data members
    int health;

public:
    // Setter functions
    void setscore(int s) {
        cout << "Score set kiya ja rha hai\n";
        score = s;
    }

    void sethealth(int h) {
        cout << "Health setup\n";
        health = h;
    }

    // Getter functions
    int getscore() {
        return score;
    }

    int gethealth() {
        return health;
    }
};

int main() {
    Player amit;
    amit.setscore(20);
    amit.sethealth(50);

    cout << "Score: " << amit.getscore() << endl;
    cout << "Health: " << amit.gethealth() << endl;

    return 0;
}

