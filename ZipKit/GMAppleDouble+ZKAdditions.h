//
//  GMAppleDouble+ZKAdditions.h
//  ZipKit
//
//  Created by Karl Moskowski on 01/04/09.
//


@interface GMAppleDouble (ZKAdditions)

+ (NSData *)zk_appleDoubleDataForPath:(NSString *)path;
+ (void)zk_restoreAppleDoubleData:(NSData *)appleDoubleData toPath:(NSString *)path;

@end
