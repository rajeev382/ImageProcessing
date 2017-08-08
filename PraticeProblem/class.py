class Cup(object):
    def __init__(self):
        self._color = 2    # protected variable
        self.__content =5  # private variable
        print ("ffsdf")
    def _fill(self):
        print("ddfsdf")

    def __empty(self):
        self._cont = 8

class cake(Cup):
    def __init__(self):
        super(cake,self).__init__()

        #print (self.__content)
cake=cake()