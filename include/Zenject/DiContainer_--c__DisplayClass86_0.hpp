// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.DiContainer
#include "Zenject/DiContainer.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Zenject::DiContainer::$$c__DisplayClass86_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::DiContainer::$$c__DisplayClass86_0*, "Zenject", "DiContainer/<>c__DisplayClass86_0");
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.DiContainer/Zenject.<>c__DisplayClass86_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class DiContainer::$$c__DisplayClass86_0 : public ::Il2CppObject {
    public:
    public:
    // public Zenject.InjectContext context
    // Size: 0x8
    // Offset: 0x10
    ::Zenject::InjectContext* context;
    // Field size check
    static_assert(sizeof(::Zenject::InjectContext*) == 0x8);
    public:
    // Creating conversion operator: operator ::Zenject::InjectContext*
    constexpr operator ::Zenject::InjectContext*() const noexcept {
      return context;
    }
    // Get instance field reference: public Zenject.InjectContext context
    [[deprecated("Use field access instead!")]] ::Zenject::InjectContext*& dyn_context();
    // public System.Void .ctor()
    // Offset: 0x1E7DEC8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DiContainer::$$c__DisplayClass86_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::DiContainer::$$c__DisplayClass86_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DiContainer::$$c__DisplayClass86_0*, creationType>()));
    }
    // System.Type <ResolveTypeAll>b__0(Zenject.DiContainer/Zenject.ProviderInfo x)
    // Offset: 0x1E7DED0
    ::System::Type* $ResolveTypeAll$b__0(::Zenject::DiContainer::ProviderInfo* x);
  }; // Zenject.DiContainer/Zenject.<>c__DisplayClass86_0
  #pragma pack(pop)
  static check_size<sizeof(DiContainer::$$c__DisplayClass86_0), 16 + sizeof(::Zenject::InjectContext*)> __Zenject_DiContainer_$$c__DisplayClass86_0SizeCheck;
  static_assert(sizeof(DiContainer::$$c__DisplayClass86_0) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Zenject::DiContainer::$$c__DisplayClass86_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Zenject::DiContainer::$$c__DisplayClass86_0::$ResolveTypeAll$b__0
// Il2CppName: <ResolveTypeAll>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Zenject::DiContainer::$$c__DisplayClass86_0::*)(::Zenject::DiContainer::ProviderInfo*)>(&Zenject::DiContainer::$$c__DisplayClass86_0::$ResolveTypeAll$b__0)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("Zenject", "DiContainer/ProviderInfo")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Zenject::DiContainer::$$c__DisplayClass86_0*), "<ResolveTypeAll>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x});
  }
};
