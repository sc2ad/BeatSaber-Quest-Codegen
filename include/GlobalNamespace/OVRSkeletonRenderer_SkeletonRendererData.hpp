// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRSkeletonRenderer
#include "GlobalNamespace/OVRSkeletonRenderer.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData, "", "OVRSkeletonRenderer/SkeletonRendererData");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x7
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRSkeletonRenderer/SkeletonRendererData
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRSkeletonRenderer::SkeletonRendererData/*, public ::System::ValueType*/ {
    public:
    public:
    // private System.Single <RootScale>k__BackingField
    // Size: 0x4
    // Offset: 0x0
    float RootScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean <IsDataValid>k__BackingField
    // Size: 0x1
    // Offset: 0x4
    bool IsDataValid;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <IsDataHighConfidence>k__BackingField
    // Size: 0x1
    // Offset: 0x5
    bool IsDataHighConfidence;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean <ShouldUseSystemGestureMaterial>k__BackingField
    // Size: 0x1
    // Offset: 0x6
    bool ShouldUseSystemGestureMaterial;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating value type constructor for type: SkeletonRendererData
    constexpr SkeletonRendererData(float RootScale_ = {}, bool IsDataValid_ = {}, bool IsDataHighConfidence_ = {}, bool ShouldUseSystemGestureMaterial_ = {}) noexcept : RootScale{RootScale_}, IsDataValid{IsDataValid_}, IsDataHighConfidence{IsDataHighConfidence_}, ShouldUseSystemGestureMaterial{ShouldUseSystemGestureMaterial_} {}
    // Creating interface conversion operator: operator ::System::ValueType
    operator ::System::ValueType() noexcept {
      return *reinterpret_cast<::System::ValueType*>(this);
    }
    // Get instance field reference: private System.Single <RootScale>k__BackingField
    float& dyn_$RootScale$k__BackingField();
    // Get instance field reference: private System.Boolean <IsDataValid>k__BackingField
    bool& dyn_$IsDataValid$k__BackingField();
    // Get instance field reference: private System.Boolean <IsDataHighConfidence>k__BackingField
    bool& dyn_$IsDataHighConfidence$k__BackingField();
    // Get instance field reference: private System.Boolean <ShouldUseSystemGestureMaterial>k__BackingField
    bool& dyn_$ShouldUseSystemGestureMaterial$k__BackingField();
    // public System.Single get_RootScale()
    // Offset: 0x2458228
    float get_RootScale();
    // public System.Void set_RootScale(System.Single value)
    // Offset: 0x2458230
    void set_RootScale(float value);
    // public System.Boolean get_IsDataValid()
    // Offset: 0x2458238
    bool get_IsDataValid();
    // public System.Void set_IsDataValid(System.Boolean value)
    // Offset: 0x2458240
    void set_IsDataValid(bool value);
    // public System.Boolean get_IsDataHighConfidence()
    // Offset: 0x245824C
    bool get_IsDataHighConfidence();
    // public System.Void set_IsDataHighConfidence(System.Boolean value)
    // Offset: 0x2458254
    void set_IsDataHighConfidence(bool value);
    // public System.Boolean get_ShouldUseSystemGestureMaterial()
    // Offset: 0x2458260
    bool get_ShouldUseSystemGestureMaterial();
    // public System.Void set_ShouldUseSystemGestureMaterial(System.Boolean value)
    // Offset: 0x2458268
    void set_ShouldUseSystemGestureMaterial(bool value);
  }; // OVRSkeletonRenderer/SkeletonRendererData
  #pragma pack(pop)
  static check_size<sizeof(OVRSkeletonRenderer::SkeletonRendererData), 6 + sizeof(bool)> __GlobalNamespace_OVRSkeletonRenderer_SkeletonRendererDataSizeCheck;
  static_assert(sizeof(OVRSkeletonRenderer::SkeletonRendererData) == 0x7);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData::get_RootScale
// Il2CppName: get_RootScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData::*)()>(&GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData::get_RootScale)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData), "get_RootScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData::set_RootScale
// Il2CppName: set_RootScale
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData::*)(float)>(&GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData::set_RootScale)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData), "set_RootScale", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData::get_IsDataValid
// Il2CppName: get_IsDataValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData::*)()>(&GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData::get_IsDataValid)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData), "get_IsDataValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData::set_IsDataValid
// Il2CppName: set_IsDataValid
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData::*)(bool)>(&GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData::set_IsDataValid)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData), "set_IsDataValid", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData::get_IsDataHighConfidence
// Il2CppName: get_IsDataHighConfidence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData::*)()>(&GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData::get_IsDataHighConfidence)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData), "get_IsDataHighConfidence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData::set_IsDataHighConfidence
// Il2CppName: set_IsDataHighConfidence
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData::*)(bool)>(&GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData::set_IsDataHighConfidence)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData), "set_IsDataHighConfidence", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData::get_ShouldUseSystemGestureMaterial
// Il2CppName: get_ShouldUseSystemGestureMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData::*)()>(&GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData::get_ShouldUseSystemGestureMaterial)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData), "get_ShouldUseSystemGestureMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData::set_ShouldUseSystemGestureMaterial
// Il2CppName: set_ShouldUseSystemGestureMaterial
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData::*)(bool)>(&GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData::set_ShouldUseSystemGestureMaterial)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRSkeletonRenderer::SkeletonRendererData), "set_ShouldUseSystemGestureMaterial", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
