Node* new_node=new Node(data);
       Node* t=head,*p;
       if((t->data)>=data)
                 {head=new_node;
                  new_node->next=t;
                  return head;
                 }
       while(t!=NULL){
           if((t->data)>=data)
                  {p->next=new_node;
                   new_node->next=t;
                   return head;
                  }
           p=t;
           t=t->next;
       }
       p->next=new_node;
       return head;
