import subprocess
import time
import os
path = r"C:\Users\1kusp\OneDrive\Documents\CP\testing"
import warnings
warnings.filterwarnings("ignore")
cmd = path+r"\brute_test.cpp"
subprocess.call(["g++", "-w"   , cmd])
subprocess.call("./a.exe")
os.remove("a.exe")
cmd = path+r"\optimal_test.cpp"
subprocess.call(["g++",  "-w"   , cmd])
subprocess.call("./a.exe")
os.remove("a.exe")
from selenium import webdriver
import time
from selenium.webdriver.chrome.options import Options
options = webdriver.ChromeOptions()
options.add_argument("user-data-dir=C:\\Users\\1kusp\\AppData\\Local\\Google\\Chrome\\User Data\\Default")
path_driver = path + r"\chromedriver.exe"
browser = webdriver.Chrome(executable_path=path_driver, chrome_options=options)
browser.maximize_window()
browser.get('https://text-compare.com/')
time.sleep(2)
clik = browser.find_element_by_id('compareButton')
f1 = browser.find_element_by_id('inputText1')
f2 = browser.find_element_by_id('inputText2')
file_path1 = path + r"\brute_test_out.txt"
with open(file_path1, 'r') as myfile1:
    content1 = myfile1.read()
file_path2 = path + r"\optimal_test_out.txt"
with open(file_path2, 'r') as myfile2:
    content2 = myfile2.read()
browser.execute_script('arguments[0].value=arguments[1]', f1 , content2)
browser.execute_script('arguments[0].value=arguments[1]', f2 , content1)
clik.click()
