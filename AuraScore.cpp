#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Portfolio structure
struct Portfolio {
    string name;
    vector<string> skills;
    vector<string> projects;
    vector<string> achievements;
};

// Function to split comma-separated input
vector<string> splitInput(const string& input) {
    vector<string> result;
    stringstream ss(input);
    string item;
    while (getline(ss, item, ',')) {
        if (!item.empty()) result.push_back(item);
    }
    return result;
}

// Function to calculate portfolio score
int calculateScore(const Portfolio& p) {
    int score = p.skills.size() * 8 + p.projects.size() * 10 + p.achievements.size() * 12;
    score += rand() % 16; // random bonus 0-15
    if (score > 100) score = 100;
    return score;
}

// Function to display portfolio
void displayPortfolio(const Portfolio& p, int score) {
    cout << "\n=== " << p.name << "'s Portfolio ===\n";
    cout << "Skills: ";
    for (auto &s : p.skills) cout << s << " ";
    cout << "\nProjects: ";
    for (auto &pjt : p.projects) cout << pjt << " ";
    cout << "\nAchievements: ";
    for (auto &a : p.achievements) cout << a << " ";
    cout << "\nPortfolio Score: " << score << "/100\n";

    if(score > 85) cout << "🏆 Excellent portfolio!\n";
    else if(score > 65) cout << "💪 Good portfolio! Keep adding projects.\n";
    else cout << "🚀 Needs improvement! Build more projects.\n";
}

int main() {
    srand(time(0));
    Portfolio student;

    cout << "Enter your name: ";
    getline(cin, student.name);

    string input;

    cout << "Enter your skills (comma separated): ";
    getline(cin, input);
    student.skills = splitInput(input);

    cout << "Enter your projects (comma separated): ";
    getline(cin, input);
    student.projects = splitInput(input);

    cout << "Enter your achievements (comma separated): ";
    getline(cin, input);
    student.achievements = splitInput(input);

    int score = calculateScore(student);
    displayPortfolio(student, score);

    return 0;
}
