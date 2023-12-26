// inlcuding required header files
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

// main function
int main() {
    // resetting the memory cells
    srand(time(nullptr));

    // inputing number of students and number of questions
    int numOfStudents, numOfQuestions;
    cout << "Enter the total number of students: ";
    cin >> numOfStudents;
    cout << "Enter the total number of questions: ";
    cin >> numOfQuestions;

    int groupSize = 5;
    int totalGroups = numOfStudents / groupSize;
    int remainingStudents = numOfStudents % groupSize;

    if (remainingStudents > 0) {
        cout << "Note: " << remainingStudents << " students will be left out as they can't form complete groups." << endl;
    }

    // initlizing the vector arrray for questions and students
    vector<int> students(numOfStudents);
    vector<int> questions(numOfQuestions);

    for (int i = 0; i < numOfStudents; ++i) {
        students[i] = i + 1;
    }

    for (int i = 0; i < numOfQuestions; ++i) {
        questions[i] = i + 1;
    }

    // shuffling the students and questions array randomly
    random_shuffle(students.begin(), students.end());
    random_shuffle(questions.begin(), questions.end());

    // initlzing the questions per group and extra questions
    int questionsPerGroup = numOfQuestions / totalGroups;
    int extraQuestions = numOfQuestions % totalGroups;

    // choosing randomly the questions to randomly genarting teams of 5 students
    for (int group = 0; group < totalGroups; ++group) {
        cout << "Group " << (group + 1) << " Students: " << endl;
        for (int i = 0; i < groupSize; ++i) {
            int student = students[group * groupSize + i];
            cout << "Student " << student << " (Problem ";

            for (int j = 0; j < questionsPerGroup; ++j) {
                cout << questions[group * questionsPerGroup + j];
                if (j < questionsPerGroup - 1) {
                    cout << ", ";
                }
            }

            if (extraQuestions > 0) {
                cout << ", " << questions[numOfQuestions - extraQuestions];
                extraQuestions--;
            }

            cout << ")";
            if (i < groupSize - 1) {
                cout << ", " << endl;
            }
        }
        cout << endl;
    }

    return 0;
}