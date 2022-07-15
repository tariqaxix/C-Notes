
#include <stdio.h>
struct item
{
  char itemName[30];
  int qty;
  float price;
  float amount;
};
// readItem() - to rad values of item and calculate total amount
void readItem(struct item *i)
{
  // read values using pointers
  printf("Enter product name : ");
  gets(i -> itemName);
  printf("Enter the price : ");
  scanf("%f", &i -> price);
  printf("Enter the quantity : ");
  scanf("%d", &i -> qty);
  // Calculate the total amount of all quantity
  i -> amount = (float)i -> qty * i -> price; 
}
// printItem() - to print the values of item
void printItem(struct item *i)
{
  // print item details
  printf("\nName : %s", i -> itemName);
  printf("\nPrice : %f", i -> price);
  printf("\nQuantity : %d", i -> qty);
  printf("\nTotal Amount : %f", i -> amount);
}
int main()
{
  // Decalre variable of structure item
  struct item itm;
  // Declare pointer of structure item
  struct item *pItem;
  // Pointer assignment - assigning adress of itm to *pItem
  pItem = &itm;
  // read item
  readItem(pItem);
  // print item
  printItem(pItem);
  return 0;
}


