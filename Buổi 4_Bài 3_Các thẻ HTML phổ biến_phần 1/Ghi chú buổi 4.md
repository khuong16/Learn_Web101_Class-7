# Buổi 4: Bài 3 - Các thẻ HTML phổ biến - phần 1

### 1. Thảo luận sơ qua kiến thức bài trước về các thẻ.

### 2. Quy tắc đặt tên class trong HTML (Quy tắc BEM)

1. Lý do phải đặt tên trong HTML:
- Chúng ta cần phải đặt tên để phân biệt thành phần này với thành phần khác.
Ví dụ: Ngôi nhà cần phải chia ra các phòng: phòng khách, phòng bếp, phòng ngủ,.. Mỗi phòng đều có chức năng và nhiệm vụ của riêng nó.
=> Đặt tên trong HTML sẽ phân biệt và biết rõ được nhiệm vụ của từng phần trong trang web => Quy tắc BEM.

2. Định nghĩa BEM là gì ?
- BEM (Block Element Modifier) là quy chuẩn đặt tên class. 
VD: Laptop : Block Keyboard, Mouse, Touchpad, Screen: Element

    Block__Element--modifier
    Block--modifier
    Block__Element

3. Các ví dụ điển hình:
- VD: Laptop big, Laptop small: Modifier for Block 
      Small keyboard, small screen: Modifier for Element

    laptop
    laptop__keyboard, laptop__touchpad, laptop__screen
    laptop--small, laptop--expensive, laptop--big
    laptop__touchpad--smouth, laptop__screen--scale

### 3. Thẻ <img> và thuộc tính:

1. Lý do sử dụng thẻ img:
- Như chúng ta đã biết, thẻ img dùng để hiển thị hình ảnh có trong trang web. Do nó đã dùng hiển thị hình ảnh nên nó hỗ trợ tốt với rất nhiều kiểu ảnh: jpeg, png, gif, svg, bmg,...

- Để điều chỉnh kích thước hình ảnh (bé ra, to ra,...) thì ta sẽ sử dụng width, height để quy định chiều rộng, chiều cao cho nó.

2. Thuộc tính img:
- Thuộc tính alt dùng để hiển thị một đoạn văn bản "KHI" mà hình ảnh của của bạn không hiển thị được (Lỗi có thể là do sai đường dẫn, hình ảnh bị lỗi,...)

### 4. Sử dụng font awesome để tạo ra icon (biểu tượng):

1. Định nghĩa font awesome là gì ?
- Font awesome nó sẽ là một "kho" giúp chúng ta có thể lấy ra các biểu tượng tương ứng.
Ví dụ: icon quả táo, icon danh bạ, icon mặt người,..

- Font awesome cho phép chúng ta sử dụng các icon, nó có thể thay thế tốt cho hình ảnh.

2. Các bước sử dụng font awesome trong code HTML:
- Bước 1: Nhúng link này vào trong thẻ <head></head> của code HTML
<link rel="stylesheet" href="https://cdnjs.cloudflare.com/ajax/libs/font-awesome/4.7.0/css/font-awesome.css" integrity="sha512-5A8nwdMOWrSz20fDsjczgUidUBR8liPYU+WymTZP1lmY9G6Oc7HlZv156XqnsgNUzTyMefFTcsFH/tnJE/+xBg==" crossorigin="anonymous" referrerpolicy="no-referrer" />

- Bước 2: Sử dụng những icon mà bạn mong muốn:
Ví dụ: "<i class="fa fa-camera-retro"></i>"

3. Tìm kiếm icon ở trong trang web:
https://fontawesome.com/v4/icons/

### 5. Hyperlink (Siêu liên kết)

1. Định nghĩa Hyperlink là gì:
- Đơn giản nó sẽ là dạng "siêu cấp vip pro" của link, đã là link thì nó sẽ có tác dụng là liên kết các trang web của mọi người lại với nhau.
=> Nó được dùng khi muốn đi từ trang web này đến trang web khác.

VD: Thẻ a.

2. Các loại đường dẫn: có 3 dạng hay thường dùng nhất.
- Đường dẫn tuyệt đối (absolute): tức là ta phải nhập chính xác đường dẫn vào thì nó mới 'chạy'.
- Đường dẫn tương đối (relative): tức đường dẫn có thể "linh hoạt" được, không bị gò bó như absolte. Thường chứa thông tin về folder (thư mục).
- Đường dẫn nội bội (internal): nó sẽ đưa đến một phần nội dung trong trang web của mình.

3. Thuộc tính target:
- Đơn giản thì nó sẽ "hỗ trợ" bạn mở ra điều gì khi nhấn vào thẻ a.
Ví dụ: 1. target="_blank" => khi bạn ấn vào thẻ a có thuộc tính là target="_blank" sẽ mở ra cho bạn một trang mới.
       2. target="_top", target="_parent"


