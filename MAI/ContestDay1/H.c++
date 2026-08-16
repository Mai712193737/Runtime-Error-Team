/*
#include <iostream>
#include <string>
using namespace std;
int check(){
    for (int i =0; i < n ; i++){
     if (s[i] < s[i+1]){
         IS = true;
    }
   }
}

int main (){
 int i , n ,count =0;
 bool IS ;
 String s;
 cin >> n;
 cin >> s;
 //لو الحروف مرتبه اطبع 0 
   Check();
    if (IS){
     cout << 0 << endl;
     break;
    }

   for (int i =0; i < n ; i++){
    int temp = s[i];
      s[i] == s[n-1];
      s[n-1] == temp;
      count++;
      Check();
    }
    
    cout << count << endl;
 }
 */
#include <iostream>
#include <string>
using namespace std;

// دالة للتحقق هل الحروف مرتبة تصاعدياً أم لا
bool isSorted(string s, int n) {
    for (int i = 0; i < n - 1; i++) {
        if (s[i] > s[i + 1]) {
            return false;
        }
    }
    return true;
}

// دالة لتنفيذ الإزاحة لليسار (Left Shift)
void leftShift(string &s, int n) {
    char first = s[0];
    for (int i = 0; i < n - 1; i++) {
        s[i] = s[i + 1];
    }
    s[n - 1] = first;
}

void solve() {
    int n;
    string s;
    cin >> n >> s;

    // لو الحروف مرتبة أصلاً اطبع 0
    if (isSorted(s, n)) {
        cout << 0 << "\n";
        return;
    }

    int count = 0;
    // نجرب الإزاحة حتى n مرة
    for (int i = 0; i < n; i++) {
        leftShift(s, n);
        count++;
        
        if (isSorted(s, n)) {
            cout << count << "\n";
            return;
        }
    }

    // لو لم ترتب بعد كل المحاولات
    cout << -1 << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}



