#include <iostream>
using namespace std;

void reverse(char name[]) {
    // length ka concept isliye lagaya kyuki pta hme pta kese lge ga ki vo kha end horha h isliye lgya 
    // Find the length manually
    int n = 0;
    while (name[n] != '\0') {  // Counting characters until the null terminator
        n++;
    }

    // Reversing the string
    int s = 0, e = n - 1;
    while (s < e) {
        swap(name[s++], name[e--]);
    }
}

int main() {
    char name[20];
    cout << "Enter your name " << endl;
    cin >> name;  // Reads only a single word

    reverse(name);

    cout << "Reversed name " << name << endl;
    
    return 0;
}
 

// most imp thing vector<char>& s means isme null character nhi ayega
