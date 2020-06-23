class Smartphone:

    @staticmethod
    def getOS():
        return "Android"

    @staticmethod
    def getVersion():
        return "Marshmallow"

    @staticmethod
    def getModel():
        return "Galaxy Note 7"


print (Smartphone.getOS())
print (Smartphone.getVersion())
print (Smartphone.getModel())

phone = Smartphone()
print (phone.getOS())

