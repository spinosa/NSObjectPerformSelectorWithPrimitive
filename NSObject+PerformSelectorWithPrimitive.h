//
//  NSObject+PerformSelectorWithPrimitive.h
//  
//
//  Created by Daniel Spinosa on 7/21/13.
//
//



@interface NSObject (PerformSelectorWithPrimitive)

- (id)performSelector:(SEL)aSelector withPrimitive:(void *)primitive afterDelay:(NSTimeInterval)delay;
- (id)performSelector:(SEL)aSelector withPrimitive:(void *)primitive1 withPrimitive:(void *)primitive2 afterDelay:(NSTimeInterval)delay;

@end
