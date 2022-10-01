#include <iostream>
using namespace std;

int a[8][8],lim;

int check(int f,int s, int x, int y){

    if (((x-f)>=0 && (x-f)<=7) && ((y-s)>=0 && (y-s)<=7)){
        a[x-f][y-s]=1;
        return 1;
    }
    return 0;
}

void game(int x, int y, int count) {

    if (count<lim and check(2,1,x,y)){
        game(x - 2, y - 1,(count + 1));
    }
    if (count<lim and check(2,-1,x,y)){
        game(x-2,y+1,(count + 1));
    }
    if (count<lim and check(-2,1,x,y)){
        game(x + 2, y - 1,(count + 1));
    }
    if (count<lim and check(-2,-1,x,y)){
        game(x+2,y+1,(count + 1));
    }
    if (count<lim and check(1,2,x,y)){
        game(x-1,y-2,(count + 1));
    }
    if (count<lim and check(1,-2,x,y)){
        game(x-1,y+2,(count + 1));
    }
    if (count<lim and check(-1,2,x,y)){
        game(x+1,y-2,(count + 1));
    }
    if (count<lim and check(-1,-2,x,y)){
        game(x+1,y+2,(count + 1));
    }
}

int main() {
    int x,y;
    cin >> x >> y >> lim;

    a[x][y]=2;
    game(x,y,0);
    for (auto & i : a){
        for (int j : i){
            cout <<j << "  ";
        }
        cout << endl;
    }
}
