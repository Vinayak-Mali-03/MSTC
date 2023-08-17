/**
 * @file 029_Working_Of_Calling_Convention.c
 * @author Vinayak Mali
 * @brief To demonstrate how calling convention works
 * @version 0.1
 * @date 2023-08-17
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/*
    GNU C compiler x86

        Default calling convention: C calling convention

        To force Pascal calling convention:
            // DECL
            ret_type __attribute__((stdcall)) function_name(formal_param_list);
            
            // DEF
            ret_type __attribute__((strcall)) funciton_name(formal_param_list)
            {

            }

        To force fastcall calling convention:
            // DECL
            ret_type __attribute__((regparm(3))) funciton_name(formal_param_list);

            //DEF
            ret_type __attribute__((regparm(3))) funciton_name(formal_param_list)
            {

            }

            NOTE : Upto three params goto reg, subesquent param on stack,
            params on stack cleard by caller

            1st param -> eax
            2nd param -> edx
            3rd param -> ecx


    GNU C compiler x86_64
        
        Default calling convention : fastcall colling convention
        Upto first six parameters : register
        subsequent params : stack
        params on stack if any are cleared by caller

        1st -> rdi
        2nd -> rsi
        3rd -> rdx
        4th -> rcx
        5th -> r8
        6th -> r9


        To force C calling convention:
        // DECL
        ret_type __attribute__((regparam(0))) funciton_name(formal_param_list);
        OR
        ret_type __attribute__((regparam(cdecl))) function_name(formal_param_list);

        //DEF
        ret_type __attribute__((regparam(0))) funciton_name(formal_param_list)
        {

        }
        OR
        ret_type __attribute__((regparam(cdecl))) function_name(formal_param_list)
        {

        }


        NOTE : GNU C x86_64 DOES NOT ALLOW STDCALL


    MICROSOFT COMPUTER
    Default calling convention : __stdcall

    STANDARD CALLING CONVENTION : __stdcall
    C CALLING CONVENTION : __cdecl
    FASTCALL : __fastcall

    
*/