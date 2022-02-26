// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.InjectSources
#include "Zenject/InjectSources.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectableInfo
  class InjectableInfo;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::InjectableInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InjectableInfo*, "Zenject", "InjectableInfo");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.InjectableInfo
  // [TokenAttribute] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: 11E5FC8
  class InjectableInfo : public ::Il2CppObject {
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
    // public readonly System.Boolean Optional
    // Size: 0x1
    // Offset: 0x10
    bool Optional;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: Optional and: Identifier
    char __padding0[0x7] = {};
    // public readonly System.Object Identifier
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* Identifier;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public readonly Zenject.InjectSources SourceType
    // Size: 0x4
    // Offset: 0x20
    ::Zenject::InjectSources SourceType;
    // Field size check
    static_assert(sizeof(::Zenject::InjectSources) == 0x4);
    // Padding between fields: SourceType and: MemberName
    char __padding2[0x4] = {};
    // public readonly System.String MemberName
    // Size: 0x8
    // Offset: 0x28
    ::StringW MemberName;
    // Field size check
    static_assert(sizeof(::StringW) == 0x8);
    // public readonly System.Type MemberType
    // Size: 0x8
    // Offset: 0x30
    ::System::Type* MemberType;
    // Field size check
    static_assert(sizeof(::System::Type*) == 0x8);
    // public readonly System.Object DefaultValue
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppObject* DefaultValue;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    public:
    // Get instance field reference: public readonly System.Boolean Optional
    bool& dyn_Optional();
    // Get instance field reference: public readonly System.Object Identifier
    ::Il2CppObject*& dyn_Identifier();
    // Get instance field reference: public readonly Zenject.InjectSources SourceType
    ::Zenject::InjectSources& dyn_SourceType();
    // Get instance field reference: public readonly System.String MemberName
    ::StringW& dyn_MemberName();
    // Get instance field reference: public readonly System.Type MemberType
    ::System::Type*& dyn_MemberType();
    // Get instance field reference: public readonly System.Object DefaultValue
    ::Il2CppObject*& dyn_DefaultValue();
    // public System.Void .ctor(System.Boolean optional, System.Object identifier, System.String memberName, System.Type memberType, System.Object defaultValue, Zenject.InjectSources sourceType)
    // Offset: 0x2A47A20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InjectableInfo* New_ctor(bool optional, ::Il2CppObject* identifier, ::StringW memberName, ::System::Type* memberType, ::Il2CppObject* defaultValue, ::Zenject::InjectSources sourceType) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::InjectableInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InjectableInfo*, creationType>(optional, identifier, memberName, memberType, defaultValue, sourceType)));
    }
  }; // Zenject.InjectableInfo
  #pragma pack(pop)
  static check_size<sizeof(InjectableInfo), 56 + sizeof(::Il2CppObject*)> __Zenject_InjectableInfoSizeCheck;
  static_assert(sizeof(InjectableInfo) == 0x40);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::InjectableInfo::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
