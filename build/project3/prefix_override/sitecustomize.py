import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/sicou2/CSCE452/Project3/Project3-Python/install/project3'
