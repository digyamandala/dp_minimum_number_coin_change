#include <iostream>
#include <vector>

using namespace std;

/*
  CALCULATE MINIMUM NUMBER OF COINS NEEDED TO CHANGE [1,2,3,4,5...]
  USING DYNAMIC PROGRAMMING
  Formula to find minimum coins to change 'x':
  f(x) = min( f(x-coin1)+1,
              f(x-coin2)+1,
              f(x-coin3)+1,
              f(x-coin4)+1,
              ...,
              ...
            )
*/

int min(int a, int b){
  if(a < b)
    return a;
  return b;
}

vector<int> generateSolveTable(int* coin, int coin_length, int coin_to_change) {

  int MAX = 99999;
  vector<int> solve(1000);
  solve[0] = 0; //base case
  
  for(int i = 1 ; i <= coin_to_change ; i++) {
    solve[i] = MAX;
    for(int j = 0; j < coin_length ; j++){
      if(i - coin[j] < 0){
        //assuming coins are sorted
        break;
      }
      solve[i] = min(solve[i], solve[i - coin[j]] + 1);
    }
  }
  return solve;
}

int main() {

  int coins[100];
  coins[0] = 1;
  coins[1] = 3;
  coins[2] = 4;
  coins[3] = 15;
  int lenCoin = 4;

  int x;
  cin >> x;

  vector<int> numberOfCoinsNeeded = generateSolveTable(coins, lenCoin, x);

  for(int i = 0 ; i <= x ; i++){
    cout << "min coins needed for $" << i << ": " << numberOfCoinsNeeded[i] << " coins"<< endl;
  }

  return 0;
}