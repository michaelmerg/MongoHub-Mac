//
//  MHFileExporter.h
//  MongoHub
//
//  Created by Jérôme Lebel on 19/11/11.
//  Copyright (c) 2011 ThePeppersStudio.COM. All rights reserved.
//

#import <Foundation/Foundation.h>

@class MODCollection;

@interface MHFileExporter : NSObject
{
    NSString *_exportPath;
    MODCollection *_collection;
}

- (id)initWithCollection:(MODCollection *)collection exportPath:(NSString *)exportPath;
- (BOOL)exportWithError:(NSError **)error;

@property (nonatomic, retain, readonly) NSString *exportPath;
@property (nonatomic, retain, readonly) MODCollection *collection;

@end
