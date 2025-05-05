#include <iostream> // Including the input/output library for user interaction
#include <string>   // Including the string library for storing item names
#include <ctime>    // Including the time library for date and time functions
#include <map>      // Including map to store and manage the inventory (items and their prices)
#include <iomanip>  // For controlling output formatting (e.g., decimal places)
#include <vector>   // For storing items that have been purchased during the billing process
#define TAX_RATE 0.1 // Macro for the tax rate (10%)
#define CARD_DISCOUNT 0.05 // Macro for the discount rate on card payments (5%)

using namespace std;

// Class to represent an Item in the store
class Item {
public:
    string name;  // Item name
    float price;  // Price of the item
    int quantity; // Quantity of the item purchased

    Item(const string &itemName, float itemPrice, int itemQuantity)
        : name(itemName), price(itemPrice), quantity(itemQuantity) {}
};

// Class to represent the Inventory of the store
class Inventory {
private:
    map<string, float> inventory;

public:
    Inventory() {
        inventory = {
            {"Egg", 30.0},
            {"Bread", 100.0},
            {"Milk", 90.0},
            {"Cake", 300.0},
            {"Apple", 80.0}};
    }

    bool itemExists(const string &itemName) {
        return inventory.find(itemName) != inventory.end();
    }

    float getPrice(const string &itemName) {
        return inventory[itemName];
    }
};

// Class to manage the billing process
class Billing {
private:
    vector<Item> purchasedItems;
    float total;
    int totalQuantity;

public:
    Billing() : total(0), totalQuantity(0) {}

    void addItem(const string &itemName, int quantity, float price) {
        purchasedItems.emplace_back(itemName, price, quantity);
        total += price * quantity;
        totalQuantity += quantity;
    }

    float calculateTax() { return total * TAX_RATE; }

    void printBill() {
        cout << "\t\t\t\t KARSAZ QUICK SHOP" << endl;
        cout << "\t\t   NORE IV Market, Karsaz, Karachi." << endl;
        cout << "\t\t    0333-3168235\t0333-3168241" << endl;
        cout << "Bill No: 1" << endl;
        time_t rn = time(0);
        cout << "Date & Time: " << ctime(&rn) << endl;
        cout << "---------------------------------------------------------------------" << endl;
        cout << "Description\t\t\tQty\t\t\tRate\t\tAmount" << endl;

        for (const auto &item : purchasedItems) {
            cout << item.name << "\t\t\t\t" << item.quantity << "\t\t\t" << item.price << "\t\t\t" << item.price * item.quantity << endl;
        }

        float tax = calculateTax();
        float grandTotal = total + tax;

        cout << "---------------------------------------------------------------------" << endl;
        cout << "\t\t\t\tNet Amount:\t\tRs." << fixed << setprecision(2) << total << endl;
        cout << "\t\t\t\tTax (10%):\t\tRs." << tax << endl;
        cout << "\t\t\t\tTotal Amount:\tRs." << grandTotal << endl;
    }

    void reset() {
        purchasedItems.clear();
        total = 0;
        totalQuantity = 0;
    }

    float getGrandTotal() { return total + calculateTax(); }

    float applyCardDiscount() { return getGrandTotal() * (1 - CARD_DISCOUNT); }
};

// Class for user authentication
class User {
private:
    string username;
    string password;

public:
    User() : username("admin"), password("password") {}

    bool authenticate() {
        string inputUsername, inputPassword;
        cout << "Enter username: ";
        cin >> inputUsername;
        cout << "Enter password: ";
        cin >> inputPassword;
        return inputUsername == username && inputPassword == password;
    }
};

int main() {
    User user;
    if (!user.authenticate()) {
        cout << "Invalid credentials. Exiting program.\n";
        return 1;
    }

    Inventory inventory;
    Billing billing;
    string itemName;
    int quantity;
    char anotherCustomer;
    int customerCount = 1;

    do {
        billing.reset();
        cout << "\n\n--- CUSTOMER " << customerCount << " ---\n";

        do {
            cout << "Enter item and quantity (or type END to finish): ";
            cin >> itemName;

            if (itemName == "END" || itemName == "end") {
                break;
            }

            if (!inventory.itemExists(itemName)) {
                cout << "Item not found in inventory.\n";
                continue;
            }

            cin >> quantity;
            billing.addItem(itemName, quantity, inventory.getPrice(itemName));

        } while (true);
        cout << "\n";  // Add a line break before printing the receipt
        billing.printBill();

        string paymentMethod;
        float payment, change;
        cout << "\t\t\t\tEnter payment method (cash/card): ";
        cin >> paymentMethod;

        if (paymentMethod == "cash") {
            do {
                cout << "\t\t\t\tCash Paid:\t\tRs. ";
                cin >> payment;

                if (payment < billing.getGrandTotal()) {
                    cout << "\t\t\t\tInsufficient Payment. Please enter a sufficient amount.\n";
                }
            } while (payment < billing.getGrandTotal());

            change = payment - billing.getGrandTotal();
            cout << "\t\t\t\tChange:\t\t\tRs. " << fixed << setprecision(2) << change << endl;
        } else if (paymentMethod == "card") {
            float discountedTotal = billing.applyCardDiscount();
            cout << "\t\t\t\tCard Payment Applied (5% Discount).\n";
            cout << "\t\t\t\tDiscounted Total:\tRs. " << fixed << setprecision(2) << discountedTotal << endl;
        } else {
            cout << "\t\t\t\tInvalid payment method.\n";
        }

        cout << "_____________________________________________________________________\n";
        cout << "\t\t\tNo Return without receipt in 7 Days.\n";
        cout << "_____________________________________________________________________\n";

        cout << "Is there another customer? (y/n): ";
        cin >> anotherCustomer;

        customerCount++;
    } while (anotherCustomer == 'y' || anotherCustomer == 'Y');

    cout << "Thank you for using the billing system. Goodbye!\n";

    return 0;
}
