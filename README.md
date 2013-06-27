#Running Conversions
Running conversions is a command-line tool for runners to easily convert mile times to miles per hour (mph).

##Is it ready?
Not quite. It was developed for me to easily convert the mile times given by [Gipis](gip.is "Gipis app link") to mph so that I can run intervals on the treadmill. I eventually want to add more features to it.

##What do I need? How do I make the program?

You need the latest version of [gcc](gcc.gnu.org "gcc link") installed. Then, clone the repository, and compile it into an executable using the following command on Mac:

    gcc main.c utilities.c conversions.c -o running-conversions.out

##How do I run the program?

To test the program, type:

    ./running-conversions.out -i test/times.txt -o test/results.txt -h

This converts the times in test/times.txt, creates a file called results.txt in the test folder, and outputs the following result:

    4.30
    5.95
    3.70
    4.30

##Features to be added:

* Conversion from mph to minute times
* Metric units
* Output options for prettier formatting
* Formatting for interval workouts