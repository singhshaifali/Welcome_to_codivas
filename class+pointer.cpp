#include <iostream>
using namespace std;
class grocery{
int item_id;
float price;
public:
void setData(int a,int b)
{ 
   item_id=a;
    price=b;
}
void getdata(void)
{
    cout<<"Item number of this item:"<<item_id<<endl;
     cout<<"Price of this item:"<<price<<endl;
    
}

};
int main()
{  int size;
cout<<"enter the number of items:"<<endl;
cin>>size;
    grocery *ptr=new grocery[size];
    grocery *ptrtemp=ptr;
    int p,i;
    float q;
    for(i=0;i<size;i++)
    {
        cout<<"enter the item_id and price of item:"<<i+1<<endl;
        cin>>p>>q;
        ptr->setData(p,q);
        ptr++;
    }
    for(i=0;i<size;i++)
    {
        cout<<"Item_number:"<<i+1<<endl;
        ptrtemp->getdata();
        ptrtemp++;
    }
    return 0;

}