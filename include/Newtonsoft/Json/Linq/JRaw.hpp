// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Newtonsoft.Json.Linq.JValue
#include "Newtonsoft/Json/Linq/JValue.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Newtonsoft::Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonReader
  class JsonReader;
}
// Forward declaring namespace: Newtonsoft::Json::Linq
namespace Newtonsoft::Json::Linq {
  // Skipping declaration: JToken because it is already included!
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Linq
namespace Newtonsoft::Json::Linq {
  // Forward declaring type: JRaw
  class JRaw;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Linq::JRaw);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JRaw*, "Newtonsoft.Json.Linq", "JRaw");
// Type namespace: Newtonsoft.Json.Linq
namespace Newtonsoft::Json::Linq {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Linq.JRaw
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class JRaw : public ::Newtonsoft::Json::Linq::JValue {
    public:
    // public System.Void .ctor(Newtonsoft.Json.Linq.JRaw other)
    // Offset: 0x175E690
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JRaw* New_ctor(::Newtonsoft::Json::Linq::JRaw* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Linq::JRaw::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JRaw*, creationType>(other)));
    }
    // static public Newtonsoft.Json.Linq.JRaw Create(Newtonsoft.Json.JsonReader reader)
    // Offset: 0x175E7B4
    static ::Newtonsoft::Json::Linq::JRaw* Create(::Newtonsoft::Json::JsonReader* reader);
    // public System.Void .ctor(System.Object rawJson)
    // Offset: 0x175E728
    // Implemented from: Newtonsoft.Json.Linq.JValue
    // Base method: System.Void JValue::.ctor(System.Object rawJson)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JRaw* New_ctor(::Il2CppObject* rawJson) {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::Linq::JRaw::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JRaw*, creationType>(rawJson)));
    }
    // override Newtonsoft.Json.Linq.JToken CloneToken()
    // Offset: 0x175EA18
    // Implemented from: Newtonsoft.Json.Linq.JValue
    // Base method: Newtonsoft.Json.Linq.JToken JValue::CloneToken()
    ::Newtonsoft::Json::Linq::JToken* CloneToken();
  }; // Newtonsoft.Json.Linq.JRaw
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JRaw::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JRaw::Create
// Il2CppName: Create
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JRaw* (*)(::Newtonsoft::Json::JsonReader*)>(&Newtonsoft::Json::Linq::JRaw::Create)> {
  static const MethodInfo* get() {
    static auto* reader = &::il2cpp_utils::GetClassFromName("Newtonsoft.Json", "JsonReader")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JRaw*), "Create", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{reader});
  }
};
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JRaw::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JRaw::CloneToken
// Il2CppName: CloneToken
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::Linq::JToken* (Newtonsoft::Json::Linq::JRaw::*)()>(&Newtonsoft::Json::Linq::JRaw::CloneToken)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JRaw*), "CloneToken", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
