def get_price(item):
    if item == "idli":
        return 30
    elif item == "dosa":
        return 40
    elif item == "golibaje":
        return 25
    elif item == "chapati":
        return 35
    elif item == "vada":
        return 20
    else:
        pass


def item_cost(item, qty):
    price=get_price(item)
    return price * qty
    

def calculate_gst(amount, rate=0.05):
    gst = amount*rate
    return round(gst,2)


def generate_bill(subtotal, discount_percent=0):
    discount =  subtotal*discount_percent
    amount_after_discount = subtotal-discount
    gst =  calculate_gst(amount_after_discount)
    total = amount_after_discount+gst
    return discount,gst,total


def split_bill(total, people):
    each_pays = total/people
    left_over = total%people
    return each_pays,left_over


# ---------------- Main program ----------------
# A group of 3 friends orders 2 dosa and 3 coffee, with a 10% coupon.

subtotal = item_cost
# TODO: call item_cost() for dosa and coffee and add them
discount, gst, total = 
# TODO: call generate_bill() using a KEYWORD argument
each, extra = split_bill
# TODO: call split_bill() with the total (as a whole number) and 3 people

print("Subtotal :", subtotal)
print("Discount :", discount)
print("GST      :", gst)
print("Total    :", total)
print("Each pays:", each, "| Left over:", extra)