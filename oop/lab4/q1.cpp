#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int Products = 5;
    int SalesPerson = 4;
    int salesperson;
    int product;
    double sale_amount;

    double arr[Products][SalesPerson] = {0};

    cout << "Enter the sales slips data(salesperson,product,sale amount) OR (-1 for salesperson number to stop\n";

    while (true) {
        cout << "Salesperson (1-4): ";
        cin >> salesperson;
        if (salesperson == -1){
            break;}
        cout << "Product (1-5): ";
        cin >> product;
        cout << "Sale Amount: ";
        cin >> sale_amount;
        if (salesperson < 1 || salesperson > SalesPerson || product < 1 || product > Products || sale_amount < 0) {
            cout << "Invalid input. Please try again.\n\n";
            continue;
        }
        arr[product - 1][salesperson - 1] += sale_amount;
        cout << "Sale recorded successfully!\n\n";
    }


    cout << "              1              2               3              4               Product Total  \n";
    cout << "--------------------------------------------------------------------------------------\n";

    double totalBySalesperson[SalesPerson] = {0};
    double Total = 0;
    for (int i = 0;i<Products;i++) {
        double totalByProduct = 0;
        cout << "Product " << (i + 1) << "\t";

        for (int j = 0; j < SalesPerson; j++) {
            cout << arr[i][j] << "\t\t";
            totalByProduct += arr[i][j];
            totalBySalesperson[j] += arr[i][j];
        }

        cout << totalByProduct << endl;
        Total += totalByProduct;
    }
    cout << "------------------------------------------------------------------\n";
    cout << "Salesperson Total";
    for (int j = 0; j < SalesPerson; j++) {
        cout << totalBySalesperson[j] << "\t\t";
    }
    cout << Total << endl;

    return 0;
}
