#include "Notebook.hpp"
using namespace ariel;

void Notebook::write(int page,  int row,  int column, Direction d ,string const& str){
    if(column > MAX_COLUMN || str.length() > MAX_COLUMN  || row < 0 || column < 0 || page < 0 || str.length() < 0){
        __throw_invalid_argument("page , row , column str.length must be >= 0. \n Make sure the column and the string less than 100.");
    }

}
string Notebook::read(int page,int row,  int column, Direction d , int length){
    if(column > MAX_COLUMN || length > MAX_COLUMN || row < 0 || column < 0  || page < 0 || length < 0){
        __throw_invalid_argument("page , row , column str.length must be >= 0. \n Make sure the column and the string less than 100.");
    }
    if(d == Direction::Horizontal && column + length >= MAX_COLUMN){
        __throw_invalid_argument("page , row , column str.length must be >= 0. \n Make sure the column and the string less than 100.");
    }
    return "notebook-a";
}
void Notebook::erase(int page,  int row, int column,Direction d ,int length){
    if(column > MAX_COLUMN || length > MAX_COLUMN || row < 0 || column < 0  || page < 0 || length < 0){
        __throw_invalid_argument("page , row , column str.length must be >= 0. \n Make sure the column and the string less than 100.");
    }
}
void Notebook::show(int page){

}