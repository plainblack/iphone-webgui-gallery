/*
 *  RequestDelegate.h
 *  WebGUIPhotos
 *
 *  Created by Kevin Runde on 11/27/08.
 *  Copyright 2008 __MyCompanyName__. All rights reserved.
 *
 */

@protocol RequestDataDelegate

- (void)requestDataSuccessful;
- (void)requestDataError;

@end
