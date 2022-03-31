// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: DataItemConvertor`2
#include "GlobalNamespace/DataItemConvertor_2.hpp"
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
  // Forward declaring type: DataItemConvertor`4<TBase, TIn, TOut, TParam>
  template<typename TBase, typename TIn, typename TOut, typename TParam>
  class DataItemConvertor_4;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::DataItemConvertor_4, "", "DataItemConvertor`4");
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: DataItemConvertor`4
  // [TokenAttribute] Offset: FFFFFFFF
  template<typename TBase, typename TIn, typename TOut, typename TParam>
  class DataItemConvertor_4 : public ::GlobalNamespace::DataItemConvertor_2<TBase, TParam> {
    public:
    // public TBase Convert(System.Object item, TParam param)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TBase Convert(::Il2CppObject* item, TParam param) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DataItemConvertor_4::Convert");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Convert", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item), ::il2cpp_utils::ExtractType(param)})));
      return ::il2cpp_utils::RunMethodRethrow<TBase, false>(this, ___internal__method, item, param);
    }
    // protected TOut Convert(TIn item, TParam param)
    // Offset: 0xFFFFFFFFFFFFFFFF
    TOut Convert(TIn item, TParam param) {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DataItemConvertor_4::Convert");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "Convert", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(item), ::il2cpp_utils::ExtractType(param)})));
      return ::il2cpp_utils::RunMethodRethrow<TOut, false>(this, ___internal__method, item, param);
    }
    // public override System.Type get_inputDataType()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: DataItemConvertor`2
    // Base method: System.Type DataItemConvertor_2::get_inputDataType()
    ::System::Type* get_inputDataType() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DataItemConvertor_4::get_inputDataType");
      auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "get_inputDataType", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
      return ::il2cpp_utils::RunMethodRethrow<::System::Type*, false>(this, ___internal__method);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFFFFFFFFFF
    // Implemented from: DataItemConvertor`2
    // Base method: System.Void DataItemConvertor_2::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DataItemConvertor_4<TBase, TIn, TOut, TParam>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::DataItemConvertor_4::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DataItemConvertor_4<TBase, TIn, TOut, TParam>*, creationType>()));
    }
  }; // DataItemConvertor`4
  // Could not write size check! Type: DataItemConvertor`4 is generic, or has no fields that are valid for size checks!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
