#include <iostream>
using namespace std;

int main() 
{
    int finalresult=0;
    int playquiz(void);
    finalresult=playquiz();
    cout<<"Your total score is:"<<finalresult;
    if(finalresult>=6){
        cout<<"you are passed"<<endl;
    }
    else{
        cout<<"you are failed"<<endl;
    }
}    
int playquiz()
{
    char c;
    char option;
    int score=0;
    cout<<"----------welcome to quiz game---------"<<endl;
    cout<<"-----please follow the following instructions-----"<<endl;
    cout<<"Step 1: Quiz contains total 10 questions"<<endl;
    cout<<"Step 2: Each question carries 1 mark"<<endl;
    cout<<"Step 3: No negative marking"<<endl;
    cout<<"Step 4: Press s to start the quiz"<<endl;
    cout<<"Step 5: Select the correct options"<<endl;
    cout<<"Step 6: If your score will be greater than 6, you'll pass the quiz"<<endl;
    cin>>c;
    if(c=='s' || c=='S')
    {
        cout<<"Q1. What is the capital of india ?"<<endl;
        cout<<"(a): Delhi"<<endl;
        cout<<"(b): Chandigarh"<<endl;
        cout<<"(c): Ludhiana"<<endl;
        cout<<"(d): Massoorie"<<endl;
        cin>>option;
         
        if(option=='a'||option=='A')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }   
        cout<<"Q2. Who is the prime minister of india ?"<<endl;
        cout<<"(a): Yogi aditiyanath"<<endl;
        cout<<"(b): Rajnath singh"<<endl;
        cout<<"(c): Narendra modi"<<endl;
        cout<<"(d): Sarojini naidu"<<endl;
        cin>>option;
        if(option=='c'||option=='C')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
        cout<<"Q3. What does ipl stands for ?"<<endl;
        cout<<"(a): Indian Private League"<<endl;
        cout<<"(b): Indian Premier League"<<endl;
        cout<<"(c): Indonesian Premier League"<<endl;
        cout<<"(d): ISRO Private Limited"<<endl;
        cin>>option;
        if(option=='b'||option=='B')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
        cout<<"Q4. What is the currency of USA ?"<<endl;
        cout<<"(a): Ruble"<<endl;
        cout<<"(b): Dollar"<<endl;
        cout<<"(c): Yen"<<endl;
        cout<<"(d): Rupee"<<endl;
        cin>>option;
        if(option=='b'||option=='B')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
        cout<<"Q5. What is the national song of India ?"<<endl;
        cout<<"(a): Chak De India"<<endl;
        cout<<"(b): Jana Gana Mana"<<endl;
        cout<<"(c): Vande Mataram"<<endl;
        cout<<"(d): Vijay Bhava"<<endl;
        cin>>option;
        if(option=='c'||option=='C')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
        cout<<"Q6. Who wrote the National Anthem of India ?"<<endl;
        cout<<"(a): Rabindra Nath Tagore"<<endl;
        cout<<"(b): Bankim Chandra Chatterjee"<<endl;
        cout<<"(c): DR.Bhimrao Ambedkar"<<endl;
        cout<<"(d): Mahatma Gandhi"<<endl;
        cin>>option;
        if(option=='a'||option=='A')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
        cout<<"Q7. Which team won the T20 World Cup 2024 ? "<<endl;
        cout<<"(a): India"<<endl;
        cout<<"(b): New Zealand"<<endl;
        cout<<"(c): Australia"<<endl;
        cout<<"(d): South Africa"<<endl;
        cin>>option;
        if(option=='a'||option=='A')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
        cout<<"Q8. What is the national animal of India ? "<<endl;
        cout<<"(a): Lion"<<endl;
        cout<<"(b): Tiger"<<endl;
        cout<<"(c): Peacock"<<endl;
        cout<<"(d): Elephant"<<endl;
        cin>>option;
        if(option=='b'||option=='B')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
        cout<<"Q9. Who is the chief minister of UP ? "<<endl;
        cout<<"(a): Amit Shah"<<endl;
        cout<<"(b): Donald Trump"<<endl;
        cout<<"(c): Yogi Adityanath"<<endl;
        cout<<"(d): Arvind Kejriwal"<<endl;
        cin>>option;
        if(option=='c'||option=='C')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
        cout<<"Q10. What is the captial of UP ? "<<endl;
        cout<<"(a): Etawah"<<endl;
        cout<<"(b): Lucknow"<<endl;
        cout<<"(c): Argentina"<<endl;
        cout<<"(d): South Africa"<<endl;
        cin>>option;
        if(option=='b'||option=='B')
        {
            score=score+1;
        }
        else
        {
            score=score+0;
        }
        return score;
     }
       else
      {
           cout<<"You have entered a wrong character"<<endl;
       }
       return 0;
}     
