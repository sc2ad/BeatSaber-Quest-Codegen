// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: NUnit.Framework.Interfaces.IReflectionInfo
#include "NUnit/Framework/Interfaces/IReflectionInfo.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IParameterInfo
  class IParameterInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::NUnit::Framework::Interfaces::IParameterInfo);
DEFINE_IL2CPP_ARG_TYPE(::NUnit::Framework::Interfaces::IParameterInfo*, "NUnit.Framework.Interfaces", "IParameterInfo");
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Interfaces.IParameterInfo
  // [TokenAttribute] Offset: FFFFFFFF
  class IParameterInfo/*, public ::NUnit::Framework::Interfaces::IReflectionInfo*/ {
    public:
    // Creating interface conversion operator: operator ::NUnit::Framework::Interfaces::IReflectionInfo
    operator ::NUnit::Framework::Interfaces::IReflectionInfo() noexcept {
      return *reinterpret_cast<::NUnit::Framework::Interfaces::IReflectionInfo*>(this);
    }
    // public System.Boolean get_IsOptional()
    // Offset: 0xFFFFFFFF
    bool get_IsOptional();
    // public System.Type get_ParameterType()
    // Offset: 0xFFFFFFFF
    ::System::Type* get_ParameterType();
  }; // NUnit.Framework.Interfaces.IParameterInfo
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::IParameterInfo::get_IsOptional
// Il2CppName: get_IsOptional
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (NUnit::Framework::Interfaces::IParameterInfo::*)()>(&NUnit::Framework::Interfaces::IParameterInfo::get_IsOptional)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::IParameterInfo*), "get_IsOptional", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: NUnit::Framework::Interfaces::IParameterInfo::get_ParameterType
// Il2CppName: get_ParameterType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (NUnit::Framework::Interfaces::IParameterInfo::*)()>(&NUnit::Framework::Interfaces::IParameterInfo::get_ParameterType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(NUnit::Framework::Interfaces::IParameterInfo*), "get_ParameterType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
