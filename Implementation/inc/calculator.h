**
 * @file calculator.h
 * @author Pratheep_255967
 * @brief Functions to perform Arthimetic Operations,Trignometric operations,Factorial,Squareroot and power
 * @version 0.1
 * @date 2021-04-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __CALCULATOR_H__
#define __CALCULATOR_H__
#include <stdlib.h>
/**
 * @brief Structure for storing Arthimetic functions input and output
 * 
 */
typedef struct arthmetic_inputs{
    long long int input_1,input_2,output;
}arthimetic_inputs;
/**
 * @brief Structure for storing Single functions input and output
 * 
 */
typedef struct single_inputs{
    float input_3,output_2;
}single_inputs;
/**
 * @brief Structure for storing Trignometric functions input and output
 * 
 */
typedef struct trignometric_inputs{
    float input_4,output_3;
    
}trignometric_inputs;
/**
 * @brief Error values for calculator operations
 * 
 */
typedef enum error_t{
    SUCCESS=1,
    FAILURE=0,
    UNDEFINED=-1,
    ERROR_DIVISION_BY_ZERO=-2
}error_t;

/**
 * @brief compute sum of two numbers
 * 
 * @param ai ai pointer to arthimetic_inputs to send inputs for functions and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t add(arthimetic_inputs *ai);
/**
 * @brief compute difference of two numbers
 * 
 * @param ai ai pointer to arthimetic_inputs to send inputs for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t subtract(arthimetic_inputs *ai);
/**
 * @brief compute multiplication of two numbers
 * 
 * @param ai ai pointer to arthimetic_inputs to send inputs for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t multiply(arthimetic_inputs *ai);
/**
 * @brief compute division of two numbers
 * 
 * @param ai ai pointer to arthimetic_inputs to send inputs for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t division(arthimetic_inputs *ai);
/**
 * @brief compute power
 * 
 * @param ai ai pointer to arthimetic_inputs to send inputs for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t power(arthimetic_inputs *ai);
/**
 * @brief compute logarithm
 * 
 * @param si si pointer to single_inputs to send input for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t logarithm(single_inputs *si);
/**
 * @brief compute square_root
 * 
 * @param si si pointer to single_inputs to send input for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t square_root(single_inputs *si);
/**
 * @brief compute factorial
 * 
 * @param si si pointer to single_inputs to send input for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t factorial(single_inputs *si);
/**
 * @brief compute sine function
 * 
 * @param ti ti pointer to trignometric_inputs to send inputs for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t sine(trignometric_inputs *ti);
/**
 * @brief compute cosine function
 * 
 * @param ti ti pointer to trignometric_inputs to send inputs for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t cosine(trignometric_inputs *ti);
/**
 * @brief compute tangent function
 * 
 * @param ti ti pointer to trignometric_inputs to send inputs for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t tangent(trignometric_inputs *ti);
/**
 * @brief compute cotangent function
 * 
 * @param ti ti pointer to trignometric_inputs to send inputs for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t cotangent(trignometric_inputs *ti);
/**
 * @brief compute secant function
 * 
 * @param ti ti pointer to trignometric_inputs to send inputs for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t secant(trignometric_inputs *ti);
/**
 * @brief compute cosecant function
 * 
 * @param ti ti pointer to trignometric_inputs to send inputs for function and store ouptut.
 * @return error_t SUCCESS if operation is completed successfully. Error value otherwise.
 */
error_t cosecant(trignometric_inputs *ti);


#endif