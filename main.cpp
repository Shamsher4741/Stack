#include <iostream>
using namespace std;

class stack {
  private:
  int top;
  int array[5];

  public:
  stack(){
    top = -1;
    for(int i = 0;i<5;i++){
      array[i] = 0;
    }
  }
  bool isEmpty(){
    if(top==-1)
      return true; 
    else 
      return false;
  }
  bool isFull(){
    if(top == 4)
      return true;
    else
      return false;
  }
  void push(int val){
    if(isFull()){
      cout<<"stack overflow "<<endl;
    }
    else{
      top++;
      array[top] = val;
    }
  }
  int pop(){
    if(isEmpty()){
      cout<<"Stack underflow : "<<endl;
      return 0;
    }
    else{
      int popvalue = array[top];
      array[top] = 0;
      top--;
      return popvalue;
    }
  }
  int count(){
    return (top+1);
  }
  int peek(int pos){
    if(isEmpty()){
      cout<<"Stack underflow"<<endl;
      return 0;
    }
    else{
      return array[pos];
    }
  }
  void change(int pos,int val){
    array[pos] = val;
    cout<<"value changed at location"<<pos<<endl;

  }
  void display(){
    cout<<"All values in the stack are : "<<endl;
    for(int i=4;i>=0;i--){
      cout<<array[i]<<endl;

    }
  }
};

int main() {
  stack s1;
  int option, position , value;

 do{
   cout<<"What operation do you want to  perform ? Select option number . Enter 0 to Exit: "<<endl;
   cout<<"1. Push()"<<endl;
   cout<<"2. Pop()"<<endl;
   cout<<"3. IsEmpty()"<<endl;
   cout<<"4. isfull()"<<endl;
   cout<<"5. peek()"<<endl;
   cout<<"6. count()"<<endl;
   cout<<"7. change()"<<endl;
   cout<<"8. display()"<<endl;
   cout<<"9. Clear Screen()"<<endl<<endl;

   cin>>option;
   switch(option){
     case 0:
     cout<<"Program Exit"<<endl;
     break;
     case 1: 
     cout<<"Enter an item to push in the stack "<<endl;
     cin>>value;
     s1.push(value);
     break;
     case 2:
     cout<<"Pop function called: Poped value: "<<s1.pop()<<endl;
     break;
     case 3:
      if(s1.isEmpty())
        cout<<"Stack is Empty"<<endl;
      else
        cout<<"Stack is not Empty"<<endl;
    break;
      case 4:
        if(s1.isFull())
          cout<<"Stack is full "<<endl;
        else 
          cout<<"Stack is not full"<<endl;
      break;
      case 5:
        cout<<"Enter the postion you want to peek "<<endl;
        cin>>position;
        cout<<"Peek function called value at positin  "<<position << "is "<<s1.peek(position)<<endl;
        break;
      case 6:
        cout<<"Count function called value at the location is "<<s1.count()<<endl;
        break;
      case 7:
        cout<<"Change function called "<<endl;
        cout<<"Enter the positin of item you want to change : ";
        cin>>position;
        cout<<endl;
        cout<<"Enter the value item you want to change : ";
        cin>>value;
        s1.change(position, value);
        break;
      case 8:
        cout<<"displa fucntion called "<<endl;
        s1.display();
        break;
      case 9:
        system("cls");
        break;
      default:
        cout<<"Enter a proper Option"<<endl;


    
   }





 }while(option!=0);
}