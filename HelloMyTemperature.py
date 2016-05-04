#TemperatureConvert.py
val = input("Please input temprature with sign (like 32C): ")
if val[-1] in ['c','C']:
    f = 1.8 * float(val[0:-1]) + 32
    print("The temprature after converting is: %.2fF"%f)
elif val[-1] in ['f','F']:
    c = (float(val[0:-1]) - 32) / 1.8
    print("The temprature after converting is: %.2fC"%c)
else:
    print("Input invalid.")
