#include "header.h"

bool mx_scan_number(char *value){
    if(mx_strlen(value) == 0){
        return false;
    }

    for(int i = 0; value[i]; i++){
        if((!mx_isdigit(value[i]) && value[i] != '?') && !(value[i] == '-' && i == 0)){
            return false;
        }
    }
    return true;
}

bool mx_scan_op(char *value){
    if(mx_strlen(value) == 0){
        return false;
    }
    int question_sign_counter = 0;

    for(int i = 0; value[i]; i++){
        if(question_sign_counter > 1)
            return false;
        if(value[i] == '?')
            question_sign_counter++;
    }

    char *temp = mx_strtrim(value);
    if(mx_strcmp(temp, "?") != 0 && mx_strcmp(temp,"+") != 0 && mx_strcmp(temp,"-") != 0 && mx_strcmp(temp,"*") != 0 && mx_strcmp(temp,"/") != 0){
        return false;
    }
    free(temp);
    return true;
}

bool mx_scan_value(char *value, int type){
    int valid = 0;

    switch(type){
        case OPERAND:
            valid = mx_scan_number(value);
            break;
        case OPERATOR:
            valid = mx_scan_op(value);
            break;
		case RESULT:
			valid = mx_scan_number(value);
        default:
            break;
    }
    return valid;
}

void mx_arguments_validation(char *operand1, char *operation, char *operand2, char *result) {

    if(!mx_scan_value(operation, OPERATOR)){
        mx_process_error(INVALID_OPERATION, operation);
        exit(-1);
    }

    if(!mx_scan_value(operand1, OPERAND)){
        mx_process_error(INVALID_OPERAND, operand1);
        exit(-1);
    }

    if(!mx_scan_value(operand2, OPERAND)){
		mx_process_error(INVALID_OPERAND, operand2);
        exit(-1);
	}

    if(!mx_scan_value(result, RESULT)){
		mx_process_error(INVALID_RESULT, result);
        exit(-1);
	}
}
