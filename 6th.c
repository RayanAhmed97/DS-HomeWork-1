class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class LinkedList:
    def __init__(self):
        self.head = None

    def insert(self, data):
        new_node = Node(data)
        new_node.next = self.head
        self.head = new_node

    def search(self, name):
        current = self.head
        while current:
            if current.data['name'] == name:
                return current
            current = current.next
        return None

    def delete_next(self, name):
        current = self.head
        while current:
            if current.data['name'] == name:
                if current.next:
                    next_node = current.next.next
                    current.next.next = None
                    del current.next
                    current.next = next_node
                return
            current = current.next
