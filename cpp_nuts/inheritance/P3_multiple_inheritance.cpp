//   Multiple Inheritance
//   Child Class with more than one Parent Classes.
// there is an ambiguity problem if parent classes share methods with same name.
#include <iostream>

using namespace std;

// Rupesh is both a Youtuber and an Engineer
class Youtuber{
    int x;
public:
    Youtuber(int x):x{x} { cout << "Youtuber" << endl; }
    void work() { cout << "Working on youtube" << endl; }
};
class Engineer{
    int y;
public:
    Engineer(int y):y{y} { cout << "Engineer" << endl; }
    void work() { cout << "Working as engineer" << endl; }
};

class Rupesh: public Youtuber, public Engineer{
public:
    Rupesh(int x,int y): Youtuber(x), Engineer(y) { cout << "Rupesh" << endl; }
};

int main() {
    Rupesh r1(1,2);

    // // ambiguity problem
    // r1.work();

    // // solution 1
    // r1.Youtuber::work();
    // r1.Engineer::work();

    // // solution 2 (object slicing)
    // Engineer eng = r1;
    // eng.work();
    // Youtuber yt = r1;
    // yt.work();

    // // soution 3 (static cast) ??
    // (static_cast<Engineer>(r1).work());
    // (static_cast<Engineer>(r1).work());

    return 0;
}