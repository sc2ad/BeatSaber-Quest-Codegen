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
  // Forward declaring type: JsonToken
  struct JsonToken;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonToken, "Newtonsoft.Json", "JsonToken");
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.JsonToken
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 10EDF8C
  struct JsonToken/*, public ::System::Enum*/ {
    public:
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    public:
    // Creating value type constructor for type: JsonToken
    constexpr JsonToken(int value_ = {}) noexcept : value{value_} {}
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
    // static field const value: static public Newtonsoft.Json.JsonToken None
    static constexpr const int None = 0;
    // Get static field: static public Newtonsoft.Json.JsonToken None
    static ::Newtonsoft::Json::JsonToken _get_None();
    // Set static field: static public Newtonsoft.Json.JsonToken None
    static void _set_None(::Newtonsoft::Json::JsonToken value);
    // static field const value: static public Newtonsoft.Json.JsonToken StartObject
    static constexpr const int StartObject = 1;
    // Get static field: static public Newtonsoft.Json.JsonToken StartObject
    static ::Newtonsoft::Json::JsonToken _get_StartObject();
    // Set static field: static public Newtonsoft.Json.JsonToken StartObject
    static void _set_StartObject(::Newtonsoft::Json::JsonToken value);
    // static field const value: static public Newtonsoft.Json.JsonToken StartArray
    static constexpr const int StartArray = 2;
    // Get static field: static public Newtonsoft.Json.JsonToken StartArray
    static ::Newtonsoft::Json::JsonToken _get_StartArray();
    // Set static field: static public Newtonsoft.Json.JsonToken StartArray
    static void _set_StartArray(::Newtonsoft::Json::JsonToken value);
    // static field const value: static public Newtonsoft.Json.JsonToken StartConstructor
    static constexpr const int StartConstructor = 3;
    // Get static field: static public Newtonsoft.Json.JsonToken StartConstructor
    static ::Newtonsoft::Json::JsonToken _get_StartConstructor();
    // Set static field: static public Newtonsoft.Json.JsonToken StartConstructor
    static void _set_StartConstructor(::Newtonsoft::Json::JsonToken value);
    // static field const value: static public Newtonsoft.Json.JsonToken PropertyName
    static constexpr const int PropertyName = 4;
    // Get static field: static public Newtonsoft.Json.JsonToken PropertyName
    static ::Newtonsoft::Json::JsonToken _get_PropertyName();
    // Set static field: static public Newtonsoft.Json.JsonToken PropertyName
    static void _set_PropertyName(::Newtonsoft::Json::JsonToken value);
    // static field const value: static public Newtonsoft.Json.JsonToken Comment
    static constexpr const int Comment = 5;
    // Get static field: static public Newtonsoft.Json.JsonToken Comment
    static ::Newtonsoft::Json::JsonToken _get_Comment();
    // Set static field: static public Newtonsoft.Json.JsonToken Comment
    static void _set_Comment(::Newtonsoft::Json::JsonToken value);
    // static field const value: static public Newtonsoft.Json.JsonToken Raw
    static constexpr const int Raw = 6;
    // Get static field: static public Newtonsoft.Json.JsonToken Raw
    static ::Newtonsoft::Json::JsonToken _get_Raw();
    // Set static field: static public Newtonsoft.Json.JsonToken Raw
    static void _set_Raw(::Newtonsoft::Json::JsonToken value);
    // static field const value: static public Newtonsoft.Json.JsonToken Integer
    static constexpr const int Integer = 7;
    // Get static field: static public Newtonsoft.Json.JsonToken Integer
    static ::Newtonsoft::Json::JsonToken _get_Integer();
    // Set static field: static public Newtonsoft.Json.JsonToken Integer
    static void _set_Integer(::Newtonsoft::Json::JsonToken value);
    // static field const value: static public Newtonsoft.Json.JsonToken Float
    static constexpr const int Float = 8;
    // Get static field: static public Newtonsoft.Json.JsonToken Float
    static ::Newtonsoft::Json::JsonToken _get_Float();
    // Set static field: static public Newtonsoft.Json.JsonToken Float
    static void _set_Float(::Newtonsoft::Json::JsonToken value);
    // static field const value: static public Newtonsoft.Json.JsonToken String
    static constexpr const int String = 9;
    // Get static field: static public Newtonsoft.Json.JsonToken String
    static ::Newtonsoft::Json::JsonToken _get_String();
    // Set static field: static public Newtonsoft.Json.JsonToken String
    static void _set_String(::Newtonsoft::Json::JsonToken value);
    // static field const value: static public Newtonsoft.Json.JsonToken Boolean
    static constexpr const int Boolean = 10;
    // Get static field: static public Newtonsoft.Json.JsonToken Boolean
    static ::Newtonsoft::Json::JsonToken _get_Boolean();
    // Set static field: static public Newtonsoft.Json.JsonToken Boolean
    static void _set_Boolean(::Newtonsoft::Json::JsonToken value);
    // static field const value: static public Newtonsoft.Json.JsonToken Null
    static constexpr const int Null = 11;
    // Get static field: static public Newtonsoft.Json.JsonToken Null
    static ::Newtonsoft::Json::JsonToken _get_Null();
    // Set static field: static public Newtonsoft.Json.JsonToken Null
    static void _set_Null(::Newtonsoft::Json::JsonToken value);
    // static field const value: static public Newtonsoft.Json.JsonToken Undefined
    static constexpr const int Undefined = 12;
    // Get static field: static public Newtonsoft.Json.JsonToken Undefined
    static ::Newtonsoft::Json::JsonToken _get_Undefined();
    // Set static field: static public Newtonsoft.Json.JsonToken Undefined
    static void _set_Undefined(::Newtonsoft::Json::JsonToken value);
    // static field const value: static public Newtonsoft.Json.JsonToken EndObject
    static constexpr const int EndObject = 13;
    // Get static field: static public Newtonsoft.Json.JsonToken EndObject
    static ::Newtonsoft::Json::JsonToken _get_EndObject();
    // Set static field: static public Newtonsoft.Json.JsonToken EndObject
    static void _set_EndObject(::Newtonsoft::Json::JsonToken value);
    // static field const value: static public Newtonsoft.Json.JsonToken EndArray
    static constexpr const int EndArray = 14;
    // Get static field: static public Newtonsoft.Json.JsonToken EndArray
    static ::Newtonsoft::Json::JsonToken _get_EndArray();
    // Set static field: static public Newtonsoft.Json.JsonToken EndArray
    static void _set_EndArray(::Newtonsoft::Json::JsonToken value);
    // static field const value: static public Newtonsoft.Json.JsonToken EndConstructor
    static constexpr const int EndConstructor = 15;
    // Get static field: static public Newtonsoft.Json.JsonToken EndConstructor
    static ::Newtonsoft::Json::JsonToken _get_EndConstructor();
    // Set static field: static public Newtonsoft.Json.JsonToken EndConstructor
    static void _set_EndConstructor(::Newtonsoft::Json::JsonToken value);
    // static field const value: static public Newtonsoft.Json.JsonToken Date
    static constexpr const int Date = 16;
    // Get static field: static public Newtonsoft.Json.JsonToken Date
    static ::Newtonsoft::Json::JsonToken _get_Date();
    // Set static field: static public Newtonsoft.Json.JsonToken Date
    static void _set_Date(::Newtonsoft::Json::JsonToken value);
    // static field const value: static public Newtonsoft.Json.JsonToken Bytes
    static constexpr const int Bytes = 17;
    // Get static field: static public Newtonsoft.Json.JsonToken Bytes
    static ::Newtonsoft::Json::JsonToken _get_Bytes();
    // Set static field: static public Newtonsoft.Json.JsonToken Bytes
    static void _set_Bytes(::Newtonsoft::Json::JsonToken value);
    // Get instance field reference: public System.Int32 value__
    [[deprecated("Use field access instead!")]] int& dyn_value__();
  }; // Newtonsoft.Json.JsonToken
  #pragma pack(pop)
  static check_size<sizeof(JsonToken), 0 + sizeof(int)> __Newtonsoft_Json_JsonTokenSizeCheck;
  static_assert(sizeof(JsonToken) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
