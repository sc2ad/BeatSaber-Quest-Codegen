// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: Zenject.ConventionFilterTypesBinder
#include "Zenject/ConventionFilterTypesBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Attribute
  class Attribute;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.ConventionFilterTypesBinder/Zenject.<>c__DisplayClass9_0`1
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  template<typename T>
  class ConventionFilterTypesBinder::$$c__DisplayClass9_0_1 : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public System.Func`2<T,System.Boolean> predicate
    // Size: 0x8
    // Offset: 0x0
    System::Func_2<T, bool>* predicate;
    // Field size check
    static_assert(sizeof(System::Func_2<T, bool>*) == 0x8);
    public:
    // Creating conversion operator: operator System::Func_2<T, bool>*
    constexpr operator System::Func_2<T, bool>*() const noexcept {
      return predicate;
    }
    // Autogenerated instance field getter
    // Get instance field: public System.Func`2<T,System.Boolean> predicate
    System::Func_2<T, bool>*& dyn_predicate() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConventionFilterTypesBinder::$$c__DisplayClass9_0_1::dyn_predicate");
      auto ___internal__instance = this;
      static auto ___internal__field__offset = THROW_UNLESS(il2cpp_utils::FindField(___internal__instance, "predicate"))->offset;
      return *reinterpret_cast<System::Func_2<T, bool>**>(reinterpret_cast<char*>(this) + ___internal__field__offset);
    }
    // System.Boolean <WithAttributeWhere>b__0(System.Type t)
    // Offset: 0xFFFFFFFF
    bool $WithAttributeWhere$b__0(System::Type* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConventionFilterTypesBinder::$$c__DisplayClass9_0_1::<WithAttributeWhere>b__0");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<WithAttributeWhere>b__0", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(t)})));
      auto ___instance_arg = this;
      return ::il2cpp_utils::RunMethodThrow<bool, false>(___instance_arg, ___internal__method, t);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConventionFilterTypesBinder::$$c__DisplayClass9_0_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConventionFilterTypesBinder::$$c__DisplayClass9_0_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConventionFilterTypesBinder::$$c__DisplayClass9_0_1<T>*, creationType>()));
    }
  }; // Zenject.ConventionFilterTypesBinder/Zenject.<>c__DisplayClass9_0`1
  // Could not write size check! Type: Zenject.ConventionFilterTypesBinder/Zenject.<>c__DisplayClass9_0`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::ConventionFilterTypesBinder::$$c__DisplayClass9_0_1, "Zenject", "ConventionFilterTypesBinder/<>c__DisplayClass9_0`1");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
