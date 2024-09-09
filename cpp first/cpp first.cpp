
//----------------------------string to integer--------------------------------
//#include <iostream> 
//using namespace std;
//
//// Function to convert string to 
//// integer without using functions 
//void convert(string s)
//{
//    // Initialize a variable 
//    int num = 0;
//    int n = s.length();
//
//    // Iterate till length of the string 
//    for (int i = 0; i < n; i++)
//
//        // Subtract 48 from the current digit 
//        num = num * 10 + (int(s[i]) - 48);
//
//    // Print the answer 
//    cout << num;
//}
//
//// 
//int main()
//{
//    // Given string of number 
//    string s;
//    cout << "enter string:";
//    cin >> s;
//
//    // Function Call 
//    convert(s);
//    return 0;
//}


//----------------------------sort characters in string--------------------------
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//void sortString(string &str) {
//    int n = str.length();
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if (str[i] > str[j]) {
//                // Swap characters
//                char temp = str[i];
//                str[i] = str[j];
//                str[j] = temp;
//            }
//        }
//    }
//}
//
//int main() {
//    string str;
//    cout << "Enter a string: ";
//    cin >> str;
//
//    sortString(str);
//
//    cout << "Sorted string: " << str << endl;
//
//    return 0;
//}

//-------------------------------print all non repeating characters in string-------------------
//#include <iostream>
//#include <string>
//using namespace std;
//
//void nonrep(string str) {
//    int count[256] = { 0 }; // Array to store count of characters
//
//    // Calculate count of each character
//    for (int i = 0; i < str.length(); i++) {
//        count[str[i]]++;
//    }
//
//    // Print characters with count 1
//    cout << "Non-repeating characters are: ";
//    for (int i = 0; i < str.length(); i++) {
//        if (count[str[i]] == 1) {
//            cout << str[i] << " ";
//        }
//    }
//    cout << endl;
//}
//
//int main() {
//    string str;
//    cout << "enter string:";
//    cin>>str;
//    nonrep(str);
//    return 0;
//}




//-----------------------------------------print pattern------------------------------------------
//#include <iostream>
//using namespace std;
//
//void pattern(int n) {
//    for (int j = 1; j <= n; j++) {
//        for (int i = 1; i <= j; i++) {
//            cout << i << " ";
//        }
//        cout << endl;
//    }
//    for (int i = 1; i <= n; i++) {
//        for (int j = 1; j <= i; j++) {
//            cout << j << " ";
//        }
//        cout << endl;
//    }
//}
//
//int main() {
//  
//    int n;
//    cout << "enter number:";
//    cin >> n;
//    pattern(n);
//    return 0;
//}


//------------------------------remove character-----------------------------
//#include <iostream>
//#include <string>
//using namespace std;
//
//string removeChar(string str, char ch) {
//    string result = "";
//    for (char c : str) {
//        if (c != ch) {
//            result += c;
//        }
//    }
//    return result;
//}
//
//int main() {
//    string input;
//    char charToRemove;
//
//    cout << "The main string is:";
//    cin >> input;
//    cout << "\nThe string to be removed: ";
//    cin >> charToRemove;
//
//    string output = removeChar(input, charToRemove);
//    cout << "Output: " << output << endl;
//
//    return 0;
//}

