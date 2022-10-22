function check() {
    // không để trống.
    // không quá 100 kí tự.

    var name = document.getElementById('name').value;
    var email = document.getElementById('email').value;
    // var name1 = document.myForm.name.value;

    // validate name
    if(name == '') {
        document.getElementById('errorName').innerHTML = 'Please fill out your name';
        document.getElementById('errorName').style.display = 'inline';
        return false;
    } 
    
    if(name.length > 100) {
        document.getElementById('errorName').innerHTML = 'Your name should not exceed 100 characters.';
        document.getElementById('errorName').style.display = 'inline';
        return false;
    }

    // validate email
    var mailformat = /^\w+([\.-]?\w+)*@\w+([\.-]?\w+)*(\.\w{2,3})+$/;
    if(!(email.match(mailformat))) {
        document.getElementById('errorEmail').innerHTML = 'Email ko đúng định dạng.';
        document.getElementById('errorEmail').style.display = 'inline';
        return false;
    }

    return true;

}