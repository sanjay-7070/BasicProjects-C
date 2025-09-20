#include<stdio.h>
float convert (float amount, float fromrate, float torate){
    float inusd = amount/fromrate;
    return inusd*torate;
}

int main(){
    float rates[10]={1.00,0.92,83.0,0.80,150.0,1.55,1.35,7.20,0.88,3.67};
    char *currencynames[10]={"USD","EUR","INR","GBP","JPY","AUD","CAD","CNY","CHF","AED"};
    int from, to;
    float amount;

    printf("\n\nEnter amount to convert: ");
    scanf("%f",&amount);
    printf("\n----Currencies available to convert----\n");
    printf("\n0-USD (United States Dollar)\n1-Euro (Europe)\n2-INR (Indian Rupees)\n3-GBP (British Pound)\n4-JPY (Japanese Yen)\n5-AUD (Australian Dollar)\n6-CAD (Canadian Dollar)\n7-CNY (Chinese Yuan)\n8-CHF (Swiss Franc)\n9-AED (UAE Dirham)");

    printf("\n\nEnter the currency to convert from (Currency code): ");
    scanf("%d",&from);

    printf("Enter the currency to convert to (Currency code): ");
    scanf("%d",&to);

    float result = convert(amount, rates[from],rates[to]);
    printf("\nThe converted amount is %f %s\n\n",result,currencynames[to]);
}