import heapq

def dijkstra(graph, src):
    n = len(graph)
    dist = [float('inf')] * n
    prev = [-1] * n
    dist[src] = 0
    visited = [False] * n

    pq = [(0, src)]

    while pq:
        current_dist, u = heapq.heappop(pq)
        if visited[u]:
            continue
        visited[u] = True

        for v in range(n):
            if graph[u][v] != 99:
                alt = dist[u] + graph[u][v]
                if alt < dist[v]:
                    dist[v] = alt
                    prev[v] = u
                    heapq.heappush(pq, (alt, v))

    return dist, prev

def print_paths(prev, dist, src):
    n = len(prev)
    for i in range(n):
        if i == src:
            continue
        path = []
        j = i
        while j != -1:
            path.insert(0, j + 1)
            j = prev[j]
        print(f"{'->'.join(map(str, path))}={dist[i]}")

n = 5
graph = [
    [0, 3, 99, 7, 99],
    [3, 0, 4, 2, 99],
    [99, 4, 0, 5, 6],
    [7, 2, 5, 0, 4],
    [99, 99, 6, 4, 0]
]

source_vertex = 1
distances, predecessors = dijkstra(graph, source_vertex - 1)
print("The shortest path from vertex 1 to all other vertices is:")
print_paths(predecessors, distances, source_vertex - 1)
