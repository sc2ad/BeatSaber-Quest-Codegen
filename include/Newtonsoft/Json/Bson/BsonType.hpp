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
// Type namespace: Newtonsoft.Json.Bson
namespace Newtonsoft::Json::Bson {
  // Forward declaring type: BsonType
  struct BsonType;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Bson::BsonType, "Newtonsoft.Json.Bson", "BsonType");
// Type namespace: Newtonsoft.Json.Bson
namespace Newtonsoft::Json::Bson {
  // Size: 0x1
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Bson.BsonType
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  struct BsonType/*, public ::System::Enum*/ {
    public:
    public:
    // public System.SByte value__
    // Size: 0x1
    // Offset: 0x0
    int8_t value;
    // Field size check
    static_assert(sizeof(int8_t) == 0x1);
    public:
    // Creating value type constructor for type: BsonType
    constexpr BsonType(int8_t value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator ::System::Enum
    operator ::System::Enum() noexcept {
      return *reinterpret_cast<::System::Enum*>(this);
    }
    // Creating interface conversion operator: i_Enum
    inline ::System::Enum* i_Enum() noexcept {
      return reinterpret_cast<::System::Enum*>(this);
    }
    // Creating conversion operator: operator int8_t
    constexpr operator int8_t() const noexcept {
      return value;
    }
    // static field const value: static public Newtonsoft.Json.Bson.BsonType Number
    static constexpr const int8_t Number = 1;
    // Get static field: static public Newtonsoft.Json.Bson.BsonType Number
    static ::Newtonsoft::Json::Bson::BsonType _get_Number();
    // Set static field: static public Newtonsoft.Json.Bson.BsonType Number
    static void _set_Number(::Newtonsoft::Json::Bson::BsonType value);
    // static field const value: static public Newtonsoft.Json.Bson.BsonType String
    static constexpr const int8_t String = 2;
    // Get static field: static public Newtonsoft.Json.Bson.BsonType String
    static ::Newtonsoft::Json::Bson::BsonType _get_String();
    // Set static field: static public Newtonsoft.Json.Bson.BsonType String
    static void _set_String(::Newtonsoft::Json::Bson::BsonType value);
    // static field const value: static public Newtonsoft.Json.Bson.BsonType Object
    static constexpr const int8_t Object = 3;
    // Get static field: static public Newtonsoft.Json.Bson.BsonType Object
    static ::Newtonsoft::Json::Bson::BsonType _get_Object();
    // Set static field: static public Newtonsoft.Json.Bson.BsonType Object
    static void _set_Object(::Newtonsoft::Json::Bson::BsonType value);
    // static field const value: static public Newtonsoft.Json.Bson.BsonType Array
    static constexpr const int8_t Array = 4;
    // Get static field: static public Newtonsoft.Json.Bson.BsonType Array
    static ::Newtonsoft::Json::Bson::BsonType _get_Array();
    // Set static field: static public Newtonsoft.Json.Bson.BsonType Array
    static void _set_Array(::Newtonsoft::Json::Bson::BsonType value);
    // static field const value: static public Newtonsoft.Json.Bson.BsonType Binary
    static constexpr const int8_t Binary = 5;
    // Get static field: static public Newtonsoft.Json.Bson.BsonType Binary
    static ::Newtonsoft::Json::Bson::BsonType _get_Binary();
    // Set static field: static public Newtonsoft.Json.Bson.BsonType Binary
    static void _set_Binary(::Newtonsoft::Json::Bson::BsonType value);
    // static field const value: static public Newtonsoft.Json.Bson.BsonType Undefined
    static constexpr const int8_t Undefined = 6;
    // Get static field: static public Newtonsoft.Json.Bson.BsonType Undefined
    static ::Newtonsoft::Json::Bson::BsonType _get_Undefined();
    // Set static field: static public Newtonsoft.Json.Bson.BsonType Undefined
    static void _set_Undefined(::Newtonsoft::Json::Bson::BsonType value);
    // static field const value: static public Newtonsoft.Json.Bson.BsonType Oid
    static constexpr const int8_t Oid = 7;
    // Get static field: static public Newtonsoft.Json.Bson.BsonType Oid
    static ::Newtonsoft::Json::Bson::BsonType _get_Oid();
    // Set static field: static public Newtonsoft.Json.Bson.BsonType Oid
    static void _set_Oid(::Newtonsoft::Json::Bson::BsonType value);
    // static field const value: static public Newtonsoft.Json.Bson.BsonType Boolean
    static constexpr const int8_t Boolean = 8;
    // Get static field: static public Newtonsoft.Json.Bson.BsonType Boolean
    static ::Newtonsoft::Json::Bson::BsonType _get_Boolean();
    // Set static field: static public Newtonsoft.Json.Bson.BsonType Boolean
    static void _set_Boolean(::Newtonsoft::Json::Bson::BsonType value);
    // static field const value: static public Newtonsoft.Json.Bson.BsonType Date
    static constexpr const int8_t Date = 9;
    // Get static field: static public Newtonsoft.Json.Bson.BsonType Date
    static ::Newtonsoft::Json::Bson::BsonType _get_Date();
    // Set static field: static public Newtonsoft.Json.Bson.BsonType Date
    static void _set_Date(::Newtonsoft::Json::Bson::BsonType value);
    // static field const value: static public Newtonsoft.Json.Bson.BsonType Null
    static constexpr const int8_t Null = 10;
    // Get static field: static public Newtonsoft.Json.Bson.BsonType Null
    static ::Newtonsoft::Json::Bson::BsonType _get_Null();
    // Set static field: static public Newtonsoft.Json.Bson.BsonType Null
    static void _set_Null(::Newtonsoft::Json::Bson::BsonType value);
    // static field const value: static public Newtonsoft.Json.Bson.BsonType Regex
    static constexpr const int8_t Regex = 11;
    // Get static field: static public Newtonsoft.Json.Bson.BsonType Regex
    static ::Newtonsoft::Json::Bson::BsonType _get_Regex();
    // Set static field: static public Newtonsoft.Json.Bson.BsonType Regex
    static void _set_Regex(::Newtonsoft::Json::Bson::BsonType value);
    // static field const value: static public Newtonsoft.Json.Bson.BsonType Reference
    static constexpr const int8_t Reference = 12;
    // Get static field: static public Newtonsoft.Json.Bson.BsonType Reference
    static ::Newtonsoft::Json::Bson::BsonType _get_Reference();
    // Set static field: static public Newtonsoft.Json.Bson.BsonType Reference
    static void _set_Reference(::Newtonsoft::Json::Bson::BsonType value);
    // static field const value: static public Newtonsoft.Json.Bson.BsonType Code
    static constexpr const int8_t Code = 13;
    // Get static field: static public Newtonsoft.Json.Bson.BsonType Code
    static ::Newtonsoft::Json::Bson::BsonType _get_Code();
    // Set static field: static public Newtonsoft.Json.Bson.BsonType Code
    static void _set_Code(::Newtonsoft::Json::Bson::BsonType value);
    // static field const value: static public Newtonsoft.Json.Bson.BsonType Symbol
    static constexpr const int8_t Symbol = 14;
    // Get static field: static public Newtonsoft.Json.Bson.BsonType Symbol
    static ::Newtonsoft::Json::Bson::BsonType _get_Symbol();
    // Set static field: static public Newtonsoft.Json.Bson.BsonType Symbol
    static void _set_Symbol(::Newtonsoft::Json::Bson::BsonType value);
    // static field const value: static public Newtonsoft.Json.Bson.BsonType CodeWScope
    static constexpr const int8_t CodeWScope = 15;
    // Get static field: static public Newtonsoft.Json.Bson.BsonType CodeWScope
    static ::Newtonsoft::Json::Bson::BsonType _get_CodeWScope();
    // Set static field: static public Newtonsoft.Json.Bson.BsonType CodeWScope
    static void _set_CodeWScope(::Newtonsoft::Json::Bson::BsonType value);
    // static field const value: static public Newtonsoft.Json.Bson.BsonType Integer
    static constexpr const int8_t Integer = 16;
    // Get static field: static public Newtonsoft.Json.Bson.BsonType Integer
    static ::Newtonsoft::Json::Bson::BsonType _get_Integer();
    // Set static field: static public Newtonsoft.Json.Bson.BsonType Integer
    static void _set_Integer(::Newtonsoft::Json::Bson::BsonType value);
    // static field const value: static public Newtonsoft.Json.Bson.BsonType TimeStamp
    static constexpr const int8_t TimeStamp = 17;
    // Get static field: static public Newtonsoft.Json.Bson.BsonType TimeStamp
    static ::Newtonsoft::Json::Bson::BsonType _get_TimeStamp();
    // Set static field: static public Newtonsoft.Json.Bson.BsonType TimeStamp
    static void _set_TimeStamp(::Newtonsoft::Json::Bson::BsonType value);
    // static field const value: static public Newtonsoft.Json.Bson.BsonType Long
    static constexpr const int8_t Long = 18;
    // Get static field: static public Newtonsoft.Json.Bson.BsonType Long
    static ::Newtonsoft::Json::Bson::BsonType _get_Long();
    // Set static field: static public Newtonsoft.Json.Bson.BsonType Long
    static void _set_Long(::Newtonsoft::Json::Bson::BsonType value);
    // static field const value: static public Newtonsoft.Json.Bson.BsonType MinKey
    static constexpr const int8_t MinKey = 255;
    // Get static field: static public Newtonsoft.Json.Bson.BsonType MinKey
    static ::Newtonsoft::Json::Bson::BsonType _get_MinKey();
    // Set static field: static public Newtonsoft.Json.Bson.BsonType MinKey
    static void _set_MinKey(::Newtonsoft::Json::Bson::BsonType value);
    // static field const value: static public Newtonsoft.Json.Bson.BsonType MaxKey
    static constexpr const int8_t MaxKey = 127;
    // Get static field: static public Newtonsoft.Json.Bson.BsonType MaxKey
    static ::Newtonsoft::Json::Bson::BsonType _get_MaxKey();
    // Set static field: static public Newtonsoft.Json.Bson.BsonType MaxKey
    static void _set_MaxKey(::Newtonsoft::Json::Bson::BsonType value);
    // Get instance field reference: public System.SByte value__
    [[deprecated("Use field access instead!")]] int8_t& dyn_value__();
  }; // Newtonsoft.Json.Bson.BsonType
  #pragma pack(pop)
  static check_size<sizeof(BsonType), 0 + sizeof(int8_t)> __Newtonsoft_Json_Bson_BsonTypeSizeCheck;
  static_assert(sizeof(BsonType) == 0x1);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"