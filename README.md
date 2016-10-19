Phạm Thị Diễm Trinh   
**Báo cáo học Loop :**  
[1.Vòng lặp For](#For)  
[2.Vòng lặp While](#While)  
[3.Vòng lặp Do..While](#DoWhile)  


<a name="For"></a>
### 1. For  
 **Cú Pháp:** 
 
` for (  khởi tạo biến; điều kiện; cập nhập giá trị mới cho biến )  
   {     
      \\Lệnh hoặc khối lệnh  
    } `
    
 *Trong đó:*
 - Khởi tạo biến: là phép toán gán giá trị ban đầu cho biến điều khiển.  
 - Điều kiện : biểu thức điều kiện để thực hiện vòng lặp.  
 - Cập nhật giá trị mới cho biến: tăng hoặc giảm giá trị của biến điều khiển. 
 - Lưu đồ:
 
 ![](http://vietjack.com/lap_trinh_c/images/vong_lap_for_trong_c.jpg)
 - Bước 1: gán giá trị đầu cho biến điều khiển.
 - Bước 2: Xác định giá trị biểu thức Điều kiện
 - Bước 3: nếu đúng thì thực hiện lệnh hoặc khối lệnh, sai thì dừng vòng lặp
 - Bước 4: cập nhật giá trị mới cho biến điều khiển và quay lại bước 2 
 
**Ví dụ:**

`for(i=0; i<=n; i++)
        {
             tong +=i;
        }
 `
 - giá trị ban đầu của biến i = 0
 - mỗi vòng lặp i tăng lên 1
 - giá trị cuối của i=n+1
 - biến tổng có giá trị : tong =1+2+3+....+n
 - khi i=n+1, biểu thức điều kiện có giá trị là False, vòng lặp dừng.
 
<a name="While"></a> 
### 2.While
**Cú pháp:**
`while(biểu thức)
{
   lệnh hoặc khối lệnh;
}`
*Trong đó:*
- Biểu thức: nếu biểu thức cho giá trị True hì các "lệnh hoặc khối lệnh" được thực hiện. Nếu biểu thức cho giá trị False thì dừng vòng lặp.
- Khi hoàn thành lệnh hoặc khối lệnh thì quay về bước kiểm tra biểu thứ và tiếp tục vòng lặp.
- Cần lưu ý tránh trường hợp lặp vô tận.
- Lưu đồ :

![](http://vietjack.com/cplusplus/images/vong_lap_while_trong_cpp.jpg)

**Ví dụ:**
`i=0; While (i < n)
{ i++; s+=i;}`

- giá trị đầu của i=0
- giá trị cuối của i=n
- S=1+2+3+...+n

<a name="DoWhile"></a>
### 3.Do...While
**Cú pháp:**

`do
{
   lệnh hoặc khối lệnh;

} while( biểu thức );
`
*Trong đó:*
- Lệnh( khối lệnh): được thực hiện ngay khi bắt đầu vòng lặp.
- Biểu thức : được kiểm tra sau khi thực hiện lệnh (khối lệnh). Nếu biểu thức cho giá trị True quay lại thực hiện tiếp lệnh hoặc khối lệnh. Ngược lại nếu biểu thức có giá trị False thì dừng vòng lặp.
- Lưu ý : cần chú ý trường hợp lặp vô hạn
- Lưu đồ: 

![](http://vietjack.com/lap_trinh_c/images/vong_lap_do_while_trong_c.jpg)

**Ví dụ:**
`i=0; do {i++; s+=i;} while (i<n);`
- giá trị đầu của i =0
- giá trị cuối của i=n
- s=1+2+3+...+n
- giá trị cuối của i=n



