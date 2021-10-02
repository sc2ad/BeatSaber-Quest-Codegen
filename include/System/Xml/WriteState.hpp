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
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.WriteState
  // [TokenAttribute] Offset: FFFFFFFF
  struct WriteState/*, public System::Enum*/ {
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
    // Creating value type constructor for type: WriteState
    constexpr WriteState(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Xml.WriteState Start
    static constexpr const int Start = 0;
    // Get static field: static public System.Xml.WriteState Start
    static System::Xml::WriteState _get_Start();
    // Set static field: static public System.Xml.WriteState Start
    static void _set_Start(System::Xml::WriteState value);
    // static field const value: static public System.Xml.WriteState Prolog
    static constexpr const int Prolog = 1;
    // Get static field: static public System.Xml.WriteState Prolog
    static System::Xml::WriteState _get_Prolog();
    // Set static field: static public System.Xml.WriteState Prolog
    static void _set_Prolog(System::Xml::WriteState value);
    // static field const value: static public System.Xml.WriteState Element
    static constexpr const int Element = 2;
    // Get static field: static public System.Xml.WriteState Element
    static System::Xml::WriteState _get_Element();
    // Set static field: static public System.Xml.WriteState Element
    static void _set_Element(System::Xml::WriteState value);
    // static field const value: static public System.Xml.WriteState Attribute
    static constexpr const int Attribute = 3;
    // Get static field: static public System.Xml.WriteState Attribute
    static System::Xml::WriteState _get_Attribute();
    // Set static field: static public System.Xml.WriteState Attribute
    static void _set_Attribute(System::Xml::WriteState value);
    // static field const value: static public System.Xml.WriteState Content
    static constexpr const int Content = 4;
    // Get static field: static public System.Xml.WriteState Content
    static System::Xml::WriteState _get_Content();
    // Set static field: static public System.Xml.WriteState Content
    static void _set_Content(System::Xml::WriteState value);
    // static field const value: static public System.Xml.WriteState Closed
    static constexpr const int Closed = 5;
    // Get static field: static public System.Xml.WriteState Closed
    static System::Xml::WriteState _get_Closed();
    // Set static field: static public System.Xml.WriteState Closed
    static void _set_Closed(System::Xml::WriteState value);
    // static field const value: static public System.Xml.WriteState Error
    static constexpr const int Error = 6;
    // Get static field: static public System.Xml.WriteState Error
    static System::Xml::WriteState _get_Error();
    // Set static field: static public System.Xml.WriteState Error
    static void _set_Error(System::Xml::WriteState value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Xml.WriteState
  #pragma pack(pop)
  static check_size<sizeof(WriteState), 0 + sizeof(int)> __System_Xml_WriteStateSizeCheck;
  static_assert(sizeof(WriteState) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::WriteState, "System.Xml", "WriteState");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
