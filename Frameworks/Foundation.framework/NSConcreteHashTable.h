/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcreteHashTable : NSHashTable {
    unsigned int  capacity;
    unsigned int  count;
    unsigned int  mutations;
    unsigned int  options;
    struct NSSlice { 
        void **items; 
        BOOL wantsStrong; 
        BOOL wantsWeak; 
        BOOL wantsARC; 
        BOOL shouldCopyIn; 
        BOOL usesStrong; 
        BOOL usesWeak; 
        BOOL usesARC; 
        BOOL usesSentinel; 
        BOOL pointerPersonality; 
        BOOL integerPersonality; 
        BOOL simpleReadClear; 
        int (*sizeFunction)(); 
        int (*hashFunction)(); 
        int (*isEqualFunction)(); 
        int (*describeFunction)(); 
        int (*acquireFunction)(); 
        int (*relinquishFunction)(); 
        int (*allocateFunction)(); 
        int (*freeFunction)(); 
        int (*readAt)(); 
        int (*clearAt)(); 
        int (*storeAt)(); 
    }  slice;
}

- (void)addObject:(id)arg1;
- (id)allObjects;
- (void)assign:(unsigned int)arg1 key:(const void*)arg2;
- (Class)classForCoder;
- (id)copy;
- (unsigned int)count;
- (unsigned int)countByEnumeratingWithState:(struct { unsigned long x1; id *x2; unsigned long x3; unsigned long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned int)arg3;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void*)getItem:(const void*)arg1;
- (void)getKeys:(const void**)arg1 count:(unsigned int*)arg2;
- (unsigned int)hash;
- (void)hashGrow;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptions:(unsigned int)arg1 capacity:(unsigned int)arg2;
- (id)initWithPointerFunctions:(id)arg1 capacity:(unsigned int)arg2;
- (void)insertItem:(const void*)arg1;
- (void)insertKnownAbsentItem:(const void*)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)objectEnumerator;
- (id)pointerFunctions;
- (void)raiseCountUnderflowException;
- (void)rehash;
- (unsigned int)rehashAround:(unsigned int)arg1;
- (void)removeAllItems;
- (void)removeItem:(const void*)arg1;

@end
