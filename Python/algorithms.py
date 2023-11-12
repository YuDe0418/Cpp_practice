def disp_data():
    for item in datas:
        print(item,end=" ")
    print()

datas = [3,5,2,1]
print("排序前:", end=" ")
disp_data()
n = len(datas) - 1 

for i in range(0,n):
    for j in range(0,n-i):
        if datas[j] > datas[j+1]:
            datas[j], datas[j-1] = datas[j-1], datas[j]

print("排序後:", end=" ")
disp_data()