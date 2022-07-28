# Buổi 3: Bài 2 - Cấu trúc của trang HTML và các thẻ - phần 2

### 1. Các thẻ bổ sung:
- Ngoài thẻ h1 -> h6, img, span đã học ở bài trước, giờ chúng ta sẽ tiếp cận thêm một số các thẻ khác nữa.

1. Thẻ p: là thẻ dùng để mô tả đoạn văn bản ngắn.
Thẻ p là một thẻ block vì thế nên nó sẽ xuống dòng.

2. Thẻ div là thẻ sẽ gom nhóm lại thành các "khu", các phần của trang web lại với nhau.
Có 2 khái niệm bổ sung cần phải nắm thêm là class và id.

3. Thẻ ul và thẻ ol đều dùng để biểu diễn (hiển thị) ra một dạng danh sách tương ứng.
Thẻ li nằm trong thẻ ul và ol dùng để mô tả từng phần tử có trong danh sách.
Sự khác nhau là: 
- Thẻ ul là thẻ mô tả danh sách không có thứ tự. Mặc định là nó sẽ hiển thị dấu "." (dấu chấm) ở đằng trước.
- Thẻ ol là mô tả danh sách có thứ tự, vì thế mặc định nó sẽ bắt đầu bằng số: 1,2,3,..

4. Thẻ br là thẻ xuống dòng, nó sẽ áp dụng tốt nhất cho thẻ inline.

5. Thẻ hr là thẻ cũng xuống dòng nhưng nó sẽ tạo thêm một dấu gạch ngang, rộng bằng chiều rộng màn hình.

6. Thẻ a là thẻ đường dẫn, nó sẽ đi đến đường dẫn mà mọi người yêu cầu trong thuộc tính href.

### 2. Phân biệt class và id:
- class có thể trùng tên nhau, có nhiều tên ở trong cùng một class.
- id thì sẽ "KHÔNG" được trùng tên nhau, và chỉ có duy nhất một tên id duy nhất.

### 3. Thẻ sematics:
Trong HTML thì sẽ phân chia thành 2 loại thẻ chính:
1. Thẻ non-sematic: p, div, img, ul, ol,... . Là những thẻ thông dụng thường gặp, thường làm và dành cho phiên bản HTML.

2. Thẻ sematic: thẻ được hỗ trợ từ html5 trở lại. Nó sẽ giúp code của mọi người gọn hơn, mạch lạc hơn 
- Thẻ sematic có một số các thẻ cơ bản: header (mô tả đây là phần "mở bài" của trang web), footer(mô tả đây là phần "kết bài' của trang web), main (mô tả đây là phần "thân bài" của trang web), aside, section (một đoạn nội dung nhỏ của trang web muốn hiển thị), nav(mô tả đây là những thẻ đường dẫn, nó tương đương với thẻ a),...
- Xem thêm chi tiết tại: https://i.pinimg.com/originals/83/c7/d0/83c7d06752e6cbf1f585a4c058649742.png

### 3. Áp dụng các kiến thức vào bài lab 2
(Chữa bài lab tương ứng trong thư mục lab)