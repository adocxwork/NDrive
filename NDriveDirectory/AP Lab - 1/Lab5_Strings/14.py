def manual_split(paragraph):
    words = []
    current_word = ""
    for char in paragraph:
        if char == ' ':
            if current_word:
                words.append(current_word)
                current_word = ""
        else:
            current_word += char
    if current_word:
        words.append(current_word)
    return words

def bubble_sort(words):
    n = len(words)
    for i in range(n):
        for j in range(0, n-i-1):
            if words[j] > words[j+1]:
                words[j], words[j+1] = words[j+1], words[j]

def sort_words(paragraph):
    words = manual_split(paragraph)
    bubble_sort(words)
    result = ""
    for word in words:
        result += word + " "
    return result

paragraph = "jaypee university of engineering and technology raghogarh guna madhya pradesh"
sorted_output = sort_words(paragraph)
print(sorted_output)
