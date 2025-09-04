#include <iostream>
#include <string>

using namespace std;

int main(void){
    double total_score = 0.0;
    double avg = 0.0;
    for(int i = 0; i < 20; i++){
        string subject;//과목명
        double score;//점수
        string grade_str;
        cin >> subject >> score >> grade_str;
        
        double grade = 0.0;
        if(grade_str == "A+"){
            grade = 4.5; 
        }else if(grade_str == "A0"){
            grade = 4.0;
        }else if(grade_str == "B+"){
            grade = 3.5;
        }else if(grade_str == "B0"){
            grade = 3.0;
        }else if(grade_str == "C+"){
            grade = 2.5;
        }else if(grade_str == "C0"){
            grade = 2.0;
        }else if(grade_str == "D+"){
            grade = 1.5;
        }else if(grade_str == "D0"){
            grade = 1.0;
        }else{
            grade = 0.0;
            if(grade_str=="P"){
                score = 0.0;
            }
        }
        total_score += score;
        
        avg += score * grade;
        
    }
    cout << avg / total_score ;
}