#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	int i;
    // ïðè ââîäå
    // ÷èñåë +
    // îò 1 äî 26 +
    // âûâîäèòü +
    // ñîîòâåòñâóþùóþ áóêâó àíãëèéñêîãî ÿçûêà +
    int ch;
    char c;
    cout << "Enter a number from 1-26: ";
    cin >> ch;
    cout << "abcdefghijklmnopqrstuvwxyz"[ch - 1];
    return 0;
}
