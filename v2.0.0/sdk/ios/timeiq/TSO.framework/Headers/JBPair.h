//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: //android/util/Pair.java
//

#ifndef _Pair_H_
#define _Pair_H_

#import "JB.h"

/**
 @brief Container to ease passing around a tuple of two objects.
 This object provides a sensible implementation of equals(), returning true if equals() is true on each of the contained objects.
 */
@interface Pair : NSObject {
 @public
  id first_;
  id second_;
}

/**
 @brief Constructor for a Pair.
 @param first the first object in the Pair
 @param second the second object in the pair
 */
- (instancetype)initWithId:(id)first
                    withId:(id)second;

/**
 @brief Checks the two objects for equality by delegating to their respective Object#equals(Object) methods.
 @param o the Pair to which this one is to be checked for equality
 @return true if the underlying objects of the Pair are both considered equal
 */
- (boolean)isEqual:(id)o;

/**
 @brief Compute a hash code using the hash codes of the underlying objects
 @return a hashcode of the Pair
 */
- (NSUInteger)hash;

/**
 @brief Convenience method for creating an appropriately typed pair.
 @param a the first object in the Pair
 @param b the second object in the pair
 @return a Pair that is templatized with the types of a and b
 */
+ (Pair *)createWithId:(id)a
                withId:(id)b;

- (void)copyAllFieldsTo:(Pair *)other;

@end

__attribute__((always_inline)) inline void Pair_init() {}

//J2OBJC_FIELD_SETTER(Pair, first_, id)
//J2OBJC_FIELD_SETTER(Pair, second_, id)

typedef Pair AndroidUtilPair;

#endif // _Pair_H_


