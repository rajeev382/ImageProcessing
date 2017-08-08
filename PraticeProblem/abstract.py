from abc import ABCMeta, abstractmethod

class Base(object):
    __metaclass__ = ABCMeta

    @abstractmethod
    def foo(self):
        print("vdvd")
        return True

    @abstractmethod
    def bar(self,u=None,h=None):
        pass


class Concrete:
    def foo(self,x):
        pass

    def bar(self,h=None):
        print("fsfs")
        return True

    def bar(self):
        print("fsf")
        return True
    # We forget to declare `bar`


c = Concrete()
c.bar(3)