#include <iostream>
#include <string>

using std::string, std::cin, std::cout, std::endl;

class Screen{
public:
    using pos = std::string::size_type;

    //constructors
    Screen():cursor{0},height{0},width{0},contents{"0"}{}
    Screen(pos cur, pos h, pos w, string cont):cursor{cur},height{h},width{w},contents{cont}{}
    //methods
    Screen &move(pos r, pos c);
    // get the character at the cursor
    char get() const{ return contents[cursor]; }
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    string contents;
};

inline Screen &Screen::move(pos r, pos c){
 pos row = r * width;
 cursor = row + c ; 
 return *this; 
}

int main(){
    // Screen screen1;
    // cout << screen1.cursor << " " << screen1.height << " "
    //      << screen1.width << " " << screen1.contents << endl;
    // string s1{5 * 2, "c"};
    // cout << s1;
}