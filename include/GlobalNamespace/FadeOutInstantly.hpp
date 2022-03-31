// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: FadeInOutController
  class FadeInOutController;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FadeOutInstantly
  class FadeOutInstantly;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FadeOutInstantly);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FadeOutInstantly*, "", "FadeOutInstantly");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: FadeOutInstantly
  // [TokenAttribute] Offset: FFFFFFFF
  class FadeOutInstantly : public ::UnityEngine::MonoBehaviour {
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
    // [InjectAttribute] Offset: 0x1242008
    // private FadeInOutController _fadeInOut
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::FadeInOutController* fadeInOut;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::FadeInOutController*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private FadeInOutController _fadeInOut
    ::GlobalNamespace::FadeInOutController*& dyn__fadeInOut();
    // protected System.Void Start()
    // Offset: 0x29E7964
    void Start();
    // public System.Void .ctor()
    // Offset: 0x29E7980
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FadeOutInstantly* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FadeOutInstantly::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FadeOutInstantly*, creationType>()));
    }
  }; // FadeOutInstantly
  #pragma pack(pop)
  static check_size<sizeof(FadeOutInstantly), 24 + sizeof(::GlobalNamespace::FadeInOutController*)> __GlobalNamespace_FadeOutInstantlySizeCheck;
  static_assert(sizeof(FadeOutInstantly) == 0x20);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FadeOutInstantly::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FadeOutInstantly::*)()>(&GlobalNamespace::FadeOutInstantly::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FadeOutInstantly*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FadeOutInstantly::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
