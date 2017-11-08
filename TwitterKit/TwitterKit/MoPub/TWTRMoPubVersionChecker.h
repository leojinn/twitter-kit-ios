/*
 * Copyright (C) 2017 Twitter, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 */

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

FOUNDATION_EXPORT NSUInteger TWTRMoPubMinimumRequiredVersion;

@interface TWTRMoPubVersionChecker : NSObject

/**
 *  Checks to see if the necessary version of MoPub required for rendering ads is linked.
 *
 *  @return YES if valid version linked.
 */
+ (BOOL)isValidVersion;

/**
 *  Fetches the version of the linked MoPub SDK. Returns XYYZZ for X = major, Y = minor, Z = patch.
 *  Returns -1 if not found.
 *
 *  @return Found version or -1 if not found.
 */
+ (NSInteger)integerVersion;

@end

NS_ASSUME_NONNULL_END
