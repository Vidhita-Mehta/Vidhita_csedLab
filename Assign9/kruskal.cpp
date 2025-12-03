#include<iostream>
#include<list>
using namespace std;
class graph
{
	public:
	list <pair<int,int>> *l;
	int v;
	graph(int c)
	{
		v=c;
		l=new list<pair<int,int>> [v];
	}
	void edge(int u,int v,int w)
	{
		l[u].push_back({v,w});
		l[v].push_back({u,w});
	}
	void print()
	{
		for(int i=0;i<v;i++)
		{
			cout<<i<<"->";
			for(auto j:l[i])
			{
				cout<<"("<<j.first<<","<<j.second<<")->";
			}
			cout<<endl;
		}
	}
	
};
struct Edge
{
	int u,v,w;
}
int findparent(int parent[],int i)
{
	if(parent[i]==i)
	{
		returni;
	}
	return parent[i]=findparent(parent,parent[i]);
}
void union(int parent[],int rank[],int u,int v)
{
	pu=findparent(parent,u);
	pv=findparent(parent,v);
	if(rank[pu]<rank[pv])
	parent[u]=pv;
	else if(rank[pu]>rank[pv])
	parent[v]=pu;
	else
	parent[v]=pu;
	rank[pu]++;
}
void bubbleSort(list<Edge> &edges) {

    int n = edges.size();
    if (n < 2) return;

    for (int pass = 0; pass < n - 1; pass++) {

        auto it1 = edges.begin();
        auto it2 = it1;
        it2++;

        while (it2 != edges.end()) {
            if (it1->w > it2->w) {
                swap(*it1, *it2);
            }
            ++it1;
            ++it2;
        }
    }
}
int main()
{
int main() {
    int V, E;
    cout << "Enter vertices and edges: ";
    cin >> V >> E;

    Graph g(V);

    cout << "Enter edges (u v w):\n";
    for (int i = 0; i < E; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        g.addEdge(u, v, w);
    }

    // Convert adjacency list -> edge list
    list<Edge> edges;

    for (int u = 0; u < V; u++) {
        for (auto p : g.adj[u]) {
            int v = p.first;
            int w = p.second;

            if (u < v) { // avoid duplicates
                edges.push_back({u, v, w});
            }
        }
    }

    // Bubble sort the edges by weight
    bubbleSort(edges);

    // Kruskal
    int parent[V];
    int rank[V] = {0};

    for (int i = 0; i < V; i++)
        parent[i] = i;

    list<Edge> mst;

    for (auto e : edges) {
        int pu = findParent(parent, e.u);
        int pv = findParent(parent, e.v);

        if (pu != pv) {
            mst.push_back(e);
            unionSet(parent, rank, pu, pv);
        }
    }

    cout << "\nMST Edges:\n";
    int total = 0;
    for (auto e : mst) {
        cout << e.u << " - " << e.v << " : " << e.w << endl;
        total += e.w;
    }
    cout << "Total Weight = " << total << endl;

    return 0;
}
}
