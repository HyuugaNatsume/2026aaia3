///wee04-2good.cpp 這程式是對的，用進階c++迴圈
///但在CodeBlocks出錯， warning: range-based for only avaolable with ...
///2011年之後，只有在-std=c++或--std=gnu++11才能用
///所以需要改一下設定:Settings-Compiler...
///選第二個「使用C++11 ISO國際標準的C++」也就是-std=c++11
///下面是week04的小考題目 SOIT106_ADVACNE_012
#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> a;
  int now;
  for(int i=0;i<20;i++){
    cin>>now;
    if(now==0) break;
    a.push_back(now);
  }
  cin>>now;
  int ans = 0;
  for(int num :a){///在CodeBlocks樹定出錯時，永遠跑不出答案
    if(num==now)ans++;
  }
  cout<< ans <<"\n";
}///截圖時，請把Build messages 裡面藍色的 waring 也截圖進來
