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
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: OnDeserializingAttribute
  class OnDeserializingAttribute;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::Runtime::Serialization::OnDeserializingAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::OnDeserializingAttribute*, "System.Runtime.Serialization", "OnDeserializingAttribute");
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Serialization.OnDeserializingAttribute
  // [TokenAttribute] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: 118A6CC
  // [AttributeUsageAttribute] Offset: 118A6CC
  class OnDeserializingAttribute : public ::System::Attribute {
    public:
    // public System.Void .ctor()
    // Offset: 0x158DC5C
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OnDeserializingAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::Runtime::Serialization::OnDeserializingAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OnDeserializingAttribute*, creationType>()));
    }
  }; // System.Runtime.Serialization.OnDeserializingAttribute
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::Runtime::Serialization::OnDeserializingAttribute::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
