// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.FactoryFromBinder3Extensions
#include "Zenject/FactoryFromBinder3Extensions.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectTypeInfo
  class InjectTypeInfo;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryFromBinder3Extensions::$$c__DisplayClass0_0_4, "Zenject", "FactoryFromBinder3Extensions/<>c__DisplayClass0_0`4");
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.FactoryFromBinder3Extensions/Zenject.<>c__DisplayClass0_0`4
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename TParam1, typename TParam2, typename TParam3, typename TContract>
  class FactoryFromBinder3Extensions::$$c__DisplayClass0_0_4 : public ::Il2CppObject {
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
    // public System.Guid factoryId
    // Size: 0x10
    // Offset: 0x0
    ::System::Guid factoryId;
    // Field size check
    static_assert(sizeof(::System::Guid) == 0x10);
    public:
    // Creating conversion operator: operator ::System::Guid
    constexpr operator ::System::Guid() const noexcept {
      return factoryId;
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Guid factoryId
    ::System::Guid& dyn_factoryId() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactoryFromBinder3Extensions::$$c__DisplayClass0_0_4::dyn_factoryId");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "factoryId"))->offset;
      return *reinterpret_cast<::System::Guid*>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // Zenject.IProvider <FromIFactory>b__0(Zenject.DiContainer container)
    // Offset: 0xFFFFFFFFFFFFFFFF
    ::Zenject::IProvider* $FromIFactory$b__0(::Zenject::DiContainer* container) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactoryFromBinder3Extensions::$$c__DisplayClass0_0_4::<FromIFactory>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<FromIFactory>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(container)})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::IProvider*, false>(this, ___internal__method, container);
    }
    // static private System.Object __zenCreate(System.Object[] P_0)
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::Il2CppObject* __zenCreate(::ArrayW<::Il2CppObject*> P_0) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactoryFromBinder3Extensions::$$c__DisplayClass0_0_4::__zenCreate");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder3Extensions::$$c__DisplayClass0_0_4<TParam1, TParam2, TParam3, TContract>*>::get(), "__zenCreate", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(P_0)})));
      return ::il2cpp_utils::RunMethodRethrow<::Il2CppObject*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method, P_0);
    }
    // static private Zenject.InjectTypeInfo __zenCreateInjectTypeInfo()
    // Offset: 0xFFFFFFFFFFFFFFFF
    static ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactoryFromBinder3Extensions::$$c__DisplayClass0_0_4::__zenCreateInjectTypeInfo");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder3Extensions::$$c__DisplayClass0_0_4<TParam1, TParam2, TParam3, TContract>*>::get(), "__zenCreateInjectTypeInfo", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(static_cast<Il2CppObject*>(nullptr), ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryFromBinder3Extensions::$$c__DisplayClass0_0_4<TParam1, TParam2, TParam3, TContract>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Zenject::FactoryFromBinder3Extensions::$$c__DisplayClass0_0_4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryFromBinder3Extensions::$$c__DisplayClass0_0_4<TParam1, TParam2, TParam3, TContract>*, creationType>()));
    }
  }; // Zenject.FactoryFromBinder3Extensions/Zenject.<>c__DisplayClass0_0`4
  // Could not write size check! Type: Zenject.FactoryFromBinder3Extensions/Zenject.<>c__DisplayClass0_0`4 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
