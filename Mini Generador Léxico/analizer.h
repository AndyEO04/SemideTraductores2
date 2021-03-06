#ifndef ANALIZER_H_INCLUDED
#define ANALIZER_H_INCLUDED



#endif // ANALIZER_H_INCLUDED

bool Analyzing (char * w){
    bool valid = true;

    if(strcmp(w, "int")== 0){
        cout << "\n\t Tipo de dato: Entero\n";
        return true;
    }

    if(strcmp(w, "float")== 0){
        cout << "\n\t Tipo de dato: Flotante Real\n";
        return true;
    }

    if(strcmp(w, "bool")== 0){
        cout << "\n\t Tipo de dato: Booleano\n";
        return true;
    }

    if(strcmp(w, "string")== 0){
        cout << "\n\t Tipo de dato: Real\n";
        return true;
    }

    if(strcmp(w, "char")== 0){
        cout << "\n\t Tipo de dato: Caracter\n";
        return true;
    }

    if(strcmp(w,"switch")== 0 || strcmp(w, "if") == 0 || strcmp(w, "else") == 0){
        cout<<"\n\t Estructura Selectiva\n";
        return true;
    }

    if(strcmp(w, "case")== 0){
        cout << "\n\t Caso de un switch - Palabra reservada\n";
        return true;
    }

    if(strcmp(w, "default")== 0){
        cout << "\n\t Caso por defecto de un switch - Palabra Reservada\n";
        return true;
    }

    if(strcmp(w, "break")== 0){
        cout << "\n\t Rompimiento de un ciclo - Palabra Reservada\n";
        return true;
    }

    if(strcmp(w, "{") == 0 || strcmp(w, "}") == 0 || strcmp(w,"[") == 0 || strcmp(w, "]") == 0 || strcmp(w, "(") == 0 || strcmp(w, ")") ){
        cout << "\n\t Caracter del Sistema\n";
        return true;
    }
    if(strcmp(w, "#") == 0 || strcmp(w, ",") == 0 || strcmp(w, ".") == 0 || strcmp(w, ";") == 0 || strcmp(w, ":") == 0){
        cout << "\n\t Caracter del Sistema\n";
        return true;
    }

    if(strcmp(w, "!") == 0){
        cout<<"\n\tOperador de Negacion\n";
        return true;
    }

    if(strcmp(w, "=") == 0){
        cout<<"\n\tOperador de Asignacion\n";
        return true;
    }

    if(strcmp(w, "<") == 0 || strcmp(w, ">") == 0){
        cout<<"\n\tOperador Condicional\n";
        return true;
    }

    if(strcmp(w, "|") == 0 || strcmp(w, "&") == 0){
        cout<<"\n\tOperador Logico\n";
        return true;
    }

    if(strcmp(w, "/") == 0 || strcmp(w, "*") == 0 || strcmp(w, "-") == 0 || strcmp(w, "+") == 0 || strcmp(w, "%") == 0){
        cout<<"\n\tOperador Aritmetico\n";
        return true;
    }

    if(isdigit(w[0]) != 0){
        for(int i = 1; i < strlen(w); i++){
            if(isdigit(w[i]) == 0){
                valid = false;
            }
        }
        if(valid == true){
            cout<<"\n\tNumero\n";
            valid = false;
            return true;
        }
    }

    if(w[0] == '_'){
        for(int i = 1; i< strlen(w); i++){
            if(isalnum(w[i])== 0){
                valid = false;
                if(w[i] == '_')
                    valid = true;
            }
        }
    }

    if(isalpha(w[0]) != 0){
        for(int i = 1; i< strlen(w); i++){
            if(isalnum(w[i])== 0){
                valid = false;
                if(w[i] == '_')
                    valid = true;
            }
        }
        if(valid == true){
            cout<<"\n\t Identificador de variable: "<<w<<endl;
            return true;
        }
    }
    return false;

}
