
#include <stdio.h>
struct item
{
  char itemName[30];
  int qty;
  float price;
  float amount;
};
int main()
{
  struct  item itm;
  struct item *pItem;
  pItem = &itm;
  printf("Enter product name : ");
  gets(pItem->itemName);
  printf("Enter the price : ");
  scanf("%f", &pItem->price);
  printf("Enter the quantity : ");
  scanf("%d", &pItem->qty);
  // Calculate total amount of all quantity
  pItem->amount = (float)pItem->qty * pItem->price;
  // Print item details
  printf("\nName : %s", pItem -> itemName);
  printf("\nPrice : %f", pItem -> price);
  printf("\nQuantity : %d", pItem -> qty);
  printf("Total Amount : %f", pItem -> amount);
  return 0;
}


