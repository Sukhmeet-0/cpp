# include<iostream>
using namespace std;

int main()
{
    int choice;               //    choice by the customer 
    int quantity;             //    Quantity that customer want 

    // Quantity WE HAVE in a hotel 
    int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0, Qchicken=0;

    // Quantity WE SOLD
    int  Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0, Schicken=0;

    // Total price of each item 
    int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_shake=0, Total_chicken=0;


    cout<<"\nQuantity of items we have in a hotel *: "<<endl;
    cout<<"-------------------------------------"<<endl;
    cout<<"Rooms we have in a hotel: "<<endl;
    cin>>Qrooms;


    cout<<"\nPasta we have in a hotel: "<<endl;
    cin>>Qpasta;


    cout<<"\nBurger we have in a hotel: "<<endl;
    cin>>Qburger;


    cout<<"\nNoodles we have in a hotel: "<<endl;
    cin>>Qnoodles;


    cout<<"\nShake we have in a hotel: "<<endl;
    cin>>Qshake;

    cout<<"\nChicken we have in a hotel: "<<endl;
    cin>>Qchicken;




    m:

    cout<<"\n\t\t Please select from the given menu option: "<<endl;
    cout<<"                 -----------------------------------------"<<endl;
    cout<<"1) Rooms"<<endl;
    cout<<"2) Pasta"<<endl;
    cout<<"3) Burger"<<endl;
    cout<<"4) Noodles"<<endl;
    cout<<"5) Shake"<<endl;
    cout<<"6) Chicken"<<endl;
    cout<<"7) Information Regarding sales and Collection"<<endl;
    cout<<"8) Exit"<<endl;




    cout<<"\n\t\t Please enter your choice: "<<endl;
    cout<<"                 -------------------------"<<endl;
    cin>>choice;
    cout<<"Your Choice = "<<choice<<endl;;





    switch(choice)
    {
        case 1:
        cout<<"Enter number of rooms you want: "<<endl;
        cin>>quantity;

        if(Qrooms-Srooms>=quantity)
        {
            Srooms=Srooms+quantity;
            Total_rooms=Total_rooms+quantity*1200;
            cout<<"\n"<<quantity<<" Rooms have been aloted to you! "<<endl;
            break;
        }

        else 
        {
            cout<<"\nOnly "<<Qrooms-Srooms<<" Rooms Remaining in the hotel "<<endl;
            break;
        }










        
        case 2:
        cout<<"Enter Pasta Quantity: "<<endl;
        cin>>quantity;
        if(Qpasta-Spasta>=quantity)
        {
            Spasta=Spasta+quantity;
            Total_pasta=Total_pasta+quantity*250;
            cout<<"\n"<<quantity<<" Pasta is the order! "<<endl;
            break;
        }

        else 
        {
            cout<<"\nOnly "<<Qpasta-Spasta<<" Pasta Remaining in the hotel "<<endl;
            break;
        }









        
        case 3:
        cout<<"Enter Burger Quantity : "<<endl;
        cin>>quantity;
        if(Qburger-Sburger>=quantity)
        {
            Sburger=Sburger+quantity;
            Total_burger=Total_burger+quantity*120;
            cout<<"\n"<<quantity<<" Burger is the order! "<<endl;
            break;
        }

        else 
        {
            cout<<"\nOnly "<<Qburger-Sburger<<" Burger Remaining in the hotel "<<endl;
            break;
        }









        
        case 4:
        cout<<"Enter Noodles: "<<endl;
        cin>>quantity;
        if(Qnoodles-Snoodles>=quantity)
        {
            Snoodles=Snoodles+quantity;
            Total_noodles=Total_noodles+quantity*140;
            cout<<"\n"<<quantity<<" Noodles is the order! "<<endl;
            break;
        }

        else 
        {
            cout<<"\nOnly "<<Qnoodles-Snoodles<<" Noodles Remaining in the hotel "<<endl;
            break;
        }








        
        case 5:
        cout<<"Enter Shake Quantity: "<<endl;
        cin>>quantity;
        if(Qshake-Sshake>=quantity)
        {
            Sshake=Sshake+quantity;
            Total_shake=Total_shake+quantity*120;
            cout<<"\n"<<quantity<<" Shake is the order! "<<endl;
            break;
        }

        else 
        {
            cout<<"\nOnly "<<Qshake-Sshake<<" Shake Remaining in the hotel "<<endl;
            break;
        }


        cout<<"\n";





        
        case 6:
        cout<<"Enter Chicken Quantity: "<<endl;
        cin>>quantity;
        if(Qchicken-Schicken>=quantity)
        {
            Schicken=Schicken+quantity;
            Total_chicken=Total_chicken+quantity*150;
            cout<<"\n"<<quantity<<" Chicken is the order! "<<endl;
            break;
        }

        else 
        {
            cout<<"\nOnly "<<Qchicken-Schicken<<" Chicken Remaining in the hotel "<<endl;
            break;
        }




        case 7:
        cout<<"Details of Sales and Colection "<<endl;
        cout<<"\nNumber of Rooms we had: "<<Qrooms<<endl;
        cout<<"Number of Rooms we gave for Rent: "<<Srooms<<endl;   
        cout<<"Remaining Rooms: "<<Qrooms-Srooms<<endl;
        cout<<"Total Rooms Collection for the day: "<<Total_rooms<<endl;


        cout<<"\n";





        cout<<"Details of Sales and Colection "<<endl;
        cout<<"Number of Pasta we had: "<<Qpasta<<endl;
        cout<<"Number of Pasta we sold: "<<Spasta<<endl;   
        cout<<"Remaining Pasta: "<<Qpasta-Spasta<<endl;
        cout<<"Total Pasta Collection for the day: "<<Total_pasta<<endl;

        cout<<"\n";







        cout<<"Details of Sales and Colection "<<endl;
        cout<<"Number of Burger we had: "<<Qburger<<endl;
        cout<<"Number of Burger we sold "<<Sburger<<endl;   
        cout<<"Remaining Burger: "<<Qburger-Sburger<<endl;
        cout<<"Total Burger Collection for the day: "<<Total_burger<<endl;

        cout<<"\n";






        cout<<"Details of Sales and Colection "<<endl;
        cout<<"Number of Noodles we had: "<<Qnoodles<<endl;
        cout<<"Number of Noodles we sold: "<<Srooms<<endl;   
        cout<<"Remaining Noodles: "<<Qnoodles-Snoodles<<endl;
        cout<<"Total Noodles Collection for the day: "<<Total_noodles<<endl;

        cout<<"\n";



        cout<<"Details of Sales and Colection "<<endl;
        cout<<"Number of Shakes we had: "<<Qshake<<endl;
        cout<<"Number of Shakes we soldt: "<<Sshake<<endl;   
        cout<<"Remaining Shakes: "<<Qshake-Sshake<<endl;
        cout<<"Total Shakes Collection for the day: "<<Total_shake<<endl;

        cout<<"\n";




        cout<<"Details of Sales and Colection "<<endl;
        cout<<"Number of Chicken we had: "<<Qchicken<<endl;
        cout<<"Number of Chicken we sold: "<<Schicken<<endl;   
        cout<<"Remaining Chicken: "<<Qchicken-Schicken<<endl;
        cout<<"Total Chicken Collection for the day: "<<Total_chicken<<endl;

        cout<<"\n";



        cout<<"Total Collection for the day: "<<Total_rooms+Total_pasta+Total_burger+Total_noodles+Total_shake+Total_chicken;
        cout<<"\n";
        break;



        cout<<"\n";





        case 8:
        return 0;




        default:
        cout<<"Please Select the numbers mentioned above"<<endl;

    }


    goto m;


}
























/*


This project will be a Hotel management project, in which we will have the 
information of the items or rooms that we have, 
what food items are ordered by the customer, 
and how many rooms are allotted to them. 
Also, this project will tell us about the sales and the remaining food stock 
we have in the hotel, and the total collection for the day. 


(Overview)....declare some variables and then initialize them
after that we enter the quatities of items that we have in the hotel 
then we make a list of items or menu of items and rooms 
that we have in the hotel 

Exit Success......is indicated by....exit(0)......statement 
which means successful termination of the program, 
i.e. program has been executed without any error or interrupt.


*/





