#include <iostream>
using namespace std;

int main() {
    cout << "==== GIT COMMAND REFERENCE ====" << endl;
    cout << "1. Initialize Repository:" << endl;
    cout << "   git init" << endl << endl;

    cout << "2. Clone a Repository:" << endl;
    cout << "   git clone <repo-url>" << endl << endl;

    cout << "3. Check Status:" << endl;
    cout << "   git status" << endl << endl;

    cout << "4. Stage Files for Commit:" << endl;
    cout << "   git add <filename>      // Add one file" << endl;
    cout << "   git add .               // Add all changes" << endl << endl;

    cout << "5. Commit Changes:" << endl;
    cout << "   git commit -m \"Your message\"" << endl << endl;

    cout << "6. Set Remote Repository:" << endl;
    cout << "   git remote add origin <remote-url>" << endl << endl;

    cout << "7. Push to Remote:" << endl;
    cout << "   git push -u origin main" << endl;
    cout << "   git push                // After first time" << endl << endl;

    cout << "8. Pull from Remote:" << endl;
    cout << "   git pull origin main" << endl << endl;

    cout << "9. View Remote URLs:" << endl;
    cout << "   git remote -v" << endl << endl;

    cout << "10. Change Remote URL:" << endl;
    cout << "   git remote set-url origin <new-url>" << endl << endl;

    cout << "11. View Commit Log:" << endl;
    cout << "   git log" << endl << endl;

    cout << "12. Check Difference:" << endl;
    cout << "   git diff" << endl << endl;

    cout << "13. Remove File from Git:" << endl;
    cout << "   git rm <file>" << endl << endl;

    cout << "14. Create a Branch:" << endl;
    cout << "   git branch <branch-name>" << endl << endl;

    cout << "15. Switch Branch:" << endl;
    cout << "   git checkout <branch-name>" << endl << endl;

    cout << "16. Merge Branches:" << endl;
    cout << "   git merge <branch-name>" << endl << endl;

    cout << "17. Delete a Branch:" << endl;
    cout << "   git branch -d <branch-name>" << endl << endl;

    cout << "===============================" << endl;
    cout << "Happy Coding with Git!" << endl;

    return 0;
}
