# Basic Discount Tool

โปรแกรมภาษา C สำหรับคำนวณราคาสินค้าหลังจากหักส่วนลดคงที่

## เกี่ยวกับโปรเจกต์

`Simple Discount Calculator` เป็นโปรแกรมภาษา C ขนาดเล็กที่ออกแบบมาเพื่อสาธิตการใช้งานฟังก์ชัน (function) และการคำนวณพื้นฐาน โปรแกรมนี้จะกำหนด **ส่วนลดคงที่** ไว้ และจะนำไปหักออกจากราคาเต็มของสินค้าที่ผู้ใช้ป้อนเข้ามา เหมาะสำหรับผู้เริ่มต้นที่ต้องการเรียนรู้เกี่ยวกับการสร้างและการเรียกใช้ฟังก์ชันในภาษา C รวมถึงการรับ input และ แสดงผลลัพธ์

## คุณสมบัติ

-   มีฟังก์ชัน `promotion()` ที่คืนค่าส่วนลดคงที่
-   รับราคาเต็มของสินค้าจากผู้ใช้
-   คำนวณราคาสุทธิหลังจากหักส่วนลด
-   แสดงผลส่วนลดที่ได้รับและราคาสุทธิ

## การติดตั้งและการใช้งาน

### ข้อกำหนดเบื้องต้น

-   คอมไพเลอร์ C (เช่น GCC)

### วิธีคอมไพล์และรัน

1.  บันทึกโค้ดด้านบนเป็นไฟล์ `.c` (เช่น `discount.c`)
2.  เปิด Terminal หรือ Command Prompt
3.  นำทางไปยังไดเรกทอรีที่คุณบันทึกไฟล์
4.  คอมไพล์โค้ดโดยใช้ GCC:
    
    Bash
    
    ```
    gcc discount.c -o discount
    
    ```
    
5.  รันโปรแกรม:
    
    Bash
    
    ```
    ./discount
    
    ```
    

## ตัวอย่างการใช้งาน

```
วันนี้ลด 60 บาท
Price = 500
total = 440 Bath

```


----------

# Simple Discount Calculator

A C program to calculate the price of an item after applying a fixed discount.

## About The Project

`Simple Discount Calculator` is a small C program designed to demonstrate the use of functions and basic arithmetic operations. This program defines a **fixed discount** and subtracts it from the full price of an item entered by the user. It's suitable for beginners looking to understand function creation and calls in C, as well as handling user input and displaying results.

## Features

-   Includes a `promotion()` function that returns a fixed discount value.
-   Takes the full price of an item as input from the user.
-   Calculates the net price after the discount.
-   Displays the applied discount and the final net price.

## Installation and Usage

### Prerequisites

-   A C compiler (e.g., GCC)

### How to Compile and Run

1.  Save the code above as a `.c` file (e.g., `discount.c`).
2.  Open your Terminal or Command Prompt.
3.  Navigate to the directory where you saved the file.
4.  Compile the code using GCC:
    
    Bash
    
    ```
    gcc discount.c -o discount
    
    ```
    
5.  Run the program:
    
    Bash
    
    ```
    ./discount
    
    ```
    

## Example Usage

```
วันนี้ลด 60 บาท
Price = 500
total = 440 Bath

```