/* App that defang IP address from 1.1.1.1 to 1[.]1[.]1[.]1 */

char * defangIPaddr(char * address){
    char* def = (char*)malloc(25);
    int i = 0;
    int j = 0;
    while(address[i] != '\0'){
        if(address[i] == '.'){
            def[j++] = '[';
            def[j++] = '.';
            def[j++] = ']';
            i++;
            j+2;
        }else{
            def[j] = address[i];
            ++i;
            ++j;
        }
    }
    def[j]='\0';
    return def;
}
