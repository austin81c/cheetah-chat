#include "client.h"
using namespace std;

const string CHEETAH =  "\U0001F406";
int menu_state = 1;

//Usage/helper function
int usage() {
  cout << "--arg1: server IP address" << endl;
  cout << "--arg2: server port [optional]" << endl;
  cout << CHEETAH << endl;
  return 0;
}

void start_server() {

}

int main(int argc, char* argv[]) {

	//https://www.geeksforgeeks.org/socket-programming-cc/

	//Verify server IP is present
  if (argc < 2) {
    cerr << "CHEETAH ERROR:" << argv[0] << ": Incorrect number of arguments:" << endl;
    usage();
    return -1;
  }

  //Notify user of default port selection
  else if (argc == 2) {
    cout << "Second argument ommitted: using default port " << PORT << endl;
  }

  //Main menu loop
  while (menu_state > 0) {
    cout << endl << "Welcome to Cheetah Chat!" << endl;
    cout << "What would you like to do?" << endl;
    cout << "1: Nothing!" << endl;
    cout << "2: Start server" << endl;
    cout << "0: Exit" << endl;
    cin >> menu_state;
    switch (menu_state) {
      case 0: break;
      case 1: cout << "Executing task: nothing..." << endl; break;
      case 2: start_server(); break;
      default : {
        cout << endl << "Greg the cheetah says:" << endl;
        cout << CHEETAH << " 'You did not enter a valid command!'" << CHEETAH << endl;
      }
    }
  }

	return 0;
}
