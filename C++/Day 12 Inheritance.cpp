//Day 12: Inheritance
/* ************************************************

    Created by TrMiNa on 01/11/21.
    Copyright © 2020 TrMiNa. All rights reserved.
  
 ************************************************ */
#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here
        Student (string firstName, string lastName, int id, vector<int> scores) : Person(firstName, lastName, id), testScores(scores){}
        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
        char calculate()
        {
            double sumScores = 0;
            for(double i : testScores)
                sumScores += i;
            double avgScore = sumScores / testScores.size();
            if(avgScore>=90&&avgScore<=100)
                return 'O';
            else if(avgScore>=80)
                return 'E';
            else if(avgScore>=70)
                return 'A';
            else if(avgScore>=55)
                return 'P';
            else if(avgScore>=40)
                return 'D';
            else 
                return 'T';
        }
};

int main() {