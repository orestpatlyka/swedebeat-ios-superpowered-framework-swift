//
//  SuperpoweredBPMAnalyzer.h
//
//  Created by Orest Patlyka on 10.02.2021.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SuperpoweredBPMAnalyzer : NSObject

- (float)bpmForSongPath:(NSString *)path;

@end

NS_ASSUME_NONNULL_END
