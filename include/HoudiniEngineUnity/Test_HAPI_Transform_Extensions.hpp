// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: Test_HAPI_Transform
  class Test_HAPI_Transform;
  // Forward declaring type: HAPI_Transform
  struct HAPI_Transform;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: Test_HAPI_Transform_Extensions
  class Test_HAPI_Transform_Extensions;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::Test_HAPI_Transform_Extensions);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_HAPI_Transform_Extensions*, "HoudiniEngineUnity", "Test_HAPI_Transform_Extensions");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.Test_HAPI_Transform_Extensions
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class Test_HAPI_Transform_Extensions : public ::Il2CppObject {
    public:
    // static public HoudiniEngineUnity.Test_HAPI_Transform ToTestObject(HoudiniEngineUnity.HAPI_Transform self)
    // Offset: 0x2A3D238
    static ::HoudiniEngineUnity::Test_HAPI_Transform* ToTestObject(::HoudiniEngineUnity::HAPI_Transform self);
  }; // HoudiniEngineUnity.Test_HAPI_Transform_Extensions
  #pragma pack(pop)
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_HAPI_Transform_Extensions::ToTestObject
// Il2CppName: ToTestObject
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::Test_HAPI_Transform* (*)(::HoudiniEngineUnity::HAPI_Transform)>(&HoudiniEngineUnity::Test_HAPI_Transform_Extensions::ToTestObject)> {
  static const MethodInfo* get() {
    static auto* self = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "HAPI_Transform")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_HAPI_Transform_Extensions*), "ToTestObject", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{self});
  }
};
