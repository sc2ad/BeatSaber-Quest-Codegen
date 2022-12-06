// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: TypeCode
  struct TypeCode;
  // Forward declaring type: IFormatProvider
  class IFormatProvider;
  // Forward declaring type: Decimal
  struct Decimal;
  // Forward declaring type: DateTime
  struct DateTime;
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Forward declaring type: IConvertible
  class IConvertible;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::IConvertible);
DEFINE_IL2CPP_ARG_TYPE(::System::IConvertible*, "System", "IConvertible");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.IConvertible
  // [TokenAttribute] Offset: FFFFFFFF
  // [CLSCompliantAttribute] Offset: 106CAB8
  // [ComVisibleAttribute] Offset: 106CAB8
  class IConvertible {
    public:
    // public System.TypeCode GetTypeCode()
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::TypeCode GetTypeCode();
    // public System.Boolean ToBoolean(System.IFormatProvider provider)
    // Offset: 0xFFFFFFFFFFFFFFFF
    bool ToBoolean(::System::IFormatProvider* provider);
    // public System.Char ToChar(System.IFormatProvider provider)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppChar ToChar(::System::IFormatProvider* provider);
    // public System.SByte ToSByte(System.IFormatProvider provider)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int8_t ToSByte(::System::IFormatProvider* provider);
    // public System.Byte ToByte(System.IFormatProvider provider)
    // Offset: 0xFFFFFFFFFFFFFFFF
    uint8_t ToByte(::System::IFormatProvider* provider);
    // public System.Int16 ToInt16(System.IFormatProvider provider)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int16_t ToInt16(::System::IFormatProvider* provider);
    // public System.UInt16 ToUInt16(System.IFormatProvider provider)
    // Offset: 0xFFFFFFFFFFFFFFFF
    uint16_t ToUInt16(::System::IFormatProvider* provider);
    // public System.Int32 ToInt32(System.IFormatProvider provider)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int ToInt32(::System::IFormatProvider* provider);
    // public System.UInt32 ToUInt32(System.IFormatProvider provider)
    // Offset: 0xFFFFFFFFFFFFFFFF
    uint ToUInt32(::System::IFormatProvider* provider);
    // public System.Int64 ToInt64(System.IFormatProvider provider)
    // Offset: 0xFFFFFFFFFFFFFFFF
    int64_t ToInt64(::System::IFormatProvider* provider);
    // public System.UInt64 ToUInt64(System.IFormatProvider provider)
    // Offset: 0xFFFFFFFFFFFFFFFF
    uint64_t ToUInt64(::System::IFormatProvider* provider);
    // public System.Single ToSingle(System.IFormatProvider provider)
    // Offset: 0xFFFFFFFFFFFFFFFF
    float ToSingle(::System::IFormatProvider* provider);
    // public System.Double ToDouble(System.IFormatProvider provider)
    // Offset: 0xFFFFFFFFFFFFFFFF
    double ToDouble(::System::IFormatProvider* provider);
    // public System.Decimal ToDecimal(System.IFormatProvider provider)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::Decimal ToDecimal(::System::IFormatProvider* provider);
    // public System.DateTime ToDateTime(System.IFormatProvider provider)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::System::DateTime ToDateTime(::System::IFormatProvider* provider);
    // public System.String ToString(System.IFormatProvider provider)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::StringW ToString(::System::IFormatProvider* provider);
    // public System.Object ToType(System.Type conversionType, System.IFormatProvider provider)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Il2CppObject* ToType(::System::Type* conversionType, ::System::IFormatProvider* provider);
  }; // System.IConvertible
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::IConvertible::GetTypeCode
// Il2CppName: GetTypeCode
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::TypeCode (System::IConvertible::*)()>(&System::IConvertible::GetTypeCode)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::IConvertible*), "GetTypeCode", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::IConvertible::ToBoolean
// Il2CppName: ToBoolean
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (System::IConvertible::*)(::System::IFormatProvider*)>(&System::IConvertible::ToBoolean)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IConvertible*), "ToBoolean", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::IConvertible::ToChar
// Il2CppName: ToChar
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppChar (System::IConvertible::*)(::System::IFormatProvider*)>(&System::IConvertible::ToChar)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IConvertible*), "ToChar", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::IConvertible::ToSByte
// Il2CppName: ToSByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int8_t (System::IConvertible::*)(::System::IFormatProvider*)>(&System::IConvertible::ToSByte)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IConvertible*), "ToSByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::IConvertible::ToByte
// Il2CppName: ToByte
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (System::IConvertible::*)(::System::IFormatProvider*)>(&System::IConvertible::ToByte)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IConvertible*), "ToByte", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::IConvertible::ToInt16
// Il2CppName: ToInt16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int16_t (System::IConvertible::*)(::System::IFormatProvider*)>(&System::IConvertible::ToInt16)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IConvertible*), "ToInt16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::IConvertible::ToUInt16
// Il2CppName: ToUInt16
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint16_t (System::IConvertible::*)(::System::IFormatProvider*)>(&System::IConvertible::ToUInt16)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IConvertible*), "ToUInt16", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::IConvertible::ToInt32
// Il2CppName: ToInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (System::IConvertible::*)(::System::IFormatProvider*)>(&System::IConvertible::ToInt32)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IConvertible*), "ToInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::IConvertible::ToUInt32
// Il2CppName: ToUInt32
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint (System::IConvertible::*)(::System::IFormatProvider*)>(&System::IConvertible::ToUInt32)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IConvertible*), "ToUInt32", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::IConvertible::ToInt64
// Il2CppName: ToInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int64_t (System::IConvertible::*)(::System::IFormatProvider*)>(&System::IConvertible::ToInt64)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IConvertible*), "ToInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::IConvertible::ToUInt64
// Il2CppName: ToUInt64
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (System::IConvertible::*)(::System::IFormatProvider*)>(&System::IConvertible::ToUInt64)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IConvertible*), "ToUInt64", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::IConvertible::ToSingle
// Il2CppName: ToSingle
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (System::IConvertible::*)(::System::IFormatProvider*)>(&System::IConvertible::ToSingle)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IConvertible*), "ToSingle", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::IConvertible::ToDouble
// Il2CppName: ToDouble
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double (System::IConvertible::*)(::System::IFormatProvider*)>(&System::IConvertible::ToDouble)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IConvertible*), "ToDouble", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::IConvertible::ToDecimal
// Il2CppName: ToDecimal
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Decimal (System::IConvertible::*)(::System::IFormatProvider*)>(&System::IConvertible::ToDecimal)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IConvertible*), "ToDecimal", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::IConvertible::ToDateTime
// Il2CppName: ToDateTime
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::DateTime (System::IConvertible::*)(::System::IFormatProvider*)>(&System::IConvertible::ToDateTime)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IConvertible*), "ToDateTime", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::IConvertible::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::IConvertible::*)(::System::IFormatProvider*)>(&System::IConvertible::ToString)> {
  static const MethodInfo* get() {
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IConvertible*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{provider});
  }
};
// Writing MetadataGetter for method: System::IConvertible::ToType
// Il2CppName: ToType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::IConvertible::*)(::System::Type*, ::System::IFormatProvider*)>(&System::IConvertible::ToType)> {
  static const MethodInfo* get() {
    static auto* conversionType = &::il2cpp_utils::GetClassFromName("System", "Type")->byval_arg;
    static auto* provider = &::il2cpp_utils::GetClassFromName("System", "IFormatProvider")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::IConvertible*), "ToType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{conversionType, provider});
  }
};
