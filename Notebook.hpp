#include "Direction.hpp"
#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;
namespace ariel{
    class Notebook{
        private:
        public:
        static void write(unsigned int page, unsigned int row, unsigned int column, Direction d , string str);
        static string read(unsigned int page, unsigned int row, unsigned int column, Direction d ,unsigned int length);
        static void erase(unsigned int page, unsigned int row, unsigned int column,Direction d ,unsigned int length);
        void show(unsigned int page);
    };
}