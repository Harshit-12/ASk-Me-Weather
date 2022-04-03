#include<bits/stdc++.h>
using namespace std;
    ListNode* reverseKGroup(ListNode* head, int k) {
            ListNode *t=head;
            int c=1;
            vector<int> v;
            vector<int> r;
            while(t!=NULL)
            {
              v.push_back(t->data);
              
              t=t->next;
              if (c%k==0)
              {
                reverse(v.begin,v.end());
                for (auto x:v)
                r.push_back(x);
                v.clear();
              }
            
            c++;          
            }

            while(v.size()--)
            {
              for (auto x:v)
              r.push_back(x);
            }

            ListNode *p=new ListNode();
            ListNode *ams=p;

            while (ans.size()--)
            {
                for (auto x:ans)
                {
                  ListNode *e=new ListNode(x);
                  p->next=e;
                  p=p->next;
                }
            }
            
          return ans->next;
    }
 return 0;


int intersectPoint(Node* head1, Node* head2)
{
  Node *t1=h1;
  Node *t2=h2;
  int n1=0,n2=0;

  while (t1!=NULL)
  {
    t1=t1->next;
    n1++;
  }
    
t1=h1;
  while (t2!=NULL)
  {
    t2=t2->next;
    n2++;
  }

t2=h2;
  int d=abs(n1-n2);

if (n2>n1)
{
  Node *tmp=h1;
  h1=h2;
  h2=tmp;
}
Node *t=h1;
while (d--)
{
  t1=t1->next;
}

while (t1!=NULL and t2!=NULL)
{
  /* code */
  if (t1->data==t2->data)
    return t1->data;

  t1=t1->next;
  t2=t2->next;
}
  return 0;
}
   ListNode* t=head;
        ListNode* p=t;
        ListNode*n;
        while(t!=NULL){
            n=t->next;
            t->next=n->next;
            n->next=t;
            t=t->next;
        }
        return p;