// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: BloomPrePassLight
#include "GlobalNamespace/BloomPrePassLight.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BoolSO
  class BoolSO;
  // Forward declaring type: ParametricBoxController
  class ParametricBoxController;
  // Forward declaring type: Parametric3SliceSpriteController
  class Parametric3SliceSpriteController;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Vector4
  struct Vector4;
  // Skipping declaration: Vector3 because it is already included!
  // Forward declaring type: Matrix4x4
  struct Matrix4x4;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: TubeBloomPrePassLight
  class TubeBloomPrePassLight;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::TubeBloomPrePassLight);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TubeBloomPrePassLight*, "", "TubeBloomPrePassLight");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xC0
  #pragma pack(push, 1)
  // Autogenerated type: TubeBloomPrePassLight
  // [TokenAttribute] Offset: FFFFFFFF
  // [SelectionBaseAttribute] Offset: FFFFFFFF
  class TubeBloomPrePassLight : public ::GlobalNamespace::BloomPrePassLight {
    public:
    // Writing base type padding for base size: 0x2A to desired offset: 0x30
    char ___base_padding[0x6] = {};
    public:
    // private BoolSO _mainEffectPostProcessEnabled
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::BoolSO* mainEffectPostProcessEnabled;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BoolSO*) == 0x8);
    // private System.Single _width
    // Size: 0x4
    // Offset: 0x38
    float width;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _overrideChildrenLength
    // Size: 0x1
    // Offset: 0x3C
    bool overrideChildrenLength;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: overrideChildrenLength and: length
    char __padding2[0x3] = {};
    // private System.Single _length
    // Size: 0x4
    // Offset: 0x40
    float length;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [RangeAttribute] Offset: 0x10FCA0C
    // private System.Single _center
    // Size: 0x4
    // Offset: 0x44
    float center;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x48
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // private System.Single _colorAlphaMultiplier
    // Size: 0x4
    // Offset: 0x58
    float colorAlphaMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _bloomFogIntensityMultiplier
    // Size: 0x4
    // Offset: 0x5C
    float bloomFogIntensityMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _fakeBloomIntensityMultiplier
    // Size: 0x4
    // Offset: 0x60
    float fakeBloomIntensityMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _boostToWhite
    // Size: 0x4
    // Offset: 0x64
    float boostToWhite;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [MinAttribute] Offset: 0x10FCA9C
    // private System.Single _lightWidthMultiplier
    // Size: 0x4
    // Offset: 0x68
    float lightWidthMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _addWidthToLength
    // Size: 0x1
    // Offset: 0x6C
    bool addWidthToLength;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: addWidthToLength and: bakedGlowWidthScale
    char __padding11[0x3] = {};
    // [SpaceAttribute] Offset: 0x10FCAE8
    // private System.Single _bakedGlowWidthScale
    // Size: 0x4
    // Offset: 0x70
    float bakedGlowWidthScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Boolean _forceUseBakedGlow
    // Size: 0x1
    // Offset: 0x74
    bool forceUseBakedGlow;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [SpaceAttribute] Offset: 0x10FCB30
    // [TooltipAttribute] Offset: 0x10FCB30
    // private System.Boolean _updateAlways
    // Size: 0x1
    // Offset: 0x75
    bool updateAlways;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [SpaceAttribute] Offset: 0x10FCB8C
    // private System.Boolean _limitAlpha
    // Size: 0x1
    // Offset: 0x76
    bool limitAlpha;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: limitAlpha and: minAlpha
    char __padding15[0x1] = {};
    // [DrawIfAttribute] Offset: 0x10FCBC4
    // private System.Single _minAlpha
    // Size: 0x4
    // Offset: 0x78
    float minAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [DrawIfAttribute] Offset: 0x10FCC6C
    // private System.Single _maxAlpha
    // Size: 0x4
    // Offset: 0x7C
    float maxAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0x10FCD14
    // private System.Boolean _overrideChildrenAlpha
    // Size: 0x1
    // Offset: 0x80
    bool overrideChildrenAlpha;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: overrideChildrenAlpha and: startAlpha
    char __padding18[0x3] = {};
    // [MinAttribute] Offset: 0x10FCD4C
    // private System.Single _startAlpha
    // Size: 0x4
    // Offset: 0x84
    float startAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [MinAttribute] Offset: 0x10FCD88
    // private System.Single _endAlpha
    // Size: 0x4
    // Offset: 0x88
    float endAlpha;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0x10FCDC4
    // private System.Boolean _overrideChildrenWidth
    // Size: 0x1
    // Offset: 0x8C
    bool overrideChildrenWidth;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: overrideChildrenWidth and: startWidth
    char __padding21[0x3] = {};
    // [MinAttribute] Offset: 0x10FCDFC
    // private System.Single _startWidth
    // Size: 0x4
    // Offset: 0x90
    float startWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [MinAttribute] Offset: 0x10FCE38
    // private System.Single _endWidth
    // Size: 0x4
    // Offset: 0x94
    float endWidth;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0x10FCE74
    // [NullAllowed] Offset: 0x10FCE74
    // private ParametricBoxController _parametricBoxController
    // Size: 0x8
    // Offset: 0x98
    ::GlobalNamespace::ParametricBoxController* parametricBoxController;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ParametricBoxController*) == 0x8);
    // [NullAllowed] Offset: 0x10FCEBC
    // private Parametric3SliceSpriteController _dynamic3SliceSprite
    // Size: 0x8
    // Offset: 0xA0
    ::GlobalNamespace::Parametric3SliceSpriteController* dynamic3SliceSprite;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::Parametric3SliceSpriteController*) == 0x8);
    // private System.Action didRefreshEvent
    // Size: 0x8
    // Offset: 0xA8
    ::System::Action* didRefreshEvent;
    // Field size check
    static_assert(sizeof(::System::Action*) == 0x8);
    // private System.Boolean _isDirty
    // Size: 0x1
    // Offset: 0xB0
    bool isDirty;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isDirty and: transform
    char __padding27[0x7] = {};
    // private UnityEngine.Transform _transform
    // Size: 0x8
    // Offset: 0xB8
    ::UnityEngine::Transform* transform;
    // Field size check
    static_assert(sizeof(::UnityEngine::Transform*) == 0x8);
    public:
    // Get instance field reference: private BoolSO _mainEffectPostProcessEnabled
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::BoolSO*& dyn__mainEffectPostProcessEnabled();
    // Get instance field reference: private System.Single _width
    [[deprecated("Use field access instead!")]] float& dyn__width();
    // Get instance field reference: private System.Boolean _overrideChildrenLength
    [[deprecated("Use field access instead!")]] bool& dyn__overrideChildrenLength();
    // Get instance field reference: private System.Single _length
    [[deprecated("Use field access instead!")]] float& dyn__length();
    // Get instance field reference: private System.Single _center
    [[deprecated("Use field access instead!")]] float& dyn__center();
    // Get instance field reference: private UnityEngine.Color _color
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__color();
    // Get instance field reference: private System.Single _colorAlphaMultiplier
    [[deprecated("Use field access instead!")]] float& dyn__colorAlphaMultiplier();
    // Get instance field reference: private System.Single _bloomFogIntensityMultiplier
    [[deprecated("Use field access instead!")]] float& dyn__bloomFogIntensityMultiplier();
    // Get instance field reference: private System.Single _fakeBloomIntensityMultiplier
    [[deprecated("Use field access instead!")]] float& dyn__fakeBloomIntensityMultiplier();
    // Get instance field reference: private System.Single _boostToWhite
    [[deprecated("Use field access instead!")]] float& dyn__boostToWhite();
    // Get instance field reference: private System.Single _lightWidthMultiplier
    [[deprecated("Use field access instead!")]] float& dyn__lightWidthMultiplier();
    // Get instance field reference: private System.Boolean _addWidthToLength
    [[deprecated("Use field access instead!")]] bool& dyn__addWidthToLength();
    // Get instance field reference: private System.Single _bakedGlowWidthScale
    [[deprecated("Use field access instead!")]] float& dyn__bakedGlowWidthScale();
    // Get instance field reference: private System.Boolean _forceUseBakedGlow
    [[deprecated("Use field access instead!")]] bool& dyn__forceUseBakedGlow();
    // Get instance field reference: private System.Boolean _updateAlways
    [[deprecated("Use field access instead!")]] bool& dyn__updateAlways();
    // Get instance field reference: private System.Boolean _limitAlpha
    [[deprecated("Use field access instead!")]] bool& dyn__limitAlpha();
    // Get instance field reference: private System.Single _minAlpha
    [[deprecated("Use field access instead!")]] float& dyn__minAlpha();
    // Get instance field reference: private System.Single _maxAlpha
    [[deprecated("Use field access instead!")]] float& dyn__maxAlpha();
    // Get instance field reference: private System.Boolean _overrideChildrenAlpha
    [[deprecated("Use field access instead!")]] bool& dyn__overrideChildrenAlpha();
    // Get instance field reference: private System.Single _startAlpha
    [[deprecated("Use field access instead!")]] float& dyn__startAlpha();
    // Get instance field reference: private System.Single _endAlpha
    [[deprecated("Use field access instead!")]] float& dyn__endAlpha();
    // Get instance field reference: private System.Boolean _overrideChildrenWidth
    [[deprecated("Use field access instead!")]] bool& dyn__overrideChildrenWidth();
    // Get instance field reference: private System.Single _startWidth
    [[deprecated("Use field access instead!")]] float& dyn__startWidth();
    // Get instance field reference: private System.Single _endWidth
    [[deprecated("Use field access instead!")]] float& dyn__endWidth();
    // Get instance field reference: private ParametricBoxController _parametricBoxController
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ParametricBoxController*& dyn__parametricBoxController();
    // Get instance field reference: private Parametric3SliceSpriteController _dynamic3SliceSprite
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::Parametric3SliceSpriteController*& dyn__dynamic3SliceSprite();
    // Get instance field reference: private System.Action didRefreshEvent
    [[deprecated("Use field access instead!")]] ::System::Action*& dyn_didRefreshEvent();
    // Get instance field reference: private System.Boolean _isDirty
    [[deprecated("Use field access instead!")]] bool& dyn__isDirty();
    // Get instance field reference: private UnityEngine.Transform _transform
    [[deprecated("Use field access instead!")]] ::UnityEngine::Transform*& dyn__transform();
    // public System.Single get_colorAlphaMultiplier()
    // Offset: 0x1CD5170
    float get_colorAlphaMultiplier();
    // public System.Single get_center()
    // Offset: 0x1CD5178
    float get_center();
    // public System.Single get_length()
    // Offset: 0x1CD51AC
    float get_length();
    // public System.Void set_length(System.Single value)
    // Offset: 0x1CD51B4
    void set_length(float value);
    // public System.Single get_width()
    // Offset: 0x1CD51C4
    float get_width();
    // public System.Void set_width(System.Single value)
    // Offset: 0x1CD51CC
    void set_width(float value);
    // public System.Single get_lightWidthMultiplier()
    // Offset: 0x1CD51DC
    float get_lightWidthMultiplier();
    // public System.Void set_lightWidthMultiplier(System.Single value)
    // Offset: 0x1CD51E4
    void set_lightWidthMultiplier(float value);
    // public System.Single get_bloomFogIntensityMultiplier()
    // Offset: 0x1CD51EC
    float get_bloomFogIntensityMultiplier();
    // public System.Void set_bloomFogIntensityMultiplier(System.Single value)
    // Offset: 0x1CD51F4
    void set_bloomFogIntensityMultiplier(float value);
    // public UnityEngine.Color get_color()
    // Offset: 0x1CD5328
    ::UnityEngine::Color get_color();
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x1CD51FC
    void set_color(::UnityEngine::Color value);
    // public System.Void add_didRefreshEvent(System.Action value)
    // Offset: 0x1CD5028
    void add_didRefreshEvent(::System::Action* value);
    // public System.Void remove_didRefreshEvent(System.Action value)
    // Offset: 0x1CD50CC
    void remove_didRefreshEvent(::System::Action* value);
    // private System.Void MarkDirty()
    // Offset: 0x1CD51A0
    void MarkDirty();
    // static private System.Void ClipPoints(ref UnityEngine.Vector4 fromPointClipPos, ref UnityEngine.Vector4 toPointClipPos, ref UnityEngine.Vector3 fromPointViewPos, ref UnityEngine.Vector3 toPointViewPos, System.Boolean fromPointInside, System.Single t)
    // Offset: 0x1CD5EF4
    static void ClipPoints(ByRef<::UnityEngine::Vector4> fromPointClipPos, ByRef<::UnityEngine::Vector4> toPointClipPos, ByRef<::UnityEngine::Vector3> fromPointViewPos, ByRef<::UnityEngine::Vector3> toPointViewPos, bool fromPointInside, float t);
    // protected System.Void OnDrawGizmos()
    // Offset: 0x1CD60BC
    void OnDrawGizmos();
    // public override System.Boolean get_isDirty()
    // Offset: 0x1CD5180
    // Implemented from: BloomPrePassLight
    // Base method: System.Boolean BloomPrePassLight::get_isDirty()
    bool get_isDirty();
    // public System.Void .ctor()
    // Offset: 0x1CD6294
    // Implemented from: BloomPrePassLight
    // Base method: System.Void BloomPrePassLight::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TubeBloomPrePassLight* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::TubeBloomPrePassLight::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TubeBloomPrePassLight*, creationType>()));
    }
    // protected override System.Void OnEnable()
    // Offset: 0x1CD5334
    // Implemented from: BloomPrePassLight
    // Base method: System.Void BloomPrePassLight::OnEnable()
    void OnEnable();
    // protected override System.Void DidRegisterLight()
    // Offset: 0x1CD5360
    // Implemented from: BloomPrePassLight
    // Base method: System.Void BloomPrePassLight::DidRegisterLight()
    void DidRegisterLight();
    // public override System.Void Refresh()
    // Offset: 0x1CD5388
    // Implemented from: BloomPrePassLight
    // Base method: System.Void BloomPrePassLight::Refresh()
    void Refresh();
    // public override System.Void FillMeshData(ref System.Int32 lightNum, BloomPrePassLight/QuadData[] lightQuads, UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix, System.Single lineWidth)
    // Offset: 0x1CD5704
    // Implemented from: BloomPrePassLight
    // Base method: System.Void BloomPrePassLight::FillMeshData(ref System.Int32 lightNum, BloomPrePassLight/QuadData[] lightQuads, UnityEngine.Matrix4x4 viewMatrix, UnityEngine.Matrix4x4 projectionMatrix, System.Single lineWidth)
    void FillMeshData(ByRef<int> lightNum, ::ArrayW<::GlobalNamespace::BloomPrePassLight::QuadData> lightQuads, ::UnityEngine::Matrix4x4 viewMatrix, ::UnityEngine::Matrix4x4 projectionMatrix, float lineWidth);
  }; // TubeBloomPrePassLight
  #pragma pack(pop)
  static check_size<sizeof(TubeBloomPrePassLight), 184 + sizeof(::UnityEngine::Transform*)> __GlobalNamespace_TubeBloomPrePassLightSizeCheck;
  static_assert(sizeof(TubeBloomPrePassLight) == 0xC0);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::get_colorAlphaMultiplier
// Il2CppName: get_colorAlphaMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::TubeBloomPrePassLight::*)()>(&GlobalNamespace::TubeBloomPrePassLight::get_colorAlphaMultiplier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "get_colorAlphaMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::get_center
// Il2CppName: get_center
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::TubeBloomPrePassLight::*)()>(&GlobalNamespace::TubeBloomPrePassLight::get_center)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "get_center", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::get_length
// Il2CppName: get_length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::TubeBloomPrePassLight::*)()>(&GlobalNamespace::TubeBloomPrePassLight::get_length)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "get_length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::set_length
// Il2CppName: set_length
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TubeBloomPrePassLight::*)(float)>(&GlobalNamespace::TubeBloomPrePassLight::set_length)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "set_length", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::get_width
// Il2CppName: get_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::TubeBloomPrePassLight::*)()>(&GlobalNamespace::TubeBloomPrePassLight::get_width)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "get_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::set_width
// Il2CppName: set_width
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TubeBloomPrePassLight::*)(float)>(&GlobalNamespace::TubeBloomPrePassLight::set_width)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "set_width", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::get_lightWidthMultiplier
// Il2CppName: get_lightWidthMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::TubeBloomPrePassLight::*)()>(&GlobalNamespace::TubeBloomPrePassLight::get_lightWidthMultiplier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "get_lightWidthMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::set_lightWidthMultiplier
// Il2CppName: set_lightWidthMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TubeBloomPrePassLight::*)(float)>(&GlobalNamespace::TubeBloomPrePassLight::set_lightWidthMultiplier)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "set_lightWidthMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::get_bloomFogIntensityMultiplier
// Il2CppName: get_bloomFogIntensityMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::TubeBloomPrePassLight::*)()>(&GlobalNamespace::TubeBloomPrePassLight::get_bloomFogIntensityMultiplier)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "get_bloomFogIntensityMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::set_bloomFogIntensityMultiplier
// Il2CppName: set_bloomFogIntensityMultiplier
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TubeBloomPrePassLight::*)(float)>(&GlobalNamespace::TubeBloomPrePassLight::set_bloomFogIntensityMultiplier)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "set_bloomFogIntensityMultiplier", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::get_color
// Il2CppName: get_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (GlobalNamespace::TubeBloomPrePassLight::*)()>(&GlobalNamespace::TubeBloomPrePassLight::get_color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "get_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::set_color
// Il2CppName: set_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TubeBloomPrePassLight::*)(::UnityEngine::Color)>(&GlobalNamespace::TubeBloomPrePassLight::set_color)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "set_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::add_didRefreshEvent
// Il2CppName: add_didRefreshEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TubeBloomPrePassLight::*)(::System::Action*)>(&GlobalNamespace::TubeBloomPrePassLight::add_didRefreshEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "add_didRefreshEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::remove_didRefreshEvent
// Il2CppName: remove_didRefreshEvent
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TubeBloomPrePassLight::*)(::System::Action*)>(&GlobalNamespace::TubeBloomPrePassLight::remove_didRefreshEvent)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Action")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "remove_didRefreshEvent", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::MarkDirty
// Il2CppName: MarkDirty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TubeBloomPrePassLight::*)()>(&GlobalNamespace::TubeBloomPrePassLight::MarkDirty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "MarkDirty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::ClipPoints
// Il2CppName: ClipPoints
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Vector4>, ByRef<::UnityEngine::Vector4>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>, bool, float)>(&GlobalNamespace::TubeBloomPrePassLight::ClipPoints)> {
  static const MethodInfo* get() {
    static auto* fromPointClipPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->this_arg;
    static auto* toPointClipPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector4")->this_arg;
    static auto* fromPointViewPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* toPointViewPos = &::il2cpp_utils::GetClassFromName("UnityEngine", "Vector3")->this_arg;
    static auto* fromPointInside = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    static auto* t = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "ClipPoints", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{fromPointClipPos, toPointClipPos, fromPointViewPos, toPointViewPos, fromPointInside, t});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::OnDrawGizmos
// Il2CppName: OnDrawGizmos
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TubeBloomPrePassLight::*)()>(&GlobalNamespace::TubeBloomPrePassLight::OnDrawGizmos)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "OnDrawGizmos", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::get_isDirty
// Il2CppName: get_isDirty
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (GlobalNamespace::TubeBloomPrePassLight::*)()>(&GlobalNamespace::TubeBloomPrePassLight::get_isDirty)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "get_isDirty", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TubeBloomPrePassLight::*)()>(&GlobalNamespace::TubeBloomPrePassLight::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::DidRegisterLight
// Il2CppName: DidRegisterLight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TubeBloomPrePassLight::*)()>(&GlobalNamespace::TubeBloomPrePassLight::DidRegisterLight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "DidRegisterLight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::Refresh
// Il2CppName: Refresh
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TubeBloomPrePassLight::*)()>(&GlobalNamespace::TubeBloomPrePassLight::Refresh)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "Refresh", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::TubeBloomPrePassLight::FillMeshData
// Il2CppName: FillMeshData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::TubeBloomPrePassLight::*)(ByRef<int>, ::ArrayW<::GlobalNamespace::BloomPrePassLight::QuadData>, ::UnityEngine::Matrix4x4, ::UnityEngine::Matrix4x4, float)>(&GlobalNamespace::TubeBloomPrePassLight::FillMeshData)> {
  static const MethodInfo* get() {
    static auto* lightNum = &::il2cpp_utils::GetClassFromName("System", "Int32")->this_arg;
    static auto* lightQuads = &il2cpp_functions::array_class_get(::il2cpp_utils::GetClassFromName("", "BloomPrePassLight/QuadData"), 1)->byval_arg;
    static auto* viewMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    static auto* projectionMatrix = &::il2cpp_utils::GetClassFromName("UnityEngine", "Matrix4x4")->byval_arg;
    static auto* lineWidth = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::TubeBloomPrePassLight*), "FillMeshData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{lightNum, lightQuads, viewMatrix, projectionMatrix, lineWidth});
  }
};
