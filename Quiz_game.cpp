#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

class Test {
private:
    int ch;
    int pt = 0, ct = 0, it = 0;

public:
    int IPL();
    int Movie();
    int Aptitude();
    void testChoice();
    int getPt() const { return pt; }
    int getCt() const { return ct; }
    int getIt() const { return it; }
};

void Test::testChoice() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 9);
    cout << "\n----- Choose any one of the question types ------";
    SetConsoleTextAttribute(h, 3);
    cout << "\nTypes of questions:\n";
    SetConsoleTextAttribute(h, 5);
    cout << "\n1. IPL";
    cout << "\n2. Movie";
    cout << "\n3. Aptitude\n";
    cout << "\nEnter your option: ";
    cin >> ch;

    switch (ch) {
    case 1:
        pt = IPL();
        SetConsoleTextAttribute(h, 2);
        cout << "\nYour score: " << pt << endl;
        break;
    case 2:
        ct = Movie();
        SetConsoleTextAttribute(h, 2);
        cout << "\nYour score: " << ct << endl;
        break;
    case 3:
        it = Aptitude();
        SetConsoleTextAttribute(h, 2);
        cout << "\nYour score: " << it << endl;
        break;
    default:
        SetConsoleTextAttribute(h, 4);
        cout << "\nInvalid option. Please try again." << endl;
    }
}

int Test::IPL() {
    char p;
    int score = 0;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 15);

    cout << "\n1. Who is Mr. IPL?";
    cout << "\n   a. Suresh Raina          b. MS Dhoni";
    cout << "\n   c. Rohit Sharma          d. Virat Kohli";
    cout << "\nEnter your option: ";
    cin >> p;
    if (p == 'a') score++;

    cout << "\n2. Which player is known for the helicopter shot?";
    cout << "\n   a. MS Dhoni              b. Rohit Sharma";
    cout << "\n   c. Suresh Raina          d. AB de Villiers";
    cout << "\nEnter your option: ";
    cin >> p;
    if (p == 'a') score++;

    cout << "\n3. Which team has won the most IPL titles?";
    cout << "\n   a. CSK                   b. Mumbai Indians";
    cout << "\n   c. KKR                   d. SRH";
    cout << "\nEnter your option: ";
    cin >> p;
    if (p == 'b') score++;

    cout << "\n4. Who scored the first-ever century in IPL?";
    cout << "\n   a. Brendon McCullum      b. Chris Gayle";
    cout << "\n   c. David Warner          d. Sachin Tendulkar";
    cout << "\nEnter your option: ";
    cin >> p;
    if (p == 'a') score++;

    cout << "\n5. Who holds the record for most sixes in IPL history?";
    cout << "\n   a. Chris Gayle           b. AB de Villiers";
    cout << "\n   c. Rohit Sharma          d. MS Dhoni";
    cout << "\nEnter your option: ";
    cin >> p;
    if (p == 'a') score++;

    cout << "\n6. Which team won the IPL 2023?";
    cout << "\n   a. CSK                   b. Gujarat Titans";
    cout << "\n   c. Mumbai Indians        d. RCB";
    cout << "\nEnter your option: ";
    cin >> p;
    if (p == 'a') score++;

    cout << "\n7. Who won the Orange Cap in IPL 2023?";
    cout << "\n   a. Shubman Gill          b. Ruturaj Gaikwad";
    cout << "\n   c. Faf du Plessis        d. Virat Kohli";
    cout << "\nEnter your option: ";
    cin >> p;
    if (p == 'a') score++;

    cout << "\n8. Who was the youngest player to play in IPL?";
    cout << "\n   a. Sarfaraz Khan         b. Prithvi Shaw";
    cout << "\n   c. Rashid Khan           d. Mujeeb Ur Rahman";
    cout << "\nEnter your option: ";
    cin >> p;
    if (p == 'b') score++;

    cout << "\n9. Who hit the fastest IPL century?";
    cout << "\n   a. Chris Gayle           b. AB de Villiers";
    cout << "\n   c. Yusuf Pathan          d. David Miller";
    cout << "\nEnter your option: ";
    cin >> p;
    if (p == 'a') score++;

    cout << "\n10. Who holds the record for the highest individual score in IPL?";
    cout << "\n   a. Chris Gayle           b. Brendon McCullum";
    cout << "\n   c. AB de Villiers        d. Virat Kohli";
    cout << "\nEnter your option: ";
    cin >> p;
    if (p == 'a') score++;

    return score;
}

int Test::Movie() {
    char p;
    int score = 0;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 15);

    cout << "\n1. Who directed the movie Inception?";
    cout << "\n   a. Christopher Nolan     b. Steven Spielberg";
    cout << "\n   c. Quentin Tarantino     d. James Cameron";
    cout << "\nEnter your option: ";
    cin >> p;
    if (p == 'a') score++;

    cout << "\n2. Who played the character of Jack in Titanic?";
    cout << "\n   a. Leonardo DiCaprio     b. Brad Pitt";
    cout << "\n   c. Johnny Depp           d. Tom Cruise";
    cout << "\nEnter your option: ";
    cin >> p;
    if (p == 'a') score++;

    cout << "\n3. Which movie won the Academy Award for Best Picture in 2020?";
    cout << "\n   a. 1917                  b. Parasite";
    cout << "\n   c. Joker                 d. Once Upon a Time in Hollywood";
    cout << "\nEnter your option: ";
    cin >> p;
    if (p == 'b') score++;

    cout << "\n4. Who is known as the King of Bollywood?";
    cout << "\n   a. Salman Khan           b. Shah Rukh Khan";
    cout << "\n   c. Aamir Khan            d. Akshay Kumar";
    cout << "\nEnter your option: ";
    cin >> p;
    if (p == 'b') score++;

    cout << "\n5. Which movie features the famous line 'May the Force be with you'?";
    cout << "\n   a. Star Wars             b. The Matrix";
    cout << "\n   c. Harry Potter          d. Lord of the Rings";
    cout << "\nEnter your option: ";
    cin >> p;
    if (p == 'a') score++;

    cout << "\n6. Who played the character of Iron Man in the Marvel Cinematic Universe?";
    cout << "\n   a. Chris Hemsworth       b. Robert Downey Jr.";
    cout << "\n   c. Mark Ruffalo          d. Chris Evans";
    cout << "\nEnter your option: ";
    cin >> p;
    if (p == 'b') score++;

    cout << "\n7. Which film won the first Academy Award for Best Animated Feature in 2002?";
    cout << "\n   a. Toy Story             b. Shrek";
    cout << "\n   c. Finding Nemo          d. Monsters, Inc.";
    cout << "\nEnter your option: ";
    cin >> p;
    if (p == 'b') score++;

    cout << "\n8. Who directed the movie 'Avatar'?";
    cout << "\n   a. James Cameron         b. Peter Jackson";
    cout << "\n   c. Steven Spielberg      d. Ridley Scott";
    cout << "\nEnter your option: ";
    cin >> p;
    if (p == 'a') score++;

    cout << "\n9. Which movie is known for the famous 'Here’s Johnny!' scene?";
    cout << "\n   a. The Shining            b. The Godfather";
    cout << "\n   c. Psycho                 d. A Clockwork Orange";
    cout << "\nEnter your option: ";
    cin >> p;
    if (p == 'a') score++;

    cout << "\n10. Who starred as the Joker in the 2008 film 'The Dark Knight'?";
    cout << "\n   a. Christian Bale        b. Heath Ledger";
    cout << "\n   c. Jared Leto            d. Joaquin Phoenix";
    cout << "\nEnter your option: ";
    cin >> p;
    if (p == 'b') score++;

    return score;
}


int Test::Aptitude() {
    char p;
    int score = 0;
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 15);

    cout << "\n1. If the ratio of the ages of A and B is 4:5, and the difference between their ages is 5 years, what is the age of A?";
    cout << "\n   a. 20     b. 25     c. 30     d. 35";
    cout << "\nEnter your option: ";
    cin >> p;
    if (p == 'b') score++;

    cout << "\n2. The sum of three consecutive numbers is 72. What is the first number?";
    cout << "\n   a. 23     b. 24     c. 25     d. 26";
    cout << "\nEnter your option: ";
    cin >> p;
    if (p == 'b') score++;

    cout << "\n3. What is the area of a circle with radius 7 cm?";
    cout << "\n   a. 49π cm²     b. 14π cm²     c. 21π cm²     d. 28π cm²";
    cout << "\nEnter your option: ";
    cin >> p;
    if (p == 'a') score++;

    cout << "\n4. A train 150 meters long is running at a speed of 90 km/h. How much time will it take to pass a stationary observer?";
    cout << "\n   a. 6 sec     b. 7 sec     c. 8 sec     d. 9 sec";
    cout << "\nEnter your option: ";
    cin >> p;
    if (p == 'b') score++;

    cout << "\n5. A person travels 60 km in 1 hour 30 minutes. What is the average speed?";
    cout << "\n   a. 40 km/h     b. 45 km/h     c. 50 km/h     d. 55 km/h";
    cout << "\nEnter your option: ";
    cin >> p;
    if (p == 'b') score++;

    cout << "\n6. A person buys 15 books for Rs. 120. How much will 20 books cost?";
    cout << "\n   a. Rs. 150     b. Rs. 160     c. Rs. 180     d. Rs. 200";
    cout << "\nEnter your option: ";
    cin >> p;
    if (p == 'c') score++;

    cout << "\n7. The perimeter of a rectangle is 60 cm. If the length is 18 cm, what is the width?";
    cout << "\n   a. 12 cm     b. 13 cm     c. 14 cm     d. 15 cm";
    cout << "\nEnter your option: ";
    cin >> p;
    if (p == 'a') score++;

    cout << "\n8. A clock shows 3:15. What is the angle between the hour and minute hands?";
    cout << "\n   a. 30°     b. 45°     c. 60°     d. 75°";
    cout << "\nEnter your option: ";
    cin >> p;
    if (p == 'b') score++;

    cout << "\n9. If 5 workers can complete a task in 6 days, how many days will it take for 10 workers to complete the same task?";
    cout << "\n   a. 3 days     b. 4 days     c. 5 days     d. 6 days";
    cout << "\nEnter your option: ";
    cin >> p;
    if (p == 'a') score++;

    cout << "\n10. What is the LCM of 12 and 15?";
    cout << "\n   a. 60     b. 75     c. 90     d. 120";
    cout << "\nEnter your option: ";
    cin >> p;
    if (p == 'a') score++;

    return score;
}
int main() 
{
    Test t;
    int totalScore = 0;
    totalScore += t.IPL();
    totalScore += t.Movies();
    totalScore += t.Aptitude();

    cout << "\nYour total score is: " << totalScore << "/30";
    return 0;
}