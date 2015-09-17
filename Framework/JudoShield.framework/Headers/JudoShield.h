//
//  JudoShield.h
//  JudoShield
//
//  Created by Hamon Riazy on 11/08/2015.
//  Copyright © 2015 Judo Payments. All rights reserved.
//

#import <UIKit/UIKit.h>

FOUNDATION_EXPORT double JudoShieldVersionNumber;

FOUNDATION_EXPORT const unsigned char JudoShieldVersionString[];


@import CoreLocation;

@interface JudoShield : NSObject


/**
 *  uses the CoreLocation Framework to register for receiving location updates and passes either the current location of the user or an error
 *
 *  @param locationUpdateBlock the completion block that gets called when a location has been found or an error occured
 */
- (void)locationWithCompletion:(nullable void (^)(CLLocationCoordinate2D coordinate, NSError * __nullable error))locationUpdateBlock;


/**
 *  Device Signal Dictionary
 *
 *  @return a collaboration of various different information sources to identify a certain device for fraud prevention
 */
- (nonnull NSDictionary<NSString *, NSObject *> *)deviceSignal;

@end
