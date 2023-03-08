/*1.write a program which covers all control statements, switch case syntax and its functionality.

                Program statement : 
                1. User should be able to view list of banks.
                 2. User should be able select a bank and to view its Banking operation and its various account details(Savings, Current, demat)
                 3. User should be able to list all the benefits of choosen account(interest etc).
*/

#include<stdio.h>
int main()
{
    int bank_choice;
    int benefit_choice;
    printf("Here are the list of Banks:");
    printf("\n1.Bank of Baroda \n2.Bank of India \n3.Canara Bank \n4.Central Bank of India \n5.ICICI Bank");
    printf("\nEnter your choice : ");
    scanf("%d",&bank_choice);
    switch(bank_choice)
    {
        case 1:
        {
            printf("\nYou have selected Bank of Baroda");
            printf("\nBank has a wide network of 2,930 rural branches and more than 17,800 Business Correspondents serving across 10085 SSA locations and Bank has opened more than 5 Crore Basic Savings Bank Deposit accounts.");
            printf("\nThe various types of accounts are:\n1.Baroda Savings Advantage \n2.Baroda Champ Account \n3.Baroda Salary Classic \n4.Baroda Senior Citizen Privilege Saving Account");
            printf("\n\nEnter your Choice to list the benefits of the Account you want to view or Enter 0 to Close the menu : ");
            scanf("%d",&benefit_choice);
            if(benefit_choice==1)
            {
                printf("\n->Overdraft facility up to Rs. 50,000.\n->Free Baroda Easy Credit Card.\n->Rate of Interest starts from 5%%");
            }
            else if(benefit_choice==2)
            {
                printf("\n->Waiver in processing charges on retail loans.\n->5 percent discount on locker rentals.\n->Rate of Interest starts from 3.5%%");
            }
            else if(benefit_choice==3)
            {
                printf("\n->Complimentary zero balance account for spouse.\n->Sweep facility available.\n->Rate of Interest starts from 1.8%%");
            }
            else if(benefit_choice==4)
            {
                printf("\n->Discount on depository services.\n->Free alerts.\n->Rate of Interest starts from 2%%");
            }
            else if(benefit_choice==0)
            {
                printf("\nThanks for showing interest on our Bank!");
            }
            else
            {
                printf("Enter a valid number");
            }
            break;
        }
        case 2:
        {
            printf("\nYou have selected Bank of India");
            printf("\nIt provides rural banking services, and loans to micro, small and medium enterprises. In addition to these, BOI also provides e-trade, cards, internet banking, depository services, remittance services, debenture trustee services, and mutual fund products.");
            printf("\nThe various types of accounts are:\n1.Star Suraksha SB Plus Account\n2.BOI Savings Plus Scheme\n3.BOI Star Yuva Account\n4.BOI Star Senior Citizen SB Account");
            printf("\n\nEnter your Choice to list the benefits of the Account you want to view or Enter 0 to Close the menu : ");
             scanf("%d",&benefit_choice);
            if(benefit_choice==1)
            {
                printf("\n->Average Quarterly Balance (AQB) Rs.500 \n->Personal Accidental Death Insurance Cover Rs.50,000\n->Rate of Interest is 6%%");
            }
            else if(benefit_choice==2)
            {
                printf("\n->Auto Sweep Facility\n->Nomination Facility Available\n->Rate of Interest starts from 3%%");
            }
            else if(benefit_choice==3)
            {
                printf("\n->Complimentary Personal Accident Insurance\n->Internet & Mobile Banking available\n->Rate of Interest starts from 2%%");
            }
            else if(benefit_choice==4)
            {
                printf("\n->Average Quarterly Balance Rs. 10000\n->Group Personal Accident Death Insurance Rs. 5 lakh\n->Rate of Interest starts from 2%%");
            }
            else if(benefit_choice==0)
            {
                printf("\nThanks for showing interest on our Bank!");
            }
            else
            {
                printf("Enter a valid number");
            }
            break;
        }
        case 3:
        {
            printf("\nYou have selected Canara Bank");
            printf("\nCanara Bank is one of the major public sector banks available in India. It was established at Mangalore in the year 1906 by Ammembai Subha Rao Pai. Nationalized in the year 1968, this bank has a network of 6310 branches and more than 8851 ATMs spread across 4467 centers. Canara Bank is headquartered in Bengaluru and has offices in London, Hong Kong, Moscow, Shanghai, Dubai, Tanzania, and New York as well.");
            printf("\nThe various types of accounts are:\n1.Canara Payroll Package Saving Bank Account\n2.Canara SB Power Plus\n3.Canara Jeevandhara-SB Account for Senior Citizens\n4.Canara Junior Saving Account");
            printf("\n\nEnter your Choice to list the benefits of the Account you want to view or Enter 0 to Close the menu : ");
             scanf("%d",&benefit_choice);
            if(benefit_choice==1)
            {
                printf("\n->The nomination facility is available\n->Facilities like ATM-cum-Debit card, Passbook, cheque collection, internet, and mobile banking are available\n->Rate of Interest is 2.90%%");
            }
            else if(benefit_choice==2)
            {
                printf("\n->Maximum of 4 withdrawals allowed in a month, including ATM withdrawals\n->No charge on deposit of cash at the bank branch and ATMs\n->Free ATM-cum-debit card\n->If withdrawals exceed per month, charges will be levied at the rate not exceeding Rs. 5 per withdrawal\n->Rate of Interest starts from 2.5%%");
            }
            else if(benefit_choice==3)
            {
                printf("\n->It is a zero-balance account and there is no need to maintain the minimum balance.\n->Withdrawals are allowed mainly by withdrawal slips\n->Married girls are excluded from the scheme\n->Rate of Interest starts from 2.8%%");
            }
            else if(benefit_choice==4)
            {
                printf("\n->Free platinum debit card\n->ATM cash withdrawal from Canara Bank ATM is Rs. 50,000\n->ATM transactions are free and unlimited in Canara Bank ATMs\n->Free personalised chequebook with 300 cheque leaves per annum\n->Average quarterly balance to be maintained is Rs. 1,00,000\n->Rate of Interest starts from 2%%");
            }
            else if(benefit_choice==0)
            {
                printf("\nThanks for showing interest on our Bank!");
            }
            else
            {
                printf("Enter a valid number");
            }
            break;
        }
        case 4:
        {
            printf("\nYou have selected Central Bank of India");
            printf("\nThe Central Bank of India was established in 1911 as a fully owned Indian bank by Sir Sorabji Pochkhanawala.It has a network of 4659 branches, 1 extension counters, along with 10 satellite offices at various centers throughout the country. The bank offers all types of banking facilities to individuals whether it is loans or deposits.");
            printf("\nThe various types of accounts are:\n1.Home Saving Safe Account\n2.Cent Param\n3.Cent Bachat Khata\n4.Cent Premium Account");
            printf("\n\nEnter your Choice to list the benefits of the Account you want to view or Enter 0 to Close the menu : ");
             scanf("%d",&benefit_choice);
            if(benefit_choice==1)
            {
                printf("\n->Withdrawals from this account can be made through cheques, withdrawal slip and ATM debit card\n->The account has nomination facility available\n->20 cheque leaves a year are provided for free\n->SMS alerts on deposits and withdrawals are available\n->Rate of Interest is 1.5%%");
            }
            else if(benefit_choice==2)
            {
                printf("\n->No charges at the time of opening the account\n->No minimum balance requirement or account maintenance charges\n->The account holder will get a lifetime unique account number which will be converted to a pension account upon retirement\n->Salary will be credited directly on a pre-determined date\n->Internet banking, mobile banking, and SMS alert facility is provided for free.\n->ATM/debit card will be provided for free at the time of opening the account.\n->Rate of Interest starts from 3.5%%");
            }
            else if(benefit_choice==3)
            {
                printf("\n->No charges for not maintaining minimum balance.\n->The account holder can make 50 withdrawals in a year for free.\n->The balance in this savings account should not exceed Rs. 50,000 and total credit should not exceed Rs. 1,00,000 in a year.\n->Nomination facility is available in this savings account.\n->No limit on credit transactions\n->Rate of Interest starts from 0.5%%");
            }
            else if(benefit_choice==4)
            {
                printf("\n->RuPay Platinum debit card is issued with no charges on issuance and renewal.\n->ATM transactions at Central Bank of India ATM are free up to Rs. 40,000 per day. However, at other bank ATM, only 5 transactions are free.\n->Chequebook and demand draft facility is available at applicable charges\n->Rate of Interest starts from 2.1%%");
            }
            else if(benefit_choice==0)
            {
                printf("\nThanks for showing interest on our Bank!");
            }
            else
            {
                printf("Enter a valid number");
            }
            break;
        }
        case 5:
        {
            printf("\nYou have selected ICICI Bank");
            printf("\nICICI Bank is India’s largest private sector bank with total consolidated assets of Rs.11,242.81 billion as on March 31, 2018. ICICI Bank was established in 1955 at the initiative of the World Bank with the objective of creating a developed financial institution for providing medium-term and long-term project financing to Indian businesses. ICICI Bank in year 1999 became the first Indian company and the first bank from non-Japan Asia to be listed on the New York Stock Exchange. In October 2001, ICICI Bank merged with ICICI Personal Financial Services Limited and ICICI Capital Services Limited.");
            printf("\nThe various types of accounts are:\n1.ICICI Bank Smart Star Savings Account\n2.ICICI Bank Regular Savings Account\n3. ICICI Bank Seniors Club Savings Account\n4.ICICI Bank Advantage Woman Aura Savings Account");
            printf("\n\nEnter your Choice to list the benefits of the Account you want to view or Enter 0 to Close the menu : ");
             scanf("%d",&benefit_choice);
            if(benefit_choice==1)
            {
                printf("\n->Personalised debit card with spend and withdrawal limit of Rs. 5,000\n->Free passbook and monthly email statements\n->Internet and mobile banking\n->Rate of Interest is 4.5%%");
            }
            else if(benefit_choice==2)
            {
                printf("\n->Anytime and anywhere banking.\n->Silver debit card and earn reward points.\n->Nomination facility available\n->Rate of Interest starts from 2.5%%");
            }
            else if(benefit_choice==3)
            {
                printf("\n->Higher interest rate when account balance exceeds Rs. 75,000\n->Resident individuals (sole/ joint account), foreign nationals and Hindu-unidivided Families (HUFs) above 60 years of age.\n->Hospital cash benefits up to Rs. 30,000.\n->Nomination facility is available in this savings account.\n->Free SMS alerts, anywhere banking, monthly email statements and passbook facility\n->Rate of Interest starts from 6.5%%");
            }
            else if(benefit_choice==4)
            {
                printf("\n->Available with cashback offers.\n->Unlimited access to all bank ATMs.\n->Discounts on processing fee on personal, auto, home, two-wheeler loans.\n->Rate of Interest starts from 2.6%%");
            }
            else if(benefit_choice==0)
            {
                printf("\nThanks for showing interest on our Bank!");
            }
            else
            {
                printf("Enter a valid number");
            }
            break;
        }
    }
    return 0;
}



/*Output:
Here are the list of Banks:
1.Bank of Baroda 
2.Bank of India 
3.Canara Bank 
4.Central Bank of India 
5.ICICI Bank
Enter your choice : 3

You have selected Canara Bank
Canara Bank is one of the major public sector banks available in India. It was established at Mangalore in the year 1906 by Ammembai Subha Rao Pai. Nationalized in the year 1968, this bank has a network of 6310 branches and more than 8851 ATMs spread across 4467 centers. Canara Bank is headquartered in Bengaluru and has offices in London, Hong Kong, Moscow, Shanghai, Dubai, Tanzania, and New York as well.
The various types of accounts are:
1.Canara Payroll Package Saving Bank Account
2.Canara SB Power Plus
3.Canara Jeevandhara-SB Account for Senior Citizens
4.Canara Junior Saving Account

Enter your Choice to list the benefits of the Account you want to view or Enter 0 to Close the menu : 2

->Maximum of 4 withdrawals allowed in a month, including ATM withdrawals
->No charge on deposit of cash at the bank branch and ATMs
->Free ATM-cum-debit card
->If withdrawals exceed per month, charges will be levied at the rate not exceeding Rs. 5 per withdrawal
->Rate of Interest starts from 2.5% 
*/
