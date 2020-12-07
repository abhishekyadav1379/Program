
import pytesseract
import cv2
pytesseract.pytesseract.tesseract_cmd = r'C:\\Program Files\\Tesseract-OCR\\tesseract.exe'
print(pytesseract.image_to_string(r'E:\\Program\\Noun-Definition.png'))
