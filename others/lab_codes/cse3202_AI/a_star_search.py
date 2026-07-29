# -*- coding: utf-8 -*-
"""
Created on Fri Aug 26 12:08:23 2022

@author: adrik
"""

# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

from collections import deque

class Graph:

    def __init__(self, adjacency_list):
        self.adjacency_list = adjacency_list

    def get_neighbors(self, v):
        return self.adjacency_list[v]

    # heuristic function with equal values for all nodes
    def h(self, n):
        H = {
            'Arad': 366,
            'Bucharest': 0,
            'Cralova': 160,
            'Droheta': 242,
            'Eforie' : 161,
            'Fagaras': 176,
            'Giurgui': 77,
            'Hirsova': 151,
            'Iasi': 226,
            'Lugoj': 244,
            'Mehadia': 241,
            'Neamt' : 234,
            'Oradea': 380,
            'Pitesti': 100,
            'Rimnicu Vilcea': 193,
            'Sibiu': 253,
            'Timisoara': 329,
            'Urziceni': 80,
            'Vaslui': 199,
            'Zerind': 374

        }

        return H[n]

    def a_star_algorithm(self, start_node, stop_node):
        # open_list is a list of nodes which have been visited, but who's neighbors
        # haven't all been inspected, starts off with the start node
        # closed_list is a list of nodes which have been visited
        # and who's neighbors have been inspected
        open_list = set([start_node])
        closed_list = set([])

        # g contains current distances from start_node to all other nodes
        # the default value (if it's not found in the map) is +infinity
        g = {}

        g[start_node] = 0

        # parents contains an adjacency map of all nodes
        parents = {}
        parents[start_node] = start_node

        while len(open_list) > 0:
            n = None

            # find a node with the lowest value of f() - evaluation function
            for v in open_list:
                if n == None or g[v] + self.h(v) < g[n] + self.h(n):
                    n = v;

            if n == None:
                print('Path does not exist!')
                return None

            # if the current node is the stop_node
            # then we begin reconstructin the path from it to the start_node
            if n == stop_node:
                reconst_path = []

                while parents[n] != n:
                    reconst_path.append(n)
                    n = parents[n]

                reconst_path.append(start_node)

                reconst_path.reverse()

                print('Path found: {}'.format(reconst_path))
                return reconst_path

            # for all neighbors of the current node do
            for (m, weight) in self.get_neighbors(n):
                # if the current node isn't in both open_list and closed_list
                # add it to open_list and note n as it's parent
                if m not in open_list and m not in closed_list:
                    open_list.add(m)
                    parents[m] = n
                    g[m] = g[n] + weight

                # otherwise, check if it's quicker to first visit n, then m
                # and if it is, update parent data and g data
                # and if the node was in the closed_list, move it to open_list
                else:
                    if g[m] > g[n] + weight:
                        g[m] = g[n] + weight
                        parents[m] = n

                        if m in closed_list:
                            closed_list.remove(m)
                            open_list.add(m)

            # remove n from the open_list, and add it to closed_list
            # because all of his neighbors were inspected
            open_list.remove(n)
            closed_list.add(n)

        print('Path does not exist!')
        return None


adjacency_list = {
    'Oradea': [('Zerind', 71), ('Sibiu', 151)],
    'Zerind': [('Arad', 75), ('Oradea', 71)],
    'Arad': [('Sibiu', 140), ('Timisoara', 329), ('Zerind', 75)],
    'Timisoara': [('Lugoj', 111), ('Arad', 118)],
    'Lugoj': [('Mehadia', 70), ('Timisoara', 111)],
    'Mehadia': [('Droheta', 75), ('Lugoj', 70)],
    'Droheta': [('Cralova', 120), ('Mehadia', 75)],
    'Cralova': [('Rimnicu Vilcea', 146), ('Pitesti', 138), ('Droheta', 120)],
    'Rimnicu Vilcea': [('Sibiu', 80), ('Pitesti', 97), ('Cralova', 146)],
    'Pitesti': [('Bucharest', 101), ('Rimnicu Vilcea', 97), ('Cralova', 138)],
    'Sibiu': [('Fagaras', 99), ('Oradea', 151), ('Arad', 140), ('Rimnicu Vilcea', 80)],
    'Fagaras' : [('Bucharest', 211), ('Sibiu', 99)],
    'Bucharest' : [('Giurgui', 90), ('Urziceni', 85), ('Fagaras', 211), ('Pitesti', 101)],
    'Urziceni' : [('Vaslui', 142), ('Hirsova', 98), ('Bucharest', 85)],
    'Vaslui' : [('Iasi', 92), ('Urziceni', 142)],
    'Iasi' : [('Neamt', 87), ('Vaslui', 92)],
    'Hirsova' : [('Eforie', 86), ('Urziceni', 98)],
    'Giurgui' : [('Bucharest', 90)],
    'Eforie' : [('Hirsova', 86)],
    'Neamt' : [('Iasi', 87)]

}

graph1 = Graph(adjacency_list)
graph1.a_star_algorithm('Arad', 'Eforie')
