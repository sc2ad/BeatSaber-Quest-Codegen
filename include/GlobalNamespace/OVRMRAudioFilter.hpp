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
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: OVRExternalComposition
  class OVRExternalComposition;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: OVRMRAudioFilter
  class OVRMRAudioFilter;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::OVRMRAudioFilter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRMRAudioFilter*, "", "OVRMRAudioFilter");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: OVRMRAudioFilter
  // [TokenAttribute] Offset: FFFFFFFF
  class OVRMRAudioFilter : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Boolean running
    // Size: 0x1
    // Offset: 0x18
    bool running;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: running and: composition
    char __padding0[0x7] = {};
    // public OVRExternalComposition composition
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::OVRExternalComposition* composition;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::OVRExternalComposition*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Boolean running
    [[deprecated("Use field access instead!")]] bool& dyn_running();
    // Get instance field reference: public OVRExternalComposition composition
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::OVRExternalComposition*& dyn_composition();
    // public System.Void .ctor()
    // Offset: 0x1A28920
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRMRAudioFilter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::OVRMRAudioFilter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRMRAudioFilter*, creationType>()));
    }
    // private System.Void Start()
    // Offset: 0x1A288F8
    void Start();
    // private System.Void OnAudioFilterRead(System.Single[] data, System.Int32 channels)
    // Offset: 0x1A28904
    void OnAudioFilterRead(::ArrayW<float> data, int channels);
  }; // OVRMRAudioFilter
  #pragma pack(pop)
  static check_size<sizeof(OVRMRAudioFilter), 32 + sizeof(::GlobalNamespace::OVRExternalComposition*)> __GlobalNamespace_OVRMRAudioFilterSizeCheck;
  static_assert(sizeof(OVRMRAudioFilter) == 0x28);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRMRAudioFilter::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::OVRMRAudioFilter::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRMRAudioFilter::*)()>(&GlobalNamespace::OVRMRAudioFilter::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMRAudioFilter*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRMRAudioFilter::OnAudioFilterRead
// Il2CppName: OnAudioFilterRead
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRMRAudioFilter::*)(::ArrayW<float>, int)>(&GlobalNamespace::OVRMRAudioFilter::OnAudioFilterRead)> {
  static const MethodInfo* get() {
    static auto* data = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("System", "Single"), 1)->byval_arg;
    static auto* channels = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRMRAudioFilter*), "OnAudioFilterRead", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{data, channels});
  }
};
