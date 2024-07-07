#include <iostream>

int main() {
    std::string questions[] = {"1. What year was CPP invented?: ",
                               "2. Who invented it?: ",
                               "3. Predecessor of CPP?: ",
                               "4. Is banana a fruit?: "};

    std::string options[][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                               {"A. Me", "B. Bjarne Stroustrup", "C. Mark Zuckerburg", "D. You"},
                               {"A. C", "B. C+", "C--", "D. B++"},
                               {"A. Yes", "B. No", "C. IDK", "D. Maybe"}};

    char answers[] = {'C', 'B', 'A', 'A'};

    int size = sizeof(questions)/sizeof(questions[0]);
    char guess;
    int score=0;

    for (int i = 0; i < size ; i++) {
        std::cout << questions[i]<< '\n';

        for (int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++) {
            std::cout << options[i][j] << '\n';
        }


        std::cin >> guess;
        guess = toupper(guess);

        if (guess == answers[i]) {
            std::cout << "Correct!!!\n";
            score++;
        } else {
            std::cout << "WRONG" << '\n';
            std::cout << "Answer: " << answers[i] << '\n';
        }
    }

    std::cout << "\nResult: " << score << " out of " << size << " questions.\n";
}