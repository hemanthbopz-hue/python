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
    elif item == "coffee":
        return 15  # Added coffee price since it was missing in the menu
    else:
        return 0


def item_cost(item, qty):
    price = get_price(item)
    return price * qty


def calculate_gst(amount, rate=0.05):
    gst = amount * rate
    return gst, 2


def generate_bill(subtotal, discount_percent=0):
    discount = subtotal * discount_percent
    amount_after_discount = subtotal - discount
    gst = calculate_gst(amount_after_discount)
    total = amount_after_discount + gst
    return discount, gst, total


def split_bill(total, people):
    each_pays = total / people
    left_over = total % people
    return each_pays, left_over


# ---------------- Main program ----------------
# A group of 3 friends orders 2 dosa and 3 coffee, with a 10% coupon.
subtotal1 = item_cost('dosa',2)
discount1 = gst1 , total1 = generate_bill(subtotal1,0.10)

subtotal2 = item_cost('coffee',3)
discount2 = gst2 , total2 = generate_bill(subtotal2,0.10)

each, extra = split_bill(total1 + total2,3)

print("Subtotal :", subtotal1)
print("Discount :", discount1)
print("GST      :", gst1)
print("Total    :", total1)

print("Subtotal :", subtotal2)
print("Discount :", discount2)
print("GST      :", gst2)
print("Total    :", total2)

print("Each pays:", each, "Left over:", extra)