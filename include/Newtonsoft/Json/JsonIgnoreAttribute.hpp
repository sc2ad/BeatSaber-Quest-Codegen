// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Forward declaring type: JsonIgnoreAttribute
  class JsonIgnoreAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::JsonIgnoreAttribute);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::JsonIgnoreAttribute*, "Newtonsoft.Json", "JsonIgnoreAttribute");
// Type namespace: Newtonsoft.Json
namespace Newtonsoft::Json {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.JsonIgnoreAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: 10EDE50
  // [PreserveAttribute] Offset: 10EDE50
  class JsonIgnoreAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x1819B3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JsonIgnoreAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Newtonsoft::Json::JsonIgnoreAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JsonIgnoreAttribute*, creationType>()));
    }
  }; // Newtonsoft.Json.JsonIgnoreAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::JsonIgnoreAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
