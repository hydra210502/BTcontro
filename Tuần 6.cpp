//Bài 1
void reverse(char *s) {
    char *r= s + strlen(s) - 1;
    while(r>s){
        char t =*s;
        *s=*r;
        *r=t;
        r--;
        s++;
    }
}
