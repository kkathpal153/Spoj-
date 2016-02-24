#include<iostream>
#include<stdio.h>

using namespace std;


struct vertex
{   int dest;
	vertex *next;
};
struct list
{
	int n;
	vertex *head; 
	
};
struct graph
{
	char c;
	int n;
	list *array;
};

struct vertex *allot(int dest)
{
	struct vertex *temp=new (struct vertex);
	temp->dest=dest;
	temp->next=NULL;
	return temp;
}

struct graph *createg(int n)
{
	graph *temp=new (struct graph);
	temp->n=n;
    temp->array=new list[5];
    for(int i=0;i<n;i++)
    temp->array[i].head=NULL;
    
    return temp;
}
void addedge(struct graph *g,int s, int d)
{
	vertex *dummy=allot(d);
	dummy->next=g->array[s].head;
	g->array[s].head=dummy;
     
	dummy=allot(s);
    dummy->next=g->array[d].head;
	g->array[d].head=dummy;
	
	
}
void print(struct graph *g)
{ 
  int v,i,j;
  for(i=0;i<g->n;i++)
  {
  	vertex *v=g->array[i].head;
  	cout<<"\n adjency list of vertex "<<i<<" is: \n";
  	while(v)
  	{
  		cout<<v->dest<<"->";
  		v=v->next;
	  }
	cout<<"\n you did it noob :(";
  }
  	
}

int main()
{
	graph *g=createg(5);
	
	addedge(g, 0, 1);
    addedge(g, 0, 4);
    addedge(g, 1, 2);
    addedge(g, 1, 3);
    addedge(g, 1, 4);
    addedge(g, 2, 3);
    addedge(g, 3, 4);
    print (g);
}
