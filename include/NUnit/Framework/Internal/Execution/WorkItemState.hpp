// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: NUnit.Framework.Internal.Execution
namespace NUnit::Framework::Internal::Execution {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Execution.WorkItemState
  // [TokenAttribute] Offset: FFFFFFFF
  struct WorkItemState/*, public System::Enum*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: WorkItemState
    constexpr WorkItemState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public NUnit.Framework.Internal.Execution.WorkItemState Ready
    static constexpr const int Ready = 0;
    // Get static field: static public NUnit.Framework.Internal.Execution.WorkItemState Ready
    static NUnit::Framework::Internal::Execution::WorkItemState _get_Ready();
    // Set static field: static public NUnit.Framework.Internal.Execution.WorkItemState Ready
    static void _set_Ready(NUnit::Framework::Internal::Execution::WorkItemState value);
    // static field const value: static public NUnit.Framework.Internal.Execution.WorkItemState Running
    static constexpr const int Running = 1;
    // Get static field: static public NUnit.Framework.Internal.Execution.WorkItemState Running
    static NUnit::Framework::Internal::Execution::WorkItemState _get_Running();
    // Set static field: static public NUnit.Framework.Internal.Execution.WorkItemState Running
    static void _set_Running(NUnit::Framework::Internal::Execution::WorkItemState value);
    // static field const value: static public NUnit.Framework.Internal.Execution.WorkItemState Complete
    static constexpr const int Complete = 2;
    // Get static field: static public NUnit.Framework.Internal.Execution.WorkItemState Complete
    static NUnit::Framework::Internal::Execution::WorkItemState _get_Complete();
    // Set static field: static public NUnit.Framework.Internal.Execution.WorkItemState Complete
    static void _set_Complete(NUnit::Framework::Internal::Execution::WorkItemState value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // NUnit.Framework.Internal.Execution.WorkItemState
  #pragma pack(pop)
  static check_size<sizeof(WorkItemState), 0 + sizeof(int)> __NUnit_Framework_Internal_Execution_WorkItemStateSizeCheck;
  static_assert(sizeof(WorkItemState) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Execution::WorkItemState, "NUnit.Framework.Internal.Execution", "WorkItemState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
