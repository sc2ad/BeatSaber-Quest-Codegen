// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Utilities.PrimitiveTypeCode
#include "Newtonsoft/Json/Utilities/PrimitiveTypeCode.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Type
  class Type;
  // Skipping declaration: IConvertible because it is already included!
  // Forward declaring type: TimeSpan
  struct TimeSpan;
  // Forward declaring type: Version
  class Version;
  // Forward declaring type: Guid
  struct Guid;
}
// Forward declaring namespace: Newtonsoft::Json::Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: TypeInformation
  class TypeInformation;
  // Forward declaring type: ThreadSafeStore`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class ThreadSafeStore_2;
  // Skipping declaration: TypeConvertKey because it is already included!
  // Forward declaring type: ParseResult
  struct ParseResult;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System::ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: TypeConverter
  class TypeConverter;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Forward declaring type: ConvertUtils
  class ConvertUtils;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Utilities::ConvertUtils);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ConvertUtils*, "Newtonsoft.Json.Utilities", "ConvertUtils");
// Type namespace: Newtonsoft.Json.Utilities
namespace Newtonsoft::Json::Utilities {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Utilities.ConvertUtils
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 10D8E24
  class ConvertUtils : public ::Il2CppObject {
    public:
    // Nested type: ::Newtonsoft::Json::Utilities::ConvertUtils::TypeConvertKey
    struct TypeConvertKey;
    // Nested type: ::Newtonsoft::Json::Utilities::ConvertUtils::ConvertResult
    struct ConvertResult;
    // Nested type: ::Newtonsoft::Json::Utilities::ConvertUtils::$$c__DisplayClass9_0
    class $$c__DisplayClass9_0;
    // Size: 0x10
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: Newtonsoft.Json.Utilities.ConvertUtils/Newtonsoft.Json.Utilities.TypeConvertKey
    // [TokenAttribute] Offset: FFFFFFFF
    struct TypeConvertKey/*, public ::System::ValueType*/ {
      public:
      public:
      // private readonly System.Type _initialType
      // Size: 0x8
      // Offset: 0x0
      ::System::Type* initialType;
      // Field size check
      static_assert(sizeof(::System::Type*) == 0x8);
      // private readonly System.Type _targetType
      // Size: 0x8
      // Offset: 0x8
      ::System::Type* targetType;
      // Field size check
      static_assert(sizeof(::System::Type*) == 0x8);
      public:
      // Creating value type constructor for type: TypeConvertKey
      constexpr TypeConvertKey(::System::Type* initialType_ = {}, ::System::Type* targetType_ = {}) noexcept : initialType{initialType_}, targetType{targetType_} {}
      // Creating interface conversion operator: operator ::System::ValueType
      operator ::System::ValueType() noexcept {
        return *reinterpret_cast<::System::ValueType*>(this);
      }
      // Creating interface conversion operator: i_ValueType
      inline ::System::ValueType* i_ValueType() noexcept {
        return reinterpret_cast<::System::ValueType*>(this);
      }
      // Get instance field reference: private readonly System.Type _initialType
      [[deprecated("Use field access instead!")]] ::System::Type*& dyn__initialType();
      // Get instance field reference: private readonly System.Type _targetType
      [[deprecated("Use field access instead!")]] ::System::Type*& dyn__targetType();
      // public System.Type get_InitialType()
      // Offset: 0x212059C
      ::System::Type* get_InitialType();
      // public System.Type get_TargetType()
      // Offset: 0x21205A4
      ::System::Type* get_TargetType();
      // public System.Void .ctor(System.Type initialType, System.Type targetType)
      // Offset: 0x211F0B4
      // ABORTED: conflicts with another method.  TypeConvertKey(::System::Type* initialType, ::System::Type* targetType);
      // public System.Boolean Equals(Newtonsoft.Json.Utilities.ConvertUtils/Newtonsoft.Json.Utilities.TypeConvertKey other)
      // Offset: 0x2120698
      bool Equals(::Newtonsoft::Json::Utilities::ConvertUtils::TypeConvertKey other);
      // public override System.Int32 GetHashCode()
      // Offset: 0x21205AC
      // Implemented from: System.ValueType
      // Base method: System.Int32 ValueType::GetHashCode()
      int GetHashCode();
      // public override System.Boolean Equals(System.Object obj)
      // Offset: 0x2120600
      // Implemented from: System.ValueType
      // Base method: System.Boolean ValueType::Equals(System.Object obj)
      bool Equals(::Il2CppObject* obj);
    }; // Newtonsoft.Json.Utilities.ConvertUtils/Newtonsoft.Json.Utilities.TypeConvertKey
    #pragma pack(pop)
    static check_size<sizeof(ConvertUtils::TypeConvertKey), 8 + sizeof(::System::Type*)> __Newtonsoft_Json_Utilities_ConvertUtils_TypeConvertKeySizeCheck;
    static_assert(sizeof(ConvertUtils::TypeConvertKey) == 0x10);
    // Get static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,Newtonsoft.Json.Utilities.PrimitiveTypeCode> TypeCodeMap
    static ::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode>* _get_TypeCodeMap();
    // Set static field: static private readonly System.Collections.Generic.Dictionary`2<System.Type,Newtonsoft.Json.Utilities.PrimitiveTypeCode> TypeCodeMap
    static void _set_TypeCodeMap(::System::Collections::Generic::Dictionary_2<::System::Type*, ::Newtonsoft::Json::Utilities::PrimitiveTypeCode>* value);
    // Get static field: static private readonly Newtonsoft.Json.Utilities.TypeInformation[] PrimitiveTypeCodes
    static ::ArrayW<::Newtonsoft::Json::Utilities::TypeInformation*> _get_PrimitiveTypeCodes();
    // Set static field: static private readonly Newtonsoft.Json.Utilities.TypeInformation[] PrimitiveTypeCodes
    static void _set_PrimitiveTypeCodes(::ArrayW<::Newtonsoft::Json::Utilities::TypeInformation*> value);
    // Get static field: static private readonly Newtonsoft.Json.Utilities.ThreadSafeStore`2<Newtonsoft.Json.Utilities.ConvertUtils/Newtonsoft.Json.Utilities.TypeConvertKey,System.Func`2<System.Object,System.Object>> CastConverters
    static ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::ConvertUtils::TypeConvertKey, ::System::Func_2<::Il2CppObject*, ::Il2CppObject*>*>* _get_CastConverters();
    // Set static field: static private readonly Newtonsoft.Json.Utilities.ThreadSafeStore`2<Newtonsoft.Json.Utilities.ConvertUtils/Newtonsoft.Json.Utilities.TypeConvertKey,System.Func`2<System.Object,System.Object>> CastConverters
    static void _set_CastConverters(::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::ConvertUtils::TypeConvertKey, ::System::Func_2<::Il2CppObject*, ::Il2CppObject*>*>* value);
    // static private System.Void .cctor()
    // Offset: 0x211F6D8
    static void _cctor();
    // static public Newtonsoft.Json.Utilities.PrimitiveTypeCode GetTypeCode(System.Type t)
    // Offset: 0x211D878
    static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode GetTypeCode(::System::Type* t);
    // static public Newtonsoft.Json.Utilities.PrimitiveTypeCode GetTypeCode(System.Type t, out System.Boolean isEnum)
    // Offset: 0x211D8F0
    static ::Newtonsoft::Json::Utilities::PrimitiveTypeCode GetTypeCode(::System::Type* t, ByRef<bool> isEnum);
    // static public Newtonsoft.Json.Utilities.TypeInformation GetTypeInformation(System.IConvertible convertable)
    // Offset: 0x211DC68
    static ::Newtonsoft::Json::Utilities::TypeInformation* GetTypeInformation(::System::IConvertible* convertable);
    // static public System.Boolean IsConvertible(System.Type t)
    // Offset: 0x211DD68
    static bool IsConvertible(::System::Type* t);
    // static public System.TimeSpan ParseTimeSpan(System.String input)
    // Offset: 0x211DDF8
    static ::System::TimeSpan ParseTimeSpan(::StringW input);
    // static private System.Func`2<System.Object,System.Object> CreateCastConverter(Newtonsoft.Json.Utilities.ConvertUtils/Newtonsoft.Json.Utilities.TypeConvertKey t)
    // Offset: 0x211DE60
    static ::System::Func_2<::Il2CppObject*, ::Il2CppObject*>* CreateCastConverter(::Newtonsoft::Json::Utilities::ConvertUtils::TypeConvertKey t);
    // static private System.Boolean TryConvert(System.Object initialValue, System.Globalization.CultureInfo culture, System.Type targetType, out System.Object value)
    // Offset: 0x211E060
    static bool TryConvert(::Il2CppObject* initialValue, ::System::Globalization::CultureInfo* culture, ::System::Type* targetType, ByRef<::Il2CppObject*> value);
    // static private Newtonsoft.Json.Utilities.ConvertUtils/Newtonsoft.Json.Utilities.ConvertResult TryConvertInternal(System.Object initialValue, System.Globalization.CultureInfo culture, System.Type targetType, out System.Object value)
    // Offset: 0x211E178
    static ::Newtonsoft::Json::Utilities::ConvertUtils::ConvertResult TryConvertInternal(::Il2CppObject* initialValue, ::System::Globalization::CultureInfo* culture, ::System::Type* targetType, ByRef<::Il2CppObject*> value);
    // static public System.Object ConvertOrCast(System.Object initialValue, System.Globalization.CultureInfo culture, System.Type targetType)
    // Offset: 0x211EF20
    static ::Il2CppObject* ConvertOrCast(::Il2CppObject* initialValue, ::System::Globalization::CultureInfo* culture, ::System::Type* targetType);
    // static private System.Object EnsureTypeAssignable(System.Object value, System.Type initialType, System.Type targetType)
    // Offset: 0x211ECF0
    static ::Il2CppObject* EnsureTypeAssignable(::Il2CppObject* value, ::System::Type* initialType, ::System::Type* targetType);
    // static System.ComponentModel.TypeConverter GetConverter(System.Type t)
    // Offset: 0x211EBEC
    static ::System::ComponentModel::TypeConverter* GetConverter(::System::Type* t);
    // static public System.Boolean VersionTryParse(System.String input, out System.Version result)
    // Offset: 0x211EB00
    static bool VersionTryParse(::StringW input, ByRef<::System::Version*> result);
    // static public System.Boolean IsInteger(System.Object value)
    // Offset: 0x211EA60
    static bool IsInteger(::Il2CppObject* value);
    // static public Newtonsoft.Json.Utilities.ParseResult Int32TryParse(System.Char[] chars, System.Int32 start, System.Int32 length, out System.Int32 value)
    // Offset: 0x211F0BC
    static ::Newtonsoft::Json::Utilities::ParseResult Int32TryParse(::ArrayW<::Il2CppChar> chars, int start, int length, ByRef<int> value);
    // static public Newtonsoft.Json.Utilities.ParseResult Int64TryParse(System.Char[] chars, System.Int32 start, System.Int32 length, out System.Int64 value)
    // Offset: 0x211F244
    static ::Newtonsoft::Json::Utilities::ParseResult Int64TryParse(::ArrayW<::Il2CppChar> chars, int start, int length, ByRef<int64_t> value);
    // static public System.Boolean TryConvertGuid(System.String s, out System.Guid g)
    // Offset: 0x211F3B4
    static bool TryConvertGuid(::StringW s, ByRef<::System::Guid> g);
    // static public System.Int32 HexTextToInt(System.Char[] text, System.Int32 start, System.Int32 end)
    // Offset: 0x211F4F0
    static int HexTextToInt(::ArrayW<::Il2CppChar> text, int start, int end);
    // static private System.Int32 HexCharToInt(System.Char ch)
    // Offset: 0x211F5E0
    static int HexCharToInt(::Il2CppChar ch);
  }; // Newtonsoft.Json.Utilities.ConvertUtils
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ConvertUtils::TypeConvertKey, "Newtonsoft.Json.Utilities", "ConvertUtils/TypeConvertKey");
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ConvertUtils::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&Newtonsoft::Json::Utilities::ConvertUtils::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ConvertUtils*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ConvertUtils::GetTypeCode
// Il2CppName: GetTypeCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Utilities::PrimitiveTypeCode (*)(::System::Type*)>(&Newtonsoft::Json::Utilities::ConvertUtils::GetTypeCode)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ConvertUtils*), "GetTypeCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ConvertUtils::GetTypeCode
// Il2CppName: GetTypeCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Utilities::PrimitiveTypeCode (*)(::System::Type*, ByRef<bool>)>(&Newtonsoft::Json::Utilities::ConvertUtils::GetTypeCode)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* isEnum = &::il2cpp_utils::GetClassFromName("System", "Boolean")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ConvertUtils*), "GetTypeCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t, isEnum});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ConvertUtils::GetTypeInformation
// Il2CppName: GetTypeInformation
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Utilities::TypeInformation* (*)(::System::IConvertible*)>(&Newtonsoft::Json::Utilities::ConvertUtils::GetTypeInformation)> {
  static const MethodInfo* get() {
    static auto* convertable = &::il2cpp_utils::GetClassFromName("System", "IConvertible")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ConvertUtils*), "GetTypeInformation", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{convertable});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ConvertUtils::IsConvertible
// Il2CppName: IsConvertible
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Type*)>(&Newtonsoft::Json::Utilities::ConvertUtils::IsConvertible)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ConvertUtils*), "IsConvertible", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ConvertUtils::ParseTimeSpan
// Il2CppName: ParseTimeSpan
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TimeSpan (*)(::StringW)>(&Newtonsoft::Json::Utilities::ConvertUtils::ParseTimeSpan)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ConvertUtils*), "ParseTimeSpan", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ConvertUtils::CreateCastConverter
// Il2CppName: CreateCastConverter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Func_2<::Il2CppObject*, ::Il2CppObject*>* (*)(::Newtonsoft::Json::Utilities::ConvertUtils::TypeConvertKey)>(&Newtonsoft::Json::Utilities::ConvertUtils::CreateCastConverter)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json.Utilities", "ConvertUtils/TypeConvertKey")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ConvertUtils*), "CreateCastConverter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ConvertUtils::TryConvert
// Il2CppName: TryConvert
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppObject*, ::System::Globalization::CultureInfo*, ::System::Type*, ByRef<::Il2CppObject*>)>(&Newtonsoft::Json::Utilities::ConvertUtils::TryConvert)> {
  static const MethodInfo* get() {
    static auto* initialValue = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    static auto* targetType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ConvertUtils*), "TryConvert", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{initialValue, culture, targetType, value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ConvertUtils::TryConvertInternal
// Il2CppName: TryConvertInternal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Utilities::ConvertUtils::ConvertResult (*)(::Il2CppObject*, ::System::Globalization::CultureInfo*, ::System::Type*, ByRef<::Il2CppObject*>)>(&Newtonsoft::Json::Utilities::ConvertUtils::TryConvertInternal)> {
  static const MethodInfo* get() {
    static auto* initialValue = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    static auto* targetType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ConvertUtils*), "TryConvertInternal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{initialValue, culture, targetType, value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ConvertUtils::ConvertOrCast
// Il2CppName: ConvertOrCast
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::Il2CppObject*, ::System::Globalization::CultureInfo*, ::System::Type*)>(&Newtonsoft::Json::Utilities::ConvertUtils::ConvertOrCast)> {
  static const MethodInfo* get() {
    static auto* initialValue = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* culture = &::il2cpp_utils::GetClassFromName("System.Globalization", "CultureInfo")->byval_arg;
    static auto* targetType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ConvertUtils*), "ConvertOrCast", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{initialValue, culture, targetType});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ConvertUtils::EnsureTypeAssignable
// Il2CppName: EnsureTypeAssignable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (*)(::Il2CppObject*, ::System::Type*, ::System::Type*)>(&Newtonsoft::Json::Utilities::ConvertUtils::EnsureTypeAssignable)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* initialType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* targetType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ConvertUtils*), "EnsureTypeAssignable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, initialType, targetType});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ConvertUtils::GetConverter
// Il2CppName: GetConverter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ComponentModel::TypeConverter* (*)(::System::Type*)>(&Newtonsoft::Json::Utilities::ConvertUtils::GetConverter)> {
  static const MethodInfo* get() {
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ConvertUtils*), "GetConverter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{t});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ConvertUtils::VersionTryParse
// Il2CppName: VersionTryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::System::Version*>)>(&Newtonsoft::Json::Utilities::ConvertUtils::VersionTryParse)> {
  static const MethodInfo* get() {
    static auto* input = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Version")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ConvertUtils*), "VersionTryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{input, result});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ConvertUtils::IsInteger
// Il2CppName: IsInteger
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Il2CppObject*)>(&Newtonsoft::Json::Utilities::ConvertUtils::IsInteger)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ConvertUtils*), "IsInteger", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ConvertUtils::Int32TryParse
// Il2CppName: Int32TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Utilities::ParseResult (*)(::ArrayW<::Il2CppChar>, int, int, ByRef<int>)>(&Newtonsoft::Json::Utilities::ConvertUtils::Int32TryParse)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ConvertUtils*), "Int32TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, start, length, value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ConvertUtils::Int64TryParse
// Il2CppName: Int64TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Utilities::ParseResult (*)(::ArrayW<::Il2CppChar>, int, int, ByRef<int64_t>)>(&Newtonsoft::Json::Utilities::ConvertUtils::Int64TryParse)> {
  static const MethodInfo* get() {
    static auto* chars = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* length = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Int64")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ConvertUtils*), "Int64TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{chars, start, length, value});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ConvertUtils::TryConvertGuid
// Il2CppName: TryConvertGuid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<::System::Guid>)>(&Newtonsoft::Json::Utilities::ConvertUtils::TryConvertGuid)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* g = &::il2cpp_utils::GetClassFromName("System", "Guid")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ConvertUtils*), "TryConvertGuid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, g});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ConvertUtils::HexTextToInt
// Il2CppName: HexTextToInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::ArrayW<::Il2CppChar>, int, int)>(&Newtonsoft::Json::Utilities::ConvertUtils::HexTextToInt)> {
  static const MethodInfo* get() {
    static auto* text = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Char"), 1)->byval_arg;
    static auto* start = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* end = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ConvertUtils*), "HexTextToInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, start, end});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Utilities::ConvertUtils::HexCharToInt
// Il2CppName: HexCharToInt
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (*)(::Il2CppChar)>(&Newtonsoft::Json::Utilities::ConvertUtils::HexCharToInt)> {
  static const MethodInfo* get() {
    static auto* ch = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Utilities::ConvertUtils*), "HexCharToInt", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{ch});
  }
};
