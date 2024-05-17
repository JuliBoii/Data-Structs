head = {
    'value': 42,
    'next': {
        'value': 13,
        'next': {
            'value': 9,
            'next': {
                'value': 4,
                'next': None
            }
        }
    }
}

print(head['next']['next']['value'])

# The syntax will be differnt when we actually implement the LL
# it would look like:
# print(linkedList.head.next.next.value)
