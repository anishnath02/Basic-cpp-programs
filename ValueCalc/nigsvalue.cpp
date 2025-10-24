#include<iostream>
using namespace std;
class stfu{
    private:
    string name1;
    int value1;
    string work1;
    int val1;

    
    public:
    stfu(string name,int val,string shit,int value){
        name1 = name;
        value1 = val;
        work1 = shit;
        val1 = value;
    }
    void boyname(){
        cout<<"Nigga's name:"<<name1<<endl;
    }
    void valofnig(){
        cout<<"Nigga's price:"<<value1<<""<<"Rs."<<endl;
    }
    void dowork(){
        cout<<work1<<endl;
    }
    void explosionsts(){
        if(val1 == 1){
            cout<<"Nigga causes explosion"<<endl;
        }
        else{
            cout<<"Nigga is peaceful, can flog him"<<endl;
        }
    }
};

int main(){
    stfu sayan("Sayan",10,"Bro forces people to go at mani sq.",0);
    sayan.boyname();
    sayan.valofnig();
    sayan.dowork();
    sayan.explosionsts();

    cout<<endl<<endl;
    stfu kasif("Kasif",5001,"Bro eats",1);
    kasif.boyname();
    kasif.valofnig();
    kasif.dowork();
    kasif.explosionsts();
    return 0;
}
