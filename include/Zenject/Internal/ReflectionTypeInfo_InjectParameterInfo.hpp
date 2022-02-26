// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.Internal.ReflectionTypeInfo
#include "Zenject/Internal/ReflectionTypeInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectableInfo
  class InjectableInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo*, "Zenject.Internal", "ReflectionTypeInfo/InjectParameterInfo");
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.Internal.ReflectionTypeInfo/Zenject.Internal.InjectParameterInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: FFFFFFFF
  class ReflectionTypeInfo::InjectParameterInfo : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public readonly System.Reflection.ParameterInfo ParameterInfo
    // Size: 0x8
    // Offset: 0x10
    ::System::Reflection::ParameterInfo* ParameterInfo;
    // Field size check
    static_assert(sizeof(::System::Reflection::ParameterInfo*) == 0x8);
    // public readonly Zenject.InjectableInfo InjectableInfo
    // Size: 0x8
    // Offset: 0x18
    ::Zenject::InjectableInfo* InjectableInfo;
    // Field size check
    static_assert(sizeof(::Zenject::InjectableInfo*) == 0x8);
    public:
    // Get instance field reference: public readonly System.Reflection.ParameterInfo ParameterInfo
    ::System::Reflection::ParameterInfo*& dyn_ParameterInfo();
    // Get instance field reference: public readonly Zenject.InjectableInfo InjectableInfo
    ::Zenject::InjectableInfo*& dyn_InjectableInfo();
    // public System.Void .ctor(System.Reflection.ParameterInfo parameterInfo, Zenject.InjectableInfo injectableInfo)
    // Offset: 0x1B061B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ReflectionTypeInfo::InjectParameterInfo* New_ctor(::System::Reflection::ParameterInfo* parameterInfo, ::Zenject::InjectableInfo* injectableInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ReflectionTypeInfo::InjectParameterInfo*, creationType>(parameterInfo, injectableInfo)));
    }
  }; // Zenject.Internal.ReflectionTypeInfo/Zenject.Internal.InjectParameterInfo
  #pragma pack(pop)
  static check_size<sizeof(ReflectionTypeInfo::InjectParameterInfo), 24 + sizeof(::Zenject::InjectableInfo*)> __Zenject_Internal_ReflectionTypeInfo_InjectParameterInfoSizeCheck;
  static_assert(sizeof(ReflectionTypeInfo::InjectParameterInfo) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::Internal::ReflectionTypeInfo::InjectParameterInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
