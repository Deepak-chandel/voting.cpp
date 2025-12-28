#include <iostream>
using namespace std;

int main() {
    int choice;
    int votesA = 0, votesB = 0, votesC = 0;
    char again;

    cout << "===== Simple Voting System =====" << endl;

    do {
        cout << "\nVote for your candidate:" << endl;
        cout << "1. Candidate A" << endl;
        cout << "2. Candidate B" << endl;
        cout << "3. Candidate C" << endl;
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        switch (choice) {
            case 1:
                votesA++;
                cout << "You voted for Candidate A" << endl;
                break;
            case 2:
                votesB++;
                cout << "You voted for Candidate B" << endl;
                break;
            case 3:
                votesC++;
                cout << "You voted for Candidate C" << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }

        cout << "\nDo you want to vote again? (y/n): ";
        cin >> again;

    } while (again == 'y' || again == 'Y');

    cout << "\n===== Voting Results =====" << endl;
    cout << "Candidate A: " << votesA << " votes" << endl;
    cout << "Candidate B: " << votesB << " votes" << endl;
    cout << "Candidate C: " << votesC << " votes" << endl;

    cout << "\nThank you for voting!" << endl;

    return 0;
}
