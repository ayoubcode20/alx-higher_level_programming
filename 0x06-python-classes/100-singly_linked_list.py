#!/usr/bin/python3
"""A Singly linked list"""


class Node:
    """Class that defines a node of a singly linked list"""

    def __init__(self, data, next_node=None):
        """Instantiation with data and next_node"""
        if not isinstance(data, int):
            raise TypeError("data must be an integer")
        if next_node is not None and not isinstance(next_node, Node):
            raise TypeError("next_node must be a Node object")
        self.__data = data
        self.__next_node = next_node

    @property
    def data(self):
        """Retrieve data"""
        return self.__data

    @data.setter
    def data(self, value):
        """Set data"""
        if not isinstance(value, int):
            raise TypeError("data must be an integer")
        self.__data = value

    @property
    def next_node(self):
        """Retrieve next_node"""
        return self.__next_node

    @next_node.setter
    def next_node(self, value):
        """Set next_node"""
        if value is not None and not isinstance(value, Node):
            raise TypeError("next_node must be a Node object")
        self.__next_node = value


class SinglyLinkedList:
    """Class that defines a singly linked list"""

    def __init__(self):
        """Simple instantiation"""
        self._head = None

    def __str__(self):
        """Print the entire list in stdout, one node number by line"""
        current = self._head
        result = ""
        while current:
            result += str(current.data) + '\n'
            current = current.next_node
        return result.strip()

    def sorted_insert(self, value):
        """ Insert a new Node into the correct sorted position
        in the list (increasing order)
        """
        new_node = Node(value)
        if not self._head or self._head.data >= value:
            new_node.next_node = self._head
            self._head = new_node
            return
        current = self._head
        while current.next_node and current.next_node.data < value:
            current = current.next_node
        new_node.next_node = current.next_node
        current.next_node = new_node
