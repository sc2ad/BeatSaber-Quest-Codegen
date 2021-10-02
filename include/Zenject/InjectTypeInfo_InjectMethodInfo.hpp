// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.InjectTypeInfo
#include "Zenject/InjectTypeInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ZenInjectMethod
  class ZenInjectMethod;
  // Forward declaring type: InjectableInfo
  class InjectableInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.InjectTypeInfo/Zenject.InjectMethodInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: EAD634
  class InjectTypeInfo::InjectMethodInfo : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public readonly System.String Name
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* Name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public readonly Zenject.ZenInjectMethod Action
    // Size: 0x8
    // Offset: 0x18
    Zenject::ZenInjectMethod* Action;
    // Field size check
    static_assert(sizeof(Zenject::ZenInjectMethod*) == 0x8);
    // public readonly Zenject.InjectableInfo[] Parameters
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<Zenject::InjectableInfo*> Parameters;
    // Field size check
    static_assert(sizeof(::ArrayW<Zenject::InjectableInfo*>) == 0x8);
    public:
    // Get instance field reference: public readonly System.String Name
    ::Il2CppString*& dyn_Name();
    // Get instance field reference: public readonly Zenject.ZenInjectMethod Action
    Zenject::ZenInjectMethod*& dyn_Action();
    // Get instance field reference: public readonly Zenject.InjectableInfo[] Parameters
    ::ArrayW<Zenject::InjectableInfo*>& dyn_Parameters();
    // public System.Void .ctor(Zenject.ZenInjectMethod action, Zenject.InjectableInfo[] parameters, System.String name)
    // Offset: 0x2610EA0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InjectTypeInfo::InjectMethodInfo* New_ctor(Zenject::ZenInjectMethod* action, ::ArrayW<Zenject::InjectableInfo*> parameters, ::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::InjectTypeInfo::InjectMethodInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InjectTypeInfo::InjectMethodInfo*, creationType>(action, parameters, name)));
    }
  }; // Zenject.InjectTypeInfo/Zenject.InjectMethodInfo
  #pragma pack(pop)
  static check_size<sizeof(InjectTypeInfo::InjectMethodInfo), 32 + sizeof(::ArrayW<Zenject::InjectableInfo*>)> __Zenject_InjectTypeInfo_InjectMethodInfoSizeCheck;
  static_assert(sizeof(InjectTypeInfo::InjectMethodInfo) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::InjectTypeInfo::InjectMethodInfo*, "Zenject", "InjectTypeInfo/InjectMethodInfo");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::InjectTypeInfo::InjectMethodInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
