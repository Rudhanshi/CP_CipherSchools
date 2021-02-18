#include<bits/stdc++.h>
using namespace std;
 class Node{

     public:
      int data;
      Node *next;
      Node(){
          Node(0);
      }
      Node(int data){
          this->data=data;
          this->next=NULL;
      }

 };

 class SinglyLinkedList{
     public:
      Node *head;
      SinglyLinkedList(){
          this->head = NULL;
      }

      void InsertionAtBeginning(int data){
          Node *newNode = new Node(data);
          if(head==NULL){
              head = newNode;
          }
          else
           newNode->next = head;
           head = newNode;
      }

      void InsertAtEnd(int data){

          Node *newNode = new Node(data);
          Node *ptr = head;
          if(head==NULL){
              head = newNode;
          }
          else
           while(ptr->next!=NULL){
               ptr=ptr->next;
           }
           ptr->next = newNode;
            
          
      }
      void InsertionAtPosition(int data, int position){
          Node *newNode = new Node(data);
          if(head == NULL){
              head = newNode;
              return;
          }
          if(position==1){
              newNode->next = head;
              head = newNode;

          }
          else{ 
           Node *p=head, *q;
           int k=1;
           while(p!=NULL && k<position){
               k++;
               q=p;
               p=p->next;
           }
           q->next=newNode;
           newNode->next=p;
          }

      }

      void DeletionAtBegenning(){
          if(head==NULL){
              return ;
          }
          Node *ptr=head;
          head=head->next;
          delete ptr;
      }

      void DeletionAtEnd(){
          if(head==NULL){
              return;
          }
          if(head->next==NULL){
              Node *ptr = head;
              head = head->next;
              delete ptr;
              return;
          }
          else
          {
              Node *ptr=head,*qtr;
              while(ptr->next!=NULL){
                  qtr=ptr;
                  ptr=ptr->next;
              }
              qtr->next=NULL;
              delete ptr;
          }
      }

      void DeleteKey(int key){
          Node *curr=head,*prev;
          if(curr!=NULL && curr->data==key){
              head=head->next;
              delete curr;
              return;
          }
          else{
              while(curr!=NULL && curr->data!=key){
                  prev = curr;
                  curr=curr->next;
              }
              if(curr==NULL){
                  return;
              }
              prev->next=curr->next;
              delete curr;

          }
      }

      void DeletionAtPosition(int position){
          Node *ptr=head,*qtr;
          if(head==NULL){
              return;
          }
          if(position==1){
              head=head->next;
              delete ptr;
          }
          else{
              int count=1;
              while(count<position && ptr!=NULL){
                  qtr=ptr;
                  ptr=ptr->next;
                  count++;
              }
              if(ptr!=NULL){
                  qtr->next=ptr->next;
                  delete ptr;
              }
          }
      }


      void PrintList(){
         
         Node *ptr = head;
         while(ptr!=NULL){
             cout<<ptr->data<<"->";
             ptr=ptr->next;
         }
         cout<<"\n";
      }

      void GetSize(){
          int size=0;
          Node *ptr = head;
          while(ptr!=NULL){
              size++;
              ptr=ptr->next;
          }
          cout<<size<<"\n";
      }

      
 };

 int main(){

     SinglyLinkedList sl1;
     for(int i=10;i>=1;i--){
         sl1.InsertionAtBeginning(i);
     }
     sl1.PrintList();
     sl1.GetSize();
     for(int i=11;i<=20;i++){
         sl1.InsertAtEnd(i);
     }
     sl1.PrintList();
     sl1.GetSize();

     sl1.InsertionAtPosition(200,1);
     sl1.PrintList();
     sl1.GetSize();

     sl1.InsertionAtPosition(200,22);
     sl1.PrintList();
     sl1.GetSize();

     sl1.InsertionAtPosition(200,8);
     sl1.PrintList();
     sl1.GetSize();

     sl1.DeletionAtBegenning();
     sl1.PrintList();
     sl1.GetSize();

     sl1.DeletionAtEnd();
     sl1.PrintList();
     sl1.GetSize();
     
     sl1.DeleteKey(8);
     sl1.PrintList();
     sl1.GetSize();

     sl1.DeletionAtPosition(11);
     sl1.PrintList();
     sl1.GetSize();

     return 0;

 }
