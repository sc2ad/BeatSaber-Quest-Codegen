// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System
namespace System {
  // Forward declaring type: __ComObject
  class __ComObject;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::System::__ComObject);
DEFINE_IL2CPP_ARG_TYPE(::System::__ComObject*, "System", "__ComObject");
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.__ComObject
  // [TokenAttribute] Offset: FFFFFFFF
  class __ComObject : public ::Il2CppObject {
    public:
    // private System.Void .ctor()
    // Offset: 0x27D6848
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static __ComObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::System::__ComObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<__ComObject*, creationType>()));
    }
  }; // System.__ComObject
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: System::__ComObject::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
