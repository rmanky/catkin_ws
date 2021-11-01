
"use strict";

let KortexError = require('./KortexError.js');
let ApiOptions = require('./ApiOptions.js');
let ErrorCodes = require('./ErrorCodes.js');
let SubErrorCodes = require('./SubErrorCodes.js');
let ActuatorConfig_SafetyLimitType = require('./ActuatorConfig_SafetyLimitType.js');
let CommandMode = require('./CommandMode.js');
let EncoderDerivativeParameters = require('./EncoderDerivativeParameters.js');
let RampResponse = require('./RampResponse.js');
let CommandModeInformation = require('./CommandModeInformation.js');
let CustomDataSelection = require('./CustomDataSelection.js');
let VectorDriveParameters = require('./VectorDriveParameters.js');
let ControlLoopSelection = require('./ControlLoopSelection.js');
let ActuatorConfig_ServiceVersion = require('./ActuatorConfig_ServiceVersion.js');
let ControlLoopParameters = require('./ControlLoopParameters.js');
let AxisOffsets = require('./AxisOffsets.js');
let FrequencyResponse = require('./FrequencyResponse.js');
let ControlLoop = require('./ControlLoop.js');
let SafetyIdentifierBankA = require('./SafetyIdentifierBankA.js');
let ActuatorConfig_ControlModeInformation = require('./ActuatorConfig_ControlModeInformation.js');
let ActuatorConfig_ControlMode = require('./ActuatorConfig_ControlMode.js');
let CustomDataIndex = require('./CustomDataIndex.js');
let LoopSelection = require('./LoopSelection.js');
let StepResponse = require('./StepResponse.js');
let PositionCommand = require('./PositionCommand.js');
let CoggingFeedforwardModeInformation = require('./CoggingFeedforwardModeInformation.js');
let TorqueOffset = require('./TorqueOffset.js');
let CoggingFeedforwardMode = require('./CoggingFeedforwardMode.js');
let AxisPosition = require('./AxisPosition.js');
let Servoing = require('./Servoing.js');
let TorqueCalibration = require('./TorqueCalibration.js');
let ActuatorCyclic_MessageId = require('./ActuatorCyclic_MessageId.js');
let StatusFlags = require('./StatusFlags.js');
let ActuatorCyclic_Command = require('./ActuatorCyclic_Command.js');
let ActuatorCyclic_ServiceVersion = require('./ActuatorCyclic_ServiceVersion.js');
let CommandFlags = require('./CommandFlags.js');
let ActuatorCyclic_CustomData = require('./ActuatorCyclic_CustomData.js');
let ActuatorCyclic_Feedback = require('./ActuatorCyclic_Feedback.js');
let ControllerElementHandle_identifier = require('./ControllerElementHandle_identifier.js');
let ControllerHandle = require('./ControllerHandle.js');
let ControllerType = require('./ControllerType.js');
let ActionExecutionState = require('./ActionExecutionState.js');
let FullUserProfile = require('./FullUserProfile.js');
let JointTrajectoryConstraint = require('./JointTrajectoryConstraint.js');
let SequenceInfoNotification = require('./SequenceInfoNotification.js');
let Base_Stop = require('./Base_Stop.js');
let AngularWaypoint = require('./AngularWaypoint.js');
let JointTrajectoryConstraintType = require('./JointTrajectoryConstraintType.js');
let IKData = require('./IKData.js');
let SignalQuality = require('./SignalQuality.js');
let MapGroupHandle = require('./MapGroupHandle.js');
let SequenceHandle = require('./SequenceHandle.js');
let ServoingModeNotificationList = require('./ServoingModeNotificationList.js');
let ActionNotification = require('./ActionNotification.js');
let MapEvent = require('./MapEvent.js');
let ControllerBehavior = require('./ControllerBehavior.js');
let ArmStateInformation = require('./ArmStateInformation.js');
let WrenchLimitation = require('./WrenchLimitation.js');
let EventIdSequenceInfoNotification = require('./EventIdSequenceInfoNotification.js');
let CommunicationInterfaceConfiguration = require('./CommunicationInterfaceConfiguration.js');
let Base_SafetyIdentifier = require('./Base_SafetyIdentifier.js');
let ConstrainedJointAngles = require('./ConstrainedJointAngles.js');
let MapGroup = require('./MapGroup.js');
let SequenceTasksRange = require('./SequenceTasksRange.js');
let Pose = require('./Pose.js');
let WrenchCommand = require('./WrenchCommand.js');
let TrajectoryInfoType = require('./TrajectoryInfoType.js');
let NetworkType = require('./NetworkType.js');
let CartesianLimitation = require('./CartesianLimitation.js');
let LimitationType = require('./LimitationType.js');
let ControllerNotification_state = require('./ControllerNotification_state.js');
let Query = require('./Query.js');
let Twist = require('./Twist.js');
let FactoryEvent = require('./FactoryEvent.js');
let BridgeConfig = require('./BridgeConfig.js');
let BridgeStatus = require('./BridgeStatus.js');
let NetworkHandle = require('./NetworkHandle.js');
let Delay = require('./Delay.js');
let WifiEncryptionType = require('./WifiEncryptionType.js');
let SequenceList = require('./SequenceList.js');
let ControllerElementState = require('./ControllerElementState.js');
let AppendActionInformation = require('./AppendActionInformation.js');
let WristDigitalInputIdentifier = require('./WristDigitalInputIdentifier.js');
let PreComputedJointTrajectory = require('./PreComputedJointTrajectory.js');
let WifiInformation = require('./WifiInformation.js');
let TransformationMatrix = require('./TransformationMatrix.js');
let GpioEvent = require('./GpioEvent.js');
let Base_RotationMatrix = require('./Base_RotationMatrix.js');
let JointTorques = require('./JointTorques.js');
let BridgeType = require('./BridgeType.js');
let BridgeResult = require('./BridgeResult.js');
let WifiInformationList = require('./WifiInformationList.js');
let Finger = require('./Finger.js');
let ServoingMode = require('./ServoingMode.js');
let SafetyNotificationList = require('./SafetyNotificationList.js');
let SnapshotType = require('./SnapshotType.js');
let ProtectionZoneHandle = require('./ProtectionZoneHandle.js');
let ConfigurationNotificationEvent = require('./ConfigurationNotificationEvent.js');
let TrajectoryErrorElement = require('./TrajectoryErrorElement.js');
let MappingHandle = require('./MappingHandle.js');
let Faults = require('./Faults.js');
let JointLimitation = require('./JointLimitation.js');
let ControllerConfiguration = require('./ControllerConfiguration.js');
let ServoingModeInformation = require('./ServoingModeInformation.js');
let WrenchMode = require('./WrenchMode.js');
let Snapshot = require('./Snapshot.js');
let Action = require('./Action.js');
let NavigationDirection = require('./NavigationDirection.js');
let WaypointList = require('./WaypointList.js');
let TrajectoryErrorIdentifier = require('./TrajectoryErrorIdentifier.js');
let SequenceInfoNotificationList = require('./SequenceInfoNotificationList.js');
let MappingList = require('./MappingList.js');
let ProtectionZoneList = require('./ProtectionZoneList.js');
let Waypoint_type_of_waypoint = require('./Waypoint_type_of_waypoint.js');
let ControllerState = require('./ControllerState.js');
let Action_action_parameters = require('./Action_action_parameters.js');
let AdmittanceMode = require('./AdmittanceMode.js');
let Point = require('./Point.js');
let Orientation = require('./Orientation.js');
let ControllerList = require('./ControllerList.js');
let GpioPinPropertyFlags = require('./GpioPinPropertyFlags.js');
let Xbox360DigitalInputIdentifier = require('./Xbox360DigitalInputIdentifier.js');
let Base_ServiceVersion = require('./Base_ServiceVersion.js');
let Waypoint = require('./Waypoint.js');
let ConstrainedPosition = require('./ConstrainedPosition.js');
let SafetyEvent = require('./SafetyEvent.js');
let ShapeType = require('./ShapeType.js');
let ControllerElementEventType = require('./ControllerElementEventType.js');
let ActionNotificationList = require('./ActionNotificationList.js');
let ActionEvent = require('./ActionEvent.js');
let GpioConfigurationList = require('./GpioConfigurationList.js');
let TwistCommand = require('./TwistCommand.js');
let ProtectionZone = require('./ProtectionZone.js');
let GpioBehavior = require('./GpioBehavior.js');
let BridgeIdentifier = require('./BridgeIdentifier.js');
let ConfigurationChangeNotification = require('./ConfigurationChangeNotification.js');
let ActionType = require('./ActionType.js');
let JointAngles = require('./JointAngles.js');
let ActivateMapHandle = require('./ActivateMapHandle.js');
let SequenceInformation = require('./SequenceInformation.js');
let WifiConfiguration = require('./WifiConfiguration.js');
let SequenceTasksPair = require('./SequenceTasksPair.js');
let UserEvent = require('./UserEvent.js');
let SequenceTaskHandle = require('./SequenceTaskHandle.js');
let ConstrainedPose = require('./ConstrainedPose.js');
let ControllerNotificationList = require('./ControllerNotificationList.js');
let CartesianLimitationList = require('./CartesianLimitationList.js');
let TrajectoryErrorType = require('./TrajectoryErrorType.js');
let CartesianTrajectoryConstraint_type = require('./CartesianTrajectoryConstraint_type.js');
let GripperCommand = require('./GripperCommand.js');
let OperatingModeInformation = require('./OperatingModeInformation.js');
let NetworkNotificationList = require('./NetworkNotificationList.js');
let WifiSecurityType = require('./WifiSecurityType.js');
let ProtectionZoneInformation = require('./ProtectionZoneInformation.js');
let ZoneShape = require('./ZoneShape.js');
let ChangeTwist = require('./ChangeTwist.js');
let SequenceTaskConfiguration = require('./SequenceTaskConfiguration.js');
let ControllerInputType = require('./ControllerInputType.js');
let ProtectionZoneEvent = require('./ProtectionZoneEvent.js');
let RequestedActionType = require('./RequestedActionType.js');
let EmergencyStop = require('./EmergencyStop.js');
let Base_GpioConfiguration = require('./Base_GpioConfiguration.js');
let GripperRequest = require('./GripperRequest.js');
let Base_ControlModeInformation = require('./Base_ControlModeInformation.js');
let ConstrainedOrientation = require('./ConstrainedOrientation.js');
let FirmwareComponentVersion = require('./FirmwareComponentVersion.js');
let BridgeList = require('./BridgeList.js');
let BackupEvent = require('./BackupEvent.js');
let Base_Position = require('./Base_Position.js');
let Timeout = require('./Timeout.js');
let Base_CapSenseConfig = require('./Base_CapSenseConfig.js');
let BridgePortConfig = require('./BridgePortConfig.js');
let JointTorque = require('./JointTorque.js');
let ActuatorInformation = require('./ActuatorInformation.js');
let JointNavigationDirection = require('./JointNavigationDirection.js');
let ControllerConfigurationList = require('./ControllerConfigurationList.js');
let GpioPinConfiguration = require('./GpioPinConfiguration.js');
let PreComputedJointTrajectoryElement = require('./PreComputedJointTrajectoryElement.js');
let ArmStateNotification = require('./ArmStateNotification.js');
let ControllerNotification = require('./ControllerNotification.js');
let ProtectionZoneNotificationList = require('./ProtectionZoneNotificationList.js');
let LedState = require('./LedState.js');
let Sequence = require('./Sequence.js');
let ControllerEvent = require('./ControllerEvent.js');
let SequenceTask = require('./SequenceTask.js');
let FirmwareBundleVersions = require('./FirmwareBundleVersions.js');
let ActionHandle = require('./ActionHandle.js');
let ProtectionZoneNotification = require('./ProtectionZoneNotification.js');
let OperatingModeNotification = require('./OperatingModeNotification.js');
let Base_RotationMatrixRow = require('./Base_RotationMatrixRow.js');
let WifiConfigurationList = require('./WifiConfigurationList.js');
let MapGroupList = require('./MapGroupList.js');
let Gen3GpioPinId = require('./Gen3GpioPinId.js');
let JointSpeed = require('./JointSpeed.js');
let UserProfile = require('./UserProfile.js');
let UserList = require('./UserList.js');
let GripperMode = require('./GripperMode.js');
let SequenceTasksConfiguration = require('./SequenceTasksConfiguration.js');
let FactoryNotification = require('./FactoryNotification.js');
let Base_ControlMode = require('./Base_ControlMode.js');
let ServoingModeNotification = require('./ServoingModeNotification.js');
let TrajectoryErrorReport = require('./TrajectoryErrorReport.js');
let TwistLimitation = require('./TwistLimitation.js');
let Wrench = require('./Wrench.js');
let OperatingModeNotificationList = require('./OperatingModeNotificationList.js');
let ControlModeNotificationList = require('./ControlModeNotificationList.js');
let RobotEventNotificationList = require('./RobotEventNotificationList.js');
let Map = require('./Map.js');
let MapList = require('./MapList.js');
let Base_CapSenseMode = require('./Base_CapSenseMode.js');
let TransformationRow = require('./TransformationRow.js');
let ChangeJointSpeeds = require('./ChangeJointSpeeds.js');
let SwitchControlMapping = require('./SwitchControlMapping.js');
let ConfigurationChangeNotificationList = require('./ConfigurationChangeNotificationList.js');
let GpioAction = require('./GpioAction.js');
let MapHandle = require('./MapHandle.js');
let Admittance = require('./Admittance.js');
let MappingInfoNotificationList = require('./MappingInfoNotificationList.js');
let Ssid = require('./Ssid.js');
let MappingInfoNotification = require('./MappingInfoNotification.js');
let SoundType = require('./SoundType.js');
let RobotEvent = require('./RobotEvent.js');
let SystemTime = require('./SystemTime.js');
let CartesianWaypoint = require('./CartesianWaypoint.js');
let ChangeWrench = require('./ChangeWrench.js');
let NetworkNotification = require('./NetworkNotification.js');
let TrajectoryContinuityMode = require('./TrajectoryContinuityMode.js');
let SequenceTasks = require('./SequenceTasks.js');
let UserProfileList = require('./UserProfileList.js');
let IPv4Information = require('./IPv4Information.js');
let ConstrainedJointAngle = require('./ConstrainedJointAngle.js');
let MapEvent_events = require('./MapEvent_events.js');
let FullIPv4Configuration = require('./FullIPv4Configuration.js');
let CartesianTrajectoryConstraint = require('./CartesianTrajectoryConstraint.js');
let Base_ControlModeNotification = require('./Base_ControlModeNotification.js');
let ControllerEventType = require('./ControllerEventType.js');
let ControllerElementHandle = require('./ControllerElementHandle.js');
let ActionList = require('./ActionList.js');
let OperatingMode = require('./OperatingMode.js');
let RobotEventNotification = require('./RobotEventNotification.js');
let WaypointValidationReport = require('./WaypointValidationReport.js');
let ConfigurationChangeNotification_configuration_change = require('./ConfigurationChangeNotification_configuration_change.js');
let Xbox360AnalogInputIdentifier = require('./Xbox360AnalogInputIdentifier.js');
let TrajectoryInfo = require('./TrajectoryInfo.js');
let Gripper = require('./Gripper.js');
let PasswordChange = require('./PasswordChange.js');
let ControllerConfigurationMode = require('./ControllerConfigurationMode.js');
let IPv4Configuration = require('./IPv4Configuration.js');
let JointAngle = require('./JointAngle.js');
let CartesianSpeed = require('./CartesianSpeed.js');
let MapElement = require('./MapElement.js');
let UserNotification = require('./UserNotification.js');
let NetworkEvent = require('./NetworkEvent.js');
let AdvancedSequenceHandle = require('./AdvancedSequenceHandle.js');
let Mapping = require('./Mapping.js');
let KinematicTrajectoryConstraints = require('./KinematicTrajectoryConstraints.js');
let Base_JointSpeeds = require('./Base_JointSpeeds.js');
let UserNotificationList = require('./UserNotificationList.js');
let GpioCommand = require('./GpioCommand.js');
let JointsLimitationsList = require('./JointsLimitationsList.js');
let BaseCyclic_Command = require('./BaseCyclic_Command.js');
let BaseCyclic_ServiceVersion = require('./BaseCyclic_ServiceVersion.js');
let ActuatorCommand = require('./ActuatorCommand.js');
let ActuatorCustomData = require('./ActuatorCustomData.js');
let ActuatorFeedback = require('./ActuatorFeedback.js');
let BaseCyclic_CustomData = require('./BaseCyclic_CustomData.js');
let BaseFeedback = require('./BaseFeedback.js');
let BaseCyclic_Feedback = require('./BaseCyclic_Feedback.js');
let SafetyStatusValue = require('./SafetyStatusValue.js');
let NotificationHandle = require('./NotificationHandle.js');
let UARTConfiguration = require('./UARTConfiguration.js');
let DeviceTypes = require('./DeviceTypes.js');
let NotificationOptions = require('./NotificationOptions.js');
let SafetyHandle = require('./SafetyHandle.js');
let CartesianReferenceFrame = require('./CartesianReferenceFrame.js');
let DeviceHandle = require('./DeviceHandle.js');
let Permission = require('./Permission.js');
let SafetyNotification = require('./SafetyNotification.js');
let UARTParity = require('./UARTParity.js');
let UARTDeviceIdentification = require('./UARTDeviceIdentification.js');
let Unit = require('./Unit.js');
let UserProfileHandle = require('./UserProfileHandle.js');
let UARTStopBits = require('./UARTStopBits.js');
let NotificationType = require('./NotificationType.js');
let Empty = require('./Empty.js');
let UARTSpeed = require('./UARTSpeed.js');
let CountryCode = require('./CountryCode.js');
let Connection = require('./Connection.js');
let Timestamp = require('./Timestamp.js');
let CountryCodeIdentifier = require('./CountryCodeIdentifier.js');
let ArmState = require('./ArmState.js');
let UARTWordLength = require('./UARTWordLength.js');
let ControlConfig_ControlModeInformation = require('./ControlConfig_ControlModeInformation.js');
let PayloadInformation = require('./PayloadInformation.js');
let GravityVector = require('./GravityVector.js');
let TwistLinearSoftLimit = require('./TwistLinearSoftLimit.js');
let JointAccelerationSoftLimits = require('./JointAccelerationSoftLimits.js');
let ControlConfig_JointSpeeds = require('./ControlConfig_JointSpeeds.js');
let JointSpeedSoftLimits = require('./JointSpeedSoftLimits.js');
let DesiredSpeeds = require('./DesiredSpeeds.js');
let AngularTwist = require('./AngularTwist.js');
let ControlConfig_Position = require('./ControlConfig_Position.js');
let ControlConfig_ControlModeNotification = require('./ControlConfig_ControlModeNotification.js');
let ControlConfig_ServiceVersion = require('./ControlConfig_ServiceVersion.js');
let ControlConfigurationEvent = require('./ControlConfigurationEvent.js');
let KinematicLimitsList = require('./KinematicLimitsList.js');
let CartesianTransform = require('./CartesianTransform.js');
let ControlConfig_ControlMode = require('./ControlConfig_ControlMode.js');
let CartesianReferenceFrameInfo = require('./CartesianReferenceFrameInfo.js');
let LinearTwist = require('./LinearTwist.js');
let KinematicLimits = require('./KinematicLimits.js');
let ToolConfiguration = require('./ToolConfiguration.js');
let ControlConfigurationNotification = require('./ControlConfigurationNotification.js');
let TwistAngularSoftLimit = require('./TwistAngularSoftLimit.js');
let PartNumberRevision = require('./PartNumberRevision.js');
let DeviceConfig_CapSenseConfig = require('./DeviceConfig_CapSenseConfig.js');
let SafetyEnable = require('./SafetyEnable.js');
let CapSenseRegister = require('./CapSenseRegister.js');
let SafetyThreshold = require('./SafetyThreshold.js');
let CalibrationParameter = require('./CalibrationParameter.js');
let Calibration = require('./Calibration.js');
let BootloaderVersion = require('./BootloaderVersion.js');
let PartNumber = require('./PartNumber.js');
let RebootRqst = require('./RebootRqst.js');
let ModelNumber = require('./ModelNumber.js');
let DeviceConfig_ServiceVersion = require('./DeviceConfig_ServiceVersion.js');
let SafetyInformationList = require('./SafetyInformationList.js');
let CalibrationItem = require('./CalibrationItem.js');
let RunModes = require('./RunModes.js');
let CalibrationParameter_value = require('./CalibrationParameter_value.js');
let CalibrationStatus = require('./CalibrationStatus.js');
let CalibrationElement = require('./CalibrationElement.js');
let IPv4Settings = require('./IPv4Settings.js');
let SerialNumber = require('./SerialNumber.js');
let SafetyInformation = require('./SafetyInformation.js');
let RunMode = require('./RunMode.js');
let SafetyStatus = require('./SafetyStatus.js');
let DeviceConfig_SafetyLimitType = require('./DeviceConfig_SafetyLimitType.js');
let PowerOnSelfTestResult = require('./PowerOnSelfTestResult.js');
let MACAddress = require('./MACAddress.js');
let DeviceType = require('./DeviceType.js');
let SafetyConfiguration = require('./SafetyConfiguration.js');
let DeviceConfig_CapSenseMode = require('./DeviceConfig_CapSenseMode.js');
let CalibrationResult = require('./CalibrationResult.js');
let FirmwareVersion = require('./FirmwareVersion.js');
let SafetyConfigurationList = require('./SafetyConfigurationList.js');
let DeviceManager_ServiceVersion = require('./DeviceManager_ServiceVersion.js');
let DeviceHandles = require('./DeviceHandles.js');
let RobotiqGripperStatusFlags = require('./RobotiqGripperStatusFlags.js');
let GripperConfig_SafetyIdentifier = require('./GripperConfig_SafetyIdentifier.js');
let MotorFeedback = require('./MotorFeedback.js');
let MotorCommand = require('./MotorCommand.js');
let CustomDataUnit = require('./CustomDataUnit.js');
let GripperCyclic_ServiceVersion = require('./GripperCyclic_ServiceVersion.js');
let GripperCyclic_MessageId = require('./GripperCyclic_MessageId.js');
let GripperCyclic_Feedback = require('./GripperCyclic_Feedback.js');
let GripperCyclic_Command = require('./GripperCyclic_Command.js');
let GripperCyclic_CustomData = require('./GripperCyclic_CustomData.js');
let I2CData = require('./I2CData.js');
let UARTPortId = require('./UARTPortId.js');
let InterconnectConfig_GPIOConfiguration = require('./InterconnectConfig_GPIOConfiguration.js');
let EthernetDevice = require('./EthernetDevice.js');
let GPIOMode = require('./GPIOMode.js');
let EthernetDuplex = require('./EthernetDuplex.js');
let I2CDeviceIdentification = require('./I2CDeviceIdentification.js');
let I2CReadRegisterParameter = require('./I2CReadRegisterParameter.js');
let I2CReadParameter = require('./I2CReadParameter.js');
let InterconnectConfig_SafetyIdentifier = require('./InterconnectConfig_SafetyIdentifier.js');
let I2CWriteRegisterParameter = require('./I2CWriteRegisterParameter.js');
let GPIOIdentifier = require('./GPIOIdentifier.js');
let GPIOState = require('./GPIOState.js');
let I2CDeviceAddressing = require('./I2CDeviceAddressing.js');
let GPIOPull = require('./GPIOPull.js');
let I2CRegisterAddressSize = require('./I2CRegisterAddressSize.js');
let GPIOIdentification = require('./GPIOIdentification.js');
let I2CWriteParameter = require('./I2CWriteParameter.js');
let I2CDevice = require('./I2CDevice.js');
let GPIOValue = require('./GPIOValue.js');
let I2CConfiguration = require('./I2CConfiguration.js');
let EthernetConfiguration = require('./EthernetConfiguration.js');
let InterconnectConfig_ServiceVersion = require('./InterconnectConfig_ServiceVersion.js');
let EthernetSpeed = require('./EthernetSpeed.js');
let EthernetDeviceIdentification = require('./EthernetDeviceIdentification.js');
let I2CMode = require('./I2CMode.js');
let InterconnectCyclic_Command = require('./InterconnectCyclic_Command.js');
let InterconnectCyclic_Feedback = require('./InterconnectCyclic_Feedback.js');
let InterconnectCyclic_CustomData_tool_customData = require('./InterconnectCyclic_CustomData_tool_customData.js');
let InterconnectCyclic_CustomData = require('./InterconnectCyclic_CustomData.js');
let InterconnectCyclic_ServiceVersion = require('./InterconnectCyclic_ServiceVersion.js');
let InterconnectCyclic_Command_tool_command = require('./InterconnectCyclic_Command_tool_command.js');
let InterconnectCyclic_MessageId = require('./InterconnectCyclic_MessageId.js');
let InterconnectCyclic_Feedback_tool_feedback = require('./InterconnectCyclic_Feedback_tool_feedback.js');
let WristType = require('./WristType.js');
let VisionModuleType = require('./VisionModuleType.js');
let InterfaceModuleType = require('./InterfaceModuleType.js');
let CompleteProductConfiguration = require('./CompleteProductConfiguration.js');
let ProductConfigurationEndEffectorType = require('./ProductConfigurationEndEffectorType.js');
let BaseType = require('./BaseType.js');
let EndEffectorType = require('./EndEffectorType.js');
let ModelId = require('./ModelId.js');
let ArmLaterality = require('./ArmLaterality.js');
let SensorFocusAction_action_parameters = require('./SensorFocusAction_action_parameters.js');
let DistortionCoefficients = require('./DistortionCoefficients.js');
let BitRate = require('./BitRate.js');
let Sensor = require('./Sensor.js');
let OptionIdentifier = require('./OptionIdentifier.js');
let ExtrinsicParameters = require('./ExtrinsicParameters.js');
let FrameRate = require('./FrameRate.js');
let Resolution = require('./Resolution.js');
let ManualFocus = require('./ManualFocus.js');
let Option = require('./Option.js');
let SensorSettings = require('./SensorSettings.js');
let FocusPoint = require('./FocusPoint.js');
let TranslationVector = require('./TranslationVector.js');
let OptionValue = require('./OptionValue.js');
let SensorFocusAction = require('./SensorFocusAction.js');
let FocusAction = require('./FocusAction.js');
let IntrinsicParameters = require('./IntrinsicParameters.js');
let VisionConfig_RotationMatrixRow = require('./VisionConfig_RotationMatrixRow.js');
let VisionNotification = require('./VisionNotification.js');
let VisionConfig_RotationMatrix = require('./VisionConfig_RotationMatrix.js');
let SensorIdentifier = require('./SensorIdentifier.js');
let VisionConfig_ServiceVersion = require('./VisionConfig_ServiceVersion.js');
let OptionInformation = require('./OptionInformation.js');
let IntrinsicProfileIdentifier = require('./IntrinsicProfileIdentifier.js');
let VisionEvent = require('./VisionEvent.js');
let FollowCartesianTrajectoryFeedback = require('./FollowCartesianTrajectoryFeedback.js');
let FollowCartesianTrajectoryActionFeedback = require('./FollowCartesianTrajectoryActionFeedback.js');
let FollowCartesianTrajectoryAction = require('./FollowCartesianTrajectoryAction.js');
let FollowCartesianTrajectoryActionResult = require('./FollowCartesianTrajectoryActionResult.js');
let FollowCartesianTrajectoryResult = require('./FollowCartesianTrajectoryResult.js');
let FollowCartesianTrajectoryActionGoal = require('./FollowCartesianTrajectoryActionGoal.js');
let FollowCartesianTrajectoryGoal = require('./FollowCartesianTrajectoryGoal.js');

module.exports = {
  KortexError: KortexError,
  ApiOptions: ApiOptions,
  ErrorCodes: ErrorCodes,
  SubErrorCodes: SubErrorCodes,
  ActuatorConfig_SafetyLimitType: ActuatorConfig_SafetyLimitType,
  CommandMode: CommandMode,
  EncoderDerivativeParameters: EncoderDerivativeParameters,
  RampResponse: RampResponse,
  CommandModeInformation: CommandModeInformation,
  CustomDataSelection: CustomDataSelection,
  VectorDriveParameters: VectorDriveParameters,
  ControlLoopSelection: ControlLoopSelection,
  ActuatorConfig_ServiceVersion: ActuatorConfig_ServiceVersion,
  ControlLoopParameters: ControlLoopParameters,
  AxisOffsets: AxisOffsets,
  FrequencyResponse: FrequencyResponse,
  ControlLoop: ControlLoop,
  SafetyIdentifierBankA: SafetyIdentifierBankA,
  ActuatorConfig_ControlModeInformation: ActuatorConfig_ControlModeInformation,
  ActuatorConfig_ControlMode: ActuatorConfig_ControlMode,
  CustomDataIndex: CustomDataIndex,
  LoopSelection: LoopSelection,
  StepResponse: StepResponse,
  PositionCommand: PositionCommand,
  CoggingFeedforwardModeInformation: CoggingFeedforwardModeInformation,
  TorqueOffset: TorqueOffset,
  CoggingFeedforwardMode: CoggingFeedforwardMode,
  AxisPosition: AxisPosition,
  Servoing: Servoing,
  TorqueCalibration: TorqueCalibration,
  ActuatorCyclic_MessageId: ActuatorCyclic_MessageId,
  StatusFlags: StatusFlags,
  ActuatorCyclic_Command: ActuatorCyclic_Command,
  ActuatorCyclic_ServiceVersion: ActuatorCyclic_ServiceVersion,
  CommandFlags: CommandFlags,
  ActuatorCyclic_CustomData: ActuatorCyclic_CustomData,
  ActuatorCyclic_Feedback: ActuatorCyclic_Feedback,
  ControllerElementHandle_identifier: ControllerElementHandle_identifier,
  ControllerHandle: ControllerHandle,
  ControllerType: ControllerType,
  ActionExecutionState: ActionExecutionState,
  FullUserProfile: FullUserProfile,
  JointTrajectoryConstraint: JointTrajectoryConstraint,
  SequenceInfoNotification: SequenceInfoNotification,
  Base_Stop: Base_Stop,
  AngularWaypoint: AngularWaypoint,
  JointTrajectoryConstraintType: JointTrajectoryConstraintType,
  IKData: IKData,
  SignalQuality: SignalQuality,
  MapGroupHandle: MapGroupHandle,
  SequenceHandle: SequenceHandle,
  ServoingModeNotificationList: ServoingModeNotificationList,
  ActionNotification: ActionNotification,
  MapEvent: MapEvent,
  ControllerBehavior: ControllerBehavior,
  ArmStateInformation: ArmStateInformation,
  WrenchLimitation: WrenchLimitation,
  EventIdSequenceInfoNotification: EventIdSequenceInfoNotification,
  CommunicationInterfaceConfiguration: CommunicationInterfaceConfiguration,
  Base_SafetyIdentifier: Base_SafetyIdentifier,
  ConstrainedJointAngles: ConstrainedJointAngles,
  MapGroup: MapGroup,
  SequenceTasksRange: SequenceTasksRange,
  Pose: Pose,
  WrenchCommand: WrenchCommand,
  TrajectoryInfoType: TrajectoryInfoType,
  NetworkType: NetworkType,
  CartesianLimitation: CartesianLimitation,
  LimitationType: LimitationType,
  ControllerNotification_state: ControllerNotification_state,
  Query: Query,
  Twist: Twist,
  FactoryEvent: FactoryEvent,
  BridgeConfig: BridgeConfig,
  BridgeStatus: BridgeStatus,
  NetworkHandle: NetworkHandle,
  Delay: Delay,
  WifiEncryptionType: WifiEncryptionType,
  SequenceList: SequenceList,
  ControllerElementState: ControllerElementState,
  AppendActionInformation: AppendActionInformation,
  WristDigitalInputIdentifier: WristDigitalInputIdentifier,
  PreComputedJointTrajectory: PreComputedJointTrajectory,
  WifiInformation: WifiInformation,
  TransformationMatrix: TransformationMatrix,
  GpioEvent: GpioEvent,
  Base_RotationMatrix: Base_RotationMatrix,
  JointTorques: JointTorques,
  BridgeType: BridgeType,
  BridgeResult: BridgeResult,
  WifiInformationList: WifiInformationList,
  Finger: Finger,
  ServoingMode: ServoingMode,
  SafetyNotificationList: SafetyNotificationList,
  SnapshotType: SnapshotType,
  ProtectionZoneHandle: ProtectionZoneHandle,
  ConfigurationNotificationEvent: ConfigurationNotificationEvent,
  TrajectoryErrorElement: TrajectoryErrorElement,
  MappingHandle: MappingHandle,
  Faults: Faults,
  JointLimitation: JointLimitation,
  ControllerConfiguration: ControllerConfiguration,
  ServoingModeInformation: ServoingModeInformation,
  WrenchMode: WrenchMode,
  Snapshot: Snapshot,
  Action: Action,
  NavigationDirection: NavigationDirection,
  WaypointList: WaypointList,
  TrajectoryErrorIdentifier: TrajectoryErrorIdentifier,
  SequenceInfoNotificationList: SequenceInfoNotificationList,
  MappingList: MappingList,
  ProtectionZoneList: ProtectionZoneList,
  Waypoint_type_of_waypoint: Waypoint_type_of_waypoint,
  ControllerState: ControllerState,
  Action_action_parameters: Action_action_parameters,
  AdmittanceMode: AdmittanceMode,
  Point: Point,
  Orientation: Orientation,
  ControllerList: ControllerList,
  GpioPinPropertyFlags: GpioPinPropertyFlags,
  Xbox360DigitalInputIdentifier: Xbox360DigitalInputIdentifier,
  Base_ServiceVersion: Base_ServiceVersion,
  Waypoint: Waypoint,
  ConstrainedPosition: ConstrainedPosition,
  SafetyEvent: SafetyEvent,
  ShapeType: ShapeType,
  ControllerElementEventType: ControllerElementEventType,
  ActionNotificationList: ActionNotificationList,
  ActionEvent: ActionEvent,
  GpioConfigurationList: GpioConfigurationList,
  TwistCommand: TwistCommand,
  ProtectionZone: ProtectionZone,
  GpioBehavior: GpioBehavior,
  BridgeIdentifier: BridgeIdentifier,
  ConfigurationChangeNotification: ConfigurationChangeNotification,
  ActionType: ActionType,
  JointAngles: JointAngles,
  ActivateMapHandle: ActivateMapHandle,
  SequenceInformation: SequenceInformation,
  WifiConfiguration: WifiConfiguration,
  SequenceTasksPair: SequenceTasksPair,
  UserEvent: UserEvent,
  SequenceTaskHandle: SequenceTaskHandle,
  ConstrainedPose: ConstrainedPose,
  ControllerNotificationList: ControllerNotificationList,
  CartesianLimitationList: CartesianLimitationList,
  TrajectoryErrorType: TrajectoryErrorType,
  CartesianTrajectoryConstraint_type: CartesianTrajectoryConstraint_type,
  GripperCommand: GripperCommand,
  OperatingModeInformation: OperatingModeInformation,
  NetworkNotificationList: NetworkNotificationList,
  WifiSecurityType: WifiSecurityType,
  ProtectionZoneInformation: ProtectionZoneInformation,
  ZoneShape: ZoneShape,
  ChangeTwist: ChangeTwist,
  SequenceTaskConfiguration: SequenceTaskConfiguration,
  ControllerInputType: ControllerInputType,
  ProtectionZoneEvent: ProtectionZoneEvent,
  RequestedActionType: RequestedActionType,
  EmergencyStop: EmergencyStop,
  Base_GpioConfiguration: Base_GpioConfiguration,
  GripperRequest: GripperRequest,
  Base_ControlModeInformation: Base_ControlModeInformation,
  ConstrainedOrientation: ConstrainedOrientation,
  FirmwareComponentVersion: FirmwareComponentVersion,
  BridgeList: BridgeList,
  BackupEvent: BackupEvent,
  Base_Position: Base_Position,
  Timeout: Timeout,
  Base_CapSenseConfig: Base_CapSenseConfig,
  BridgePortConfig: BridgePortConfig,
  JointTorque: JointTorque,
  ActuatorInformation: ActuatorInformation,
  JointNavigationDirection: JointNavigationDirection,
  ControllerConfigurationList: ControllerConfigurationList,
  GpioPinConfiguration: GpioPinConfiguration,
  PreComputedJointTrajectoryElement: PreComputedJointTrajectoryElement,
  ArmStateNotification: ArmStateNotification,
  ControllerNotification: ControllerNotification,
  ProtectionZoneNotificationList: ProtectionZoneNotificationList,
  LedState: LedState,
  Sequence: Sequence,
  ControllerEvent: ControllerEvent,
  SequenceTask: SequenceTask,
  FirmwareBundleVersions: FirmwareBundleVersions,
  ActionHandle: ActionHandle,
  ProtectionZoneNotification: ProtectionZoneNotification,
  OperatingModeNotification: OperatingModeNotification,
  Base_RotationMatrixRow: Base_RotationMatrixRow,
  WifiConfigurationList: WifiConfigurationList,
  MapGroupList: MapGroupList,
  Gen3GpioPinId: Gen3GpioPinId,
  JointSpeed: JointSpeed,
  UserProfile: UserProfile,
  UserList: UserList,
  GripperMode: GripperMode,
  SequenceTasksConfiguration: SequenceTasksConfiguration,
  FactoryNotification: FactoryNotification,
  Base_ControlMode: Base_ControlMode,
  ServoingModeNotification: ServoingModeNotification,
  TrajectoryErrorReport: TrajectoryErrorReport,
  TwistLimitation: TwistLimitation,
  Wrench: Wrench,
  OperatingModeNotificationList: OperatingModeNotificationList,
  ControlModeNotificationList: ControlModeNotificationList,
  RobotEventNotificationList: RobotEventNotificationList,
  Map: Map,
  MapList: MapList,
  Base_CapSenseMode: Base_CapSenseMode,
  TransformationRow: TransformationRow,
  ChangeJointSpeeds: ChangeJointSpeeds,
  SwitchControlMapping: SwitchControlMapping,
  ConfigurationChangeNotificationList: ConfigurationChangeNotificationList,
  GpioAction: GpioAction,
  MapHandle: MapHandle,
  Admittance: Admittance,
  MappingInfoNotificationList: MappingInfoNotificationList,
  Ssid: Ssid,
  MappingInfoNotification: MappingInfoNotification,
  SoundType: SoundType,
  RobotEvent: RobotEvent,
  SystemTime: SystemTime,
  CartesianWaypoint: CartesianWaypoint,
  ChangeWrench: ChangeWrench,
  NetworkNotification: NetworkNotification,
  TrajectoryContinuityMode: TrajectoryContinuityMode,
  SequenceTasks: SequenceTasks,
  UserProfileList: UserProfileList,
  IPv4Information: IPv4Information,
  ConstrainedJointAngle: ConstrainedJointAngle,
  MapEvent_events: MapEvent_events,
  FullIPv4Configuration: FullIPv4Configuration,
  CartesianTrajectoryConstraint: CartesianTrajectoryConstraint,
  Base_ControlModeNotification: Base_ControlModeNotification,
  ControllerEventType: ControllerEventType,
  ControllerElementHandle: ControllerElementHandle,
  ActionList: ActionList,
  OperatingMode: OperatingMode,
  RobotEventNotification: RobotEventNotification,
  WaypointValidationReport: WaypointValidationReport,
  ConfigurationChangeNotification_configuration_change: ConfigurationChangeNotification_configuration_change,
  Xbox360AnalogInputIdentifier: Xbox360AnalogInputIdentifier,
  TrajectoryInfo: TrajectoryInfo,
  Gripper: Gripper,
  PasswordChange: PasswordChange,
  ControllerConfigurationMode: ControllerConfigurationMode,
  IPv4Configuration: IPv4Configuration,
  JointAngle: JointAngle,
  CartesianSpeed: CartesianSpeed,
  MapElement: MapElement,
  UserNotification: UserNotification,
  NetworkEvent: NetworkEvent,
  AdvancedSequenceHandle: AdvancedSequenceHandle,
  Mapping: Mapping,
  KinematicTrajectoryConstraints: KinematicTrajectoryConstraints,
  Base_JointSpeeds: Base_JointSpeeds,
  UserNotificationList: UserNotificationList,
  GpioCommand: GpioCommand,
  JointsLimitationsList: JointsLimitationsList,
  BaseCyclic_Command: BaseCyclic_Command,
  BaseCyclic_ServiceVersion: BaseCyclic_ServiceVersion,
  ActuatorCommand: ActuatorCommand,
  ActuatorCustomData: ActuatorCustomData,
  ActuatorFeedback: ActuatorFeedback,
  BaseCyclic_CustomData: BaseCyclic_CustomData,
  BaseFeedback: BaseFeedback,
  BaseCyclic_Feedback: BaseCyclic_Feedback,
  SafetyStatusValue: SafetyStatusValue,
  NotificationHandle: NotificationHandle,
  UARTConfiguration: UARTConfiguration,
  DeviceTypes: DeviceTypes,
  NotificationOptions: NotificationOptions,
  SafetyHandle: SafetyHandle,
  CartesianReferenceFrame: CartesianReferenceFrame,
  DeviceHandle: DeviceHandle,
  Permission: Permission,
  SafetyNotification: SafetyNotification,
  UARTParity: UARTParity,
  UARTDeviceIdentification: UARTDeviceIdentification,
  Unit: Unit,
  UserProfileHandle: UserProfileHandle,
  UARTStopBits: UARTStopBits,
  NotificationType: NotificationType,
  Empty: Empty,
  UARTSpeed: UARTSpeed,
  CountryCode: CountryCode,
  Connection: Connection,
  Timestamp: Timestamp,
  CountryCodeIdentifier: CountryCodeIdentifier,
  ArmState: ArmState,
  UARTWordLength: UARTWordLength,
  ControlConfig_ControlModeInformation: ControlConfig_ControlModeInformation,
  PayloadInformation: PayloadInformation,
  GravityVector: GravityVector,
  TwistLinearSoftLimit: TwistLinearSoftLimit,
  JointAccelerationSoftLimits: JointAccelerationSoftLimits,
  ControlConfig_JointSpeeds: ControlConfig_JointSpeeds,
  JointSpeedSoftLimits: JointSpeedSoftLimits,
  DesiredSpeeds: DesiredSpeeds,
  AngularTwist: AngularTwist,
  ControlConfig_Position: ControlConfig_Position,
  ControlConfig_ControlModeNotification: ControlConfig_ControlModeNotification,
  ControlConfig_ServiceVersion: ControlConfig_ServiceVersion,
  ControlConfigurationEvent: ControlConfigurationEvent,
  KinematicLimitsList: KinematicLimitsList,
  CartesianTransform: CartesianTransform,
  ControlConfig_ControlMode: ControlConfig_ControlMode,
  CartesianReferenceFrameInfo: CartesianReferenceFrameInfo,
  LinearTwist: LinearTwist,
  KinematicLimits: KinematicLimits,
  ToolConfiguration: ToolConfiguration,
  ControlConfigurationNotification: ControlConfigurationNotification,
  TwistAngularSoftLimit: TwistAngularSoftLimit,
  PartNumberRevision: PartNumberRevision,
  DeviceConfig_CapSenseConfig: DeviceConfig_CapSenseConfig,
  SafetyEnable: SafetyEnable,
  CapSenseRegister: CapSenseRegister,
  SafetyThreshold: SafetyThreshold,
  CalibrationParameter: CalibrationParameter,
  Calibration: Calibration,
  BootloaderVersion: BootloaderVersion,
  PartNumber: PartNumber,
  RebootRqst: RebootRqst,
  ModelNumber: ModelNumber,
  DeviceConfig_ServiceVersion: DeviceConfig_ServiceVersion,
  SafetyInformationList: SafetyInformationList,
  CalibrationItem: CalibrationItem,
  RunModes: RunModes,
  CalibrationParameter_value: CalibrationParameter_value,
  CalibrationStatus: CalibrationStatus,
  CalibrationElement: CalibrationElement,
  IPv4Settings: IPv4Settings,
  SerialNumber: SerialNumber,
  SafetyInformation: SafetyInformation,
  RunMode: RunMode,
  SafetyStatus: SafetyStatus,
  DeviceConfig_SafetyLimitType: DeviceConfig_SafetyLimitType,
  PowerOnSelfTestResult: PowerOnSelfTestResult,
  MACAddress: MACAddress,
  DeviceType: DeviceType,
  SafetyConfiguration: SafetyConfiguration,
  DeviceConfig_CapSenseMode: DeviceConfig_CapSenseMode,
  CalibrationResult: CalibrationResult,
  FirmwareVersion: FirmwareVersion,
  SafetyConfigurationList: SafetyConfigurationList,
  DeviceManager_ServiceVersion: DeviceManager_ServiceVersion,
  DeviceHandles: DeviceHandles,
  RobotiqGripperStatusFlags: RobotiqGripperStatusFlags,
  GripperConfig_SafetyIdentifier: GripperConfig_SafetyIdentifier,
  MotorFeedback: MotorFeedback,
  MotorCommand: MotorCommand,
  CustomDataUnit: CustomDataUnit,
  GripperCyclic_ServiceVersion: GripperCyclic_ServiceVersion,
  GripperCyclic_MessageId: GripperCyclic_MessageId,
  GripperCyclic_Feedback: GripperCyclic_Feedback,
  GripperCyclic_Command: GripperCyclic_Command,
  GripperCyclic_CustomData: GripperCyclic_CustomData,
  I2CData: I2CData,
  UARTPortId: UARTPortId,
  InterconnectConfig_GPIOConfiguration: InterconnectConfig_GPIOConfiguration,
  EthernetDevice: EthernetDevice,
  GPIOMode: GPIOMode,
  EthernetDuplex: EthernetDuplex,
  I2CDeviceIdentification: I2CDeviceIdentification,
  I2CReadRegisterParameter: I2CReadRegisterParameter,
  I2CReadParameter: I2CReadParameter,
  InterconnectConfig_SafetyIdentifier: InterconnectConfig_SafetyIdentifier,
  I2CWriteRegisterParameter: I2CWriteRegisterParameter,
  GPIOIdentifier: GPIOIdentifier,
  GPIOState: GPIOState,
  I2CDeviceAddressing: I2CDeviceAddressing,
  GPIOPull: GPIOPull,
  I2CRegisterAddressSize: I2CRegisterAddressSize,
  GPIOIdentification: GPIOIdentification,
  I2CWriteParameter: I2CWriteParameter,
  I2CDevice: I2CDevice,
  GPIOValue: GPIOValue,
  I2CConfiguration: I2CConfiguration,
  EthernetConfiguration: EthernetConfiguration,
  InterconnectConfig_ServiceVersion: InterconnectConfig_ServiceVersion,
  EthernetSpeed: EthernetSpeed,
  EthernetDeviceIdentification: EthernetDeviceIdentification,
  I2CMode: I2CMode,
  InterconnectCyclic_Command: InterconnectCyclic_Command,
  InterconnectCyclic_Feedback: InterconnectCyclic_Feedback,
  InterconnectCyclic_CustomData_tool_customData: InterconnectCyclic_CustomData_tool_customData,
  InterconnectCyclic_CustomData: InterconnectCyclic_CustomData,
  InterconnectCyclic_ServiceVersion: InterconnectCyclic_ServiceVersion,
  InterconnectCyclic_Command_tool_command: InterconnectCyclic_Command_tool_command,
  InterconnectCyclic_MessageId: InterconnectCyclic_MessageId,
  InterconnectCyclic_Feedback_tool_feedback: InterconnectCyclic_Feedback_tool_feedback,
  WristType: WristType,
  VisionModuleType: VisionModuleType,
  InterfaceModuleType: InterfaceModuleType,
  CompleteProductConfiguration: CompleteProductConfiguration,
  ProductConfigurationEndEffectorType: ProductConfigurationEndEffectorType,
  BaseType: BaseType,
  EndEffectorType: EndEffectorType,
  ModelId: ModelId,
  ArmLaterality: ArmLaterality,
  SensorFocusAction_action_parameters: SensorFocusAction_action_parameters,
  DistortionCoefficients: DistortionCoefficients,
  BitRate: BitRate,
  Sensor: Sensor,
  OptionIdentifier: OptionIdentifier,
  ExtrinsicParameters: ExtrinsicParameters,
  FrameRate: FrameRate,
  Resolution: Resolution,
  ManualFocus: ManualFocus,
  Option: Option,
  SensorSettings: SensorSettings,
  FocusPoint: FocusPoint,
  TranslationVector: TranslationVector,
  OptionValue: OptionValue,
  SensorFocusAction: SensorFocusAction,
  FocusAction: FocusAction,
  IntrinsicParameters: IntrinsicParameters,
  VisionConfig_RotationMatrixRow: VisionConfig_RotationMatrixRow,
  VisionNotification: VisionNotification,
  VisionConfig_RotationMatrix: VisionConfig_RotationMatrix,
  SensorIdentifier: SensorIdentifier,
  VisionConfig_ServiceVersion: VisionConfig_ServiceVersion,
  OptionInformation: OptionInformation,
  IntrinsicProfileIdentifier: IntrinsicProfileIdentifier,
  VisionEvent: VisionEvent,
  FollowCartesianTrajectoryFeedback: FollowCartesianTrajectoryFeedback,
  FollowCartesianTrajectoryActionFeedback: FollowCartesianTrajectoryActionFeedback,
  FollowCartesianTrajectoryAction: FollowCartesianTrajectoryAction,
  FollowCartesianTrajectoryActionResult: FollowCartesianTrajectoryActionResult,
  FollowCartesianTrajectoryResult: FollowCartesianTrajectoryResult,
  FollowCartesianTrajectoryActionGoal: FollowCartesianTrajectoryActionGoal,
  FollowCartesianTrajectoryGoal: FollowCartesianTrajectoryGoal,
};
