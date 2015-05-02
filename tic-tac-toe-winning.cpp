#include <iostream>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

string board[9] = {"    ","    ","    ","    ","    ","    ","    ","    ","    "};

bool won(){
    if(board[0]=="  X "){

        if(board[3]=="  X "){
            if(board[6]=="  X "){
                cout <<"You win!";
                return true;
            }
        }

        else if(board[1]=="  X "){
            if(board[2]=="  X "){
                cout <<"You win!";
                return true;
            }
        }

    } else {

    }
    if(board[4]=="  X "){

        if(board[1]=="  X "){
            if(board[7]=="  X "){
                cout <<"You win!";
                return true;
            } else {
                return false;
            }
        }

        else if(board[3]=="  X "){
            if(board[5]=="  X "){
                cout <<"You win!";
                return true;
            } else {
                return false;
            }
        }

        else if(board[0]=="  X "){
            if(board[8]=="  X "){
                cout <<"You win!";
                return true;
            }
        }
        else if(board[2]=="  X "){
            if(board[6]=="  X "){
                cout <<"You win!";
                return true;
            }
        }
    } else {
        if(board[5]=="  X "&&board[2]=="  X "&&board[8]=="  X ")
        {
            cout <<"You win!";
            return true;
        }
        else if(board[6]=="  X "&&board[7]=="  X "&&board[8]=="  X ")
        {
            cout <<"You win!";
            return true;
        }
        else {
            return false;
        }
    }
}

bool cwon() {

    if(board[0]=="  O "){

        if(board[3]=="  O "){
            if(board[6]=="  O "){
                cout <<"You lose.";
                return true;
            }
        }

        else if(board[1]=="  O "){
            if(board[2]=="  O "){
                cout <<"You lose.";
                return true;
            }
        }

    }
    if(board[4]=="  O "){

        if(board[1]=="  O "){
            if(board[7]=="  O "){
                cout <<"You lose.";
                return true;
            }
        }

        else if(board[3]=="  O "){
            if(board[5]=="  O "){
                cout <<"You lose.";
                return true;
            }
        }

        else if(board[0]=="  O "){
            if(board[8]=="  O "){
                cout <<"You lose.";
                return true;
            }
        }
        else if(board[2]=="  O "){
            if(board[6]=="  O "){
                cout <<"You lose.";
                return true;
            }
        }
    } else {
        if(board[5]=="  O "&&board[2]=="  O "&&board[8]=="  O ")
        {
            cout <<"You lose.";
            return true;
        }
        else if(board[6]=="  O "&&board[7]=="  O "&&board[8]=="  O ")
        {
            cout <<"You lose.";
            return true;
        }
        else {
            return false;
        }
    }
}
int seed = 67.67;
//for(int vi = 0; int vi == 8; int vi = vi+1;){
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
				if(loc ==11){
                        cout <<won();
                        cout <<cwon();
                }
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
			if(won()==true){
                return 0;
			}
			if(cwon()==true){
                return 0;
			}
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
                srand (seed);
				int random  = rand() % 9 + 0;
				int loc = random;
				if(loc <= 8 && loc>=0){
					if(  !(board[loc]==("  X ")  &&  !(board[loc]==("  O "))))  {

						correct=true;
						board[loc]=pos;
					}
                    seed++;
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
			if(won()==true){
                return 0;
			}
			if(cwon()==true){
                return 0;
			}
			numMoves = numMoves +1;
			if (pos==("  X ")){
				pos = "  O ";
			}
			else if (pos==("  O ")){
				pos = "  X ";
			}
		}
		cout <<"It's a draw";
	}

