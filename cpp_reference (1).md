# مرجع أوامر C++ الأساسية والفنكشنز الجاهزة

## Input / Output
```cpp
cin >> x;              // قراءة قيمة من المستخدم
cout << x;              // طباعة قيمة
cout << x << endl;      // طباعة مع نزول سطر
getline(cin, str);       // قراءة سطر كامل فيه مسافات
cin.ignore();            // تجاهل حرف من الإدخال (زي الإنتر)
```

## Variables & Types
```cpp
int, long long, float, double, char, bool, string
const int X = 5;        // ثابت لا يتغير
auto x = 5;              // النوع يتحدد تلقائياً
```

## Conditions
```cpp
if (cond) { }
else if (cond) { }
else { }
switch (x) { case 1: ... break; default: ... }
```

## Loops
```cpp
for (int i = 0; i < n; i++) { }
while (cond) { }
do { } while (cond);
break;     // يكسر اللوب
continue;  // يروح للتكرار التالي
```

## Arrays & Vectors
```cpp
int arr[5];                    // مصفوفة عادية بحجم ثابت
vector<int> v;                  // مصفوفة ديناميكية
v.push_back(x);                 // إضافة عنصر في النهاية
v.pop_back();                   // حذف آخر عنصر
v.size();                        // عدد العناصر
v.empty();                       // true لو فاضية
v.clear();                        // تفضية الفيكتور
v[i];                              // الوصول لعنصر
v.begin(), v.end();               // إيتريتورز لأول وآخر العنصر
v.insert(v.begin()+i, x);          // إدخال عنصر في موضع معين
v.erase(v.begin()+i);              // حذف عنصر من موضع معين
v.front(), v.back();                // أول وآخر عنصر
vector<vector<int>> v2d(n, vector<int>(m)); // مصفوفة 2D
```

## Strings
```cpp
string s = "hello";
s.length() / s.size();   // طول السترينج
s[i];                      // الوصول لحرف
s.substr(pos, len);        // استخراج جزء من السترينج
s.find("x");                // البحث عن نص (يرجع index أو string::npos)
s + s2;                      // دمج سترينجين
s.push_back('a');             // إضافة حرف في النهاية
s.pop_back();                  // حذف آخر حرف
s.append("text");               // إضافة نص في النهاية
s.compare(s2);                   // مقارنة سترينجين
s.replace(pos, len, "new");       // استبدال جزء من السترينج
to_string(x);                      // تحويل رقم لسترينج
stoi(s) / stol(s) / stod(s);        // تحويل سترينج لرقم (int/long/double)
reverse(s.begin(), s.end());         // عكس السترينج
```

## Algorithm Library `<algorithm>`
```cpp
sort(v.begin(), v.end());                 // ترتيب تصاعدي
sort(v.begin(), v.end(), greater<int>()); // ترتيب تنازلي
reverse(v.begin(), v.end());              // عكس الترتيب
max(a, b), min(a, b);                      // أكبر/أصغر قيمة
max_element(v.begin(), v.end());          // إيتريتور لأكبر عنصر
min_element(v.begin(), v.end());          // إيتريتور لأصغر عنصر
accumulate(v.begin(), v.end(), 0);        // جمع كل العناصر (بحاجة <numeric>)
count(v.begin(), v.end(), x);             // عدد مرات تكرار x
find(v.begin(), v.end(), x);              // البحث عن عنصر (يرجع إيتريتور)
unique(v.begin(), v.end());               // إزالة التكرارات المتتالية
swap(a, b);                                // تبديل قيمتين
abs(x);                                     // القيمة المطلقة
__gcd(a, b);                                 // القاسم المشترك الأكبر
next_permutation(v.begin(), v.end());        // التباديل التالي
binary_search(v.begin(), v.end(), x);          // بحث ثنائي (يرجع true/false)
lower_bound(v.begin(), v.end(), x);             // أول عنصر >= x
upper_bound(v.begin(), v.end(), x);              // أول عنصر > x
```

## Math `<cmath>`
```cpp
pow(a, b);     // a الأس b
sqrt(x);        // الجذر التربيعي
ceil(x);         // تقريب لأعلى
floor(x);          // تقريب لأسفل
round(x);           // تقريب لأقرب
fabs(x);             // القيمة المطلقة لـ double
```

## Pairs & Maps
```cpp
pair<int, int> p = {1, 2};
p.first, p.second;        // الوصول للعناصر

map<string, int> m;
m["key"] = value;          // إضافة/تعديل
m.find("key");              // البحث (يرجع إيتريتور)
m.count("key");               // 1 لو موجود، 0 لو لا
m.erase("key");                // حذف عنصر

unordered_map<string, int> um; // زي map بس بدون ترتيب (أسرع)
```

## Sets
```cpp
set<int> s;          // عناصر مرتبة وبدون تكرار
s.insert(x);
s.erase(x);
s.count(x);            // 1 لو موجود
unordered_set<int> us; // زي set بدون ترتيب (أسرع)
```

## Stack / Queue
```cpp
stack<int> st;
st.push(x); st.pop(); st.top(); st.empty();

queue<int> q;
q.push(x); q.pop(); q.front(); q.empty();
```

## Functions
```cpp
int func(int a, int b) {     // فنكشن عادي
    return a + b;
}
void func(int &a) { }          // تمرير بالمرجع (يغير القيمة الأصلية)
int func(int a = 5) { }          // قيمة افتراضية للمعامل
```

## OOP Basics
```cpp
class MyClass {
private:
    int x;          // مخفي عن الخارج
public:
    MyClass() { }     // constructor
    void setX(int v) { x = v; }
    int getX() { return x; }
};

// Inheritance
class Derived : public Base { };

// Virtual function (polymorphism)
virtual void func();
```

## Pointers & Memory
```cpp
int *ptr = &x;     // مؤشر بياخد عنوان المتغير
*ptr;                // الوصول للقيمة
new int;              // حجز مساحة بالذاكرة (heap)
delete ptr;            // تحرير الذاكرة
nullptr;                 // مؤشر فاضي
```

## Useful Macros / Tricks
```cpp
#define ll long long
#define endl "\n"
ios_base::sync_with_stdio(false);  // تسريع الإدخال والإخراج
cin.tie(NULL);
```
