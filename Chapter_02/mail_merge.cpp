// Write a program that outputs an acceptance letter for Makerere University. It should prompt a user to enter their first name, last name, study program, academic year.
// The program should have autodates

// Example:

// Date: 27th August 2026

// To: John Okello,

// Dear John,

// CONGRATULATIONS! I am pleased to inform you that the Makerere University 
// Admissions Board has approved your application for admission to the 
// 2027/2028 academic year.

// You have been offered a place for the following course:
// PROGRAM: Bachelor of Science in Computer and Communication Engineering

// As a student of Makerere University, you will be part of a historic 
// institution dedicated to academic excellence and innovation. Please ensure 
// that you report to the Academic Registrar's office with your original 
// academic documents for verification during the orientation week.

// We look forward to welcoming you to the Makerere University.

// Yours sincerely,


// John Doe
// Registra
#include <iostream>
#include <string>
#include <ctime>

using namespace std;

int main()
{
    string firstName, lastName, program;
    int academicYear;

    cout << "Enter your first name: ";
    cin >> firstName;
    cout << "Enter your last name: ";
    cin >> lastName;
    cout << "Enter your study program: ";
    cin >> program;
    cout << "Enter the academic year: ";
    cin >> academicYear;

    // Get current date
    time_t now = time(0);// Get current time
    tm *localTime = localtime(&now);// Convert to local time structure

    // Format the date
    char dateBuffer[80];// Buffer to hold the formatted date
    strftime(dateBuffer, sizeof(dateBuffer), "%dth %B %Y", localTime);// Format the date as "27th August 2026"
    //d-day B-month Y-year

    //output the acceptance letter
    cout << "\nDate: " << dateBuffer << endl <<endl;
    cout << "To: " << firstName << " " << lastName << ",\n" << endl;
    cout << "Dear " << firstName << ",\n" << endl;

    cout << "CONGRATULATIONS! I am pleased to inform you that the Makerere University " << endl;
    cout << "Admissions Board has approved your application for admission to the " << endl;
    cout << academicYear << "/" << academicYear + 1 << " academic year." << endl <<endl;
    cout << "You have been offered a place for the following course:" << endl;
    cout << "PROGRAM: " << program << endl <<endl;
    cout << "As a student of Makerere University, you will be part of a historic " << endl;
    cout << "institution dedicated to academic excellence and innovation. Please ensure " << endl;
    cout << "that you report to the Academic Registrar's office with your original " << endl;
    cout << "academic documents for verification during the orientation week." << endl <<endl;
    cout << "We look forward to welcoming you to the Makerere University." << endl <<endl;
    cout << "Yours sincerely," << endl <<endl;
    cout << "John Doe" << endl <<endl;
    cout << "Registrar" << endl <<endl;

    return 0;
}