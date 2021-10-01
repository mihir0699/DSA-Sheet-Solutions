def dijktras(src):
    global vertices,graph
    distance=[999999]*vertices
    distance[src]=0
    visited=[False]*vertices
    for i in range(vertices):
        min=999999
        for j in range(vertices):
            if distance[j]<min and visited[j]==False:
                min_vertex=j
                min=distance[j]
        visited[min_vertex]=True

        for j in range(vertices):
            if graph[min_vertex][j]>0 and visited[j]==False and distance[j]>distance[min_vertex]+graph[min_vertex][j]:
                distance[j]=distance[min_vertex]+graph[min_vertex][j]
    print('vertex\tdistance ')
    for i in range(vertices):
        print(i,"\t",distance[i])

vertices=int(input('number of vertices : '))
# graph=[[0, 4, 0, 0, 0, 0, 0, 8, 0], [4, 0, 8, 0, 0, 0, 0, 11, 0], 
#     [0, 8, 0, 7, 0, 4, 0, 0, 2], [0, 0, 7, 0, 9, 14, 0, 0, 0], 
#     [0, 0, 0, 9, 0, 10, 0, 0, 0], [0, 0, 4, 14, 10, 0, 2, 0, 0], 
#     [0, 0, 0, 0, 0, 2, 0, 1, 6], [8, 11, 0, 0, 0, 0, 1, 0, 7], 
#     [0, 0, 2, 0, 0, 0, 6, 7, 0]]
graph=[list(map(int,input().split())) for i in range(vertices)]
dijktras(int(input('source vertex : ')))

