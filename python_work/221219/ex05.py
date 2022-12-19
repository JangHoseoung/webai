from openpyxl import Workbook #클래스 명은 앞에 대문자 ㄱㄱ
#from aa import AA

'''
    pip install openpyxl
'''

wb = Workbook()
ws = wb.active

ws.title = "내시트"
wb.save("sample.xlsx")
wb.close()