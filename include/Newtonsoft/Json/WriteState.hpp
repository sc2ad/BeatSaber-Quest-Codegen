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
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Forward declaring type: WriteState
  struct WriteState;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::WriteState, "Newtonsoft.Json", "WriteState");
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.WriteState
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 122B284
  struct WriteState/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: WriteState
    constexpr WriteState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Newtonsoft.Json.WriteState Error
    static constexpr const int Error = 0;
    // Get static field: static public Newtonsoft.Json.WriteState Error
    static ::Newtonsoft::Json::WriteState _get_Error();
    // Set static field: static public Newtonsoft.Json.WriteState Error
    static void _set_Error(::Newtonsoft::Json::WriteState value);
    // static field const value: static public Newtonsoft.Json.WriteState Closed
    static constexpr const int Closed = 1;
    // Get static field: static public Newtonsoft.Json.WriteState Closed
    static ::Newtonsoft::Json::WriteState _get_Closed();
    // Set static field: static public Newtonsoft.Json.WriteState Closed
    static void _set_Closed(::Newtonsoft::Json::WriteState value);
    // static field const value: static public Newtonsoft.Json.WriteState Object
    static constexpr const int Object = 2;
    // Get static field: static public Newtonsoft.Json.WriteState Object
    static ::Newtonsoft::Json::WriteState _get_Object();
    // Set static field: static public Newtonsoft.Json.WriteState Object
    static void _set_Object(::Newtonsoft::Json::WriteState value);
    // static field const value: static public Newtonsoft.Json.WriteState Array
    static constexpr const int Array = 3;
    // Get static field: static public Newtonsoft.Json.WriteState Array
    static ::Newtonsoft::Json::WriteState _get_Array();
    // Set static field: static public Newtonsoft.Json.WriteState Array
    static void _set_Array(::Newtonsoft::Json::WriteState value);
    // static field const value: static public Newtonsoft.Json.WriteState Constructor
    static constexpr const int Constructor = 4;
    // Get static field: static public Newtonsoft.Json.WriteState Constructor
    static ::Newtonsoft::Json::WriteState _get_Constructor();
    // Set static field: static public Newtonsoft.Json.WriteState Constructor
    static void _set_Constructor(::Newtonsoft::Json::WriteState value);
    // static field const value: static public Newtonsoft.Json.WriteState Property
    static constexpr const int Property = 5;
    // Get static field: static public Newtonsoft.Json.WriteState Property
    static ::Newtonsoft::Json::WriteState _get_Property();
    // Set static field: static public Newtonsoft.Json.WriteState Property
    static void _set_Property(::Newtonsoft::Json::WriteState value);
    // static field const value: static public Newtonsoft.Json.WriteState Start
    static constexpr const int Start = 6;
    // Get static field: static public Newtonsoft.Json.WriteState Start
    static ::Newtonsoft::Json::WriteState _get_Start();
    // Set static field: static public Newtonsoft.Json.WriteState Start
    static void _set_Start(::Newtonsoft::Json::WriteState value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // Newtonsoft.Json.WriteState
  #pragma pack(pop)
  static check_size<sizeof(WriteState), 0 + sizeof(int)> __Newtonsoft_Json_WriteStateSizeCheck;
  static_assert(sizeof(WriteState) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
