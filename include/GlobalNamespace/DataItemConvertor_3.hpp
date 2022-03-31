// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DataItemConvertor`1
#include "GlobalNamespace/DataItemConvertor_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: DataItemConvertor`3<TBase, TIn, TOut>
  template<typename TBase, typename TIn, typename TOut>
  class DataItemConvertor_3;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::DataItemConvertor_3, "", "DataItemConvertor`3");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: DataItemConvertor`3
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TBase, typename TIn, typename TOut>
  class DataItemConvertor_3 : public ::GlobalNamespace::DataItemConvertor_1<TBase> {
    public:
    // protected TOut Convert(TIn item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TOut Convert(TIn item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DataItemConvertor_3::Convert");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Convert", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      return ::il2cpp_utils::RunMethodRethrow<TOut, false>(this, ___internal__method, item);
    }
    // public override System.Type get_inputDataType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: DataItemConvertor`1
    // Base method: System.Type DataItemConvertor_1::get_inputDataType()
    ::System::Type* get_inputDataType() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DataItemConvertor_3::get_inputDataType");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_inputDataType", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Type*, false>(this, ___internal__method);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: DataItemConvertor`1
    // Base method: System.Void DataItemConvertor_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DataItemConvertor_3<TBase, TIn, TOut>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DataItemConvertor_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DataItemConvertor_3<TBase, TIn, TOut>*, creationType>()));
    }
    // public override TBase Convert(System.Object item)
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: DataItemConvertor`1
    // Base method: TOut DataItemConvertor_1::Convert(System.Object item)
    TBase Convert(::Il2CppObject* item) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DataItemConvertor_3::Convert");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Convert", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item)})));
      return ::il2cpp_utils::RunMethodRethrow<TBase, false>(this, ___internal__method, item);
    }
  }; // DataItemConvertor`3
  // Could not write size check! Type: DataItemConvertor`3 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
