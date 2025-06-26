#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>

using namespace std;

struct Item
{
    int value;
    int weight;
};

class Solution
{
    public:
    bool static comp(Item a, Item b){
        double r1 = (double) a.value / (double) a.weight;
         double r2 = (double) b.value / (double) b.weight;
         return r1 > r2;
      }

    



double fraction(int W, Item arr[], int n)
{
    sort(arr,arr+n,comp);
    double total;

    for(int i=0;i<n;i++)
    {
       if(arr[i].weight<=W)
       {
        total=total+ arr[i].value;
        W= W-arr[i].weight;
       }
       else{
        total=total + W*double(arr[i].value/arr[i].weight);
        break;
       }
    }
    return total;
}
};


int main()
{
     int n = 3, weight = 50;
    Item arr[]={{100,20},{60,10},{120,30}};
    Solution obj;
   double ans = obj.fraction(weight, arr, n);
   cout << fixed << setprecision(2) << ans<< endl; // Output: 3.14

}



// using class for items

// #include <bits/stdc++.h>
// using namespace std;

// class Item {
// private:
//     int value;
//     int weight;

// public:
//     Item(int v = 0, int w = 0) {
//         value = v;
//         weight = w;
//     }

//     int getValue() const { return value; }
//     int getWeight() const { return weight; }

//     double getRatio() const {
//         return static_cast<double>(value) / weight;
//     }
// };

// class Solution {
// public:
//     static bool comp(const Item& a, const Item& b) {
//         return a.getRatio() > b.getRatio(); // sort by value/weight ratio (descending)
//     }

//     double fractionalKnapsack(int W, vector<Item>& items) {
//         sort(items.begin(), items.end(), comp);

//         int curWeight = 0;
//         double finalValue = 0.0;

//         for (const auto& item : items) {
//             if (curWeight + item.getWeight() <= W) {
//                 curWeight += item.getWeight();
//                 finalValue += item.getValue();
//             } else {
//                 int remain = W - curWeight;
//                 finalValue += item.getRatio() * remain;
//                 break;
//             }
//         }

//         return finalValue;
//     }
// };

// int main() {
//     int W = 50;
//     vector<Item> items = { Item(100, 20), Item(60, 10), Item(120, 30) };

//     Solution obj;
//     double result = obj.fractionalKnapsack(W, items);

//     cout << fixed << setprecision(2);
//     cout << "The maximum value is " << result << '\n';

//     return 0;
// // 