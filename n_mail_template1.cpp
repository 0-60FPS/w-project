//============================================================================
// Name        : n_mail_template1.cpp
// Author      : 0-60FPS
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
using namespace std;

int spec() {

	cout << "\n";
	cout << "= Specify Title =";

	char title_spec;

			while (true) {

				cout << "\n \n";
			    cout << "Hello[1] or Hello All[2]" << endl;
			    cin >> title_spec;

			    if (title_spec == '1') {

			    	cout << "Hello[1] Selected \n";

			    	break;

			    }

			    if (title_spec == '2') {

			    	cout << "Hello All[2] Selected \n";

			    	break;
			    }
			}

	char position;
			while (true) {

				cout << "\n";
			    cout << "= Specify Position =" << endl;
			    cout << "\n";
			    cout << "Instructors[1] or Librarian[2]";
			    cout << "\n";
			    cin >>  position;

			    if (position  == '1') {

			    	cout << "Instructors[1] Selected";
			    	cout << "\n";

			    	break;

				    }

			    if (position  == '2') {

			    	cout << "Librarian[2] Selected";
			    	cout << "\n";

			    	break;

			    }

			}

	char signat;

		while (true) {
			cout << "\n";
			cout << "= Specify Signature =";
			cout << "\n";
			cout << "Thanks[1] or Thanks, please Contact me if you have questions[2]";
			cout << "\n";
			cin >> signat;

			if(signat == '1'){

				cout << "Thanks[1] Selected \n";

				break;
			}

			if(signat == '2'){

				cout << "Thanks, please contact me if you have questions[2] Selected \n";

				break;
			}
		}

}

int startif(){

	cout << "=== Reminder Script v1.0 ===";
	cout << "\n";
	cout << "\n";
	cout << "Start Script? (Send 'y' to start)";

	char start;
		while (true) {

			cout << "\n";
			cin >>  start;

			if (start == 'y') {

			spec();

			}

	}


}


int main() {

	startif();

	return 0;
}
