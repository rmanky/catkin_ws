
"use strict";

let GetCommandMode = require('./GetCommandMode.js')
let SetControlLoopParameters = require('./SetControlLoopParameters.js')
let GetTorqueOffset = require('./GetTorqueOffset.js')
let SetActivatedControlLoop = require('./SetActivatedControlLoop.js')
let SetTorqueOffset = require('./SetTorqueOffset.js')
let GetControlLoopParameters = require('./GetControlLoopParameters.js')
let GetCoggingFeedforwardMode = require('./GetCoggingFeedforwardMode.js')
let SelectCustomData = require('./SelectCustomData.js')
let GetSelectedCustomData = require('./GetSelectedCustomData.js')
let GetAxisOffsets = require('./GetAxisOffsets.js')
let GetActivatedControlLoop = require('./GetActivatedControlLoop.js')
let ActuatorConfig_ClearFaults = require('./ActuatorConfig_ClearFaults.js')
let SetControlMode = require('./SetControlMode.js')
let GetServoing = require('./GetServoing.js')
let ActuatorConfig_GetControlMode = require('./ActuatorConfig_GetControlMode.js')
let SetCommandMode = require('./SetCommandMode.js')
let MoveToPosition = require('./MoveToPosition.js')
let SetAxisOffsets = require('./SetAxisOffsets.js')
let SetCoggingFeedforwardMode = require('./SetCoggingFeedforwardMode.js')
let SetServoing = require('./SetServoing.js')

module.exports = {
  GetCommandMode: GetCommandMode,
  SetControlLoopParameters: SetControlLoopParameters,
  GetTorqueOffset: GetTorqueOffset,
  SetActivatedControlLoop: SetActivatedControlLoop,
  SetTorqueOffset: SetTorqueOffset,
  GetControlLoopParameters: GetControlLoopParameters,
  GetCoggingFeedforwardMode: GetCoggingFeedforwardMode,
  SelectCustomData: SelectCustomData,
  GetSelectedCustomData: GetSelectedCustomData,
  GetAxisOffsets: GetAxisOffsets,
  GetActivatedControlLoop: GetActivatedControlLoop,
  ActuatorConfig_ClearFaults: ActuatorConfig_ClearFaults,
  SetControlMode: SetControlMode,
  GetServoing: GetServoing,
  ActuatorConfig_GetControlMode: ActuatorConfig_GetControlMode,
  SetCommandMode: SetCommandMode,
  MoveToPosition: MoveToPosition,
  SetAxisOffsets: SetAxisOffsets,
  SetCoggingFeedforwardMode: SetCoggingFeedforwardMode,
  SetServoing: SetServoing,
};
