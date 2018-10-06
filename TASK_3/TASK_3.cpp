#include<iostream>
#include<string>

using namespace std;

class Invoice{

private:
  string name;
  string discription;
  int quantity;
  double price;

public:
  Invoice(){

    
  }

    void setName(string n)
    {
      name = n;
    }
    string getName()
    {
      return name;
    }
    void setDiscription(string d)
    {
      discription = d;
    }
    string getDiscription()
    {
      return discription;
    }
    void setQuantity(int q)
    {
      quantity = q;
    }
    int getQuantity()
    {
      return quantity;
    }
    void setPrice(double p)
    {
      price = p;
    }
    double getPrice()
    {
      return price;
    }
    double getInvoiceAmount()
    {
      return quantity*price;
    }


};


int main()
{
  Invoice obj();
  obj.setName("Handle");
  obj.setDiscription("it is a motor cycle handle");
  obj.setQuantity(10);
  obj.setPrice(100);
  cout<<obj.getName()<<" "<<obj.getDiscription()<<" "<<obj.getQuantity()<<" "<<obj.getPrice()<<endl;
  cout<<"Total Amount : "<<obj.getInvoiceAmount()<<endl;




}
