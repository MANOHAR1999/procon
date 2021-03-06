#include <iostream>
#include <string>
using namespace std;

// http://www.prefield.com/algorithm/misc/dice.html
enum FACE { TOP, BOTTOM, FRONT, BACK, LEFT, RIGHT };
class dice {
public:
	dice(int top,int front,int right,int left,int back,int bottom) {
		id[TOP] = top; id[FRONT] = front; id[RIGHT] = right;
		id[LEFT] = left; id[BACK] = back; id[BOTTOM] = bottom;
	}
	int& operator[] (FACE f) { return id[f]; }
	const int& operator[] (FACE f) const { return id[f]; }
	bool operator==(const dice &b) const {
		const dice &a = *this;
		return a[TOP] == b[TOP] && a[BOTTOM] == b[BOTTOM] &&
			a[FRONT] == b[FRONT] && a[BACK] == b[BACK] &&
			 a[LEFT] == b[LEFT] && a[RIGHT] == b[RIGHT];
	}
	void roll_north() { roll(TOP, FRONT, BOTTOM, BACK); }
	void roll_south() { roll(TOP, BACK, BOTTOM, FRONT); }
	void roll_east() { roll(TOP, LEFT, BOTTOM, RIGHT); }
	void roll_west() { roll(TOP, RIGHT, BOTTOM, LEFT); }
	void roll_right() { roll(FRONT, LEFT, BACK, RIGHT); }
	void roll_left() { roll(FRONT, RIGHT, BACK, LEFT); }
private:
	void roll(FACE a, FACE b, FACE c, FACE d){
		int tmp = id[a];
		id[a] = id[b]; id[b] = id[c];
		id[c] = id[d]; id[d] = tmp;
	}
	int id[6];
};

int main(){
	int n;
	string s;
	for(;cin>>n,n;){
		dice di(1,5,4,3,2,6);
		for(;n--;){
			cin>>s;
			if(s[0]=='n')di.roll_north();
			if(s[0]=='e')di.roll_east();
			if(s[0]=='w')di.roll_west();
			if(s[0]=='s')di.roll_south();
		}
		cout<<di[TOP]<<endl;
	}
}