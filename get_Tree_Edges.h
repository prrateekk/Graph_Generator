#ifndef get_Tree_Edges
#define get_Tree_Edges

#include <bits/stdc++.h>
using namespace std;

vector < pair<int,int> > getTreeEdges(int n){
	vector < pair<int,int> > edges;
	vector <int> root[n+1];
	int sz[n+1];
	for (int i=1;i<=n;i++){
		root[i].push_back(i);
		sz[i] = 1;
	}
	int roots = n;
	while(roots>1){
		int r1 = rand()%roots+1,r2 = r1;
		while(r1==r2) r2 = rand()%roots+1;
		if (r1>r2) swap(r1,r2);
		int n1 = root[r1][rand()%sz[r1]];
		int n2 = root[r2][rand()%sz[r2]];
		edges.push_back(make_pair(n1,n2));
		root[r1].insert( root[r1].end(), root[r2].begin(), root[r2].end() );
		sz[r1]+=sz[r2];
		root[r2] = root[roots];
		sz[r2] = sz[roots--];
	}
	return edges;
}

#endif


