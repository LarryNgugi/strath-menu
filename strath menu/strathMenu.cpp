#include <iostream>
#include <fstream>
#include <iomanip>
#include <ctime>

using namespace std;

int main(){
	
	ifstream food,price,cashier;
	ofstream receipt;

		price.open("pricelist.txt");
		food.open("foodlist.txt");
		cashier.open("cashier.txt");	
		receipt.open("receipt.txt");
	
	string rice,chapati,beef,beans,juice,cl;
	int riceQuantity,chapatiQuantity,beefQuantity,beansQuantity,juiceQuantity, total;
	int ricePrice,chapatiPrice,beefPrice,beansPrice,juicePrice;
	int price1,price2,price3,price4,price5;
	
	price >> price1 >> price2 >> price3 >> price4 >> price5;
	food >> rice >> chapati >> beef >> beans >> juice;
	price >> ricePrice >> chapatiPrice >> beefPrice >> beansPrice >> juicePrice;
	cashier >> cl;

	
	cout <<" \nItem\t\tAmount "<<endl;
	cout << "\n--------------------------\n" << endl;	
	cout <<  rice << "\t\t" << price1 << endl;
	cout << chapati << "\t\t" << price2 << endl;
	cout << beef << "\t\t" << price3 << endl;
	cout << beans << "\t\t" << price4 << endl;
	cout << juice << "\t\t" << price5 << endl;
	cout << "\n--------------------------" << endl;	

		
		
	cout<< "\n Place your order here."<<endl;
	
	cout<<"\nEnter rice quantity"<<endl;
	cin>>riceQuantity;
	
	cout<<"Enter chapati quantity"<<endl;
	cin>>chapatiQuantity;
	
	cout<<"Enter beef quantity"<<endl;
	cin>>beefQuantity;	
	
	cout<<"Enter beans quantity"<<endl;
	cin>>beansQuantity;	
	
	cout<<"Enter juice quantity"<<endl;
	cin>>juiceQuantity;
	
	
	
	ricePrice =  riceQuantity * price1;
	chapatiPrice = chapatiQuantity * price2;
	beefPrice = beefQuantity * price3;
	beansPrice = beansQuantity * price4;
	juicePrice = juiceQuantity * price5; 
	
	total = ricePrice + chapatiPrice + beefPrice + juicePrice;
	
	
	cout << "\nThank you for placing your order, take your receipt."<< endl;
	
	receipt << "***********WELCOME TO STRATH CAFE***********\n"<<endl;
	receipt << "--------------------------------------------\n"<<endl;
	receipt << "Item\t\tQuantity\tAmount\n"<<endl;
	
	
	
	
	receipt << rice << "\t\t" << riceQuantity << "\t\t" << ricePrice <<endl;
	receipt << chapati  << "\t\t" << chapatiQuantity << "\t\t" << chapatiPrice << endl;
	receipt << beef  << "\t\t" << beefQuantity << "\t\t" << beefPrice << endl;
	receipt << beans  << "\t\t" << beansQuantity << "\t\t" << beansPrice << endl;
	receipt << juice  << "\t\t" << juiceQuantity << "\t\t" << juicePrice << endl;

	receipt << "\n--------------------------------------------\n\n"<<endl;

	receipt << "Total: Ksh " << total << endl;
	getline (cashier,cl);
	receipt << "You were served by: "<< cl << endl;
	
	time_t now = time(0);
	char* date_time = ctime(&now);
	receipt << date_time << endl;
	
	receipt << "\n--------------------------------------------"<<endl;
	
	return 0;
	
}
