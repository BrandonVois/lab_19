#include <iostream>
#include <iomanip>
using namespace std;

// Declare constant DIM = 7
const int DIM = 7;


// Inserte prototypes here
void createBoard(char grid[DIM][DIM],int bzize);
void printBoard1(char grid[DIM][DIM],int bzize);
void printBoard2(char grid[DIM][DIM],int bzize);




int main()
{
	// Declare a two-dimensional array (using the constant) to hold single characters
char grid[DIM][DIM];
	// Declare variable bsize to hold a whole number
int bsize;
	// Declare variable answer to hold a character
char answer;
	// Use a do-loop to allow the user to try again
do{
  cout<<"Enter the size of the board[1,7]:  ";
  cin>>bsize;
  if(bsize<1 || bsize>7)
  {
    cout<<"invalid entry"<<endl;
  } 
  else{
    createBoard(grid,bsize);
    printBoard1(grid,bsize);
    cout<<endl;
    printBoard2(grid,bsize);

  }

  cout<<"Do you wanna try again? ";
  cin>>answer;
}
while(answer=='Y'||answer =='y');
{

}
		// Prompt the user "Please enter the size of the board [1-7]: "

		// Get the size and store it in bsize

		// Check the input stream. If it is invalid, display error message "Invalid entry" and jump out of the loop

		// Check if bsize is within the range. If it is, call the functions

			// Call the function to create the checkerboard

			// Call the function to print the checkerboard

			// Call the function to print the rotated checkerboard

		// Otherwise, display error message "Invalid size"

		// Prompt the user "Do you want to try again [y-n]?: "

		// Get the answer and store in answer

		// As long as the answer is 'y' (in upper or lower case), keep looping

	
	return 0;
}


// Function definitions

// createBoard(): Receives the two-dimensional array and the size of the board (quantity of rows and columns)
// Using nested loops creates the board according to specifications: starting with 'A' inserts
// the letters in the array separated by a blank box
void createBoard(char grid[DIM][DIM],int bzize)
{
  int row;
  int column;
  int x=65;
for(row=0;row<bzize;row++){

for(column=0;column<bzize;column++){
  
  if (column==0)
  {
   continue;
  }
  else if(2%column==1)
  {
    grid[row][column]=' ';
  }
  else
{
grid[row][column]=x;
++x;
}
}
}}







// printBoard1(): Receives the two-dimensional array and the size of the board (quantity of rows and columns)
// Using nested loops prints the board
void printBoard1(char grid[DIM][DIM],int bzize)
{

int i,j;

for(i=0;i<bzize;i++){
 
for(j=0;j<bzize;j++){
 cout<<grid[i][j];
  
  }

  cout<<endl;
  }
  }







// printBoard2(): Receives the two-dimensional array and the size of the board (quantity of rows and columns)
// Using nested loops prints the board rotated
void printBoard2(char grid[DIM][DIM],int bzize)
{
int i,j;
for(i=0;i<bzize;i++){

for(j=0;j<bzize;j++){
 cout<<grid[j][i];
}
cout<<endl;
}}