/* Bret Barefoot
   CSC 210
   Project 1
   9/17/2023 */
 

#include <iostream>
#include <stdlib.h>
using namespace std;


//create a function that displays the time on the screen in both formats
void DisplayTime(int twelveHour1, int twelveHour2, int twentyfourHour1, int twentyfourHour2, int minute1, int minute2, int second1, int second2) {
    cout << "**************************\t" << "**************************" << endl;
    cout << "*      12-Hour Clock     *\t" << "*      24-Hour Clock     *" << endl;
    cout << "*         " << twelveHour1 << twelveHour2 << ":" << minute1 << minute2 << ":" << second1 << second2 << "       *\t";
    cout << "*         " << twentyfourHour1 << twentyfourHour2 << ":" << minute1 << minute2 << ":" << second1 << second2 << "       *" << endl;
    cout << "**************************\t" << "**************************" << endl;
    cout << endl;
}

//create a function that displays the menu and returns the users choice
int DisplayMenu() {
    int userChoice = 5;

    cout << "\t\t**************************" << endl;
    cout << "\t\t*  1-Add One Hour        *" << endl;
    cout << "\t\t*  2-Add One Minute      *" << endl;
    cout << "\t\t*  3-Add One Second      *" << endl;
    cout << "\t\t*  4-Exit Program        *" << endl;
    cout << "\t\t**************************" << endl;
    cout << endl;

    while ((userChoice < 1) || (userChoice > 4)) {
        cout << "Please select your choice(1-4): ";
        cin >> userChoice;
    }
    return userChoice;
}

//create a function that adds 1 hour to the time
void AddHour(int& clock12Hour1, int& clock12Hour2, int& clock24Hour1, int& clock24Hour2, string& ampm) {

    // create if statements to make sure the time is updated correctly
    if (clock12Hour2 < 10) {
        clock12Hour2 = clock12Hour2 + 1;
    }

    if (clock12Hour2 == 10) {

        clock12Hour1 = 1;
        clock12Hour2 = 0;
    }

    if (clock12Hour1 == 1 && clock12Hour2 == 3) {
        clock12Hour1 = 0;
        clock12Hour2 = 1;
    }

    if (clock24Hour2 < 10) {
        clock24Hour2 = clock24Hour2 + 1;
    }

    if (clock24Hour1 == 1 && clock24Hour2 == 10) {
        clock24Hour1 = 2;
        clock24Hour2 = 0;
    }

    if (clock24Hour2 == 10) {
        clock24Hour2 = 0;
        clock24Hour1 = 1;
    }

    if (clock24Hour1 == 2 && clock24Hour2 == 4) {
        clock24Hour1 = 0;
        clock24Hour2 = 0;
    }
}

//create a function that adds 1 minute to the time
void AddMinute(int& minutes1, int& minutes2, int& clock12Hour1, int& clock12Hour2, int& clock24Hour1, int& clock24Hour2, string& ampm) {
    //create decision branching to update the time correctly
	if (minutes2 < 10) {
		minutes2 = minutes2 + 1;
	}
	if (minutes1 == 5 && minutes2 == 10) {
		minutes1 = 0;
		minutes2 = 0;
		if (clock12Hour2 < 10) {
			clock12Hour2 = clock12Hour2 + 1;

		}

		if (clock12Hour2 == 10) {
			clock12Hour1 = 1;
			clock12Hour2 = 0;

		}

		if (clock12Hour1 == 1 && clock12Hour2 == 3) {
			clock12Hour1 = 0;
			clock12Hour2 = 1;

		}

		if (clock24Hour2 < 10) {
			clock24Hour2 = clock24Hour2 + 1;

		}

		if (clock24Hour1 == 1 && clock24Hour2 == 10) {
			clock24Hour1 = 2;
			clock24Hour2 = 0;

		}

		if (clock24Hour2 == 10) {
			clock24Hour2 = 0;
			clock24Hour1 = 1;

		}

		if (clock24Hour1 == 2 && clock24Hour2 == 4) {
			clock24Hour1 = 0;
			clock24Hour2 = 0;

		}

	}
	if (minutes1 == 4 && minutes2 == 10) {
		minutes1 = 5;
		minutes2 = 0;

	}
	if (minutes1 == 3 && minutes2 == 10) {
		minutes1 = 4;
		minutes2 = 0;

	}
	if (minutes1 == 2 && minutes2 == 10) {
		minutes1 = 3;
		minutes2 = 0;

	}
	if (minutes1 == 1 && minutes2 == 10) {
		minutes1 = 2;
		minutes2 = 0;

	}
	if (minutes2 == 10) {
		minutes1 = 1;
		minutes2 = 0;

	}
}

//create a function that adds 1 second to the time
void AddSecond(int& seconds1, int& seconds2, int& minutes1, int& minutes2, int& clock12Hour1, int& clock12Hour2, int& clock24Hour1, int clock24Hour2, string& ampm) {
	if (seconds2 < 10) {
		seconds2 = seconds2 + 1;
	}
	if (seconds1 == 5 && seconds2 == 10) {
		seconds1 = 0;
		seconds2 = 0;
		if (minutes2 < 10) {
			minutes2 = minutes2 + 1;
		}
		if (minutes1 == 5 && minutes2 == 10) {
			minutes1 = 0;
			minutes2 = 0;
			if (clock12Hour2 < 10) {
				clock12Hour2 = clock12Hour2 + 1;
			}
			if (clock12Hour2 == 10) {
				clock12Hour1 = 1;
				clock12Hour2 = 0;
			}
			if (clock12Hour1 == 1 && clock12Hour2 == 3) {
				clock12Hour1 = 0;
				clock12Hour2 = 1;
			}
			if (clock24Hour2 < 10) {
				clock24Hour2 = clock24Hour2 + 1;
			}
			if (clock24Hour1 == 1 && clock24Hour2 == 10) {
				clock24Hour1 = 2;
				clock24Hour2 = 0;
			}
			if (clock24Hour2 == 10) {
				clock24Hour2 = 0;
				clock24Hour1 = 1;
			}
			if (clock24Hour1 == 2 && clock24Hour2 == 4) {
				clock24Hour1 = 0;
				clock24Hour2 = 0;
			}
		}
		if (minutes1 == 4 && minutes2 == 10) {
			minutes1 = 5;
			minutes2 = 0;
		}
		if (minutes1 == 3 && minutes2 == 10) {
			minutes1 = 4;
			minutes2 = 0;
		}
		if (minutes1 == 2 && minutes2 == 10) {
			minutes1 = 3;
			minutes2 = 0;
		}
		if (minutes1 == 1 && minutes2 == 10) {
			minutes1 = 2;
			minutes2 = 0;
		}
		if (minutes2 == 10) {
			minutes1 = 1;
			minutes2 = 0;
		}
	}
	if (seconds1 == 4 && seconds2 == 10) {
		seconds1 = 5;
		seconds2 = 0;
	}
	if (seconds1 == 3 && seconds2 == 10) {
		seconds1 = 4;
		seconds2 = 0;
	}
	if (seconds1 == 2 && seconds2 == 10) {
		seconds1 = 3;
		seconds2 = 0;
	}
	if (seconds1 == 1 && seconds2 == 10) {
		seconds1 = 2;
		seconds2 = 0;
	}
	if (seconds2 == 10) {
		seconds1 = 1;
		seconds2 = 0;
	}
}

//create a function that turns the double digit number into 2 seperate numbers for the Second spots
void GetSecondsDigits(int seconds, int& seconds1, int& seconds2) {
	seconds1 = seconds / 10;
	seconds2 = seconds % 10;
}

//create a function that turns the double digit number into 2 seperate numbers for the Minute spots
void GetMinutesDigits(int minutes, int& minutes1, int& minutes2) {
	minutes1 = minutes / 10;
	minutes2 = minutes % 10;
}

//create a function that turns the double digit number into 2 seperate numbers for the Hour spots
void GetHoursDigits(int hours, int& clock12Hour1, int& clock12Hour2, int& clock24Hour1, int& clock24Hour2) {
	//if statement that can convert the 12 hour clock hours if higher than 12
	if (hours > 12) {
		clock12Hour1 = 0;
		clock12Hour2 = hours % 12;
	} 
	else {
		clock12Hour1 = hours / 10;
		clock12Hour2 = hours % 10;

	}

	clock24Hour1 = hours / 10;
	clock24Hour2 = hours % 10;


}


// main function (the application)
    int main()
    {

		bool clock = true;
        int userInput;         //create variable to get user input

		int hours;
		int minutes;
		int seconds;

        int twelveHour1 = 0, twelveHour2 = 0;                //create variables for the hour positions of 12 hour clock
        int twentyfourHour1 = 0 , twentyfourHour2 = 0;        //create variables for the hour poisitions of 24 hour clock

        int minute1 = 0, minute2 = 0;                    //create variable for the minute position
        int second1 = 0, second2 = 0;                    //create variable for the seconds position

		string ampm;                              //create the variable for AM or PM to be displayed

		cout << "Please enter the initial time." << endl;
		cout << "Enter the hours (HH): ";
		cin >> hours;
		cout << "Enter the minutes (MM): ";
		cin >> minutes;
		cout << "Enter the seconds (SS): ";
		cin >> seconds;
		cout << endl;

		GetSecondsDigits(seconds, second1, second2);
		GetMinutesDigits(minutes, minute1, minute2);
		GetHoursDigits(hours, twelveHour1, twelveHour2, twentyfourHour1, twentyfourHour2);
		

		//display the clocks
		DisplayTime(twelveHour1, twelveHour2, twentyfourHour1, twentyfourHour2, minute1, minute2, second1, second2);

		//create a loop to run the application. 
		while (clock == true) {


			//display the menu and get users choice
			userInput = DisplayMenu();

			if (userInput == 1) { // adds 1 hour
				AddHour(twelveHour1, twelveHour2, twentyfourHour1, twentyfourHour2, ampm);
				DisplayTime(twelveHour1, twelveHour2, twentyfourHour1, twentyfourHour2, minute1, minute2, second1, second2);
				cout << endl;
			}
			else if (userInput == 2) { // adds 1 minute
				AddMinute(minute1, minute2, twelveHour1, twelveHour2, twentyfourHour1, twentyfourHour2, ampm);
				DisplayTime(twelveHour1, twelveHour2, twentyfourHour1, twentyfourHour2, minute1, minute2, second1, second2);
				cout << endl;
			}
			else if (userInput == 3) { // adds 1 second
				AddSecond(second1, second2, minute1, minute2, twelveHour1, twelveHour2, twentyfourHour1, twentyfourHour2, ampm);
				DisplayTime(twelveHour1, twelveHour2, twentyfourHour1, twentyfourHour2, minute1, minute2, second1, second2);
			}
			else if (userInput == 4) { // ends the loop
				clock = false;
			}

			
		}





        return 0;
    }
