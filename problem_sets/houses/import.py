from cs50 import SQL
from sys import argv

db = SQL('sqlite:///students.db')

def partition_name(full_name):
    names = full_name.split()
    return names if len(names) >= 3 else [names[0], None , names[1]]

csv_path = argv[1]
with open(csv_path) as csv_file:
    reader = csv.DictReader(csv_file)
    for row in reader:
        names = partition_name(row['name'])
        house = row['house']
        birth = row['birth']
        db.execute('INSERT INTO students(first, middle, last, house, birth) VALUES(?, ?, ?, ?, ?)', names[0], names[1], names[2], house, birth)



