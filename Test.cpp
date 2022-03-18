#include "doctest.h"
#include "Notebook.hpp"
#include <iostream>
#include <algorithm>
#include <string>

using namespace ariel;

TEST_CASE("Good Notebook"){
    Notebook a;
    CHECK(a.read(0,0,0,Direction::Horizontal,22) == "______________________");
    a.write(0,0,0,Direction::Horizontal,"first line of notebook");    
    CHECK(a.read(0,0,0,Direction::Horizontal,22) == "first line of notebook");
    CHECK(a.read(0,0,0,Direction::Horizontal,25) == "first line of notebook___");
    a.erase(0,0,0,Direction::Horizontal,6);
    CHECK(a.read(0,0,0,Direction::Horizontal,25) == "~~~~~~line~~~~notebook___");
    a.erase(0,0,10,Direction::Horizontal,4);

}