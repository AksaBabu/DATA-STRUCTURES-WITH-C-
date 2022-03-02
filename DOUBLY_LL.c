 
 ​#​include​<​stdio.h​> 
 ​#​include​<​stdlib.h​> 
 ​void​ ​getlist​(​int​);                                                      ​//​function declaration 
 ​void​ ​printlist​(); 
 ​void​ ​insbegin​(); 
 ​void​ ​insend​(); 
 ​void​ ​inspos​(); 
 ​void​ ​delbegin​(); 
 ​void​ ​delend​(); 
 ​void​ ​delany​(); 
  
 ​struct​ node                                                            ​//​global declaration 
 ​        { 
 ​        ​int​ data; 
 ​        ​struct​ node *next,*prev; 
 ​        }; 
 ​struct​ node *head,*new,*temp,*ptr; 
 ​int​ size=​0​,x; 
  
 ​void​ ​getlist​(​int​ m)                                                     ​//​function to get linked list 
 ​{ 
 ​ temp->​prev​=​NULL​; 
 ​ ​while​(temp!=​NULL​) 
 ​ { 
 ​  ​scanf​(​"​%d​"​,&m); 
 ​  ​if​(m!=-​999​) 
 ​  { 
 ​   temp->​data​=m; 
 ​   temp->​next​=(​struct​ node *)​malloc​(​sizeof​(​struct​ node)); 
 ​   ptr=temp; 
 ​   temp=temp->​next​; 
 ​   temp->​next​->​prev​=temp; 
 ​   size++; 
 ​  } 
 ​  ​else 
 ​  { 
 ​   ptr->​next​=​NULL​; 
 ​   temp=​NULL​; 
 ​  } 
 ​ } 
 ​} 
  
 ​void​ ​printlist​()                                                   ​//​function to print linked list 
 ​{ 
 ​ ​int​ size=​0​; 
 ​ temp=head; 
 ​ ​while​(temp!=​NULL​) 
 ​ { 
 ​  ​printf​(​"​%d​ ​"​,temp->​data​); 
 ​  temp=temp->​next​; 
 ​ } 
 ​} 
  
 ​void​ ​insbegin​()                                                        ​//​function to insert to the beginning of a linked list 
 ​{ 
 ​printf​(​"​\n​1.Insert at beginning​"​); 
 ​new = (​struct​ node*)​malloc​(​sizeof​(​struct​ node)); 
 ​printf​(​"​\n​Enter the element to be inserted:​"​); 
 ​scanf​(​"​%d​"​,&x); 
 ​new->​data​=x; 
 ​new->​prev​=​NULL​; 
 ​head->​prev​=new; 
 ​new->​next​=head; 
 ​head=new; 
 ​size++; 
 ​printf​(​"​The new linked list is:​"​); 
 ​printlist​(); 
 ​} 
  
 ​void​ ​insend​()                                                        ​//​function to insert to the end of a linked list 
 ​{ 
 ​printf​(​"​\n​2.Insertion at end​"​); 
 ​new = (​struct​ node*)​malloc​(​sizeof​(​struct​ node)); 
 ​printf​(​"​\n​Enter the element to be inserted:​"​); 
 ​scanf​(​"​%d​"​,&x); 
  
 ​temp=head; 
 ​while​(temp->​next​!=​NULL​) 
 ​{ 
 ​ temp=temp->​next​; 
 ​} 
 ​new->​data​=x; 
 ​new->​next​=​NULL​; 
 ​new->​prev​=temp; 
 ​temp->​next​=new; 
 ​size++; 
 ​printf​(​"​The new linked list is:​"​); 
 ​printlist​(); 
 ​} 
  
 ​void​ ​inspos​()                                                        ​//​function to insert at any position in a linked list 
 ​{ 
 ​int​ pos,i; 
 ​printf​(​"​\n​3.Insertion at any position​"​); 
 ​new = (​struct​ node*)​malloc​(​sizeof​(​struct​ node)); 
 ​printf​(​"​\n​Enter the new element to be inserted:​"​); 
 ​scanf​(​"​%d​"​,&x); 
 ​printf​(​"​\n​Enter the position to be inserted:​"​); 
 ​scanf​(​"​%d​"​,&pos); 
 ​temp=head; 
 ​if​(pos<​1​||pos>size+​1​) 
 ​{ 
 ​ ​printf​(​"​Invalid Positiion!​"​); 
 ​} 
 ​else 
 ​{ 
 ​ ​for​(i=​2​;i<pos;i++) 
 ​ { 
 ​  ​if​(temp->​next​!=​NULL​) 
 ​  { 
 ​   temp=temp->​next​; 
 ​  } 
 ​ } 
 ​ new->​data​=x; 
 ​ temp->​next​->​prev​=new; 
 ​ new->​next​=temp->​next​; 
 ​ new->​prev​=temp; 
 ​ temp->​next​=new; 
 ​} 
 ​size++; 
 ​printf​(​"​\n​The new linked list is:​"​); 
 ​printlist​(); 
 ​} 
  
 ​void​ ​delbegin​()                                                        ​//​function to delete from the beginning of a linked list 
 ​{ 
 ​printf​(​"​\n​4.Delete at beginning​"​); 
 ​ptr=head; 
 ​head=head->​next​; 
 ​head->​prev​=​NULL​; 
 ​free​(ptr); 
 ​size--; 
 ​printf​(​"​\n​The new linked list after deletion:​"​); 
 ​printlist​(); 
 ​} 
  
 ​void​ ​delend​()                                                        ​//​function to delete from the end of a linked list 
 ​{ 
 ​printf​(​"​\n​5.Delete at end​"​); 
 ​temp=head; 
 ​while​(temp->​next​->​next​!=​NULL​) 
 ​{ 
 ​ temp=temp->​next​; 
 ​} 
 ​ptr=temp->​next​; 
 ​temp->​next​->​prev​=​NULL​; 
 ​temp->​next​=​NULL​; 
 ​free​(ptr); 
 ​size--; 
 ​printf​(​"​\n​The new linked list after deletion:​"​); 
 ​printlist​(); 
 ​} 
  
 ​void​ ​delany​()                                                        ​//​function to delete any node in a linked list 
 ​{ 
 ​printf​(​"​\n​6.Delete any node​"​); 
 ​printf​(​"​\n​Enter the element to be deleted:​"​); 
 ​scanf​(​"​%d​"​,&x); 
 ​temp=head; 
 ​while​(temp->​next​->​data​!=x) 
 ​{ 
 ​ temp=temp->​next​; 
 ​} 
 ​ptr=temp->​next​; 
 ​temp->​next​=temp->​next​->​next​; 
 ​temp->​next​->​prev​=temp; 
 ​free​(ptr); 
 ​size--; 
 ​printf​(​"​The new linked list is:​"​); 
 ​printlist​(); 
 ​} 
  
 ​void​ ​main​() 
 ​{ 
 ​int​ ch; 
 ​char​ choice; 
  
 ​head=(​struct​ node *)​malloc​(​sizeof​(​struct​ node)); 
 ​temp=head; 
  
 ​printf​(​"​Enter the elements(enter -999 to stop):​"​); 
 ​getlist​(x); 
 ​printf​(​"​The elements are=​"​); 
 ​printlist​(); 
  
 ​do 
 ​{ 
 ​printf​(​"​\n​LINKED LIST OPERATIONS​"​); 
 ​printf​(​"​\n​1. Insert at beginning​"​); 
 ​printf​(​"​\n​2. Insert at end​"​); 
 ​printf​(​"​\n​3. Insert at any position​"​); 
 ​printf​(​"​\n​4. Delete at beginning​"​); 
 ​printf​(​"​\n​5. Delete at end​"​); 
 ​printf​(​"​\n​6. Delete any node​"​); 
 ​printf​(​"​\n​Enter your choice:​"​); 
 ​scanf​(​"​%d​"​,&ch); 
 ​ ​switch​(ch) 
 ​ { 
 ​ ​case​ ​1​: 
 ​        { 
 ​         ​insbegin​(); 
 ​         ​break​; 
 ​        } 
 ​ ​case​ ​2​: 
 ​        { 
 ​        ​insend​(); 
 ​        ​break​; 
 ​        } 
 ​ ​case​ ​3​: 
 ​        { 
 ​        ​inspos​(); 
 ​        ​break​; 
 ​        } 
 ​ ​case​ ​4​: 
 ​        { 
 ​         ​delbegin​(); 
 ​         ​break​; 
 ​        } 
 ​ ​case​ ​5​: 
 ​        { 
 ​         ​delend​(); 
 ​         ​break​; 
 ​        } 
 ​ ​case​ ​6​: 
 ​        { 
 ​         ​delany​(); 
 ​         ​break​; 
 ​        } 
 ​ ​default​: 
 ​        { 
 ​         ​printf​(​"​\n​Invalid Choice!!!​"​); 
 ​         ​break​; 
 ​        } 
 ​ } 
 ​printf​(​"​\n​Do you want to continue?(Press y/n):​"​); 
 ​scanf​(​"​ ​%c​"​,&choice); 
 ​}​while​(choice==​'​y​'​|| choice==​'​Y​'​); 
 ​}