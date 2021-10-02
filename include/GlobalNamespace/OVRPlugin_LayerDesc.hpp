// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin/OverlayShape
#include "GlobalNamespace/OVRPlugin_OverlayShape.hpp"
// Including type: OVRPlugin/LayerLayout
#include "GlobalNamespace/OVRPlugin_LayerLayout.hpp"
// Including type: OVRPlugin/Sizei
#include "GlobalNamespace/OVRPlugin_Sizei.hpp"
// Including type: OVRPlugin/EyeTextureFormat
#include "GlobalNamespace/OVRPlugin_EyeTextureFormat.hpp"
// Including type: OVRPlugin/Fovf
#include "GlobalNamespace/OVRPlugin_Fovf.hpp"
// Including type: OVRPlugin/Rectf
#include "GlobalNamespace/OVRPlugin_Rectf.hpp"
#include "extern/beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/LayerDesc
  // [TokenAttribute] Offset: FFFFFFFF
  struct OVRPlugin::LayerDesc/*, public System::ValueType*/ {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // public OVRPlugin/OverlayShape Shape
    // Size: 0x4
    // Offset: 0x0
    GlobalNamespace::OVRPlugin::OverlayShape Shape;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::OverlayShape) == 0x4);
    // public OVRPlugin/LayerLayout Layout
    // Size: 0x4
    // Offset: 0x4
    GlobalNamespace::OVRPlugin::LayerLayout Layout;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::LayerLayout) == 0x4);
    // public OVRPlugin/Sizei TextureSize
    // Size: 0x8
    // Offset: 0x8
    GlobalNamespace::OVRPlugin::Sizei TextureSize;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::Sizei) == 0x8);
    // public System.Int32 MipLevels
    // Size: 0x4
    // Offset: 0x10
    int MipLevels;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Int32 SampleCount
    // Size: 0x4
    // Offset: 0x14
    int SampleCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public OVRPlugin/EyeTextureFormat Format
    // Size: 0x4
    // Offset: 0x18
    GlobalNamespace::OVRPlugin::EyeTextureFormat Format;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::EyeTextureFormat) == 0x4);
    // public System.Int32 LayerFlags
    // Size: 0x4
    // Offset: 0x1C
    int LayerFlags;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public OVRPlugin/Fovf[] Fov
    // Size: 0x8
    // Offset: 0x20
    ::ArrayW<GlobalNamespace::OVRPlugin::Fovf> Fov;
    // Field size check
    static_assert(sizeof(::ArrayW<GlobalNamespace::OVRPlugin::Fovf>) == 0x8);
    // public OVRPlugin/Rectf[] VisibleRect
    // Size: 0x8
    // Offset: 0x28
    ::ArrayW<GlobalNamespace::OVRPlugin::Rectf> VisibleRect;
    // Field size check
    static_assert(sizeof(::ArrayW<GlobalNamespace::OVRPlugin::Rectf>) == 0x8);
    // public OVRPlugin/Sizei MaxViewportSize
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::OVRPlugin::Sizei MaxViewportSize;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::Sizei) == 0x8);
    // public OVRPlugin/EyeTextureFormat DepthFormat
    // Size: 0x4
    // Offset: 0x38
    GlobalNamespace::OVRPlugin::EyeTextureFormat DepthFormat;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::EyeTextureFormat) == 0x4);
    // public OVRPlugin/EyeTextureFormat MotionVectorFormat
    // Size: 0x4
    // Offset: 0x3C
    GlobalNamespace::OVRPlugin::EyeTextureFormat MotionVectorFormat;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::EyeTextureFormat) == 0x4);
    // public OVRPlugin/EyeTextureFormat MotionVectorDepthFormat
    // Size: 0x4
    // Offset: 0x40
    GlobalNamespace::OVRPlugin::EyeTextureFormat MotionVectorDepthFormat;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::EyeTextureFormat) == 0x4);
    // public OVRPlugin/Sizei MotionVectorTextureSize
    // Size: 0x8
    // Offset: 0x44
    GlobalNamespace::OVRPlugin::Sizei MotionVectorTextureSize;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::Sizei) == 0x8);
    public:
    // Creating value type constructor for type: LayerDesc
    constexpr LayerDesc(GlobalNamespace::OVRPlugin::OverlayShape Shape_ = {}, GlobalNamespace::OVRPlugin::LayerLayout Layout_ = {}, GlobalNamespace::OVRPlugin::Sizei TextureSize_ = {}, int MipLevels_ = {}, int SampleCount_ = {}, GlobalNamespace::OVRPlugin::EyeTextureFormat Format_ = {}, int LayerFlags_ = {}, ::ArrayW<GlobalNamespace::OVRPlugin::Fovf> Fov_ = ::ArrayW<GlobalNamespace::OVRPlugin::Fovf>(nullptr), ::ArrayW<GlobalNamespace::OVRPlugin::Rectf> VisibleRect_ = ::ArrayW<GlobalNamespace::OVRPlugin::Rectf>(nullptr), GlobalNamespace::OVRPlugin::Sizei MaxViewportSize_ = {}, GlobalNamespace::OVRPlugin::EyeTextureFormat DepthFormat_ = {}, GlobalNamespace::OVRPlugin::EyeTextureFormat MotionVectorFormat_ = {}, GlobalNamespace::OVRPlugin::EyeTextureFormat MotionVectorDepthFormat_ = {}, GlobalNamespace::OVRPlugin::Sizei MotionVectorTextureSize_ = {}) noexcept : Shape{Shape_}, Layout{Layout_}, TextureSize{TextureSize_}, MipLevels{MipLevels_}, SampleCount{SampleCount_}, Format{Format_}, LayerFlags{LayerFlags_}, Fov{Fov_}, VisibleRect{VisibleRect_}, MaxViewportSize{MaxViewportSize_}, DepthFormat{DepthFormat_}, MotionVectorFormat{MotionVectorFormat_}, MotionVectorDepthFormat{MotionVectorDepthFormat_}, MotionVectorTextureSize{MotionVectorTextureSize_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Get instance field reference: public OVRPlugin/OverlayShape Shape
    GlobalNamespace::OVRPlugin::OverlayShape& dyn_Shape();
    // Get instance field reference: public OVRPlugin/LayerLayout Layout
    GlobalNamespace::OVRPlugin::LayerLayout& dyn_Layout();
    // Get instance field reference: public OVRPlugin/Sizei TextureSize
    GlobalNamespace::OVRPlugin::Sizei& dyn_TextureSize();
    // Get instance field reference: public System.Int32 MipLevels
    int& dyn_MipLevels();
    // Get instance field reference: public System.Int32 SampleCount
    int& dyn_SampleCount();
    // Get instance field reference: public OVRPlugin/EyeTextureFormat Format
    GlobalNamespace::OVRPlugin::EyeTextureFormat& dyn_Format();
    // Get instance field reference: public System.Int32 LayerFlags
    int& dyn_LayerFlags();
    // Get instance field reference: public OVRPlugin/Fovf[] Fov
    ::ArrayW<GlobalNamespace::OVRPlugin::Fovf>& dyn_Fov();
    // Get instance field reference: public OVRPlugin/Rectf[] VisibleRect
    ::ArrayW<GlobalNamespace::OVRPlugin::Rectf>& dyn_VisibleRect();
    // Get instance field reference: public OVRPlugin/Sizei MaxViewportSize
    GlobalNamespace::OVRPlugin::Sizei& dyn_MaxViewportSize();
    // Get instance field reference: public OVRPlugin/EyeTextureFormat DepthFormat
    GlobalNamespace::OVRPlugin::EyeTextureFormat& dyn_DepthFormat();
    // Get instance field reference: public OVRPlugin/EyeTextureFormat MotionVectorFormat
    GlobalNamespace::OVRPlugin::EyeTextureFormat& dyn_MotionVectorFormat();
    // Get instance field reference: public OVRPlugin/EyeTextureFormat MotionVectorDepthFormat
    GlobalNamespace::OVRPlugin::EyeTextureFormat& dyn_MotionVectorDepthFormat();
    // Get instance field reference: public OVRPlugin/Sizei MotionVectorTextureSize
    GlobalNamespace::OVRPlugin::Sizei& dyn_MotionVectorTextureSize();
    // public override System.String ToString()
    // Offset: 0x17FB0A0
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // OVRPlugin/LayerDesc
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::LayerDesc), 68 + sizeof(GlobalNamespace::OVRPlugin::Sizei)> __GlobalNamespace_OVRPlugin_LayerDescSizeCheck;
  static_assert(sizeof(OVRPlugin::LayerDesc) == 0x4C);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::LayerDesc, "", "OVRPlugin/LayerDesc");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::OVRPlugin::LayerDesc::ToString
// Il2CppName: ToString
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Il2CppString* (GlobalNamespace::OVRPlugin::LayerDesc::*)()>(&GlobalNamespace::OVRPlugin::LayerDesc::ToString)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::OVRPlugin::LayerDesc), "ToString", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
