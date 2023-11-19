import ipaddress
import re

def int32_to_ip(int32):
    return re.sub("[^0-9.]/g", "", str(ipaddress.ip_address(int32)))