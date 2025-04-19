#include <iostream>
using namespace std;
class Shop
{
    int itemID[100];
    int itemPrice[100];
    int counter;

public:
    void intCounter(void) { counter = 0; }
    void setData(void);
    void displayData(void);
};
void Shop ::setData(void)
{
    cout << "Enter the Id No. of item " << counter + 1 << " :: ";
    cin >> itemID[counter];
    cout << "Enter the Price Of item " << counter + 1 << " :: ";
    cin >> itemPrice[counter];
    counter++;
}
void Shop ::displayData(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of Id No. is " << itemID[i] << " :: " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop item;
    int numOfItem;
    cout << "Enter The Total No. Of Item :: ";
    cin >> numOfItem;
    item.intCounter();
    for (int i = 1; i <= numOfItem; i++)
    {
        item.setData();
    }
    item.displayData();
    return 0;
}