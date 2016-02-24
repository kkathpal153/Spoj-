#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <sstream>
#include <string>
#include <time.h>

using namespace std;

class graph {
	private:
		vector<int> node[201];
	public:
		void FillVector(string, int);
		void display();
		int check_edge(int, int);
		void merge_edges(int, int);
		int left_nodes();
		void remove_loops(int, int);
		int display_min_cut();
		int get_size(int);
		int get_element(int, int);
};

void graph::FillVector(string line, int i) {
	
	istringstream iss(line);
	int sub;
	while(iss>>sub)
    {
        node[i].push_back(sub);
    }
}

void graph::display() {
	cout<<"\n";
	
	vector<int>:: iterator p;
	for(int i=1;i<201;i++) {
		cout<<i<<"-->  ";
		for(p = node[i].begin(); p != node[i].end(); p++) {
			cout<<*p<<"  ";
		}
	cout<<"\n";	
	}
}


int graph::check_edge(int x, int y) {
	
	if(node[x].empty() || node[y].empty()) 
		return 0;
	
	for(int i=1; i< node[y].size(); i++) {
		if(node[y][i] == x) 
			return 1;
	}	
	
	return 0;	
}

void graph::merge_edges(int x, int y) {
	
	for(int i=1; i<201; i++) {
		
		for(int j=1; j< node[i].size(); j++)
			if(node[i][j] == y)
				node[i][j] = x;
							
	}
	
	for (int i = 1; i < node[y].size(); ++i)  
        node[x].push_back(node[y][i]);  
	
}

int graph::left_nodes() {
	
	int count = 0;
	for(int i=1; i<201; i++) {
		if(!node[i].empty())
			count++;
	}
	//cout<<"\nThe number of nodes left: "<<count;
	return count;
}

void graph::remove_loops(int x, int y) {
	
	int i;
	for(i=1; i<node[x].size(); i++) {
		if(node[x][i] == x) {
			node[x].erase(node[x].begin() + i);
			i--;
		}
	}
	node[y].clear();
}

int graph::display_min_cut() {
	int p;
	for(int i=1;i<201;i++) {
		if(!node[i].empty()) {
			p = node[i].size() - 1;
		}
	}
	return p;
}

int graph::get_size(int x) {
	return (node[x].size());
}

int graph::get_element(int x, int y) {
	return node[x][y];
} 

int random_contraction(graph &km) {
	
	int random_u, random_v, p=0,size;
	while(km.left_nodes() != 2) {

			again:
			random_u = (rand() % 200) + 1;
			size = km.get_size(random_u) - 1;
			if(size == -1)
				goto again;
			random_v = (rand() % size) + 1;
			random_v = km.get_element(random_u, random_v);
			p = km.check_edge(random_u, random_v);
		
		//cout<<"  The random selection is: "<<random_u<<"  "<<random_v<<" and edge check is: "<<p;
		km.merge_edges(random_u, random_v);	
		km.remove_loops(random_u, random_v);
			
	}
	
	return (km.display_min_cut());
	
}

int main(void) {
	ifstream fin("Kargermincut.txt");
	string line;
	int i=1;
	graph gh;
	
	srand((unsigned int) time(NULL));
	while(getline(fin, line)) {
		gh.FillVector(line, i);
		i++;
	}
	//gh.display();
	
	cout<<"\nEdge Check: "<<gh.check_edge(193,8);
	graph copy, min_graph;
	int p, min=200;
	
	for(int i=0; i<100; i++) {
		copy = gh;
		cout<<"\nIter: "<<i;
		p = random_contraction(copy);
		cout<<" MinCut: "<<p;
		if(p<min) {
			min = p;
			min_graph = copy;
		}
	}
	cout<<"\nMin cut: "<<min;
	//cout<<"\nGraph is: ";
	//min_graph.display();
}

