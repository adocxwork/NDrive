class DisjointSet:
    def __init__(self, n):
        self.parent = list(range(n))

    def find(self, u):
        if self.parent[u] != u:
            self.parent[u] = self.find(self.parent[u])
        return self.parent[u]

    def union(self, u, v):
        u_root = self.find(u)
        v_root = self.find(v)
        if u_root != v_root:
            self.parent[u_root] = v_root
            return True
        return False

def kruskal(n, cost_matrix):
    edges = []

    for i in range(n):
        for j in range(i + 1, n):
            if cost_matrix[i][j] != 999:
                edges.append((cost_matrix[i][j], i, j))

    edges.sort()

    ds = DisjointSet(n)
    mst_cost = 0
    mst_edges = []

    for weight, u, v in edges:
        if ds.union(u, v):
            mst_edges.append((u + 1, v + 1, weight))
            mst_cost += weight

    return mst_edges, mst_cost

n = 4
cost_matrix = [
    [0, 20, 2, 999],
    [20, 0, 15, 5],
    [2, 15, 0, 25],
    [999, 5, 25, 0]
]

mst_edges, mst_cost = kruskal(n, cost_matrix)

for u, v, w in mst_edges:
    print(f"({u},{v})={w}")
print("The minimum cost spanning tree is =", mst_cost)
