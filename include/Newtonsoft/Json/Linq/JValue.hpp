// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Linq.JToken
#include "Newtonsoft/Json/Linq/JToken.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Nullable`1<T>
  template<typename T>
  struct Nullable_1;
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
  // Forward declaring type: TypeCode
  struct TypeCode;
  // Skipping declaration: Decimal because it is already included!
  // Skipping declaration: DateTime because it is already included!
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: Newtonsoft::Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonWriter
  class JsonWriter;
  // Forward declaring type: JsonConverter
  class JsonConverter;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Linq
namespace Newtonsoft::Json::Linq {
  // Forward declaring type: JValue
  class JValue;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Linq::JValue);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JValue*, "Newtonsoft.Json.Linq", "JValue");
// Type namespace: Newtonsoft.Json.Linq
namespace Newtonsoft::Json::Linq {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Linq.JValue
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class JValue : public ::Newtonsoft::Json::Linq::JToken/*, public ::System::IConvertible, public ::System::IFormattable, public ::System::IComparable*/ {
    public:
    public:
    // private Newtonsoft.Json.Linq.JTokenType _valueType
    // Size: 0x4
    // Offset: 0x30
    ::Newtonsoft::Json::Linq::JTokenType valueType;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::Linq::JTokenType) == 0x4);
    // Padding between fields: valueType and: value
    char __padding0[0x4] = {};
    // private System.Object _value
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppObject* value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::System::IConvertible
    operator ::System::IConvertible() noexcept {
      return *reinterpret_cast<::System::IConvertible*>(this);
    }
    // Creating interface conversion operator: i_IConvertible
    inline ::System::IConvertible* i_IConvertible() noexcept {
      return reinterpret_cast<::System::IConvertible*>(this);
    }
    // Creating interface conversion operator: operator ::System::IFormattable
    operator ::System::IFormattable() noexcept {
      return *reinterpret_cast<::System::IFormattable*>(this);
    }
    // Creating interface conversion operator: i_IFormattable
    inline ::System::IFormattable* i_IFormattable() noexcept {
      return reinterpret_cast<::System::IFormattable*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable
    operator ::System::IComparable() noexcept {
      return *reinterpret_cast<::System::IComparable*>(this);
    }
    // Creating interface conversion operator: i_IComparable
    inline ::System::IComparable* i_IComparable() noexcept {
      return reinterpret_cast<::System::IComparable*>(this);
    }
    // Get instance field reference: private Newtonsoft.Json.Linq.JTokenType _valueType
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::Linq::JTokenType& dyn__valueType();
    // Get instance field reference: private System.Object _value
    [[deprecated("Use field access instead!")]] ::Il2CppObject*& dyn__value();
    // public System.Object get_Value()
    // Offset: 0x176880C
    ::Il2CppObject* get_Value();
    // System.Void .ctor(System.Object value, Newtonsoft.Json.Linq.JTokenType type)
    // Offset: 0x175E730
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JValue* New_ctor(::Il2CppObject* value, ::Newtonsoft::Json::Linq::JTokenType type) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Linq::JValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JValue*, creationType>(value, type)));
    }
    // public System.Void .ctor(Newtonsoft.Json.Linq.JValue other)
    // Offset: 0x175E694
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JValue* New_ctor(::Newtonsoft::Json::Linq::JValue* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Linq::JValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JValue*, creationType>(other)));
    }
    // public System.Void .ctor(System.Object value)
    // Offset: 0x175A764
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JValue* New_ctor(::Il2CppObject* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Linq::JValue::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JValue*, creationType>(value)));
    }
    // static System.Int32 Compare(Newtonsoft.Json.Linq.JTokenType valueType, System.Object objA, System.Object objB)
    // Offset: 0x1767DAC
    static int Compare(::Newtonsoft::Json::Linq::JTokenType valueType, ::Il2CppObject* objA, ::Il2CppObject* objB);
    // static private System.Int32 CompareFloat(System.Object objA, System.Object objB)
    // Offset: 0x1768628
    static int CompareFloat(::Il2CppObject* objA, ::Il2CppObject* objB);
    // static public Newtonsoft.Json.Linq.JValue CreateComment(System.String value)
    // Offset: 0x175AC98
    static ::Newtonsoft::Json::Linq::JValue* CreateComment(::StringW value);
    // static public Newtonsoft.Json.Linq.JValue CreateNull()
    // Offset: 0x1758D10
    static ::Newtonsoft::Json::Linq::JValue* CreateNull();
    // static public Newtonsoft.Json.Linq.JValue CreateUndefined()
    // Offset: 0x175ACFC
    static ::Newtonsoft::Json::Linq::JValue* CreateUndefined();
    // static private Newtonsoft.Json.Linq.JTokenType GetValueType(System.Nullable`1<Newtonsoft.Json.Linq.JTokenType> current, System.Object value)
    // Offset: 0x1767904
    static ::Newtonsoft::Json::Linq::JTokenType GetValueType(::System::Nullable_1<::Newtonsoft::Json::Linq::JTokenType> current, ::Il2CppObject* value);
    // static private Newtonsoft.Json.Linq.JTokenType GetStringValueType(System.Nullable`1<Newtonsoft.Json.Linq.JTokenType> current)
    // Offset: 0x1768790
    static ::Newtonsoft::Json::Linq::JTokenType GetStringValueType(::System::Nullable_1<::Newtonsoft::Json::Linq::JTokenType> current);
    // static private System.Boolean ValuesEquals(Newtonsoft.Json.Linq.JValue v1, Newtonsoft.Json.Linq.JValue v2)
    // Offset: 0x1767D44
    static bool ValuesEquals(::Newtonsoft::Json::Linq::JValue* v1, ::Newtonsoft::Json::Linq::JValue* v2);
    // public System.Boolean Equals(Newtonsoft.Json.Linq.JValue other)
    // Offset: 0x1768FB0
    bool Equals(::Newtonsoft::Json::Linq::JValue* other);
    // public System.String ToString(System.IFormatProvider formatProvider)
    // Offset: 0x1769104
    ::StringW ToString(::System::IFormatProvider* formatProvider);
    // public System.String ToString(System.String format, System.IFormatProvider formatProvider)
    // Offset: 0x1769110
    ::StringW ToString(::StringW format, ::System::IFormatProvider* formatProvider);
    // private System.Int32 System.IComparable.CompareTo(System.Object obj)
    // Offset: 0x176923C
    int System_IComparable_CompareTo(::Il2CppObject* obj);
    // private System.TypeCode System.IConvertible.GetTypeCode()
    // Offset: 0x17692E4
    ::System::TypeCode System_IConvertible_GetTypeCode();
    // private System.Boolean System.IConvertible.ToBoolean(System.IFormatProvider provider)
    // Offset: 0x17693B0
    bool System_IConvertible_ToBoolean(::System::IFormatProvider* provider);
    // private System.Char System.IConvertible.ToChar(System.IFormatProvider provider)
    // Offset: 0x1769414
    ::Il2CppChar System_IConvertible_ToChar(::System::IFormatProvider* provider);
    // private System.SByte System.IConvertible.ToSByte(System.IFormatProvider provider)
    // Offset: 0x1769478
    int8_t System_IConvertible_ToSByte(::System::IFormatProvider* provider);
    // private System.Byte System.IConvertible.ToByte(System.IFormatProvider provider)
    // Offset: 0x17694DC
    uint8_t System_IConvertible_ToByte(::System::IFormatProvider* provider);
    // private System.Int16 System.IConvertible.ToInt16(System.IFormatProvider provider)
    // Offset: 0x1769540
    int16_t System_IConvertible_ToInt16(::System::IFormatProvider* provider);
    // private System.UInt16 System.IConvertible.ToUInt16(System.IFormatProvider provider)
    // Offset: 0x17695A4
    uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider* provider);
    // private System.Int32 System.IConvertible.ToInt32(System.IFormatProvider provider)
    // Offset: 0x1769608
    int System_IConvertible_ToInt32(::System::IFormatProvider* provider);
    // private System.UInt32 System.IConvertible.ToUInt32(System.IFormatProvider provider)
    // Offset: 0x176966C
    uint System_IConvertible_ToUInt32(::System::IFormatProvider* provider);
    // private System.Int64 System.IConvertible.ToInt64(System.IFormatProvider provider)
    // Offset: 0x17696D0
    int64_t System_IConvertible_ToInt64(::System::IFormatProvider* provider);
    // private System.UInt64 System.IConvertible.ToUInt64(System.IFormatProvider provider)
    // Offset: 0x1769734
    uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider* provider);
    // private System.Single System.IConvertible.ToSingle(System.IFormatProvider provider)
    // Offset: 0x1769798
    float System_IConvertible_ToSingle(::System::IFormatProvider* provider);
    // private System.Double System.IConvertible.ToDouble(System.IFormatProvider provider)
    // Offset: 0x17697FC
    double System_IConvertible_ToDouble(::System::IFormatProvider* provider);
    // private System.Decimal System.IConvertible.ToDecimal(System.IFormatProvider provider)
    // Offset: 0x1769860
    ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider);
    // private System.DateTime System.IConvertible.ToDateTime(System.IFormatProvider provider)
    // Offset: 0x17698C4
    ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider);
    // private System.Object System.IConvertible.ToType(System.Type conversionType, System.IFormatProvider provider)
    // Offset: 0x1769928
    ::Il2CppObject* System_IConvertible_ToType(::System::Type* conversionType, ::System::IFormatProvider* provider);
    // public override System.Boolean get_HasValues()
    // Offset: 0x1767DA4
    // Implemented from: Newtonsoft.Json.Linq.JToken
    // Base method: System.Boolean JToken::get_HasValues()
    bool get_HasValues();
    // public override Newtonsoft.Json.Linq.JTokenType get_Type()
    // Offset: 0x1768804
    // Implemented from: Newtonsoft.Json.Linq.JToken
    // Base method: Newtonsoft.Json.Linq.JTokenType JToken::get_Type()
    ::Newtonsoft::Json::Linq::JTokenType get_Type();
    // override System.Boolean DeepEquals(Newtonsoft.Json.Linq.JToken node)
    // Offset: 0x1767C94
    // Implemented from: Newtonsoft.Json.Linq.JToken
    // Base method: System.Boolean JToken::DeepEquals(Newtonsoft.Json.Linq.JToken node)
    bool DeepEquals(::Newtonsoft::Json::Linq::JToken* node);
    // override Newtonsoft.Json.Linq.JToken CloneToken()
    // Offset: 0x1768730
    // Implemented from: Newtonsoft.Json.Linq.JToken
    // Base method: Newtonsoft.Json.Linq.JToken JToken::CloneToken()
    ::Newtonsoft::Json::Linq::JToken* CloneToken();
    // public override System.Void WriteTo(Newtonsoft.Json.JsonWriter writer, params Newtonsoft.Json.JsonConverter[] converters)
    // Offset: 0x1768814
    // Implemented from: Newtonsoft.Json.Linq.JToken
    // Base method: System.Void JToken::WriteTo(Newtonsoft.Json.JsonWriter writer, params Newtonsoft.Json.JsonConverter[] converters)
    void WriteTo(::Newtonsoft::Json::JsonWriter* writer, ::ArrayW<::Newtonsoft::Json::JsonConverter*> converters);
    // override System.Int32 GetDeepHashCode()
    // Offset: 0x1768F50
    // Implemented from: Newtonsoft.Json.Linq.JToken
    // Base method: System.Int32 JToken::GetDeepHashCode()
    int GetDeepHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1768FC0
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x176907C
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1769094
    // Implemented from: Newtonsoft.Json.Linq.JToken
    // Base method: System.String JToken::ToString()
    ::StringW ToString();
  }; // Newtonsoft.Json.Linq.JValue
  #pragma pack(pop)
  static check_size<sizeof(JValue), 56 + sizeof(::Il2CppObject*)> __Newtonsoft_Json_Linq_JValueSizeCheck;
  static_assert(sizeof(JValue) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::get_Value
// Il2CppName: get_Value
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Newtonsoft::Json::Linq::JValue::*)()>(&Newtonsoft::Json::Linq::JValue::get_Value)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "get_Value", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::Compare
// Il2CppName: Compare
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Newtonsoft::Json::Linq::JTokenType, ::Il2CppObject*, ::Il2CppObject*)>(&Newtonsoft::Json::Linq::JValue::Compare)> {
  static const MethodInfo* get() {
    static auto* valueType = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JTokenType")->byval_arg;
    static auto* objA = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* objB = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "Compare", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{valueType, objA, objB});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::CompareFloat
// Il2CppName: CompareFloat
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppObject*, ::Il2CppObject*)>(&Newtonsoft::Json::Linq::JValue::CompareFloat)> {
  static const MethodInfo* get() {
    static auto* objA = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* objB = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "CompareFloat", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{objA, objB});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::CreateComment
// Il2CppName: CreateComment
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JValue* (*)(::StringW)>(&Newtonsoft::Json::Linq::JValue::CreateComment)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "CreateComment", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::CreateNull
// Il2CppName: CreateNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JValue* (*)()>(&Newtonsoft::Json::Linq::JValue::CreateNull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "CreateNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::CreateUndefined
// Il2CppName: CreateUndefined
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JValue* (*)()>(&Newtonsoft::Json::Linq::JValue::CreateUndefined)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "CreateUndefined", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::GetValueType
// Il2CppName: GetValueType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JTokenType (*)(::System::Nullable_1<::Newtonsoft::Json::Linq::JTokenType>, ::Il2CppObject*)>(&Newtonsoft::Json::Linq::JValue::GetValueType)> {
  static const MethodInfo* get() {
    static auto* current = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JTokenType")})->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "GetValueType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{current, value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::GetStringValueType
// Il2CppName: GetStringValueType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JTokenType (*)(::System::Nullable_1<::Newtonsoft::Json::Linq::JTokenType>)>(&Newtonsoft::Json::Linq::JValue::GetStringValueType)> {
  static const MethodInfo* get() {
    static auto* current = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System", "Nullable`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JTokenType")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "GetStringValueType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{current});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::ValuesEquals
// Il2CppName: ValuesEquals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Newtonsoft::Json::Linq::JValue*, ::Newtonsoft::Json::Linq::JValue*)>(&Newtonsoft::Json::Linq::JValue::ValuesEquals)> {
  static const MethodInfo* get() {
    static auto* v1 = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JValue")->byval_arg;
    static auto* v2 = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JValue")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "ValuesEquals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{v1, v2});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Linq::JValue::*)(::Newtonsoft::Json::Linq::JValue*)>(&Newtonsoft::Json::Linq::JValue::Equals)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JValue")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Linq::JValue::*)(::System::IFormatProvider*)>(&Newtonsoft::Json::Linq::JValue::ToString)> {
  static const MethodInfo* get() {
    static auto* formatProvider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{formatProvider});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Linq::JValue::*)(::StringW, ::System::IFormatProvider*)>(&Newtonsoft::Json::Linq::JValue::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* formatProvider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, formatProvider});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::System_IComparable_CompareTo
// Il2CppName: System.IComparable.CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Newtonsoft::Json::Linq::JValue::*)(::Il2CppObject*)>(&Newtonsoft::Json::Linq::JValue::System_IComparable_CompareTo)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "System.IComparable.CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::System_IConvertible_GetTypeCode
// Il2CppName: System.IConvertible.GetTypeCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TypeCode (Newtonsoft::Json::Linq::JValue::*)()>(&Newtonsoft::Json::Linq::JValue::System_IConvertible_GetTypeCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "System.IConvertible.GetTypeCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::System_IConvertible_ToBoolean
// Il2CppName: System.IConvertible.ToBoolean
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Linq::JValue::*)(::System::IFormatProvider*)>(&Newtonsoft::Json::Linq::JValue::System_IConvertible_ToBoolean)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "System.IConvertible.ToBoolean", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::System_IConvertible_ToChar
// Il2CppName: System.IConvertible.ToChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (Newtonsoft::Json::Linq::JValue::*)(::System::IFormatProvider*)>(&Newtonsoft::Json::Linq::JValue::System_IConvertible_ToChar)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "System.IConvertible.ToChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::System_IConvertible_ToSByte
// Il2CppName: System.IConvertible.ToSByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (Newtonsoft::Json::Linq::JValue::*)(::System::IFormatProvider*)>(&Newtonsoft::Json::Linq::JValue::System_IConvertible_ToSByte)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "System.IConvertible.ToSByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::System_IConvertible_ToByte
// Il2CppName: System.IConvertible.ToByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (Newtonsoft::Json::Linq::JValue::*)(::System::IFormatProvider*)>(&Newtonsoft::Json::Linq::JValue::System_IConvertible_ToByte)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "System.IConvertible.ToByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::System_IConvertible_ToInt16
// Il2CppName: System.IConvertible.ToInt16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (Newtonsoft::Json::Linq::JValue::*)(::System::IFormatProvider*)>(&Newtonsoft::Json::Linq::JValue::System_IConvertible_ToInt16)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "System.IConvertible.ToInt16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::System_IConvertible_ToUInt16
// Il2CppName: System.IConvertible.ToUInt16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (Newtonsoft::Json::Linq::JValue::*)(::System::IFormatProvider*)>(&Newtonsoft::Json::Linq::JValue::System_IConvertible_ToUInt16)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "System.IConvertible.ToUInt16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::System_IConvertible_ToInt32
// Il2CppName: System.IConvertible.ToInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Newtonsoft::Json::Linq::JValue::*)(::System::IFormatProvider*)>(&Newtonsoft::Json::Linq::JValue::System_IConvertible_ToInt32)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "System.IConvertible.ToInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::System_IConvertible_ToUInt32
// Il2CppName: System.IConvertible.ToUInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (Newtonsoft::Json::Linq::JValue::*)(::System::IFormatProvider*)>(&Newtonsoft::Json::Linq::JValue::System_IConvertible_ToUInt32)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "System.IConvertible.ToUInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::System_IConvertible_ToInt64
// Il2CppName: System.IConvertible.ToInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (Newtonsoft::Json::Linq::JValue::*)(::System::IFormatProvider*)>(&Newtonsoft::Json::Linq::JValue::System_IConvertible_ToInt64)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "System.IConvertible.ToInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::System_IConvertible_ToUInt64
// Il2CppName: System.IConvertible.ToUInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (Newtonsoft::Json::Linq::JValue::*)(::System::IFormatProvider*)>(&Newtonsoft::Json::Linq::JValue::System_IConvertible_ToUInt64)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "System.IConvertible.ToUInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::System_IConvertible_ToSingle
// Il2CppName: System.IConvertible.ToSingle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (Newtonsoft::Json::Linq::JValue::*)(::System::IFormatProvider*)>(&Newtonsoft::Json::Linq::JValue::System_IConvertible_ToSingle)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "System.IConvertible.ToSingle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::System_IConvertible_ToDouble
// Il2CppName: System.IConvertible.ToDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (Newtonsoft::Json::Linq::JValue::*)(::System::IFormatProvider*)>(&Newtonsoft::Json::Linq::JValue::System_IConvertible_ToDouble)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "System.IConvertible.ToDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::System_IConvertible_ToDecimal
// Il2CppName: System.IConvertible.ToDecimal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (Newtonsoft::Json::Linq::JValue::*)(::System::IFormatProvider*)>(&Newtonsoft::Json::Linq::JValue::System_IConvertible_ToDecimal)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "System.IConvertible.ToDecimal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::System_IConvertible_ToDateTime
// Il2CppName: System.IConvertible.ToDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (Newtonsoft::Json::Linq::JValue::*)(::System::IFormatProvider*)>(&Newtonsoft::Json::Linq::JValue::System_IConvertible_ToDateTime)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "System.IConvertible.ToDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::System_IConvertible_ToType
// Il2CppName: System.IConvertible.ToType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (Newtonsoft::Json::Linq::JValue::*)(::System::Type*, ::System::IFormatProvider*)>(&Newtonsoft::Json::Linq::JValue::System_IConvertible_ToType)> {
  static const MethodInfo* get() {
    static auto* conversionType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "System.IConvertible.ToType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{conversionType, provider});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::get_HasValues
// Il2CppName: get_HasValues
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Linq::JValue::*)()>(&Newtonsoft::Json::Linq::JValue::get_HasValues)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "get_HasValues", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::get_Type
// Il2CppName: get_Type
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JTokenType (Newtonsoft::Json::Linq::JValue::*)()>(&Newtonsoft::Json::Linq::JValue::get_Type)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "get_Type", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::DeepEquals
// Il2CppName: DeepEquals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Linq::JValue::*)(::Newtonsoft::Json::Linq::JToken*)>(&Newtonsoft::Json::Linq::JValue::DeepEquals)> {
  static const MethodInfo* get() {
    static auto* node = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Linq", "JToken")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "DeepEquals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{node});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::CloneToken
// Il2CppName: CloneToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (Newtonsoft::Json::Linq::JValue::*)()>(&Newtonsoft::Json::Linq::JValue::CloneToken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "CloneToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::WriteTo
// Il2CppName: WriteTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Newtonsoft::Json::Linq::JValue::*)(::Newtonsoft::Json::JsonWriter*, ::ArrayW<::Newtonsoft::Json::JsonConverter*>)>(&Newtonsoft::Json::Linq::JValue::WriteTo)> {
  static const MethodInfo* get() {
    static auto* writer = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonWriter")->byval_arg;
    static auto* converters = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonConverter"), 1)->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "WriteTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{writer, converters});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::GetDeepHashCode
// Il2CppName: GetDeepHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Newtonsoft::Json::Linq::JValue::*)()>(&Newtonsoft::Json::Linq::JValue::GetDeepHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "GetDeepHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (Newtonsoft::Json::Linq::JValue::*)(::Il2CppObject*)>(&Newtonsoft::Json::Linq::JValue::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Newtonsoft::Json::Linq::JValue::*)()>(&Newtonsoft::Json::Linq::JValue::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JValue::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (Newtonsoft::Json::Linq::JValue::*)()>(&Newtonsoft::Json::Linq::JValue::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JValue*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
