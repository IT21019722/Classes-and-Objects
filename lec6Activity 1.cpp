#include<iostream>
#include<cstring>
using namespace std;

class Item{
  private:
    int itemCode;
    char name[20];
    float price;

  public:
    void setItemDetails(int code, char itemName[]);
    void setPrice(float p);
    int getItemCode();
    float getPrice();
};
void Item::setItemDetails(int code, char itemName[])
{
  itemCode = code;
  strcpy(name, itemName);
}
void Item::setPrice(float p)
{
  price = p;
}
int Item::getItemCode()
{
  return itemCode;
}
float Item::getPrice()
{
  return price;
}

int main() //main program 
{
  Item item1;   //object created from class Item
  int code;
  char name[20];
  float price;
  cout<<"Enter the item code: ";
  cin>>code;
  cout<<"Enter the name of item: ";
  cin>>name;
  cout<<"Enter the price of item: ";
  cin>>price;
  
  item1.setItemDetails(code, name);
  item1.setPrice(price);
  
  cout<<"Item code is: "<<item1.getItemCode()<<endl;
  cout<<"Item price is: "<<item1.getPrice()<<endl;

  return 0;
}

