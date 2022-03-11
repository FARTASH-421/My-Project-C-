//***********************
// ====>>> Game X and O 
//*******************************
#include <iostream>
using namespace std;
char board[3][3];


void showInstructions() 
{ 
    printf("\n\t\t\t  Tic-Tac-Toe\n\n"); 
      
    printf("\t\t\t  1 | 2  | 3  \n"); 
    printf("\t\t\t--------------\n"); 
    printf("\t\t\t  4 | 5  | 6  \n"); 
    printf("\t\t\t--------------\n"); 
    printf("\t\t\t  7 | 8  | 9  \n\n"); 
      
    printf("-\t-\t-\t-\t-\t-\t-\t-\t-\t-"); 
    cout<<endl<<endl;
  
    return; 
} 

void drawBoard()
{
	cout<<endl;
	cout<<"\t\t\t\t\t\t"<<" "<<board[0][0]<<" | "<<board[0][1]<<" | "<<board[0][2]<<" "<<endl;
	cout<<"\t\t\t\t\t\t"<<"-----------\n";
	cout<<"\t\t\t\t\t\t"<<" "<<board[1][0]<<" | "<<board[1][1]<<" | "<<board[1][2]<<" "<<endl;
	cout<<"\t\t\t\t\t\t"<<"-----------\n";
	cout<<"\t\t\t\t\t\t"<<" "<<board[2][0]<<" | "<<board[2][1]<<" | "<<board[2][2]<<" "<<endl;
	cout<<endl;
}



bool placeMarker(int slot)
{
	
	for (int i=0;i<9;i++){
	int row= slot / 3;
		int col;
	if(slot%3==0) {
			row = row -1;
			col= 2;
	}

	else col = (slot%3)-1;
		if(board[row][col] != 'x' && board[row][col] != 'o') {
		board[row][col]= current_marker;
		return true;
		}
		else return false;
		
	}
}

void swap_player_and_marker()
{
	
	if(current_marker == 'x'){
		current_marker= 'o';
	} 
	else current_marker = 'x';
	
	if(current_player== 1){
		current_player =2;
	} 
	else current_player= 1;
}


char winner(){
	for(int i=0; i<3;i++){
		// rows
		if(board[i][0] == board[i][1] && board[i][1] == board[i][2]) return board[i][0];
		//col
			if(board[0][i] == board[1][i] && board[1][i] == board[2][i]) return board[0][i];
		
		}
		//current_player
	if(board[0][0]== board[1][1] && board[1][1]== board[2][2]) return board[0][0];
	if(board[0][2]== board[1][1] && board[1][1]== board[2][0]) return board[0][2];
	
	return 0;
}
	

int main()
{

	return 0;
	
}
