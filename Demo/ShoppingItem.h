//
//  ShoppingItem.h
//  CouchCocoa
//
//  Created by Jens Alfke on 8/26/11.
//  Copyright (c) 2011 Couchbase, Inc. All rights reserved.
//

#import "CouchModel.h"

@interface ShoppingItem : CouchModel

@property bool check;       // bool is better than BOOL: it maps to true/false in JSON, not 0/1.
@property (copy) NSString* text;

@end
