#include <iostream>
using namespace std;

struct player {
    int health;
    int damage;
};

int main(){
   struct player hero;
   hero.health = 100;
   hero.damage = 30;
   
   struct player enemy;
   enemy.health = 90;
   enemy.damage = 20;

   int choice;

   while(hero.health>0 && enemy.health>0){
    cout<<"your hero hp is: "<<hero.health<<endl;
    cout<<"your enemy hp is: "<<enemy.health<<endl;

    cout<<"1) attack "<<endl; 
    cout<<"2) heal "<<endl; 
    cout<<"3) run "<<endl; 
    cout<<"choose any options from the above "<<endl;
    cin>>choice;
     
    if(choice == 1){
        enemy.health = enemy.health-hero.damage;
        cout<<"you attacked enemy for damage "<<hero.damage<<endl;
    }

    else if(choice == 2){
        hero.health = hero.health + 20;
        cout<<"your health is now "<<hero.health<<endl;
    
     if(hero.health >100){
        hero.health = hero.health-20;
        cout<<"your health is now "<<hero.health<<endl;
    
   }
}


    else if(choice == 3){
        cout<<"you ran away!!"<<endl;
        break;
    
    }

    else{
        cout<<"invalid choice!"<<endl;
        continue;
    }

    if(enemy.health <=0){
        cout<<"you defeated the enemy"<<endl
        <<"!!You Win!!"
        <<endl;
        break;
    }



    
      
    if(hero.health<=0 ){
        cout<<"hero health is "<<hero.health<<endl;
        cout<<"!!Game Over!!"<<endl
        <<"you lost"<<endl;
    }  

hero.health = hero.health-enemy.damage;
    cout<<"enemy attacked you!! for damage "
    <<enemy.damage<<endl;

}

    
 
    return 0;
}