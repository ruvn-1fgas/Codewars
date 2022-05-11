function remove(string) {
​
    let i = string.length;
    let f = false;
    let num = 0;
    while (i--) {
        if (string.charAt(i) != '!')
            break;
        else num = i;
    }
    return num == 0 ? string : string.slice(0, num);
}