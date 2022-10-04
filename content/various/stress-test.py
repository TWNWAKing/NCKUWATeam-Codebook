import os
os.system("g++ sol.cpp -o sol.o -O2 -std=c++17")
os.system("g++ gen.cpp -o gen.o -O2 -std=c++17")
os.system("g++ brute.cpp -o brute.o -O2 -std=c++17")
while True:
    os.system("./gen.o > test.in")
    os.system("./sol.o < test.in > sol.out")
    os.system("./brute.o < test.in > brute.out")
    if os.system("diff sol.out brute.out"):
        print("WA")
        print("In:")
        os.system("cat test.in")
        print("Slow:")
        os.system("cat sol.out")
        print("Fast:")
        os.system("cat brute.out")
        break
    print("OK")