#ifndef NODE_H
#define NODE_H

class NODE{
      long data;
      NODE* next;
public:
        NODE(long);
      
      void show_node();
        void insert(NODE*&);
        NODE* move_next();
     
  ~NODE();
      };

#endif
