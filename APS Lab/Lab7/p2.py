import heapq

class Node:
    def __init__(self, char, freq):
        self.char = char
        self.freq = freq
        self.left = None
        self.right = None

    def __lt__(self, other):
        return self.freq < other.freq

def huffman_coding(frequencies):
    heap = [Node(char, freq) for char, freq in frequencies.items()]
    heapq.heapify(heap)

    while len(heap) > 1:
        left = heapq.heappop(heap)
        right = heapq.heappop(heap)
        merged = Node(None, left.freq + right.freq)
        merged.left = left
        merged.right = right
        heapq.heappush(heap, merged)

    return heap[0]  # Root node of Huffman Tree

def get_huffman_codes(root, code="", mapping={}):
    if root:
        if root.char is not None:
            mapping[root.char] = code
        get_huffman_codes(root.left, code + "0", mapping)
        get_huffman_codes(root.right, code + "1", mapping)
    return mapping

letters = ['a', 'b', 'c', 'd', 'e', 'f']
frequencies = [39, 10, 9, 25, 7, 3]
freq_dict = dict(zip(letters, frequencies))

root = huffman_coding(freq_dict)
huffman_codes = get_huffman_codes(root)

word = "baba"
encoded_word = "".join(huffman_codes[char] for char in word)

print("Huffman Codes:", huffman_codes)
print(f"Encoded message for '{word}':", encoded_word)