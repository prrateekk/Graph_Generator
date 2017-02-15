#include <bits/stdc++.h>
#include "get_Tree_Edges.h"
using namespace std;

int main(){
	srand ( time(NULL) );
	freopen("tree","w",stdout);
	vector < pair<int,int> > edges = getTreeEdges(10);
	cout << 10 << " " << 9 << endl;
	for (int i=0;i<9;i++) cout << edges[i].first << " " << edges[i].second << endl;
	return 0;
}
