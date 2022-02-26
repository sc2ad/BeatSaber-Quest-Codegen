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
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
}
// Completed forward declares
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Forward declaring type: Test_MeshRenderer
  class Test_MeshRenderer;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HoudiniEngineUnity::Test_MeshRenderer);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_MeshRenderer*, "HoudiniEngineUnity", "Test_MeshRenderer");
// Type namespace: HoudiniEngineUnity
namespace HoudiniEngineUnity {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: HoudiniEngineUnity.Test_MeshRenderer
  // [TokenAttribute] Offset: FFFFFFFF
  class Test_MeshRenderer : public ::Il2CppObject/*, public ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_MeshRenderer*>*/ {
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
    // public UnityEngine.MeshRenderer self
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::MeshRenderer* self;
    // Field size check
    static_assert(sizeof(::UnityEngine::MeshRenderer*) == 0x8);
    public:
    // Creating interface conversion operator: operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_MeshRenderer*>
    operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_MeshRenderer*>() noexcept {
      return *reinterpret_cast<::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_MeshRenderer*>*>(this);
    }
    // Creating conversion operator: operator ::UnityEngine::MeshRenderer*
    constexpr operator ::UnityEngine::MeshRenderer*() const noexcept {
      return self;
    }
    // Get instance field reference: public UnityEngine.MeshRenderer self
    ::UnityEngine::MeshRenderer*& dyn_self();
    // public System.Void .ctor(UnityEngine.MeshRenderer self)
    // Offset: 0x2A0E640
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Test_MeshRenderer* New_ctor(::UnityEngine::MeshRenderer* self) {
      static auto ___internal__logger = ::Logger::get().WithContext("::HoudiniEngineUnity::Test_MeshRenderer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Test_MeshRenderer*, creationType>(self)));
    }
    // public System.Boolean IsNull()
    // Offset: 0x2A0E66C
    bool IsNull();
    // public System.Boolean IsEquivalentTo(HoudiniEngineUnity.Test_MeshRenderer other)
    // Offset: 0x2A0E6DC
    bool IsEquivalentTo(::HoudiniEngineUnity::Test_MeshRenderer* other);
  }; // HoudiniEngineUnity.Test_MeshRenderer
  #pragma pack(pop)
  static check_size<sizeof(Test_MeshRenderer), 16 + sizeof(::UnityEngine::MeshRenderer*)> __HoudiniEngineUnity_Test_MeshRendererSizeCheck;
  static_assert(sizeof(Test_MeshRenderer) == 0x18);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_MeshRenderer::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_MeshRenderer::IsNull
// Il2CppName: IsNull
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_MeshRenderer::*)()>(&HoudiniEngineUnity::Test_MeshRenderer::IsNull)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_MeshRenderer*), "IsNull", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HoudiniEngineUnity::Test_MeshRenderer::IsEquivalentTo
// Il2CppName: IsEquivalentTo
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (HoudiniEngineUnity::Test_MeshRenderer::*)(::HoudiniEngineUnity::Test_MeshRenderer*)>(&HoudiniEngineUnity::Test_MeshRenderer::IsEquivalentTo)> {
  static const MethodInfo* get() {
    static auto* other = &::il2cpp_utils::GetClassFromName("HoudiniEngineUnity", "Test_MeshRenderer")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HoudiniEngineUnity::Test_MeshRenderer*), "IsEquivalentTo", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{other});
  }
};
