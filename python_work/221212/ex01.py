import sys
from PyQt5.QtWidgets \
import QApplication, QWidget , QVBoxLayout, QPushButton, QTextEdit, QLineEdit


class MyApp(QWidget):

    def __init__(self):
        super().__init__()
        self.initUI()

    def initUI(self):
        self.lineedit = QLineEdit()
        self.textedit = QTextEdit()
        btn1 = QPushButton("구구단역순")
        btn1.clicked.connect(self.guguEvent)

        vboxlayout = QVBoxLayout()
        vboxlayout.addWidget(self.lineedit)
        vboxlayout.addWidget(self.textedit)
        vboxlayout.addWidget(btn1)
        
        self.setLayout(vboxlayout)

        self.setWindowTitle('My First Application')
        self.move(300, 300)
        self.resize(400, 200)
        self.show()

    def guguEvent(self):
        gugudan = self.lineedit.text()
        print(gugudan.isdigit()) #숫자면 true 아니면 false isdigit
        self.textedit.setText(gugudan)
        # print(self.textedit.toPlainText())


if __name__ == '__main__':
   app = QApplication(sys.argv)
   ex = MyApp()
   sys.exit(app.exec_())