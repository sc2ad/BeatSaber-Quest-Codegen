// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.IConvertible
#include "System/IConvertible.hpp"
// Including type: System.IFormattable
#include "System/IFormattable.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
  // Forward declaring type: TypeCode
  struct TypeCode;
  // Forward declaring type: Decimal
  struct Decimal;
  // Forward declaring type: DateTime
  struct DateTime;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: NumberStyles
  struct NumberStyles;
  // Forward declaring type: NumberFormatInfo
  class NumberFormatInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: Single
  struct Single;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::System::Single, "System", "Single");
// Type namespace: System
namespace System {
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Single
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 1054E08
  struct Single/*, public ::System::ValueType, public ::System::IComparable_1<float>, public ::System::IEquatable_1<float>, public ::System::IComparable, public ::System::IConvertible, public ::System::IFormattable*/ {
    public:
    public:
    // System.Single m_value
    // Size: 0x4
    // Offset: 0x0
    float m_value;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Creating value type constructor for type: Single
    constexpr Single(float m_value_ = {}) noexcept : m_value{m_value_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: i_ValueType
    inline ::System::ValueType* i_ValueType() noexcept {
      return reinterpret_cast<::System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable_1<float>
    operator ::System::IComparable_1<float>() noexcept {
      return *reinterpret_cast<::System::IComparable_1<float>*>(this);
    }
    // Creating interface conversion operator: i_IComparable_1_float
    inline ::System::IComparable_1<float>* i_IComparable_1_float() noexcept {
      return reinterpret_cast<::System::IComparable_1<float>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IEquatable_1<float>
    operator ::System::IEquatable_1<float>() noexcept {
      return *reinterpret_cast<::System::IEquatable_1<float>*>(this);
    }
    // Creating interface conversion operator: i_IEquatable_1_float
    inline ::System::IEquatable_1<float>* i_IEquatable_1_float() noexcept {
      return reinterpret_cast<::System::IEquatable_1<float>*>(this);
    }
    // Creating interface conversion operator: operator ::System::IComparable
    operator ::System::IComparable() noexcept {
      return *reinterpret_cast<::System::IComparable*>(this);
    }
    // Creating interface conversion operator: i_IComparable
    inline ::System::IComparable* i_IComparable() noexcept {
      return reinterpret_cast<::System::IComparable*>(this);
    }
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
    // Creating conversion operator: operator float
    constexpr operator float() const noexcept {
      return m_value;
    }
    // static field const value: static public System.Single MinValue
    static constexpr const float MinValue = -3.4028235e+38;
    // Get static field: static public System.Single MinValue
    static float _get_MinValue();
    // Set static field: static public System.Single MinValue
    static void _set_MinValue(float value);
    // static field const value: static public System.Single Epsilon
    static constexpr const float Epsilon = 1e-45;
    // Get static field: static public System.Single Epsilon
    static float _get_Epsilon();
    // Set static field: static public System.Single Epsilon
    static void _set_Epsilon(float value);
    // static field const value: static public System.Single MaxValue
    static constexpr const float MaxValue = 3.4028235e+38;
    // Get static field: static public System.Single MaxValue
    static float _get_MaxValue();
    // Set static field: static public System.Single MaxValue
    static void _set_MaxValue(float value);
    // Get static field: static public System.Single PositiveInfinity
    static float _get_PositiveInfinity();
    // Set static field: static public System.Single PositiveInfinity
    static void _set_PositiveInfinity(float value);
    // Get static field: static public System.Single NegativeInfinity
    static float _get_NegativeInfinity();
    // Set static field: static public System.Single NegativeInfinity
    static void _set_NegativeInfinity(float value);
    // Get static field: static public System.Single NaN
    static float _get_NaN();
    // Set static field: static public System.Single NaN
    static void _set_NaN(float value);
    // Get instance field reference: System.Single m_value
    [[deprecated("Use field access instead!")]] float& dyn_m_value();
    // static public System.Boolean IsInfinity(System.Single f)
    // Offset: 0x1BC965C
    static bool IsInfinity(float f);
    // static public System.Boolean IsPositiveInfinity(System.Single f)
    // Offset: 0x1BC9674
    static bool IsPositiveInfinity(float f);
    // static public System.Boolean IsNegativeInfinity(System.Single f)
    // Offset: 0x1BC9688
    static bool IsNegativeInfinity(float f);
    // static public System.Boolean IsNaN(System.Single f)
    // Offset: 0x1BC9698
    static bool IsNaN(float f);
    // public System.Int32 CompareTo(System.Object value)
    // Offset: 0x1BC96B0
    int CompareTo(::Il2CppObject* value);
    // public System.Int32 CompareTo(System.Single value)
    // Offset: 0x1BC97CC
    int CompareTo(float value);
    // public System.Boolean Equals(System.Single obj)
    // Offset: 0x1BC98E4
    bool Equals(float obj);
    // public System.String ToString(System.IFormatProvider provider)
    // Offset: 0x1BC9978
    ::StringW ToString(::System::IFormatProvider* provider);
    // public System.String ToString(System.String format)
    // Offset: 0x1BC99B0
    ::StringW ToString(::StringW format);
    // public System.String ToString(System.String format, System.IFormatProvider provider)
    // Offset: 0x1BC99F0
    ::StringW ToString(::StringW format, ::System::IFormatProvider* provider);
    // static public System.Single Parse(System.String s)
    // Offset: 0x1BC9A34
    static float Parse(::StringW s);
    // static public System.Single Parse(System.String s, System.IFormatProvider provider)
    // Offset: 0x1BC9A70
    static float Parse(::StringW s, ::System::IFormatProvider* provider);
    // static public System.Single Parse(System.String s, System.Globalization.NumberStyles style, System.IFormatProvider provider)
    // Offset: 0x1BC9AA8
    static float Parse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider);
    // static private System.Single Parse(System.String s, System.Globalization.NumberStyles style, System.Globalization.NumberFormatInfo info)
    // Offset: 0x1BC9A68
    static float Parse(::StringW s, ::System::Globalization::NumberStyles style, ::System::Globalization::NumberFormatInfo* info);
    // static public System.Boolean TryParse(System.String s, out System.Single result)
    // Offset: 0x1BC9AFC
    static bool TryParse(::StringW s, ByRef<float> result);
    // static public System.Boolean TryParse(System.String s, System.Globalization.NumberStyles style, System.IFormatProvider provider, out System.Single result)
    // Offset: 0x1BC9BEC
    static bool TryParse(::StringW s, ::System::Globalization::NumberStyles style, ::System::IFormatProvider* provider, ByRef<float> result);
    // static private System.Boolean TryParse(System.String s, System.Globalization.NumberStyles style, System.Globalization.NumberFormatInfo info, out System.Single result)
    // Offset: 0x1BC9B34
    static bool TryParse(::StringW s, ::System::Globalization::NumberStyles style, ::System::Globalization::NumberFormatInfo* info, ByRef<float> result);
    // public System.TypeCode GetTypeCode()
    // Offset: 0x1BC9C4C
    ::System::TypeCode GetTypeCode();
    // private System.Boolean System.IConvertible.ToBoolean(System.IFormatProvider provider)
    // Offset: 0x1BC9C54
    bool System_IConvertible_ToBoolean(::System::IFormatProvider* provider);
    // private System.Char System.IConvertible.ToChar(System.IFormatProvider provider)
    // Offset: 0x1BC9CC8
    ::Il2CppChar System_IConvertible_ToChar(::System::IFormatProvider* provider);
    // private System.SByte System.IConvertible.ToSByte(System.IFormatProvider provider)
    // Offset: 0x1BC9DB8
    int8_t System_IConvertible_ToSByte(::System::IFormatProvider* provider);
    // private System.Byte System.IConvertible.ToByte(System.IFormatProvider provider)
    // Offset: 0x1BC9E2C
    uint8_t System_IConvertible_ToByte(::System::IFormatProvider* provider);
    // private System.Int16 System.IConvertible.ToInt16(System.IFormatProvider provider)
    // Offset: 0x1BC9EA0
    int16_t System_IConvertible_ToInt16(::System::IFormatProvider* provider);
    // private System.UInt16 System.IConvertible.ToUInt16(System.IFormatProvider provider)
    // Offset: 0x1BC9F14
    uint16_t System_IConvertible_ToUInt16(::System::IFormatProvider* provider);
    // private System.Int32 System.IConvertible.ToInt32(System.IFormatProvider provider)
    // Offset: 0x1BC9F88
    int System_IConvertible_ToInt32(::System::IFormatProvider* provider);
    // private System.UInt32 System.IConvertible.ToUInt32(System.IFormatProvider provider)
    // Offset: 0x1BC9FFC
    uint System_IConvertible_ToUInt32(::System::IFormatProvider* provider);
    // private System.Int64 System.IConvertible.ToInt64(System.IFormatProvider provider)
    // Offset: 0x1BCA070
    int64_t System_IConvertible_ToInt64(::System::IFormatProvider* provider);
    // private System.UInt64 System.IConvertible.ToUInt64(System.IFormatProvider provider)
    // Offset: 0x1BCA0E4
    uint64_t System_IConvertible_ToUInt64(::System::IFormatProvider* provider);
    // private System.Single System.IConvertible.ToSingle(System.IFormatProvider provider)
    // Offset: 0x1BCA158
    float System_IConvertible_ToSingle(::System::IFormatProvider* provider);
    // private System.Double System.IConvertible.ToDouble(System.IFormatProvider provider)
    // Offset: 0x1BCA160
    double System_IConvertible_ToDouble(::System::IFormatProvider* provider);
    // private System.Decimal System.IConvertible.ToDecimal(System.IFormatProvider provider)
    // Offset: 0x1BCA1D4
    ::System::Decimal System_IConvertible_ToDecimal(::System::IFormatProvider* provider);
    // private System.DateTime System.IConvertible.ToDateTime(System.IFormatProvider provider)
    // Offset: 0x1BCA248
    ::System::DateTime System_IConvertible_ToDateTime(::System::IFormatProvider* provider);
    // private System.Object System.IConvertible.ToType(System.Type type, System.IFormatProvider provider)
    // Offset: 0x1BCA338
    ::Il2CppObject* System_IConvertible_ToType(::System::Type* type, ::System::IFormatProvider* provider);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1BC9828
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1BC9930
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1BC9944
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::StringW ToString();
  }; // System.Single
  #pragma pack(pop)
  static check_size<sizeof(Single), 0 + sizeof(float)> __System_SingleSizeCheck;
  static_assert(sizeof(Single) == 0x4);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Single::IsInfinity
// Il2CppName: IsInfinity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float)>(&System::Single::IsInfinity)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "IsInfinity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: System::Single::IsPositiveInfinity
// Il2CppName: IsPositiveInfinity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float)>(&System::Single::IsPositiveInfinity)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "IsPositiveInfinity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: System::Single::IsNegativeInfinity
// Il2CppName: IsNegativeInfinity
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float)>(&System::Single::IsNegativeInfinity)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "IsNegativeInfinity", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: System::Single::IsNaN
// Il2CppName: IsNaN
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(float)>(&System::Single::IsNaN)> {
  static const MethodInfo* get() {
    static auto* f = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "IsNaN", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{f});
  }
};
// Writing MetadataGetter for method: System::Single::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Single::*)(::Il2CppObject*)>(&System::Single::CompareTo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Single::CompareTo
// Il2CppName: CompareTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Single::*)(float)>(&System::Single::CompareTo)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "CompareTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: System::Single::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Single::*)(float)>(&System::Single::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Single::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Single::*)(::System::IFormatProvider*)>(&System::Single::ToString)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Single::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Single::*)(::StringW)>(&System::Single::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format});
  }
};
// Writing MetadataGetter for method: System::Single::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Single::*)(::StringW, ::System::IFormatProvider*)>(&System::Single::ToString)> {
  static const MethodInfo* get() {
    static auto* format = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{format, provider});
  }
};
// Writing MetadataGetter for method: System::Single::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::StringW)>(&System::Single::Parse)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s});
  }
};
// Writing MetadataGetter for method: System::Single::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::StringW, ::System::IFormatProvider*)>(&System::Single::Parse)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, provider});
  }
};
// Writing MetadataGetter for method: System::Single::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::StringW, ::System::Globalization::NumberStyles, ::System::IFormatProvider*)>(&System::Single::Parse)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberStyles")->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, style, provider});
  }
};
// Writing MetadataGetter for method: System::Single::Parse
// Il2CppName: Parse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (*)(::StringW, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*)>(&System::Single::Parse)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberStyles")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberFormatInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "Parse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, style, info});
  }
};
// Writing MetadataGetter for method: System::Single::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<float>)>(&System::Single::TryParse)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, result});
  }
};
// Writing MetadataGetter for method: System::Single::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::System::Globalization::NumberStyles, ::System::IFormatProvider*, ByRef<float>)>(&System::Single::TryParse)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberStyles")->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, style, provider, result});
  }
};
// Writing MetadataGetter for method: System::Single::TryParse
// Il2CppName: TryParse
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::System::Globalization::NumberStyles, ::System::Globalization::NumberFormatInfo*, ByRef<float>)>(&System::Single::TryParse)> {
  static const MethodInfo* get() {
    static auto* s = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* style = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberStyles")->byval_arg;
    static auto* info = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberFormatInfo")->byval_arg;
    static auto* result = &::il2cpp_utils::GetClassFromName("System", "Single")->this_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "TryParse", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{s, style, info, result});
  }
};
// Writing MetadataGetter for method: System::Single::GetTypeCode
// Il2CppName: GetTypeCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TypeCode (System::Single::*)()>(&System::Single::GetTypeCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Single), "GetTypeCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Single::System_IConvertible_ToBoolean
// Il2CppName: System.IConvertible.ToBoolean
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Single::*)(::System::IFormatProvider*)>(&System::Single::System_IConvertible_ToBoolean)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "System.IConvertible.ToBoolean", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Single::System_IConvertible_ToChar
// Il2CppName: System.IConvertible.ToChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::Single::*)(::System::IFormatProvider*)>(&System::Single::System_IConvertible_ToChar)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "System.IConvertible.ToChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Single::System_IConvertible_ToSByte
// Il2CppName: System.IConvertible.ToSByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (System::Single::*)(::System::IFormatProvider*)>(&System::Single::System_IConvertible_ToSByte)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "System.IConvertible.ToSByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Single::System_IConvertible_ToByte
// Il2CppName: System.IConvertible.ToByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (System::Single::*)(::System::IFormatProvider*)>(&System::Single::System_IConvertible_ToByte)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "System.IConvertible.ToByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Single::System_IConvertible_ToInt16
// Il2CppName: System.IConvertible.ToInt16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (System::Single::*)(::System::IFormatProvider*)>(&System::Single::System_IConvertible_ToInt16)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "System.IConvertible.ToInt16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Single::System_IConvertible_ToUInt16
// Il2CppName: System.IConvertible.ToUInt16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (System::Single::*)(::System::IFormatProvider*)>(&System::Single::System_IConvertible_ToUInt16)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "System.IConvertible.ToUInt16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Single::System_IConvertible_ToInt32
// Il2CppName: System.IConvertible.ToInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Single::*)(::System::IFormatProvider*)>(&System::Single::System_IConvertible_ToInt32)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "System.IConvertible.ToInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Single::System_IConvertible_ToUInt32
// Il2CppName: System.IConvertible.ToUInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (System::Single::*)(::System::IFormatProvider*)>(&System::Single::System_IConvertible_ToUInt32)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "System.IConvertible.ToUInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Single::System_IConvertible_ToInt64
// Il2CppName: System.IConvertible.ToInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::Single::*)(::System::IFormatProvider*)>(&System::Single::System_IConvertible_ToInt64)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "System.IConvertible.ToInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Single::System_IConvertible_ToUInt64
// Il2CppName: System.IConvertible.ToUInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (System::Single::*)(::System::IFormatProvider*)>(&System::Single::System_IConvertible_ToUInt64)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "System.IConvertible.ToUInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Single::System_IConvertible_ToSingle
// Il2CppName: System.IConvertible.ToSingle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (System::Single::*)(::System::IFormatProvider*)>(&System::Single::System_IConvertible_ToSingle)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "System.IConvertible.ToSingle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Single::System_IConvertible_ToDouble
// Il2CppName: System.IConvertible.ToDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (System::Single::*)(::System::IFormatProvider*)>(&System::Single::System_IConvertible_ToDouble)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "System.IConvertible.ToDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Single::System_IConvertible_ToDecimal
// Il2CppName: System.IConvertible.ToDecimal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (System::Single::*)(::System::IFormatProvider*)>(&System::Single::System_IConvertible_ToDecimal)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "System.IConvertible.ToDecimal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Single::System_IConvertible_ToDateTime
// Il2CppName: System.IConvertible.ToDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::Single::*)(::System::IFormatProvider*)>(&System::Single::System_IConvertible_ToDateTime)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "System.IConvertible.ToDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::Single::System_IConvertible_ToType
// Il2CppName: System.IConvertible.ToType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::Single::*)(::System::Type*, ::System::IFormatProvider*)>(&System::Single::System_IConvertible_ToType)> {
  static const MethodInfo* get() {
    static auto* type = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "System.IConvertible.ToType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{type, provider});
  }
};
// Writing MetadataGetter for method: System::Single::Equals
// Il2CppName: Equals
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::Single::*)(::Il2CppObject*)>(&System::Single::Equals)> {
  static const MethodInfo* get() {
    static auto* obj = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::Single), "Equals", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{obj});
  }
};
// Writing MetadataGetter for method: System::Single::GetHashCode
// Il2CppName: GetHashCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::Single::*)()>(&System::Single::GetHashCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Single), "GetHashCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::Single::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::Single::*)()>(&System::Single::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::Single), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
