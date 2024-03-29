// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Tayx.Graphy.GraphyDebugger
#include "Tayx/Graphy/GraphyDebugger.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::GraphyDebugger::ConditionEvaluation, "Tayx.Graphy", "GraphyDebugger/ConditionEvaluation");
// Type namespace: Tayx.Graphy
namespace Tayx::Graphy {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Tayx.Graphy.GraphyDebugger/Tayx.Graphy.ConditionEvaluation
  // [TokenAttribute] Offset: FFFFFFFF
  struct GraphyDebugger::ConditionEvaluation/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: ConditionEvaluation
    constexpr ConditionEvaluation(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating interface conversion operator: i_Enum
    inline ::System::Enum* i_Enum() noexcept {
      return reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Tayx.Graphy.GraphyDebugger/Tayx.Graphy.ConditionEvaluation All_conditions_must_be_met
    static constexpr const int All_conditions_must_be_met = 0;
    // Get static field: static public Tayx.Graphy.GraphyDebugger/Tayx.Graphy.ConditionEvaluation All_conditions_must_be_met
    static ::Tayx::Graphy::GraphyDebugger::ConditionEvaluation _get_All_conditions_must_be_met();
    // Set static field: static public Tayx.Graphy.GraphyDebugger/Tayx.Graphy.ConditionEvaluation All_conditions_must_be_met
    static void _set_All_conditions_must_be_met(::Tayx::Graphy::GraphyDebugger::ConditionEvaluation value);
    // static field const value: static public Tayx.Graphy.GraphyDebugger/Tayx.Graphy.ConditionEvaluation Only_one_condition_has_to_be_met
    static constexpr const int Only_one_condition_has_to_be_met = 1;
    // Get static field: static public Tayx.Graphy.GraphyDebugger/Tayx.Graphy.ConditionEvaluation Only_one_condition_has_to_be_met
    static ::Tayx::Graphy::GraphyDebugger::ConditionEvaluation _get_Only_one_condition_has_to_be_met();
    // Set static field: static public Tayx.Graphy.GraphyDebugger/Tayx.Graphy.ConditionEvaluation Only_one_condition_has_to_be_met
    static void _set_Only_one_condition_has_to_be_met(::Tayx::Graphy::GraphyDebugger::ConditionEvaluation value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Tayx.Graphy.GraphyDebugger/Tayx.Graphy.ConditionEvaluation
  #pragma pack(pop)
  static check_size<sizeof(GraphyDebugger::ConditionEvaluation), 0 + sizeof(int)> __Tayx_Graphy_GraphyDebugger_ConditionEvaluationSizeCheck;
  static_assert(sizeof(GraphyDebugger::ConditionEvaluation) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
