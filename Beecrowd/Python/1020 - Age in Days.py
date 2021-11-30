days = int(input())

year = int(days/365);
days = int(days%365)
month = int(days/30)
days = int(days%30)

print(f"{year} ano(s)");
print(f"{month} mes(es)");
print(f"{days} dia(s)");