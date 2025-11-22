#include <iostream>
#include <vector>
#include <climits>
using namespace std;
void maxProfitFinder(vector<int> &prices, int i, int &MinPrice, int &MaxProfit)
{
    // base case
    if (i == prices.size())
    {
        return;
    }

    if (prices[i] < MinPrice)
    {
        MinPrice = prices[i];
    }
    int todayProfit = prices[i] - MinPrice;
    if (todayProfit > MaxProfit)
    {
        MaxProfit = todayProfit;
    }

    // Recursion call
    maxProfitFinder(prices, i + 1, MinPrice, MaxProfit);
}
int main()
{
    vector<int> prices = {7, 1, 3, 3, 4, 4};
    int MinPrice = INT_MAX;
    int MaxProfit = INT_MIN;
    maxProfitFinder(prices, 0, MinPrice, MaxProfit);
    cout << MaxProfit;
}