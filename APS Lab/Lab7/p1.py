class Item:
    def __init__(self, value, weight):
        self.value = value
        self.weight = weight

def fractional_knapsack(items, capacity):
    items.sort(key=lambda item: item.value / item.weight, reverse=True)
    
    total_value = 0
    for item in items:
        if capacity >= item.weight:
            total_value += item.value
            capacity -= item.weight
        else:
            total_value += (item.value / item.weight) * capacity
            break  # Knapsack is full
    
    return total_value

items = [Item(60, 10), Item(100, 20), Item(120, 30)]
capacity = 50
max_value = fractional_knapsack(items, capacity)
print("Maximum value in Knapsack:", max_value)