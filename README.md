## How to run this project?
#### 1. Run after clonning:
`cd CustomBottomBar-RNN && npm i && cd ios/ && pod install`

##### 2. Open SpacerMin.xcworkspace and in project directory add following header search path to RNUnityView project:
`$(SRCROOT)/../../../ios/Pods/Headers/Public`

PROJECT HEADER SEARCH PATHS:
<img width="1268" alt="Screenshot 2019-08-29 at 23 03 50" src="https://user-images.githubusercontent.com/26904008/63973164-dea73400-cab2-11e9-8b21-3e5382736428.png">


##### 3. Add the same path to library's target:
TARGET HEADER SEARCH PATHS:
<img width="1252" alt="Screenshot 2019-08-29 at 23 03 57" src="https://user-images.githubusercontent.com/26904008/63972430-68ee9880-cab1-11e9-8688-096adea749e6.png">

Before running make sure that you are on the same wi-fi on both desktop/device (react-native needs to load JS)


## How to reproduce the issue?
Simply comment 10 and 22 lines from `src/CameraView.js` and you will see that bottomBar is showing properly.

## What native views this project needs to work properly:
BottomBar:
Search in Xcode for RNNOverlay... and some this .m files are responsible for bottom tabs

UnityView:
In Library it .m files
