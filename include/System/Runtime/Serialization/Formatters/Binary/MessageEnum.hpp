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
// Type namespace: System.Runtime.Serialization.Formatters.Binary
namespace System::Runtime::Serialization::Formatters::Binary {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.Formatters.Binary.MessageEnum
  // [TokenAttribute] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct MessageEnum/*, public System::Enum*/ {
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
    // Creating value type constructor for type: MessageEnum
    constexpr MessageEnum(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum NoArgs
    static constexpr const int NoArgs = 1;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum NoArgs
    static System::Runtime::Serialization::Formatters::Binary::MessageEnum _get_NoArgs();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum NoArgs
    static void _set_NoArgs(System::Runtime::Serialization::Formatters::Binary::MessageEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum ArgsInline
    static constexpr const int ArgsInline = 2;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum ArgsInline
    static System::Runtime::Serialization::Formatters::Binary::MessageEnum _get_ArgsInline();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum ArgsInline
    static void _set_ArgsInline(System::Runtime::Serialization::Formatters::Binary::MessageEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum ArgsIsArray
    static constexpr const int ArgsIsArray = 4;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum ArgsIsArray
    static System::Runtime::Serialization::Formatters::Binary::MessageEnum _get_ArgsIsArray();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum ArgsIsArray
    static void _set_ArgsIsArray(System::Runtime::Serialization::Formatters::Binary::MessageEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum ArgsInArray
    static constexpr const int ArgsInArray = 8;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum ArgsInArray
    static System::Runtime::Serialization::Formatters::Binary::MessageEnum _get_ArgsInArray();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum ArgsInArray
    static void _set_ArgsInArray(System::Runtime::Serialization::Formatters::Binary::MessageEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum NoContext
    static constexpr const int NoContext = 16;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum NoContext
    static System::Runtime::Serialization::Formatters::Binary::MessageEnum _get_NoContext();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum NoContext
    static void _set_NoContext(System::Runtime::Serialization::Formatters::Binary::MessageEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum ContextInline
    static constexpr const int ContextInline = 32;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum ContextInline
    static System::Runtime::Serialization::Formatters::Binary::MessageEnum _get_ContextInline();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum ContextInline
    static void _set_ContextInline(System::Runtime::Serialization::Formatters::Binary::MessageEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum ContextInArray
    static constexpr const int ContextInArray = 64;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum ContextInArray
    static System::Runtime::Serialization::Formatters::Binary::MessageEnum _get_ContextInArray();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum ContextInArray
    static void _set_ContextInArray(System::Runtime::Serialization::Formatters::Binary::MessageEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum MethodSignatureInArray
    static constexpr const int MethodSignatureInArray = 128;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum MethodSignatureInArray
    static System::Runtime::Serialization::Formatters::Binary::MessageEnum _get_MethodSignatureInArray();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum MethodSignatureInArray
    static void _set_MethodSignatureInArray(System::Runtime::Serialization::Formatters::Binary::MessageEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum PropertyInArray
    static constexpr const int PropertyInArray = 256;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum PropertyInArray
    static System::Runtime::Serialization::Formatters::Binary::MessageEnum _get_PropertyInArray();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum PropertyInArray
    static void _set_PropertyInArray(System::Runtime::Serialization::Formatters::Binary::MessageEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum NoReturnValue
    static constexpr const int NoReturnValue = 512;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum NoReturnValue
    static System::Runtime::Serialization::Formatters::Binary::MessageEnum _get_NoReturnValue();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum NoReturnValue
    static void _set_NoReturnValue(System::Runtime::Serialization::Formatters::Binary::MessageEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum ReturnValueVoid
    static constexpr const int ReturnValueVoid = 1024;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum ReturnValueVoid
    static System::Runtime::Serialization::Formatters::Binary::MessageEnum _get_ReturnValueVoid();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum ReturnValueVoid
    static void _set_ReturnValueVoid(System::Runtime::Serialization::Formatters::Binary::MessageEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum ReturnValueInline
    static constexpr const int ReturnValueInline = 2048;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum ReturnValueInline
    static System::Runtime::Serialization::Formatters::Binary::MessageEnum _get_ReturnValueInline();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum ReturnValueInline
    static void _set_ReturnValueInline(System::Runtime::Serialization::Formatters::Binary::MessageEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum ReturnValueInArray
    static constexpr const int ReturnValueInArray = 4096;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum ReturnValueInArray
    static System::Runtime::Serialization::Formatters::Binary::MessageEnum _get_ReturnValueInArray();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum ReturnValueInArray
    static void _set_ReturnValueInArray(System::Runtime::Serialization::Formatters::Binary::MessageEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum ExceptionInArray
    static constexpr const int ExceptionInArray = 8192;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum ExceptionInArray
    static System::Runtime::Serialization::Formatters::Binary::MessageEnum _get_ExceptionInArray();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum ExceptionInArray
    static void _set_ExceptionInArray(System::Runtime::Serialization::Formatters::Binary::MessageEnum value);
    // static field const value: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum GenericMethod
    static constexpr const int GenericMethod = 32768;
    // Get static field: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum GenericMethod
    static System::Runtime::Serialization::Formatters::Binary::MessageEnum _get_GenericMethod();
    // Set static field: static public System.Runtime.Serialization.Formatters.Binary.MessageEnum GenericMethod
    static void _set_GenericMethod(System::Runtime::Serialization::Formatters::Binary::MessageEnum value);
    // Get instance field reference: public System.Int32 value__
    int& dyn_value__();
  }; // System.Runtime.Serialization.Formatters.Binary.MessageEnum
  #pragma pack(pop)
  static check_size<sizeof(MessageEnum), 0 + sizeof(int)> __System_Runtime_Serialization_Formatters_Binary_MessageEnumSizeCheck;
  static_assert(sizeof(MessageEnum) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::Formatters::Binary::MessageEnum, "System.Runtime.Serialization.Formatters.Binary", "MessageEnum");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
