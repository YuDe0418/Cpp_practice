n = int(input())
ox, oy= map(int, input().split())
ori_dir = 0
left, right, back = 0, 0, 0

for i in range(n-1):
    x, y = map(int, input().split())
    
    if x > ox:
        dir = 0  #東
    elif y < oy:
        dir = 1  # 南
    elif x < ox:
        dir = 2  # 西
    else:
        dir = 3  # 北 (y > py)

    if dir == (ori_dir + 1) % 4:
        right += 1
    elif dir == (ori_dir + 2) % 4:
        back += 1
    elif dir == (ori_dir + 3) % 4:
        left += 1

    ori_dir = dir
    ox, oy = x, y

print(left, right, back)
