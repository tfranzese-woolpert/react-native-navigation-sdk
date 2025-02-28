/**
 * Copyright 2023 Google LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef NavViewEventDispatcher_h
#define NavViewEventDispatcher_h

#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>

NS_ASSUME_NONNULL_BEGIN

@interface NavViewEventDispatcher : RCTEventEmitter <RCTBridgeModule>

- (void)sendEventName:(NSString *)eventName body:(id)body;
- (bool)hasListeners;

@end

NS_ASSUME_NONNULL_END

#endif /* NavViewEventDispatcher_h */
