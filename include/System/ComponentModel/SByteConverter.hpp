// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.BaseNumberConverter
#include "System/ComponentModel/BaseNumberConverter.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: NumberFormatInfo
  class NumberFormatInfo;
}
// Completed forward declares
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Forward declaring type: SByteConverter
  class SByteConverter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::ComponentModel::SByteConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::SByteConverter*, "System.ComponentModel", "SByteConverter");
// Type namespace: System.ComponentModel
namespace System::ComponentModel {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.ComponentModel.SByteConverter
  // [TokenAttribute] Offset: FFFFFFFF
  class SByteConverter : public ::System::ComponentModel::BaseNumberConverter {
    public:
    // override System.Type get_TargetType()
    // Offset: 0x1EC76C0
    // Implemented from: System.ComponentModel.BaseNumberConverter
    // Base method: System.Type BaseNumberConverter::get_TargetType()
    ::System::Type* get_TargetType();
    // override System.Object FromString(System.String value, System.Int32 radix)
    // Offset: 0x1EC7730
    // Implemented from: System.ComponentModel.BaseNumberConverter
    // Base method: System.Object BaseNumberConverter::FromString(System.String value, System.Int32 radix)
    ::Il2CppObject* FromString(::StringW value, int radix);
    // override System.Object FromString(System.String value, System.Globalization.NumberFormatInfo formatInfo)
    // Offset: 0x1EC77C8
    // Implemented from: System.ComponentModel.BaseNumberConverter
    // Base method: System.Object BaseNumberConverter::FromString(System.String value, System.Globalization.NumberFormatInfo formatInfo)
    ::Il2CppObject* FromString(::StringW value, ::System::Globalization::NumberFormatInfo* formatInfo);
    // override System.String ToString(System.Object value, System.Globalization.NumberFormatInfo formatInfo)
    // Offset: 0x1EC7844
    // Implemented from: System.ComponentModel.BaseNumberConverter
    // Base method: System.String BaseNumberConverter::ToString(System.Object value, System.Globalization.NumberFormatInfo formatInfo)
    ::StringW ToString(::Il2CppObject* value, ::System::Globalization::NumberFormatInfo* formatInfo);
  }; // System.ComponentModel.SByteConverter
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::ComponentModel::SByteConverter::get_TargetType
// Il2CppName: get_TargetType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (System::ComponentModel::SByteConverter::*)()>(&System::ComponentModel::SByteConverter::get_TargetType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::SByteConverter*), "get_TargetType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::SByteConverter::FromString
// Il2CppName: FromString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::SByteConverter::*)(::StringW, int)>(&System::ComponentModel::SByteConverter::FromString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* radix = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::SByteConverter*), "FromString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, radix});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::SByteConverter::FromString
// Il2CppName: FromString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppObject* (System::ComponentModel::SByteConverter::*)(::StringW, ::System::Globalization::NumberFormatInfo*)>(&System::ComponentModel::SByteConverter::FromString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* formatInfo = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberFormatInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::SByteConverter*), "FromString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, formatInfo});
  }
};
// Writing MetadataGetter for method: System::ComponentModel::SByteConverter::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (System::ComponentModel::SByteConverter::*)(::Il2CppObject*, ::System::Globalization::NumberFormatInfo*)>(&System::ComponentModel::SByteConverter::ToString)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Object")->byval_arg;
    static auto* formatInfo = &::il2cpp_utils::GetClassFromName("System.Globalization", "NumberFormatInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(System::ComponentModel::SByteConverter*), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value, formatInfo});
  }
};
