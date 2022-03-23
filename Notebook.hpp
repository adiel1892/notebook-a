#include "Direction.hpp"
#include <iostream>
#include <string>
#include <stdexcept>
#define MAX_COLUMN 100
using namespace std;
namespace ariel{
    class Notebook{
        private:
        public:
        static void write(int page, int row, int column, Direction d ,string const& str);
        static string read(int page, int row, int column, Direction d ,int length);
        static void erase(int page,int row,int column,Direction d ,int length);
        void show(int page);
    };
}