// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Data
namespace System::Data {
  // Forward declaring type: DataViewRowState
  struct DataViewRowState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Data::DataViewRowState, "System.Data", "DataViewRowState");
// Type namespace: System.Data
namespace System::Data {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Data.DataViewRowState
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct DataViewRowState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: DataViewRowState
    constexpr DataViewRowState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Data.DataViewRowState None
    static constexpr const int None = 0;
    // Get static field: static public System.Data.DataViewRowState None
    static ::System::Data::DataViewRowState _get_None();
    // Set static field: static public System.Data.DataViewRowState None
    static void _set_None(::System::Data::DataViewRowState value);
    // static field const value: static public System.Data.DataViewRowState Unchanged
    static constexpr const int Unchanged = 2;
    // Get static field: static public System.Data.DataViewRowState Unchanged
    static ::System::Data::DataViewRowState _get_Unchanged();
    // Set static field: static public System.Data.DataViewRowState Unchanged
    static void _set_Unchanged(::System::Data::DataViewRowState value);
    // static field const value: static public System.Data.DataViewRowState Added
    static constexpr const int Added = 4;
    // Get static field: static public System.Data.DataViewRowState Added
    static ::System::Data::DataViewRowState _get_Added();
    // Set static field: static public System.Data.DataViewRowState Added
    static void _set_Added(::System::Data::DataViewRowState value);
    // static field const value: static public System.Data.DataViewRowState Deleted
    static constexpr const int Deleted = 8;
    // Get static field: static public System.Data.DataViewRowState Deleted
    static ::System::Data::DataViewRowState _get_Deleted();
    // Set static field: static public System.Data.DataViewRowState Deleted
    static void _set_Deleted(::System::Data::DataViewRowState value);
    // static field const value: static public System.Data.DataViewRowState ModifiedCurrent
    static constexpr const int ModifiedCurrent = 16;
    // Get static field: static public System.Data.DataViewRowState ModifiedCurrent
    static ::System::Data::DataViewRowState _get_ModifiedCurrent();
    // Set static field: static public System.Data.DataViewRowState ModifiedCurrent
    static void _set_ModifiedCurrent(::System::Data::DataViewRowState value);
    // static field const value: static public System.Data.DataViewRowState ModifiedOriginal
    static constexpr const int ModifiedOriginal = 32;
    // Get static field: static public System.Data.DataViewRowState ModifiedOriginal
    static ::System::Data::DataViewRowState _get_ModifiedOriginal();
    // Set static field: static public System.Data.DataViewRowState ModifiedOriginal
    static void _set_ModifiedOriginal(::System::Data::DataViewRowState value);
    // static field const value: static public System.Data.DataViewRowState OriginalRows
    static constexpr const int OriginalRows = 42;
    // Get static field: static public System.Data.DataViewRowState OriginalRows
    static ::System::Data::DataViewRowState _get_OriginalRows();
    // Set static field: static public System.Data.DataViewRowState OriginalRows
    static void _set_OriginalRows(::System::Data::DataViewRowState value);
    // static field const value: static public System.Data.DataViewRowState CurrentRows
    static constexpr const int CurrentRows = 22;
    // Get static field: static public System.Data.DataViewRowState CurrentRows
    static ::System::Data::DataViewRowState _get_CurrentRows();
    // Set static field: static public System.Data.DataViewRowState CurrentRows
    static void _set_CurrentRows(::System::Data::DataViewRowState value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Data.DataViewRowState
  #pragma pack(pop)
  static check_size<sizeof(DataViewRowState), 0 + sizeof(int)> __System_Data_DataViewRowStateSizeCheck;
  static_assert(sizeof(DataViewRowState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
