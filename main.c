#include <stdio.h>

int main() {
    int i = 0;
    int a = 0;
    int quantity = 0;
    int subtotal = 0;
    int total_shopping = 0;

    printf("Welcome to Sanjaya Mall!\nThis mall provides a wide variety of items you can buy!\n");
    printf("===============================================================\n");

    while (1) {
        printf("Please choose a store you want to visit:\n1. Stationery Store\n2. Food Store\n3. Drink Store\n4. Toy Store\n5. Finish / Exit Mall\n");
        printf("===============================================================\n");
        printf("Current total shopping: Rp.%d\n", total_shopping);
        printf("Store to visit: ");
        scanf("%d", &i);

        if (i == 1) {
            while (1) {
                printf("===============================================================\n");
                printf("Welcome to the Stationery Store!\nPlease choose an item you want to buy:\n1. Notebook : Rp.15.000\n2. Pen Set : Rp.25.000\n3. Backpack : Rp.75.000\n4. Ruler : Rp.5.000\n5. Exit Store\nYour choice: ");
                scanf("%d", &a);
            
                if (a == 1) {
                    printf("Enter the quantity you want to buy: ");
                    scanf("%d", &quantity);
                    subtotal = 15000 * quantity;
                    total_shopping += subtotal;
                    printf("Successfully added %d Notebook to cart (Subtotal: Rp.%d)\nCurrent total shopping: Rp.%d\n", quantity, subtotal, total_shopping);
                } else if (a == 2) {
                    printf("Enter the quantity you want to buy: ");
                    scanf("%d", &quantity);
                    subtotal = 25000 * quantity;
                    total_shopping += subtotal;
                    printf("Successfully added %d Pen Set to cart (Subtotal: Rp.%d)\nCurrent total shopping: Rp.%d\n", quantity, subtotal, total_shopping);
                } else if (a == 3) {
                    printf("Enter the quantity you want to buy: ");
                    scanf("%d", &quantity);
                    subtotal = 75000 * quantity;
                    total_shopping += subtotal;
                    printf("Successfully added %d Backpack to cart (Subtotal: Rp.%d)\nCurrent total shopping: Rp.%d\n", quantity, subtotal, total_shopping);
                } else if (a == 4) {
                    printf("Enter the quantity you want to buy: ");
                    scanf("%d", &quantity);
                    subtotal = 5000 * quantity;
                    total_shopping += subtotal;
                    printf("Successfully added %d Ruler to cart (Subtotal: Rp.%d)\nCurrent total shopping: Rp.%d\n", quantity, subtotal, total_shopping);
                } else if (a == 5) {
                    printf("Exiting store\n");
                    printf("===============================================================\n");
                    break;
                } else {
                    printf("Please choose an item from the list!\n");
                }
            }
        } else if (i == 2) {
            while (1) {
                printf("===============================================================\n");
                printf("Welcome to the Food Store!\nPlease choose food you want to buy:\n1. Fried Rice : Rp.20.000\n2. Fried Noodles : Rp.10.000\n3. Fried Chicken : Rp.15.000\n4. Meatball : Rp.18.000\n5. Exit Store\nYour choice: ");
                scanf("%d", &a);
            
                if (a == 1) {
                    printf("Enter the quantity you want to buy: ");
                    scanf("%d", &quantity);
                    subtotal = 20000 * quantity;
                    total_shopping += subtotal;
                    printf("Successfully added %d Fried Rice to cart (Subtotal: Rp.%d)\nCurrent total shopping: Rp.%d\n", quantity, subtotal, total_shopping);
                } else if (a == 2) {
                    printf("Enter the quantity you want to buy: ");
                    scanf("%d", &quantity);
                    subtotal = 10000 * quantity;
                    total_shopping += subtotal;
                    printf("Successfully added %d Fried Noodles to cart (Subtotal: Rp.%d)\nCurrent total shopping: Rp.%d\n", quantity, subtotal, total_shopping);
                } else if (a == 3) {
                    printf("Enter the quantity you want to buy: ");
                    scanf("%d", &quantity);
                    subtotal = 15000 * quantity;
                    total_shopping += subtotal;
                    printf("Successfully added %d Fried Chicken to cart (Subtotal: Rp.%d)\nCurrent total shopping: Rp.%d\n", quantity, subtotal, total_shopping);
                } else if (a == 4) {
                    printf("Enter the quantity you want to buy: ");
                    scanf("%d", &quantity);
                    subtotal = 18000 * quantity;
                    total_shopping += subtotal;
                    printf("Successfully added %d Meatball to cart (Subtotal: Rp.%d)\nCurrent total shopping: Rp.%d\n", quantity, subtotal, total_shopping);
                } else if (a == 5) {
                    printf("Exiting store\n");
                    printf("===============================================================\n");
                    break;
                } else {
                    printf("Please choose an item from the list!\n");
                }
            }
        } else if (i == 3) {
            while (1) {
                printf("===============================================================\n");
                printf("Welcome to the Drink Store!\nPlease choose drinks you want to buy:\n1. Mineral Water : Rp.5.000\n2. Tea : Rp.8.000\n3. Coca Cola : Rp.12.000\n4. Orange Juice : Rp.10.000\n5. Exit Store\nYour choice: ");
                scanf("%d", &a);
            
                if (a == 1) {
                    printf("Enter the quantity you want to buy: ");
                    scanf("%d", &quantity);
                    subtotal = 5000 * quantity;
                    total_shopping += subtotal;
                    printf("Successfully added %d Mineral Water to cart (Subtotal: Rp.%d)\nCurrent total shopping: Rp.%d\n", quantity, subtotal, total_shopping);
                } else if (a == 2) {
                    printf("Enter the quantity you want to buy: ");
                    scanf("%d", &quantity);
                    subtotal = 8000 * quantity;
                    total_shopping += subtotal;
                    printf("Successfully added %d Tea to cart (Subtotal: Rp.%d)\nCurrent total shopping: Rp.%d\n", quantity, subtotal, total_shopping);
                } else if (a == 3) {
                    printf("Enter the quantity you want to buy: ");
                    scanf("%d", &quantity);
                    subtotal = 12000 * quantity;
                    total_shopping += subtotal;
                    printf("Successfully added %d Coca Cola to cart (Subtotal: Rp.%d)\nCurrent total shopping: Rp.%d\n", quantity, subtotal, total_shopping);
                } else if (a == 4) {
                    printf("Enter the quantity you want to buy: ");
                    scanf("%d", &quantity);
                    subtotal = 10000 * quantity;
                    total_shopping += subtotal;
                    printf("Successfully added %d Orange Juice to cart (Subtotal: Rp.%d)\nCurrent total shopping: Rp.%d\n", quantity, subtotal, total_shopping);
                } else if (a == 5) {
                    printf("Exiting store\n");
                    printf("===============================================================\n");
                    break;
                } else {
                    printf("Please choose an item from the list!\n");
                }
            }
        } else if (i == 4) {
            while (1) {
                printf("===============================================================\n");
                printf("Welcome to the Toy Store!\nPlease choose toys you want to buy:\n1. Lego : Rp.250.000\n2. Hotwheels : Rp.35.000\n3. Pokemon Card : Rp.50.000\n4. Rubik's Cube : Rp.30.000\n5. Exit Store\nYour choice: ");
                scanf("%d", &a);
            
                if (a == 1) {
                    printf("Enter the quantity you want to buy: ");
                    scanf("%d", &quantity);
                    subtotal = 250000 * quantity;
                    total_shopping += subtotal;
                    printf("Successfully added %d Lego to cart (Subtotal: Rp.%d)\nCurrent total shopping: Rp.%d\n", quantity, subtotal, total_shopping);
                } else if (a == 2) {
                    printf("Enter the quantity you want to buy: ");
                    scanf("%d", &quantity);
                    subtotal = 35000 * quantity;
                    total_shopping += subtotal;
                    printf("Successfully added %d Hotwheels to cart (Subtotal: Rp.%d)\nCurrent total shopping: Rp.%d\n", quantity, subtotal, total_shopping);
                } else if (a == 3) {
                    printf("Enter the quantity you want to buy: ");
                    scanf("%d", &quantity);
                    subtotal = 50000 * quantity;
                    total_shopping += subtotal;
                    printf("Successfully added %d Pokemon Card to cart (Subtotal: Rp.%d)\nCurrent total shopping: Rp.%d\n", quantity, subtotal, total_shopping);
                } else if (a == 4) {
                    printf("Enter the quantity you want to buy: ");
                    scanf("%d", &quantity);
                    subtotal = 30000 * quantity;
                    total_shopping += subtotal;
                    printf("Successfully added %d Rubik's Cube to cart (Subtotal: Rp.%d)\nCurrent total shopping: Rp.%d\n", quantity, subtotal, total_shopping);
                } else if (a == 5) {
                    printf("Exiting store\n");
                    printf("===============================================================\n");
                    break;
                } else {
                    printf("Please choose an item from the list!\n");
                }
            }
        } else if (i == 5) {
            printf("===============================================================\n");
            printf("Thank you for visiting Sanjaya Mall!\n");
            printf("Your total overall shopping at the mall is: Rp.%d\n", total_shopping);
            printf("===============================================================\n");
            break;
        } else {
            printf("Store choice is not available in the list!\n");
            printf("===============================================================\n");
        }
    }

    return 0;
}
