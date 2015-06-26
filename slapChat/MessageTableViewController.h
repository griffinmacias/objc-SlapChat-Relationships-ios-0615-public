//
//  FISTableViewController.h
//  slapChat
//
//  Created by Joe Burgess on 6/27/14.
//  Copyright (c) 2014 Joe Burgess. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "FISDataStore.h"
#import "Recipient.h"

@interface MessageTableViewController : UITableViewController

@property (nonatomic, strong) Recipient *recipient;
@property (nonatomic, strong) NSArray *messages;

@end