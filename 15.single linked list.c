#include<stdio.h>
#include<malloc.h>
void create_sll();
void display();
void insert_at_end();
void insert_at_begin();
void insert_at_anyposition();
void delete_at_end();
void delete_at_begin();
void delete_at_anyposition();
void exit( );

struct node
{
	int data;
	struct node *next;
}*head=NULL,*p,*t,*newnode;


int main()
{
    int choice;

    while (1)
    {
        printf("\nPerform operations on the stack:");
        printf("\n1.create the element\n2.display the element\n3.insert at end\n4.insert at begin\n5.insert at any position\n6.delete at end\n7.delete at begin\n8.delete at any position\n9.exit\n");
        printf("\n\nEnter the choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            create_sll();
            break;
        case 2:
            display();
            break;
        case 3:
		    insert_at_end();
			break;
		case 4:
		    insert_at_begin();
			break;
		case 5:
		    insert_at_anyposition();
			break;
		case 6:
		    delete_at_end();
			break;	
		case 7:
		    delete_at_begin();
			break;
		case 8:	
		    delete_at_anyposition();
			break;	
		case 9:
		    exit( );			     
        default:
            printf("\nInvalid choice!!");
        }
    }
}
void create_sll( )
{
	int n,i,ele;
	printf("enter the count in the list");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the element");
		scanf("%d",&ele);
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->data=ele;
		newnode->next=NULL;
	
	if(head==NULL)
	{
		head=newnode;
		p=newnode;
	}
	else
	{
		for(p=head;p->next!=NULL;p=p->next);
		p->next=newnode;
		p=newnode;
     }
	}	
}


void display()
{
	if(head==NULL)
	printf("the sll is empty");
	else
	   for(p=head;p!=NULL;p=p->next)
	       printf("%d ->  ", p->data);
	
}


void insert_at_end()
{
	int ele;
	printf("enter the new data");
	scanf("%d",&ele);
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=ele;
	newnode->next=NULL;
	for(p=head;p->next!=NULL;p=p->next);
	p->next=newnode;
	p=newnode;
}


void insert_at_begin()
{
	int ele;
	printf("enter the new data");
	scanf("%d",&ele);
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=ele;
	newnode->next=NULL;
	p=head;
	head=newnode;
	newnode->next=p;
	p=newnode;
}

void insert_at_anyposition()
{
	int ele,i,pos;
	printf("enter the element and its position");
	scanf("%d%d",&ele,&pos);
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=ele;
	newnode->next=NULL;
	for(p=head,i=1;i<pos;p=p->next,i++)
	    t=p;
	t->next=newnode;
	newnode->next=p;
	p=newnode;        
}

void delete_at_end()
{
	int ele;
	for(p=head;p->next!=NULL;p=p->next)
	    t=p;
	ele=p->data;
	t->next=NULL;
	free(p);
	printf("the deleted element is %d",ele);    
}

void delete_at_begin()
{
	int ele;
	p=head;
	head=p->next;
	ele=p->data;
    free(p);
    p=head;
    printf("the deleted element at begin: %d",ele);
}


void delete_at_anyposition()
{
	int ele,pos,i;
	printf("enter the position");
	scanf("%d",&pos);
	for(p=head,i=1;i<pos;i++,p=p->next)
	    t=p;
	ele=p->data;
	t->next=p->next;
	free(p);
	p=t;
	printf("the deleted element is %d",ele);    
}

void exit()
{
	exit();
}
