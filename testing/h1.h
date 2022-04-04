#ifdef intro_run
                                         cODED by-
 __                         __
|  | ____ __  ____________ |__|____
|  |/ /  |  \/  ___/\____ \|  \__  \
|    <|  |  /\___ \ |  |_> >  |/ __ \_
|__|_ \____//____  >|   __/|__(____  /
     \/          \/ |__|           \/

#endif

#include <bits/stdc++.h> 
#include <typeinfo> 
using namespace std;
#define pi 3.141592653589793
#define MOD 1000000007
#define maa LLONG_MAX
#define mii LLONG_MIN
#define iofast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define _s void solve(){
#define _2 }int main(){iofast string path = "C:\\Users\\1kusp\\OneDrive\\Documents\\CP\\testing\\"; if ( __FILE__ == path + "optimal_test.cpp") {freopen( (path + "in.txt").c_str () , "r", stdin);freopen( (path + "optimal_test_out.txt").c_str () , "w", stdout);} else if (__FILE__ == path + "brute_test.cpp" ){freopen( (path + "in.txt").c_str () , "r", stdin);freopen( (path + "brute_test_out.txt").c_str () , "w", stdout);} else{freopen( (path + "in.txt").c_str () , "w", stdout);} lll{solve();}}
#define _1 }int main(){iofast string path = "C:\\Users\\1kusp\\OneDrive\\Documents\\CP\\testing\\"; if ( __FILE__ == path + "optimal_test.cpp") {freopen( (path + "in.txt").c_str () , "r", stdin);freopen( (path + "optimal_test_out.txt").c_str () , "w", stdout);} else if (__FILE__ == path + "brute_test.cpp" ){freopen( (path + "in.txt").c_str () , "r", stdin);freopen( (path + "brute_test_out.txt").c_str () , "w", stdout);} else{freopen( (path + "in.txt").c_str () , "w", stdout);} solve();}
// Debugger Usage:: dg(code + "forces",-aux / 10 * 2.3); dg(x, y, z, s, b); 
#define dg(...) dg_out(vec_splitter(#__VA_ARGS__), 0, __LINE__, __VA_ARGS__);
vector<string> vec_splitter(string s) {	s += ','; vector<string> res; while(!s.empty()) { res.push_back(s.substr(0, s.find(','))); s = s.substr(s.find(',') + 1);}return res;} void dg_out(vector<string> __attribute__ ((unused)) args,__attribute__ ((unused)) int idx, __attribute__ ((unused)) int LINE_NUM) { cerr << endl; } template <typename Head, typename... Tail> void dg_out(vector<string> args, int idx, int LINE_NUM, Head H, Tail... T) {if(idx > 0) cerr << ", "; else cerr << "Line(" << LINE_NUM << ") ";stringstream ss; ss << H;cerr << args[idx] << " = " << ss.str();dg_out(args, idx + 1, LINE_NUM, T...);}
#define pr(...) pr_out(vec_splitter(#__VA_ARGS__), 0, __LINE__, __VA_ARGS__);
#define iofile freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);
#define s___ auto t_____rt = chrono::high_resolution_clock::now();
#define e___ auto t____rt = chrono::high_resolution_clock::now(); double time_taken = chrono::duration_cast<chrono::nanoseconds>(t____rt - t_____rt).count(); time_taken *= 1e-9;cerr << "Time: SEE IT DON't IGNORE :-: " << fixed << time_taken << setprecision(9);cerr << " sec" << endl;
#define ll long long int
#define ld  double
#define pll pair<ll,ll>
#define pii pair<int,int>
#define vii vector<int>
#define vll vector<ll>
#define vld vector<ld>
#define lll ll t;cin>>t; while(t--)
#define l1(o,x,y) for(ll o=x;o<y;o++)
#define l1p(o,x,y,uu) for(ll o=x;o<y;o+=uu)
#define ok return
#define esz .size()
#define clr .clear()
#define mkp make_pair
#define fi first
#define si second
#define pb push_back
#define lc <<"\n"
#define all(x) x.begin(),x.end()
#define max3(a,b,c) max(a,max(b,c))
#define min3(a,b,c) min(a,min(b,c))
void pr_out(vector<string> __attribute__ ((unused)) args,__attribute__ ((unused)) int idx, __attribute__ ((unused)) int LINE_NUM) { cout << endl; } template <typename Head, typename... Tail>void pr_out(vector<string> args, int idx, int LINE_NUM, Head H, Tail... T) {stringstream ss; ss << H;cout << ss.str() << " ";pr_out(args, idx + 1, LINE_NUM, T...);}
#define sw(v,n) l1(i,0,n) cout<<v[i]<<" " ; cout lc ;
#define dsw(v,n) cerr<<"Line("<<__LINE__<<") "; l1(i,0,n) cerr<<v[i]<<" " ; cerr lc ;

// Note l and r are inclusive
mt19937 r__ng(chrono::steady_clock::now().time_since_epoch().count());ll randll(ll l, ll r){uniform_int_distribution<int> uid(l, r);ok uid(r__ng);}
void aent(ll *a,ll n){l1(i,0,n) std::cin>>a[i];} 
void vent(vll &v,ll n){l1(i,0,n){ll x; std::cin>>x;v.pb(x);}}
string arrtostr ( ll *a , ll n ){ostringstream os;l1(i,0,n)os<<a[i];string str(os.str());return str;} 
// Find position of character/substring in a string from left and right [0 indexing],u may also specify from where to search in find()
pll pos_l_r (string s , string m){pll p;ll l = s.find(m);reverse(all(s));ll r = s.find(m);p = mkp(l , r);ok p;}
void var_info (auto a){pr(sizeof(a), typeid(a).name() );} 
// Convert a number (Integer or decimal) to string
string tostring (auto v){ok to_string(v);}
// Convert a string to ld 
ld tonumber (auto s){stringstream geek(s);ld x = 0;geek >> x;ok x;}
// Convert a number to binary string 
string tobinary (auto v){string s = bitset<64> (v).to_string();const auto loc1 = s.find('1');if(loc1 != string::npos) ok s.substr(loc1);ok "0";}
// Run the sieve upto 1e6+1 sv_p have all prime in it, note sv_prime[i] tells i is prime or not 
bool sv_prime[100000000+1];vll sv_p;void sv_run(ll n = 100000000+1){memset(sv_prime, true, sizeof(sv_prime)); for (ll p = 2; p * p <= n; p++) { if (sv_prime[p] == true) { for (ll i = p * p; i <= n; i += p) sv_prime[i] = false; } } l1(i,2 , n) if (sv_prime[i]) sv_p.push_back(i);}
// Factorise let 45: v={(3,2),(5,1)} O(sqrt(n))
vector<pll> prm_fac_vec(ll n){vector<pll> v;ll count = 0;while (!(n % 2)) {n >>= 1; count++;}if (count)v.pb(mkp(2,count));for (ll i = 3; i <= sqrt(n); i += 2) {count = 0;while (n % i == 0) {count++;n = n / i;}if (count)v.pb(mkp(i,count));}if (n > 2)v.pb(mkp(n,1));ok v;}
// bigINT w("");bigINT b("12345");b.numDigits();b.number/*string value*/;{==,<,>,<=,>=,^,+,*,cout<<,++p,p++};bigINT big__fac(ll n),bigINT big__fib(ll n),bigINT ll__big(ll n)
class bigINT {public:string number;bigINT(string number){this->number = number;}int numDigits(){ok this->number.length();}bool operator==(bigINT other){if (this->number.length() != other.number.length()) ok 0;for(int i = 0;i < this->number.length();i++) {if (this->number[i] != other.number[i])ok 0;}ok 1;}bool operator<=(bigINT other){if (this->number.length() < other.number.length())ok 1;if (this->number.length() > other.number.length())ok 0;for (int i = 0;i < this->number.length();i++) {if (this->number[i]>other.number[i])ok 0;}ok 1;}bool operator<(bigINT other){if (!(*this <= other)) ok 0;if( *this == other ) ok 0;ok 1;}bool operator>=(bigINT other){if (this->number.length()>other.number.length())ok 1;if (this->number.length()<other.number.length())ok 0;for (int i = 0;i < this->number.length();i++) {if (this->number[i]< other.number[i])ok 0;}ok 1;}bool operator>(bigINT other){if (!(*this >= other)) ok 0;if (*this == other) ok 0;ok 1;}bigINT operator+(bigINT other){if (this->number.length()<= other.number.length()) {reverse(this->number.begin(),this->number.end());reverse(other.number.begin(),other.number.end());int extraZeroes= other.number.length()- this->number.length();for (int i = 0;i < extraZeroes; i++) {this->number.push_back('0');}}if (this->number.length() > other.number.length()) {reverse(this->number.begin(),this->number.end());reverse(other.number.begin(),other.number.end());int extraZeroes= this->number.length()- other.number.length();for (int i = 0;i < extraZeroes;i++){other.number.push_back('0');}}string answer = "";int carry = 0;int ansDigit = 0;for (int i = 0;i < this->number.length();i++) {int firstDigit = this->number[i] - '0';int secondDigit = other.number[i] - '0';int sum = firstDigit + secondDigit + carry;ansDigit = sum % 10;carry = sum / 10;char toPush = ansDigit + '0';answer += toPush;if (i == this->number.length() - 1&& carry != 0) {char extraPush = carry + '0';answer += extraPush;}}reverse(answer.begin(),answer.end());ok answer;}bigINT operator*(bigINT other){vector<bigINT> result;reverse(other.number.begin(),other.number.end());for (int i = 0;i < this->number.length();i++) {int carry = 0;int product = 0;string ans = "";int digit = this->number[i] - '0';for (int j = 0;j < other.number.length();j++) {int otherDigit = other.number[j] - '0';product = digit * otherDigit + carry;carry = product / 10;int remainderNumber = carry * 10;int number;if (remainderNumber != 0)number = product % remainderNumber;else number = product % 10;char toPush = number + '0';ans += toPush;if (j == other.number.length() - 1&& carry != 0) {char extraPush = carry + '0';ans += extraPush;}}for (int k = 0;k < this->number.length() - i - 1;k++) {ans = '0' + ans;}reverse(ans.begin(), ans.end());bigINT add(ans);result.push_back(add);}bigINT sum("0");for (int i = 0;i < result.size();i++){sum = sum + result[i];}ok sum;}friend ostream& operator<<(ostream& out,const bigINT& bin){out << bin.number;out << endl;ok out;}bigINT operator^(ll n){bigINT result("1");bigINT repeat(this->number);for (int i = 0; i < n; i++) {result = result * repeat;}ok result;}void operator++(int){bigINT newNumber(this->number);newNumber = newNumber + bigINT("1");this->number = newNumber.number;}void operator++(){bigINT newNumber(this->number);newNumber = newNumber + bigINT("1");this->number = newNumber.number;}};bigINT big__fib(ll n){bigINT first("0");bigINT second("1");if (n == 0)ok first;if (n == 1)ok second;bigINT fib("0");for (int i = 2; i <= n; i++) {fib = first + second;first = second;second = fib;}ok fib;}bigINT ll__big(ll n){string result = "";while (n > 0) {int digit = n % 10;n /= 10;char toPush = digit + '0';result += toPush;}reverse(result.begin(),result.end());bigINT temp(result);ok temp;}bigINT big__fac(ll n){bigINT fact("1");if (n <= 1)ok fact;for (int i = 2; i <= n; i++) {fact = fact * ll__big(i);}ok fact;}
// n mod p (p is prime) O(n)
ll modFact(ll n, ll p){ if (n >= p) return 0; ll result = 1; for (ll i = 1; i <= n; i++) result = (result * i) % p; return result;}

#ifdef Important_STL_descriptions
1. string w = s.substr(l,r-l+1) it follows 0 Indexing and note here l and r {both inculsive} are indexes of slicing
2. v.erase(v.begin()+l,(v.begin()+1)+r) 0 Indexing and note here l and r {both inculsive} are indexes of slicing
3. binary_search(arr.begin(), arr.end(), val) works on sorted array nd returns bool value
4. lower_bound(arr.begin(), arr.end(), val) works on sorted nd returns index as soon as val is found else next higher index
5. upper_bound(arr.begin(), arr.end(), val) works on sorted nd returns index of next higher element from right 
6. ll number_value = stoi(binary_string, 0, 2); 
#endif

/*******************************************/
