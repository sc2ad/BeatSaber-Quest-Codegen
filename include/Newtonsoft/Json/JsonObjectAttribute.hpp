// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.JsonContainerAttribute
#include "Newtonsoft/Json/JsonContainerAttribute.hpp"
// Including type: Newtonsoft.Json.MemberSerialization
#include "Newtonsoft/Json/MemberSerialization.hpp"
// Including type: Newtonsoft.Json.Required
#include "Newtonsoft/Json/Required.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonObjectAttribute
  class JsonObjectAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::JsonObjectAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonObjectAttribute*, "Newtonsoft.Json", "JsonObjectAttribute");
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // WARNING Size may be invalid!
  // Autogenerated type: Newtonsoft.Json.JsonObjectAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: 10EDD64
  // [AttributeUsageAttribute] Offset: 10EDD64
  class JsonObjectAttribute : public ::Newtonsoft::Json::JsonContainerAttribute {
    public:
    public:
    // private Newtonsoft.Json.MemberSerialization _memberSerialization
    // Size: 0x4
    // Offset: 0x34
    ::Newtonsoft::Json::MemberSerialization memberSerialization;
    // Field size check
    static_assert(sizeof(::Newtonsoft::Json::MemberSerialization) == 0x4);
    // System.Nullable`1<Newtonsoft.Json.Required> _itemRequired
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    ::System::Nullable_1<::Newtonsoft::Json::Required> itemRequired;
    public:
    // Get instance field reference: private Newtonsoft.Json.MemberSerialization _memberSerialization
    [[deprecated("Use field access instead!")]] ::Newtonsoft::Json::MemberSerialization& dyn__memberSerialization();
    // Get instance field reference: System.Nullable`1<Newtonsoft.Json.Required> _itemRequired
    [[deprecated("Use field access instead!")]] ::System::Nullable_1<::Newtonsoft::Json::Required>& dyn__itemRequired();
    // public Newtonsoft.Json.MemberSerialization get_MemberSerialization()
    // Offset: 0x1819B44
    ::Newtonsoft::Json::MemberSerialization get_MemberSerialization();
    // public System.Void .ctor()
    // Offset: 0x1819B4C
    // Implemented from: Newtonsoft.Json.JsonContainerAttribute
    // Base method: System.Void JsonContainerAttribute::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonObjectAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::JsonObjectAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonObjectAttribute*, creationType>()));
    }
  }; // Newtonsoft.Json.JsonObjectAttribute
  // WARNING Not writing size check since size may be invalid!
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::JsonObjectAttribute::get_MemberSerialization
// Il2CppName: get_MemberSerialization
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::MemberSerialization (Newtonsoft::Json::JsonObjectAttribute::*)()>(&Newtonsoft::Json::JsonObjectAttribute::get_MemberSerialization)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::JsonObjectAttribute*), "get_MemberSerialization", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::JsonObjectAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
