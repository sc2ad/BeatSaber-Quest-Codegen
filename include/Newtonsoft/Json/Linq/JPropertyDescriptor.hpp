// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: System.ComponentModel.PropertyDescriptor
#include "System/ComponentModel/PropertyDescriptor.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Newtonsoft.Json.Linq
namespace Newtonsoft::Json::Linq {
  // Forward declaring type: JPropertyDescriptor
  class JPropertyDescriptor;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Newtonsoft::Json::Linq::JPropertyDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JPropertyDescriptor*, "Newtonsoft.Json.Linq", "JPropertyDescriptor");
// Type namespace: Newtonsoft.Json.Linq
namespace Newtonsoft::Json::Linq {
  // Size: 0x7C
  #pragma pack(push, 1)
  // Autogenerated type: Newtonsoft.Json.Linq.JPropertyDescriptor
  // [TokenAttribute] Offset: FFFFFFFF
  // [PreserveAttribute] Offset: FFFFFFFF
  class JPropertyDescriptor : public ::System::ComponentModel::PropertyDescriptor {
    public:
    // public override System.Type get_PropertyType()
    // Offset: 0x1797D64
    // Implemented from: System.ComponentModel.PropertyDescriptor
    // Base method: System.Type PropertyDescriptor::get_PropertyType()
    ::System::Type* get_PropertyType();
  }; // Newtonsoft.Json.Linq.JPropertyDescriptor
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Newtonsoft::Json::Linq::JPropertyDescriptor::get_PropertyType
// Il2CppName: get_PropertyType
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (Newtonsoft::Json::Linq::JPropertyDescriptor::*)()>(&Newtonsoft::Json::Linq::JPropertyDescriptor::get_PropertyType)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Newtonsoft::Json::Linq::JPropertyDescriptor*), "get_PropertyType", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
