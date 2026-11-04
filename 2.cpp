#include <iostream>
#include <vector>
using namespace std;

class DynamicScores {
private:
    vector<int> scores;
    mutable int printCount{ 0 };

public:
    void add(int s) { scores.push_back(s); }
    void print() const {
        printCount++;
        cout << "View " << printCount << ": ";
        for (int s : scores) cout << s << ' ';
        cout << endl;
    }
};

int main() {
    DynamicScores s;
    s.add(90);
    s.add(75);

    const DynamicScores cs = s;
    cs.print();
    cs.print();
    cs.print();
}