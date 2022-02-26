// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HoudiniEngineUnity.IEquivableWrapperClass`1
#include "HoudiniEngineUnity/IEquivableWrapperClass_1.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: LODGroup
  class LODGroup;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: Test_LODGroup
  class Test_LODGroup;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::Test_LODGroup);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_LODGroup*, "HoudiniEngineUnity", "Test_LODGroup");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.Test_LODGroup
  // [TokenAttribute] Offset: FFFFFFFF
  class Test_LODGroup : public ::Il2CppObject/*, public ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_LODGroup*>*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public UnityEngine.LODGroup self
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::LODGroup* self;
    // Field size check
    static_assert(sizeof(::UnityEngine::LODGroup*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_LODGroup*>
    operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_LODGroup*>() noexcept {
      return *reinterpret_cast<::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_LODGroup*>*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::LODGroup*
    constexpr operator ::UnityEngine::LODGroup*() const noexcept {
      return self;
    }
    // Get instance field reference: public UnityEngine.LODGroup self
    ::UnityEngine::LODGroup*& dyn_self();
    // public System.Void .ctor(UnityEngine.LODGroup self)
    // Offset: 0x2A0CF2C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Test_LODGroup* New_ctor(::UnityEngine::LODGroup* self) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::Test_LODGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Test_LODGroup*, creationType>(self)));
    }
    // public System.Boolean IsNull()
    // Offset: 0x2A0CF58
    bool IsNull();
    // public System.Boolean IsEquivalentTo(HoudiniEngineUnity.Test_LODGroup other)
    // Offset: 0x2A0CFC8
    bool IsEquivalentTo(::HoudiniEngineUnity::Test_LODGroup* other);
  }; // HoudiniEngineUnity.Test_LODGroup
  #pragma pack(pop)
  static check_size<sizeof(Test_LODGroup), 16 + sizeof(::UnityEngine::LODGroup*)> __HoudiniEngineUnity_Test_LODGroupSizeCheck;
  static_assert(sizeof(Test_LODGroup) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_LODGroup::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_LODGroup::IsNull
// Il2CppName: IsNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_LODGroup::*)()>(&HoudiniEngineUnity::Test_LODGroup::IsNull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_LODGroup*), "IsNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_LODGroup::IsEquivalentTo
// Il2CppName: IsEquivalentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_LODGroup::*)(::HoudiniEngineUnity::Test_LODGroup*)>(&HoudiniEngineUnity::Test_LODGroup::IsEquivalentTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "Test_LODGroup")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_LODGroup*), "IsEquivalentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
