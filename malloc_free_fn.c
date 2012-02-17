/*@ assigns \nothing;
  @ allocates \result;
  @ ensures fresh{Old,Here}(\result,n);
  @*/
void * malloc(size_t n);

/*@ requires p!=\null ==> \freeable{Here}(p);
  @ assigns \nothing;
  @ frees p;
  @ ensures p!=\null ==> \allocable{Here}(p);
  @*/
void free(void *p);
