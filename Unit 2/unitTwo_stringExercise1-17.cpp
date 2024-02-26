#include<iostream>
#include<string>
#include<vector>
using namespace std;

//1. Input a string and print it
void printInput() {
    string line;
    cout << "What's on your mind? ";
    getline(cin, line);
    cout << line;
}

//2. Find the length of a string w/o using library function
void findStrLength() {
    string line;
    cout << "Input string: ";
    getline(cin, line);
    cout << line.length();
}

//3. Separate the individual char from a string
void separateChar() {
    string line;
    cout << "Input string: ";
    getline(cin, line);

    string tempLine;
    for (int i = 0; i < line.length(); i++) {
        tempLine += line[i];
        tempLine += " ";
    }

    cout << tempLine;
}

//4. Print individual char of string in reverse order
void printReverse() {
    string line;
    cout << "Input string: ";
    getline(cin, line);

    string tempLine;
    for (int i = line.length(); i >= 0; i--) {
        tempLine += line[i];
        tempLine += " ";
    }

    cout << tempLine;
}

//5. Count total # of words in a string
void wordCounter() {
    string line;
    cout << "Input string: ";
    getline(cin, line);

    int spaceCounter = 1;
    for (int i = 0; i < line.length(); i++) {
        if (line[i] == ' ') {
            spaceCounter++;
        }
    }

    cout << "Total # of words: " << spaceCounter;
}

//6. Compare 2 str w/o using str library function
void compareStrings() {
    string line1, line2;
    cout << "Input 1st string: ";
    getline(cin, line1);
    cout << "Input 2nd string: ";
    getline(cin, line2);

    if (line1.length() == line2.length()) {
        if (line1 == line2) {
            cout << "String are EQUAL";
        }
        else {
            cout << "String are NOT EQUAL";
        }
    }
    else {
        cout << "String are NOT EQUAL";
    }
}

//7. Count total # of alphabets, digits, and special char in a str
void alphabetDigitSpecialCharCounter() {
    string line;
    char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
    char digits[] = "0123456789";
    char specialChars[] = "!@#$%^&*()_+{}[]|;:,.<>? ";
    int alphabetCounter = 0, digitsCounter = 0, specialCharCounter = 1;

    cout << "Input string: ";
    getline(cin, line);

    //Converts user input to lowercase
    for (int i = 0; i < line.length(); i++) {
            line[i] = tolower(line[i]);
    }

    //1st for loop for each chr in input. inner for loop for each index in the []
    for (int i = 0; i < line.length(); i++) {
        for (int j = 0; j < sizeof(alphabets); j++) {
            if (line[i] == alphabets[j]) {
                alphabetCounter++;
                break;
            }
        }
        
        for (int k = 0; k < sizeof(digits); k++) {
            if (line[i] == digits[k]) {
                digitsCounter++;
                break;
            }
        }

        for (int l = 0; l < sizeof(specialChars); l++) {
            if (line[i] == specialChars[l]) {
                specialCharCounter++;
                break;
            }
        }
    }

    cout << "Total # of alphabets: " << alphabetCounter << endl;
    cout << "Total # of digits: " << digitsCounter << endl;
    cout << "Total # of special chars: " << specialCharCounter << endl;
}

//8. Copy 1 str to anothe str
void copyString() {
    string line1, line2;
    int charsCopied = 1;

    cout << "Input 1st string: ";
    getline(cin, line1);

    line2 = line1;
    for (int i = 0; i < line1.length(); i++) {
        charsCopied++;
    }

    cout << "\nThe 1st string is: " << line1 << endl;
    cout << "The 2nd string is: " << line2 << endl;
    cout << "# of chars copied: " << charsCopied << endl;
}

//9. Count total # of vowel/consonant in a string
void vowelConsonantCount() {
    string line;
    char vowel[] = "aeiou";
    char consonant[] = "bcdfghjklmnpqrstvwxyz";
    int vowelCounter = 0, consonantCounter = 0;

    cout << "Input string: ";
    getline(cin, line);

    //Converts user input to lowercase
    for (int i = 0; i < line.length(); i++) {
            line[i] = tolower(line[i]);
    }

    //1st for loop for each chr in input. inner for loop for each index in the []
    for (int i = 0; i < line.length(); i++) {
        for (int j = 0; j < sizeof(vowel); j++) {
            if (line[i] == vowel[j]) {
                vowelCounter++;
                break;
            }
        }
        
        for (int k = 0; k < sizeof(consonant); k++) {
            if (line[i] == consonant[k]) {
                consonantCounter++;
                break;
            }
        }
    }

    cout << "Total # of vowel: " << vowelCounter << endl;
    cout << "Total # of consonant: " << consonantCounter << endl;
}

//10. Max occuring char in a str
void occuringChar() {
    string line;
    char maxChar = '\0';
    int maxCount = 0;
    
    cout << "Input string: ";
    getline(cin, line);
    
    for (int i = 0; i < line.size(); i++) {
        char currentChar = line[i];
        int currentCount = 1;

        // Count occurrences of the current character
        for (int j = i + 1; j < line.size(); j++) {
            if (line[j] == currentChar) {
                currentCount++;
            }
        }

        // Update maxChar if current character count is greater
        if (currentCount > maxCount) {
            maxChar = currentChar;
            maxCount = currentCount;
        }
    }

    cout << "Max occuring char: " << maxChar << ". Appeared # of times: " << maxCount;
}

//11. Sort a str in asc order
void sortStringAsc() {
    string line;
    char ch;
    cout << "Input string: ";
    getline(cin, line);

    for (int i=0; i<line.size(); i++) {
        for (int j=0; j<line.size()-i; i++) {
            if (line[j]>line[j+i]) {
                ch=line[j];
                line[j]=line[j+i];
                line[j+i]=ch;
            }
        }
    }

    cout << "Sorted string: " << line;
}

//12. Read a user input str and bubble sort it
void bubbleSort() {
    int numberOfStr;
    cout << "Input number of strings: ";
    cin >> numberOfStr;
    cin.ignore();
    
    vector<string> strings;
    string input;
    for (int i=0; i<numberOfStr; i++) {
        cout << "Input string: ";
        getline(cin, input);
        strings.push_back(input);
    }

    int n = strings.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (strings[j] > strings[j + 1]) {
                string temp = strings[j];
                strings[j] = strings[j + 1];
                strings[j + 1] = temp;
            }
        }
    }

    //For-each loop. "str" is declared a variable of type "const string&". It means its a constant ref 
    //to a string. Allows each str element in the <> w/o making a copy. ": strings" specifies the 
    //range the loop will iterate
    for (const string& str : strings) {
        cout << str << endl;
    }


}

//13. Extract a substr from a given str
void extractSubStr() {
    string input, extractedInput;
    int position, length, i = 0;
    cout << "Input string: ";
    getline(cin, input);

    cout << "Position to start extraction: ";
    cin >> position;
    cout << "Length of substring: ";
    cin >> length;

    while (i < length) {    
        extractedInput[i] = input[position + i -length];
        i++;
    }
    
    cout << "Retrieved substring: " << extractedInput << endl;

}

//14. Check wheter a given substr is present in the given str

//15. Read a sentence and replace lowerchase char by uppercase and vice-versa

//16. Find the # of times a given word "the" appears in a str

//17. Remove char in str except alphabets


int main() {
    extractSubStr();

    return 0;
}