#include <iostream>
#include <stdlib.h>
using namespace std;

//for(int vi = 0; int vi == 8; int vi = vi+1;){
string board[9] = {"    ","    ","    ","    ","    ","    ","    ","    ","    "};
//}
int numMoves = 0;
string pos = "  X ";
int main() {

 		cout <<" 0  |  1 | 2  \n";
		cout <<"--------------\n";
		cout <<" 3  |  4 | 5  \n";
		cout <<"--------------\n";
		cout <<" 6  |  7 | 8  \n";

		while(numMoves<9){
			bool correct = false;

			while(correct==false){
				cout <<"type in a cordinate.\n";
				int loc;
				cin >> loc;
				if(loc ==10){
                        return 0;
                }
				if(loc <= 8 && loc>=0){
					if(  !(board[loc]==("  X ")  &&  !(board[loc]==("  O ") ))) {
						correct=true;
						board[loc]=pos;
					}

				}

			}
			cout <<"\n";
			cout <<"\n";
			cout <<board[0] << "|" << board[1] << "|" << board[2]<<"\n";
			cout <<"---------------\n";
			cout <<board[3] << "|" << board[4] << "|" << board[5]<<"\n";
			cout <<"---------------\n";
			cout <<board[6] << "|" << board[7] << "|" << board[8]<<"\n";
			cout <<"\n";
			cout <<"\n";
			cout <<" 0  |  1 | 2  \n";
			cout <<"--------------\n";
			cout <<" 3  |  4 | 5  \n";
			cout <<"--------------\n";
			cout <<" 6  |  7 | 8  \n";
			numMoves = numMoves +1;
			cout <<"\n";
			cout <<"\n";
			if (pos==("  X ")){
				pos = "  O ";
			}
			else if (pos==("  O ")){
				pos = "  X ";
			}
			correct=false;
			while(correct==false){
				int random  = rand() % 9 + 0;
				int loc = random;
				if(loc <= 8 && loc>=0){
					if(  !(board[loc]==("  X ")  &&  !(board[loc]==("  O "))))  {

						correct=true;
						board[loc]=pos;
					}

				}

			}
			cout <<board[0] << "|" << board[1] << "|" << board[2]<<"\n";
			cout <<"---------------"<<"\n";
			cout <<board[3] << "|" << board[4] << "|" << board[5]<<"\n";
			cout <<"---------------\n";
			cout <<board[6] << "|" << board[7] << "|" << board[8]<<"\n";

			cout <<"\n";
			cout <<"\n";
			cout <<" 0  |  1 | 2  \n";
			cout <<"--------------\n";
			cout <<" 3  |  4 | 5  \n";
			cout <<"--------------\n";
			cout <<" 6  |  7 | 8  \n";
			numMoves = numMoves +1;
			if (pos==("  X ")){
				pos = "  O ";
			}
			else if (pos==("  O ")){
				pos = "  X ";
			}
		}
	}

