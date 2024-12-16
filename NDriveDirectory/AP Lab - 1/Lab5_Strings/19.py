def string_to_dict(input_string):
    input_string = input_string.strip().strip('{}')
    result = {}
    pairs = input_string.split(',')
    for pair in pairs:
        key, value = pair.split(':')
        key = key.strip().strip("'").strip('"')
        value = value.strip().strip("'").strip('"')
        result[key] = value
    return result

input_str = "{'key1': 'value1', 'key2': 'value2'}"
output_dict = string_to_dict(input_str)
print(output_dict)
print(type(output_dict))
