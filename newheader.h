#include <conio.h>
#include <string>
#include <vector>
#include <list>
#include <cassert>
#include <sstream>
#include <map>
#include <set>
#include <climits>
#include <deque>
#include <fstream>
#include <stack>
#include <bitset>
#include <stack>
#include <queue>
#include <algorithm>
#include <functional>
#include <numeric>
#include <cstring>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

#define TRUE            while(true)
#define FOR(i,a,b)		if(a>0)for(unsigned int i= (unsigned int )a ; i < (unsigned int )b ; ++i)
#define REV(i,a,b)		if(a>0)for(unsigned int i= (unsigned int )a ; i >= (unsigned int )b ; --i)
#define REP(i,n)		FOR(i,0,n)
#define DEP(i,n)		REV(i,n,0)
#define PB				push_back
#define PP				pop()
#define EM				empty()
#define INF				1000000000
#define PF(v,a)			v.insert(v.begin(), a);
#define IAT(v, p, a)    v.insert(v.begin() + p, a);
#define ALL(x)			x.begin(),x.end()
#define SORT(x)         sort(x, x + sizeof(x) / sizeof(int))
#define VSORT(x)        sort(x.begin(), x.end())
#define V(x)			vector< x >
#define DEBUG           cout<<"debug"
#define Debug			false
#define PRINT(x)        cout << #x << " " << x << endl
#define PLINE           cout << endl;
#define LET(x,a) 	    __typeof(a) x(a)
#define IFOR(i,a,b) 	for(LET(i,a);i!=(b);++i)
#define EACH(it,v)  	IFOR(it,v.begin(),v.end())
#define PRESENT(c,x) 	((c).find(x) != (c).end())
#define SZ(x) 			x.size()
#define CPRESENT(c,x) 	(find(c.begin(),c.end(),x) != (c).end())
#define D(N) 			int N
#define S(N)			scanf("%d",&N)
#define FASTIO          1
#define ENDP			cout << "\n\nPress any key to continue . . ." << endl; _getch()
#define STATUS_SUCCESS	0

/* FastIO, generally required these days */
#ifndef FASTIO
char *ipos, *opos, InpFile[20000000], OutFile[20000000], DIP[20];
inline int input(int flag = 0) {

	while (*ipos <= 32) ++ipos;
	if (flag) return (*ipos++ - '0'); /* For getting Boolean Characters */
	int x = 0, neg = 0; char c;
	while (true) {
		c = *ipos++; if (c == '-') neg = 1;
		else {
			if (c <= 32) return neg ? -x : x;
			x = (x << 1) + (x << 3) + c - '0';
		}
	}
}
inline void output(int x, int flag) {
	int y, dig = 0;
	while (x || !dig) { y = x / 10; DIP[dig++] = x - ((y << 3) + (y << 1)) + '0'; x = y; }
	while (dig--) *opos++ = DIP[dig];
	*opos++ = flag ? '\n' : ' ';
}
inline void InitFASTIO() {
	ipos = InpFile; opos = OutFile;
	fread_unlocked(InpFile, 20000000, 1, stdin);
}
inline void FlushFASTIO() {
	fwrite_unlocked(OutFile, opos - OutFile, 1, stdout);
}
#endif

string intToString(int number)
{
    ostringstream convert;
    convert<<number;
    return convert.str();
}

int stringToInt(string number)
{
    int n;
    istringstream ( number ) >> n;
    return n;
}

int numOfDigit(int number)
{
    int d=1;
    while(number>=10)
    {
        number/=10;
        d++;
    }
    return d;
}


string binaryString(int number)
{
    string newString="";
    int i=1;
    while (i<number)
        i*=2;
    i/=2;
    while (i>0)
    {
        if (i>number)
            newString+="0";
        else {
                number-=i;
                newString+="1";
             }
        i/=2;
    }
    return newString;
}

string upperString(string input)
{
    string output="";
    FOR(i,0,input.length())
       output += toupper(input.at(i));
    return output;
}

string lowerString(string input)
{
    string output="";
    FOR(i,0,input.length())
       output += tolower(input.at(i));
    return output;
}

string grab()
{
    string output;
    getline(cin,output);
    return output;
}
