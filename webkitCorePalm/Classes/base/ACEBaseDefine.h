/**
 *
 *	@file   	: ACEBaseDefine.h  in AppCanEngine
 *
 *	@author 	: CeriNo
 * 
 *	@date   	: 16/8/2
 *
 *	@copyright 	: 2016 The AppCan Open Source Project.
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */


#import <Foundation/Foundation.h>



typedef NS_OPTIONS(NSInteger, ACEInterfaceOrientation){
    ACEInterfaceOrientationUnknown = 0,
    ACEInterfaceOrientationProtrait = 1 << 0,
    ACEInterfaceOrientationLandscapeLeft = 1 << 1,
    ACEInterfaceOrientationProtraitUpsideDown = 1 << 2,
    ACEInterfaceOrientationLandscapeRight = 1 << 3
};

APPCAN_EXPORT ACEInterfaceOrientation ace_interfaceOrientationFromUIDeviceOrientation(UIDeviceOrientation orientation);
APPCAN_EXPORT ACEInterfaceOrientation ace_interfaceOrientationFromUIInterfaceOrientation(UIInterfaceOrientation orientation);








