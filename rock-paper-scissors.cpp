#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
		//Scanner input  = new Scanner (System.in);

		while(true){
			//variables
			int random  = rand() % 3 + 1;

			string rps1 = "3.14159";
			string rps2 = "rock";


			//set rps2 to
			if( 0 == random){
				rps2 = "rock";
			}

			if( 1 == random){
				rps2 = "paper";
			}
			if( 2 == random){
				rps2 = "scissors";
			}
			//check who won
			/*JOptionPane.showMessageDialog(random);
			JOptionPane.showMessageDialog(rps2);*/

			while( !(rps1==("rock"))&& !(rps1==("paper"))&& !(rps1==("scissors"))){

                cout << "Rock, Paper, or Scissors?  Type 'end' to end the game.\n";
				cin >> rps1;
				if(rps1==("end")){
					return 0;
				}
			}



			if(rps1==("rock")){
				if(rps2==("paper")){
					cout <<"Computer wins!";
				}
				if(rps2==("rock")){
					cout << "It's a tie!";
				}
				if(rps2==("scissors")){
					cout <<"Human wins";
				}
			}

			if(rps1==("paper")){
				if(rps2==("paper")){
					cout <<"It's a tie!";
				}
				if(rps2==("rock")){
					cout <<"Human wins";
				}
				if(rps2==("scissors")){
					cout <<"Computer wins!";
				}
			}

			if(rps1==("scissors")){
				if(rps2==("paper")){
					cout <<"Human wins";
				}
				if(rps2==("rock")){
					cout <<"Computer wins!";
				}
				if(rps2==("scissors")){
					cout <<"It's a tie!";
				}
			}

			cout <<"\nHuman chose: " << rps1 << "\nComputer chose: " << rps2 << "\n\n";
		}
	}


