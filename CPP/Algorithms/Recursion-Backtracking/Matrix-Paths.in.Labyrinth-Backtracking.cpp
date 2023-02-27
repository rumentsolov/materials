#include <iostream>
#include <sstream>
#include <string>

// Searchin path for 'e' , '*' is wall

int maxRow = 0, maxCol = 0;
void print(char** lab , int rows, int cols);
void FindPaths(char** lab , int row, int col , std::string directions, char direction);

int main(){
    int rows, cols;
    std ::cin >> rows >> cols;
    maxRow = rows, maxCol = cols;

    char** lab = new char* [rows];
    for (int i = 0; i < cols; i++) lab[i] = new char[cols];


    for (int i = 0; i < rows; i++) 
    {
        std::string colElements;
        std::cin >> colElements;

        for (int k = 0; k < cols; k++) 
        lab[i][k] = colElements[k];
    }

    std::string directions;
    char direction;

    FindPaths(lab, 0, 0 , directions, direction );


   //print(lab , rows, cols);

    lab = new char *;
    delete lab;   
    lab = NULL;// Using NULL before deleting it, seems to work. 
    delete lab;

    return 0;
}



void FindPaths(char** lab , int row, int col , std::string directions, char direction)
{
    if (row < 0 || row >= maxRow|| col < 0 || col >= maxCol) return; // Validates row & col are existing

    if (lab[row][col] == '*' || lab[row][col] == 'v')
    {
        return; // validates if there is wall
    }

    directions += direction;

    if (lab[row][col] == 'e') // Validates the end of the matrix
    {

        for(int i; i < directions.size(); i++) std::cout<<directions[i]; std::cout << std::endl;

        directions.pop_back();
        return;
    }

    lab[row][col] = 'v'; // this flag tells that our algorigthm have passed already true that cell

    FindPaths(lab, row , col - 1, directions, 'L'); // LEFT will search first
    FindPaths(lab, row , col + 1, directions, 'R'); // RIGHT will search second
    FindPaths(lab, row - 1, col , directions, 'U'); // UP will search third
    FindPaths(lab, row + 1, col, directions, 'D'); // DOWN will search fourth


    lab[row][col] = '-'; // this removes the flag of that cell
    directions.pop_back();
}

void print(char** lab , int rows, int cols){
 for (int i = 0; i < rows; i++) 
    {
        for (int k = 0; k < cols; k++) 
        std::cout << lab[i][k] ;
        std::cout << std::endl;
    }
}