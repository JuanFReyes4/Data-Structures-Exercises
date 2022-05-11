#include "Process.h"
#include "Operation.h"
#include<stdio.h>

float Operation::getNumA(void)
{
   return numA;
}

void Operation::setNumA(float newNumA)
{
   numA = newNumA;
}

float Operation::getDenB(void)
{
   return denB;
}

void Operation::setDenB(float newDenB)
{
   denB = newDenB;
}

float Operation::getNumC(void)
{
   return numC;
}

void Operation::setNumC(float newNumC)
{
   numC = newNumC;
}

float Operation::getDenD(void)
{
   return denD;
}

void Operation::setDenD(float newDenD)
{
   denD = newDenD;
}

Operation::Operation()
{
   process = NULL;
}