# -*- coding: utf-8 -*-
"""
Spyder Editor

This is a temporary script file.
"""

import pandas as pd
from collections import defaultdict

"""
This is the function for lookup. Here, we take two arguments, the name to be
searched for and the dictionary of all the address book contacts and prints all the
relevant or matching items.
"""
def lookup(s, dic):
    s.lower()
    s.strip()
    if(dic[s]):
        #for i in dic[s]:
        print(dic[s])
    else:
        print("No address for requested user found")

"""
addressDF is the dataframe of the CSV file containing different columns like first
name, last name, street number, pincode, etc. and rows is the number of rows in the
dataframe or the CSV itself.
"""

addressDF=pd.read_csv(r"C:\Users\Shubham Sharma\Desktop\AddressLookup.csv")
rows=addressDF.shape[0]

"""
Here, I converted all the names in the dataframe to lower case and 
stripped off all the whitespace characters.
"""

for i in range(rows):
    addressDF.loc[i, 'First']=addressDF.loc[i, 'First'].lower()
    addressDF.loc[i, 'First']=addressDF.loc[i, 'First'].strip()
    addressDF.loc[i, 'Last']=addressDF.loc[i, 'Last'].lower()
    addressDF.loc[i, 'Last']=addressDF.loc[i, 'Last'].strip()

details_dic=defaultdict(list)

"""
Here, details_dic is the dictionary with field names corresponding first name, last
name, and first name and last name combined (i.e., full name). If there are multiple
entries corresponding to the same name, they will be attached in the list.
"""

for i in range(rows):
    s="First- "+addressDF.loc[i, 'First']
    s+=" Last- "+addressDF.loc[i, 'Last']
    s+=" Street- "+addressDF.loc[i, 'Street']
    s+=" City- "+addressDF.loc[i, 'City']
    s+=" State- "+addressDF.loc[i, 'State']
    s+=" Pin- "+str(addressDF.loc[i, 'Pin'])
    details_dic[addressDF.loc[i, 'First']+addressDF.loc[i, 'Last']].append(s)
    details_dic[addressDF.loc[i, 'First']].append(s)
    details_dic[addressDF.loc[i, 'Last']].append(s)

s=str(input("Please enter the name of the person whose address you want: "))
lookup(s, details_dic)
