#include "stdio.h"

int main()
{
    int buying_price, maker_price, discount_percentage;

    printf("Enter the bying price: ");
    scanf("%d", &buying_price);

    printf("Enter the making price: ");
    scanf("%d", &maker_price);

    printf("Enter the discount (in %%): ");
    scanf("%d", &discount_percentage);

    int discount_price = (maker_price * discount_percentage) / 100;
    int selling_price = maker_price - discount_price;

    float profit_loss = selling_price - buying_price;

    if (profit_loss >= 0)
    {
        float profit_percentange = (profit_loss / maker_price) * 100;
        printf("Seller had made a profit of %.2f%%\n", profit_percentange);
    }
    else
    {
        float loss_percentange = (-profit_loss / maker_price) * 100;
        printf("Seller had made a loss of %.2f%%\n", loss_percentange);
    }

    return 0;
}