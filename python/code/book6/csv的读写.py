import csv
def readcsv1(csvfilepath:str):
    with open(csvfilepath,newline='',encoding='utf-8') as f:
        f_csv=csv.reader(f)
        header=next(f_csv)
        # print(header)
        for row in f_csv:
            print(row)
if __name__ =='__main__':
    readcsv1(r"scores.csv")