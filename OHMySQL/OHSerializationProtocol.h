//  Created by Oleg on 1/10/17.
//  Copyright © 2017 Oleg Hnidets. All rights reserved.
//

@import Foundation;


@protocol OHSerialization <NSObject>

+ (nonnull id)serializeFromCString:(nullable const char *)cString
                      defaultValue:(nullable const char *)defaultValue
                         canBeNull:(BOOL)canBeNull;

@end
