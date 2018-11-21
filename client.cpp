#include "client.h"
using namespace std;

const string CHEETAH =  "\U0001F406";

int main(int argc, char* argv[]) {

	//https://www.geeksforgeeks.org/socket-programming-cc/

  cout << CHEETAH << endl;

	//Verify server IP is present
  if (argc < 2) {
    cerr << "CHEETAH ERROR:" << argv[0] << ": Incorrect number of arguments:" << endl;
    cerr << "--arg1: server IP address" << endl;
    cerr << "--arg2: server port [optional]" << endl;
    cout << CHEETAH << endl;
    return -1;
  }

  //Notify user of default port selection
  else if (argc == 2) {
    cout << "Second argument ommitted: using default port " << PORT << endl;
  }


  cout << CHEETAH << endl;
	return 0;
}
