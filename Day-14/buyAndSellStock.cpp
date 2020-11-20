// C++ program to find best time to buy and sell stock
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// functions used in this code
int maxProfit(vector<int>& prices);

// Driver code
int main()
{
    int size = 0;

    //Read the size of the vector from the user
    cout << "Enter the size of array:";
    cin >> size;
    
    //Declare a vector
    vector<int> prices;

    //Initialize the array elements
    cout << "Enter array elements\n";
    for (int index = 0; index < size; index++)
    {
        int x;
        cin >> x;
        prices.push_back(x);
    }

    cout << maxProfit(prices);
    return 0;
}

//Function to find the maximum profit
int maxProfit(vector<int>& prices)
{
    int profit = 0;
    int minprice = INT_MAX;
    for (int i = 0; i < prices.size(); i++)
    {
        if (prices[i] < minprice)
        {
            minprice = prices[i];
        }
        else if (prices[i] - minprice > profit)
        {
            profit = prices[i] - minprice;
        }
    }
    return profit;
}