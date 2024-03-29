// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DataItemConvertor`3
#include "GlobalNamespace/DataItemConvertor_3.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DefaultDataConvertor`3<TBase, TIn, TOut>
  template<typename TBase, typename TIn, typename TOut>
  class DefaultDataConvertor_3;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::DefaultDataConvertor_3, "", "DefaultDataConvertor`3");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: DefaultDataConvertor`3
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TBase, typename TIn, typename TOut>
  class DefaultDataConvertor_3 : public ::GlobalNamespace::DataItemConvertor_3<TBase, TIn, TOut> {
    public:
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: DataItemConvertor`3
    // Base method: System.Void DataItemConvertor_3::.ctor()
    // Base method: System.Void DataItemConvertor_1::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DefaultDataConvertor_3<TBase, TIn, TOut>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DefaultDataConvertor_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DefaultDataConvertor_3<TBase, TIn, TOut>*, creationType>()));
    }
    // protected override TOut Convert(TIn item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: DataItemConvertor`3
    // Base method: TOut DataItemConvertor_3::Convert(TIn item)
    TOut Convert(TIn item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DefaultDataConvertor_3::Convert");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Convert", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      return ::il2cpp_utils::RunMethodRethrow<TOut, false>(this, ___internal__method, item);
    }
  }; // DefaultDataConvertor`3
  // Could not write size check! Type: DefaultDataConvertor`3 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
