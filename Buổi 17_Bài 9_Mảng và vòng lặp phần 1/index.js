// console.log('Làm việc với mảng');

// kiểu dữ liệu trong Javascript: integer (số), string (chữ), boolean (đúng/sai), object (đối tượng).
var number = 10;
var name = 'minh';
var isFav = true;
var student = {
    name: 'minh',
    age: 20,
    address: 'Ha Noi'
};

//console.log('Student: ', student);

// console.log(number);
// console.log('Number1: ',number); // Number1: giá trị của number

// mảng: kiểu dữ liệu

// chơi game:
// chỉ số hạ gục:
// chỉ số nằm xuống:
// chỉ số hỗ trợ:
// chỉ số thời gian:
// ....
var chiSoHaGuc = 10;
var chiSoNamXuong = 0;
var chiSoHoTro = 8;
var chiSoThoiGian = 18;

// mảng: gom nhóm những giá trị có cùng dữ liệu với nhau.

var chiSo = [9,1,2,4,8]; // kiểu dữ liệu mảng về số.
chiSo.sort();
console.log('Mảng chỉ số sau khi sắp xếp:',chiSo);
//console.log('Mảng chỉ số: ',chiSo);

// 0 ... (6-1)
// 10a6: 0, 11a7: 1, 12a8:2 , 10a9: 3, 10a12: 4, 11a3: 5
var classroom = ['10a6', '11a7', '12a8', '10a9', '10a12', '11a3']; // kiểu dữ liệu mảng về chữ
//console.log('Mảng classroom: ',classroom);
console.log('Lớp 10a6: ', classroom[0]); // 10a6
console.log('Lớp 10a9: ',classroom[3]); // 10a9
console.log('Lớp 11a3: ',classroom[6]); //underfined

// muốn trả về số lượng phần tử trong mảng thì chỉ cần: tên biến.length
console.log('Số lượng phần tử trong mảng: ', classroom.length);

// muốn đưa giá trị '12a1' vào mảng classroom.
// phương thứ push: đưa vào, đẩy vào.
classroom.push('12a1');
console.log('Mảng sau khi thêm dữ liệu: ',classroom);

// sắp xếp mảng mọi người.
// phương thức: sort