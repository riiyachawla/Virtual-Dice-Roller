    #include<iostream>
    #include<cstdlib>
    #include<ctime>
    using namespace std;
    int rollDice(int numSides){
        return rand() % numSides + 1;
    }

    int main(){
        srand(static_cast<unsigned int>(time(0)));
        cout<<"Welcome to thr Virtual Dice Roller!"<<endl;

        while(true){
            int numDice,numSides;
            cout<<"Enter the number of dice to roll: ";
            cin>>numDice;
            cout<<"Enter the number of sides on each die: ";
            cin>>numSides;

            if(numDice<=0 || numSides<=0){
                cout<<"Invalid input. Please enter positive values. "<<endl;
                continue;
            }

            cout<<"Rolling "<<numDice<<" "<<numSides<<" -sided dice: "<<endl;
            for(int i=0;i<numDice;++i){
                int result=rollDice(numSides);
                cout<<"Die "<<i+1<<": "<<result<<endl;
            }

            char playAgain;
            cout<<"Roll again? (y/n): ";
            cin>>playAgain;

            if(playAgain != 'y' && playAgain!='Y'){
                break;
            }
        }
        cout<<"Thankyou for using Virtual Dice Roller!"<<endl;

        return 0;
    }