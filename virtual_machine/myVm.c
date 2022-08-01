#include <stdio.h>
#include <stdbool.h>

int ip = 0;
bool running = true;

typedef enum
{
  PSH,
  ADD,
  POP,
  SET,
  HLT,
}intructionSet;

const int program[]=
{
  PSH, 5,
  PSH, 6,
  ADD,
  POP,
  HLT,
};

int fetch();
void eval(int instr);

int main()
{
  while(running)
  {
    eval(fetch());
    ip++;
  }
}

void eval(int instr)
{
  switch(instr)
  {
    case HLT: running = false;
              break;
  }
}

int fetch()
{
  return program[ip];
}


