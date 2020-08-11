/*
MIT License

Copyright (c) 2020 Mike Rzucidlo

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#pragma once

#include <iostream>
#include <random>
#include <sstream>

namespace NodeTypes {
  /* stack node */
  class NextNode
  {
    public:
      Node(int input_data);
      virtual ~Node() = default;
      
      /* I always spell these out because it's easier for me to follow. */
      int GetData();
      void SetNextNodePtr(Node* node);
      Node* GetNextNodePtr();
      
      // An overloaded operator<<, allowing us to print the node via `cout<<`:
      friend std::ostream& operator<<(std::ostream & os, const NextNode & node);
      
    private:
      int data;
      Node* next;
  };
}