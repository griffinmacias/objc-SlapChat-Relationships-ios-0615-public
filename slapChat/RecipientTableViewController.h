//
//  RecipientTableViewController.h
//  slapChat
//
//  Created by Mason Macias on 6/25/15.
//  Copyright (c) 2015 Joe Burgess. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Recipient.h"
#import "FISDataStore.h"
@interface RecipientTableViewController : UITableViewController

@property (nonatomic, strong) NSArray *recipients;

@property (nonatomic, strong) Recipient *recipientOne;
@property (nonatomic, strong) FISDataStore *dataStore;


@end
