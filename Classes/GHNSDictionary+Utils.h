//
//  GHNSDictionary+Utils.h
//  GHKit
//
//  Created by Gabriel Handford on 3/12/09.
//  Copyright 2009. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person
//  obtaining a copy of this software and associated documentation
//  files (the "Software"), to deal in the Software without
//  restriction, including without limitation the rights to use,
//  copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the
//  Software is furnished to do so, subject to the following
//  conditions:
//
//  The above copyright notice and this permission notice shall be
//  included in all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
//  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES
//  OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
//  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
//  HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
//  WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
//  OTHER DEALINGS IN THE SOFTWARE.
//

@interface NSDictionary (GHUtils)

/*! 
 @param key
 @param withDefault If value for key is nil or [NSNull null] this default is returned.
 */
- (double)gh_doubleForKey:(id)key withDefault:(double)defaultValue;

- (double)gh_doubleForKey:(id)key;

/*! 
 @param key
 @param withDefault If value for key is nil or [NSNull null] this default is returned.
 */
- (NSInteger)gh_integerForKey:(id)key withDefault:(NSInteger)defaultValue;
- (NSInteger)gh_integerForKey:(id)key;

/*!
 Number for key with default double value.
 @param key
 @param defaultValue 
 @result Number
 */
- (NSNumber *)gh_numberForKey:(id)key withDefaultInteger:(NSInteger)defaultValue;

/*!
 Number for key with default double value.
 @param key
 @param defaultValue 
 @result Number
 */
- (NSNumber *)gh_numberForKey:(id)key withDefaultDouble:(double)defaultValue;

/*! 
 @param key
 @param withDefault If value for key is nil or [NSNull null] this default is returned.
 */
- (BOOL)gh_boolForKey:(id)key withDefault:(BOOL)defaultValue;
- (BOOL)gh_boolForKey:(id)key;

/*!
 Object for key with default value, if entry is NSNull or entry does not exist.
 @param key
 @param defaultValue
 @result Value for key with default value, if entry is NSNull or entry does not exist
 */
- (id)gh_objectForKey:(id)key withDefault:(id)defaultValue;

/*!
 Object for key or NSNull.
 Helpful when used with key/value coding.
 @param key
 @result Value or NSNull#null if not set
 */
- (id)gh_objectForKeyOrNSNull:(id)key;

/*!
 Get boolean value (represented by NSNumber).
 Usefuly for coercing any object that responds to boolValue into an object for use with Key Value coding.
 @param key
 @param defaultValue Default if value is missing or [NSNull null]
 */ 
- (NSNumber *)gh_boolValueForKey:(id)key withDefault:(BOOL)defaultValue;
- (NSNumber *)gh_boolValueForKey:(id)key;

- (BOOL)gh_hasAllKeys:(NSString *)firstKey, ... NS_REQUIRES_NIL_TERMINATION;

/*!
 Return dictionary with subset of keys.
 @param keys
 */
- (NSDictionary *)gh_dictionarySubsetWithKeys:(NSArray *)keys;

@end
