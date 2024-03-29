#include "common_dbc.h"

namespace {

const Signal sigs_128[] = {
    {
      .name = "State1",
      .b1 = 16,
      .b2 = 8,
      .bo = 40,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "State2",
      .b1 = 24,
      .b2 = 4,
      .bo = 36,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Counter1",
      .b1 = 24,
      .b2 = 4,
      .bo = 36,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_168[] = {
    {
      .name = "EngineTorque",
      .b1 = 8,
      .b2 = 16,
      .bo = 40,
      .is_signed = true,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "EngineTorqueWoInterv",
      .b1 = 24,
      .b2 = 16,
      .bo = 24,
      .is_signed = true,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "BrakePressed",
      .b1 = 58,
      .b2 = 1,
      .bo = 5,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Brake_active2",
      .b1 = 57,
      .b2 = 1,
      .bo = 6,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_170[] = {
    {
      .name = "unknown",
      .b1 = 0,
      .b2 = 8,
      .bo = 56,
      .is_signed = true,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Counter1",
      .b1 = 8,
      .b2 = 4,
      .bo = 52,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "AcceleratorPedalPercentage",
      .b1 = 16,
      .b2 = 16,
      .bo = 32,
      .is_signed = false,
      .factor = 0.01,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "EngineSpeed",
      .b1 = 32,
      .b2 = 16,
      .bo = 16,
      .is_signed = true,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "ThrottlelPressed",
      .b1 = 53,
      .b2 = 1,
      .bo = 10,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "AcceleratorPedalPressed",
      .b1 = 51,
      .b2 = 1,
      .bo = 12,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "KickDownPressed",
      .b1 = 50,
      .b2 = 1,
      .bo = 13,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "CruisePedalActive",
      .b1 = 49,
      .b2 = 1,
      .bo = 14,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "CruisePedalInactive",
      .b1 = 48,
      .b2 = 1,
      .bo = 15,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_191[] = {
    {
      .name = "Counter",
      .b1 = 12,
      .b2 = 4,
      .bo = 48,
      .is_signed = true,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "TorqueReq",
      .b1 = 16,
      .b2 = 11,
      .bo = 37,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_196[] = {
    {
      .name = "SteeringPosition",
      .b1 = 0,
      .b2 = 16,
      .bo = 48,
      .is_signed = true,
      .factor = 0.0439453125,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "SteeringSpeed",
      .b1 = 24,
      .b2 = 16,
      .bo = 24,
      .is_signed = true,
      .factor = 0.0439453125,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_200[] = {
    {
      .name = "SteeringPosition",
      .b1 = 0,
      .b2 = 16,
      .bo = 48,
      .is_signed = true,
      .factor = 0.0439453125,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "SteeringSpeed",
      .b1 = 24,
      .b2 = 16,
      .bo = 24,
      .is_signed = true,
      .factor = 0.0439453125,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_201[] = {
    {
      .name = "SteeringPosition",
      .b1 = 0,
      .b2 = 16,
      .bo = 48,
      .is_signed = true,
      .factor = 0.0439453125,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Counter1",
      .b1 = 16,
      .b2 = 4,
      .bo = 44,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "SteeringPositionComplementLow",
      .b1 = 24,
      .b2 = 11,
      .bo = 29,
      .is_signed = true,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "WeirdCounter",
      .b1 = 44,
      .b2 = 4,
      .bo = 16,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_205[] = {
    {
      .name = "NEW_SIGNAL_1",
      .b1 = 0,
      .b2 = 8,
      .bo = 56,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "NEW_SIGNAL_2",
      .b1 = 8,
      .b2 = 8,
      .bo = 48,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "NEW_SIGNAL_3",
      .b1 = 16,
      .b2 = 8,
      .bo = 40,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "NEW_SIGNAL_4",
      .b1 = 24,
      .b2 = 8,
      .bo = 32,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "NEW_SIGNAL_5",
      .b1 = 32,
      .b2 = 8,
      .bo = 24,
      .is_signed = true,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "NEW_SIGNAL_6",
      .b1 = 40,
      .b2 = 8,
      .bo = 16,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Counter1",
      .b1 = 48,
      .b2 = 4,
      .bo = 12,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "NEW_SIGNAL_7",
      .b1 = 56,
      .b2 = 8,
      .bo = 0,
      .is_signed = true,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_206[] = {
    {
      .name = "Wheel1",
      .b1 = 0,
      .b2 = 16,
      .bo = 48,
      .is_signed = true,
      .factor = 0.0643699,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Wheel2",
      .b1 = 16,
      .b2 = 16,
      .bo = 32,
      .is_signed = true,
      .factor = 0.0643699,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Wheel3",
      .b1 = 32,
      .b2 = 16,
      .bo = 16,
      .is_signed = true,
      .factor = 0.0643699,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Wheel4",
      .b1 = 48,
      .b2 = 16,
      .bo = 0,
      .is_signed = true,
      .factor = 0.0643699,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_209[] = {
    {
      .name = "LateralAcceleration",
      .b1 = 0,
      .b2 = 16,
      .bo = 48,
      .is_signed = true,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LongitudalAcceleration",
      .b1 = 32,
      .b2 = 16,
      .bo = 16,
      .is_signed = true,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_212[] = {
    {
      .name = "State1",
      .b1 = 40,
      .b2 = 8,
      .bo = 16,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Counter1",
      .b1 = 48,
      .b2 = 8,
      .bo = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Counter2",
      .b1 = 56,
      .b2 = 8,
      .bo = 0,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_304[] = {
    {
      .name = "IgnitionOff",
      .b1 = 17,
      .b2 = 1,
      .bo = 46,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "AccOn",
      .b1 = 16,
      .b2 = 1,
      .bo = 47,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_320[] = {
    {
      .name = "State",
      .b1 = 0,
      .b2 = 8,
      .bo = 56,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_403[] = {
    {
      .name = "Counter",
      .b1 = 0,
      .b2 = 8,
      .bo = 56,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "CruiseControlSetpointSpeed",
      .b1 = 8,
      .b2 = 8,
      .bo = 48,
      .is_signed = false,
      .factor = 1,
      .offset = -2.0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "CruiseActive",
      .b1 = 44,
      .b2 = 1,
      .bo = 19,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "CruiseSpeedChangeRequest",
      .b1 = 55,
      .b2 = 1,
      .bo = 8,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_404[] = {
    {
      .name = "Counter1",
      .b1 = 4,
      .b2 = 4,
      .bo = 56,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "notCancel_0xF",
      .b1 = 0,
      .b2 = 4,
      .bo = 60,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Counter2",
      .b1 = 12,
      .b2 = 4,
      .bo = 48,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "requests_0xF",
      .b1 = 8,
      .b2 = 4,
      .bo = 52,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "plus1mph_request",
      .b1 = 23,
      .b2 = 1,
      .bo = 40,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "plus5mph_request",
      .b1 = 22,
      .b2 = 1,
      .bo = 41,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "minus1mph_request",
      .b1 = 21,
      .b2 = 1,
      .bo = 42,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "minus5mph_request",
      .b1 = 20,
      .b2 = 1,
      .bo = 43,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Cancel_request_up_or_down_stalk",
      .b1 = 19,
      .b2 = 1,
      .bo = 44,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Resume_request",
      .b1 = 17,
      .b2 = 1,
      .bo = 46,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Cancel_request_up_stalk",
      .b1 = 16,
      .b2 = 1,
      .bo = 47,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "setMe_0xFC",
      .b1 = 24,
      .b2 = 8,
      .bo = 32,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_408[] = {
    {
      .name = "Gear",
      .b1 = 0,
      .b2 = 8,
      .bo = 56,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_416[] = {
    {
      .name = "VehicleSpeed",
      .b1 = 0,
      .b2 = 12,
      .bo = 52,
      .is_signed = false,
      .factor = 0.103,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_470[] = {
    {
      .name = "Telephone",
      .b1 = 7,
      .b2 = 1,
      .bo = 56,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Volume_DOWN",
      .b1 = 5,
      .b2 = 1,
      .bo = 58,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Volume_UP",
      .b1 = 4,
      .b2 = 1,
      .bo = 59,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Previous_down",
      .b1 = 3,
      .b2 = 1,
      .bo = 60,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "Next_up",
      .b1 = 2,
      .b2 = 1,
      .bo = 61,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "VoiceControl",
      .b1 = 15,
      .b2 = 1,
      .bo = 48,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_502[] = {
    {
      .name = "HoldActivated",
      .b1 = 0,
      .b2 = 1,
      .bo = 63,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "LeftTurn",
      .b1 = 4,
      .b2 = 1,
      .bo = 59,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "RightTurn",
      .b1 = 2,
      .b2 = 1,
      .bo = 61,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "TurnSignalActive",
      .b1 = 15,
      .b2 = 1,
      .bo = 48,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "TurnSignalIdle",
      .b1 = 14,
      .b2 = 1,
      .bo = 49,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_512[] = {
    {
      .name = "CruiseControlSetpointSpeed",
      .b1 = 0,
      .b2 = 8,
      .bo = 56,
      .is_signed = false,
      .factor = 0.25,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "CruiseControlInactiveFlag",
      .b1 = 11,
      .b2 = 1,
      .bo = 52,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
    {
      .name = "CruiseCoontrolActiveFlag",
      .b1 = 10,
      .b2 = 1,
      .bo = 53,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_678[] = {
    {
      .name = "AutoWipersOn",
      .b1 = 0,
      .b2 = 1,
      .bo = 63,
      .is_signed = false,
      .factor = 1,
      .offset = 0,
      .is_little_endian = true,
      .type = SignalType::DEFAULT,
    },
};
const Signal sigs_948[] = {
    {
      .name = "BatteryVoltage",
      .b1 = 0,
      .b2 = 24,
      .bo = 40,
      .is_signed = false,
      .factor = 0.001,
      .offset = 0,
      .is_little_endian = false,
      .type = SignalType::DEFAULT,
    },
};

const Msg msgs[] = {
  {
    .name = "Unknown80",
    .address = 0x80,
    .size = 5,
    .num_sigs = ARRAYSIZE(sigs_128),
    .sigs = sigs_128,
  },
  {
    .name = "EngineAndBrake",
    .address = 0xA8,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_168),
    .sigs = sigs_168,
  },
  {
    .name = "AccPedal",
    .address = 0xAA,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_170),
    .sigs = sigs_170,
  },
  {
    .name = "RequestedWheelTorqueDriveTrainActiveCruiseControl",
    .address = 0xBF,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_191),
    .sigs = sigs_191,
  },
  {
    .name = "SteeringWheelAngle",
    .address = 0xC4,
    .size = 7,
    .num_sigs = ARRAYSIZE(sigs_196),
    .sigs = sigs_196,
  },
  {
    .name = "SteeringWheelAngle_slow",
    .address = 0xC8,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_200),
    .sigs = sigs_200,
  },
  {
    .name = "SteeringWheelAngle_DSC",
    .address = 0xC9,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_201),
    .sigs = sigs_201,
  },
  {
    .name = "Unknown_cd",
    .address = 0xCD,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_205),
    .sigs = sigs_205,
  },
  {
    .name = "WheelSpeeds",
    .address = 0xCE,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_206),
    .sigs = sigs_206,
  },
  {
    .name = "Accelerometer",
    .address = 0xD1,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_209),
    .sigs = sigs_209,
  },
  {
    .name = "Unknown_d4",
    .address = 0xD4,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_212),
    .sigs = sigs_212,
  },
  {
    .name = "TerminalStatus",
    .address = 0x130,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_304),
    .sigs = sigs_304,
  },
  {
    .name = "Unknown140",
    .address = 0x140,
    .size = 2,
    .num_sigs = ARRAYSIZE(sigs_320),
    .sigs = sigs_320,
  },
  {
    .name = "DynamicCruiseControlStatus",
    .address = 0x193,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_403),
    .sigs = sigs_403,
  },
  {
    .name = "CruiseControl",
    .address = 0x194,
    .size = 4,
    .num_sigs = ARRAYSIZE(sigs_404),
    .sigs = sigs_404,
  },
  {
    .name = "GearSelectorSwitch",
    .address = 0x198,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_408),
    .sigs = sigs_408,
  },
  {
    .name = "Speed",
    .address = 0x1A0,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_416),
    .sigs = sigs_416,
  },
  {
    .name = "SteeringButtons",
    .address = 0x1D6,
    .size = 2,
    .num_sigs = ARRAYSIZE(sigs_470),
    .sigs = sigs_470,
  },
  {
    .name = "TurnSignals",
    .address = 0x1F6,
    .size = 2,
    .num_sigs = ARRAYSIZE(sigs_502),
    .sigs = sigs_502,
  },
  {
    .name = "CruiseControlStatus",
    .address = 0x200,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_512),
    .sigs = sigs_512,
  },
  {
    .name = "WiperSwitch",
    .address = 0x2A6,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_678),
    .sigs = sigs_678,
  },
  {
    .name = "PowerBatteryVoltage",
    .address = 0x3B4,
    .size = 8,
    .num_sigs = ARRAYSIZE(sigs_948),
    .sigs = sigs_948,
  },
};

const Val vals[] = {
    {
      .name = "Gear",
      .address = 0x198,
      .def_val = "1 D 2 S 3 N 4 R 5 P",
      .sigs = sigs_408,
    },
};

}

const DBC bmw_e9x_e8x = {
  .name = "bmw_e9x_e8x",
  .num_msgs = ARRAYSIZE(msgs),
  .msgs = msgs,
  .vals = vals,
  .num_vals = ARRAYSIZE(vals),
};

dbc_init(bmw_e9x_e8x)