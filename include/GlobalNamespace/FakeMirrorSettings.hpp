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
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: FakeMirrorSettings
  class FakeMirrorSettings;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::FakeMirrorSettings);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FakeMirrorSettings*, "", "FakeMirrorSettings");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: FakeMirrorSettings
  // [TokenAttribute] Offset: FFFFFFFF
  class FakeMirrorSettings : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Single _fakeMirrorTransparency
    // Size: 0x4
    // Offset: 0x18
    float fakeMirrorTransparency;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [SpaceAttribute] Offset: 0x11052D4
    // private System.Boolean _useVertexDistortion
    // Size: 0x1
    // Offset: 0x1C
    bool useVertexDistortion;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useVertexDistortion and: vertexDistortionNoiseScale
    char __padding1[0x3] = {};
    // [DrawIfAttribute] Offset: 0x1105310
    // [MinAttribute] Offset: 0x1105310
    // private System.Single _vertexDistortionNoiseScale
    // Size: 0x4
    // Offset: 0x20
    float vertexDistortionNoiseScale;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [DrawIfAttribute] Offset: 0x11053CC
    // private System.Single _vertexDistortionStrength
    // Size: 0x4
    // Offset: 0x24
    float vertexDistortionStrength;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // [DrawIfAttribute] Offset: 0x1105474
    // private UnityEngine.Vector3 _vertexDistortionDirectionality
    // Size: 0xC
    // Offset: 0x28
    ::UnityEngine::Vector3 vertexDistortionDirectionality;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // [DrawIfAttribute] Offset: 0x110551C
    // [MinAttribute] Offset: 0x110551C
    // private System.Single _vertexDistortionZposMultiplier
    // Size: 0x4
    // Offset: 0x34
    float vertexDistortionZposMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x11055D8
    // Get static field: static private readonly System.Int32 _fakeMirrorTransparencyId
    static int _get__fakeMirrorTransparencyId();
    // Set static field: static private readonly System.Int32 _fakeMirrorTransparencyId
    static void _set__fakeMirrorTransparencyId(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x11055E8
    // Get static field: static private readonly System.Int32 _vertexDistortionNoiseScaleId
    static int _get__vertexDistortionNoiseScaleId();
    // Set static field: static private readonly System.Int32 _vertexDistortionNoiseScaleId
    static void _set__vertexDistortionNoiseScaleId(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x11055F8
    // Get static field: static private readonly System.Int32 _vertexDistortionStrengthId
    static int _get__vertexDistortionStrengthId();
    // Set static field: static private readonly System.Int32 _vertexDistortionStrengthId
    static void _set__vertexDistortionStrengthId(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1105608
    // Get static field: static private readonly System.Int32 _vertexDistortionDirectionalityId
    static int _get__vertexDistortionDirectionalityId();
    // Set static field: static private readonly System.Int32 _vertexDistortionDirectionalityId
    static void _set__vertexDistortionDirectionalityId(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x1105618
    // Get static field: static private readonly System.Int32 _vertexDistortionZposMultiplierId
    static int _get__vertexDistortionZposMultiplierId();
    // Set static field: static private readonly System.Int32 _vertexDistortionZposMultiplierId
    static void _set__vertexDistortionZposMultiplierId(int value);
    // Get instance field reference: private System.Single _fakeMirrorTransparency
    [[deprecated("Use field access instead!")]] float& dyn__fakeMirrorTransparency();
    // Get instance field reference: private System.Boolean _useVertexDistortion
    [[deprecated("Use field access instead!")]] bool& dyn__useVertexDistortion();
    // Get instance field reference: private System.Single _vertexDistortionNoiseScale
    [[deprecated("Use field access instead!")]] float& dyn__vertexDistortionNoiseScale();
    // Get instance field reference: private System.Single _vertexDistortionStrength
    [[deprecated("Use field access instead!")]] float& dyn__vertexDistortionStrength();
    // Get instance field reference: private UnityEngine.Vector3 _vertexDistortionDirectionality
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__vertexDistortionDirectionality();
    // Get instance field reference: private System.Single _vertexDistortionZposMultiplier
    [[deprecated("Use field access instead!")]] float& dyn__vertexDistortionZposMultiplier();
    // public System.Single get_fakeMirrorTransparency()
    // Offset: 0x2AD49AC
    float get_fakeMirrorTransparency();
    // public System.Void set_fakeMirrorTransparency(System.Single value)
    // Offset: 0x2AD49B4
    void set_fakeMirrorTransparency(float value);
    // public System.Void .ctor()
    // Offset: 0x2AD4B3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FakeMirrorSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::FakeMirrorSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FakeMirrorSettings*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x2AD4BB4
    static void _cctor();
    // protected System.Void Start()
    // Offset: 0x2AD49BC
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x2AD4B34
    void OnEnable();
    // protected System.Void OnValidate()
    // Offset: 0x2AD4B38
    void OnValidate();
    // private System.Void SetGlobalParameters()
    // Offset: 0x2AD49C0
    void SetGlobalParameters();
  }; // FakeMirrorSettings
  #pragma pack(pop)
  static check_size<sizeof(FakeMirrorSettings), 52 + sizeof(float)> __GlobalNamespace_FakeMirrorSettingsSizeCheck;
  static_assert(sizeof(FakeMirrorSettings) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::FakeMirrorSettings::get_fakeMirrorTransparency
// Il2CppName: get_fakeMirrorTransparency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float (GlobalNamespace::FakeMirrorSettings::*)()>(&GlobalNamespace::FakeMirrorSettings::get_fakeMirrorTransparency)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FakeMirrorSettings*), "get_fakeMirrorTransparency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FakeMirrorSettings::set_fakeMirrorTransparency
// Il2CppName: set_fakeMirrorTransparency
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FakeMirrorSettings::*)(float)>(&GlobalNamespace::FakeMirrorSettings::set_fakeMirrorTransparency)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FakeMirrorSettings*), "set_fakeMirrorTransparency", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FakeMirrorSettings::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::FakeMirrorSettings::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::FakeMirrorSettings::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FakeMirrorSettings*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FakeMirrorSettings::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FakeMirrorSettings::*)()>(&GlobalNamespace::FakeMirrorSettings::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FakeMirrorSettings*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FakeMirrorSettings::OnEnable
// Il2CppName: OnEnable
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FakeMirrorSettings::*)()>(&GlobalNamespace::FakeMirrorSettings::OnEnable)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FakeMirrorSettings*), "OnEnable", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FakeMirrorSettings::OnValidate
// Il2CppName: OnValidate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FakeMirrorSettings::*)()>(&GlobalNamespace::FakeMirrorSettings::OnValidate)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FakeMirrorSettings*), "OnValidate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::FakeMirrorSettings::SetGlobalParameters
// Il2CppName: SetGlobalParameters
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::FakeMirrorSettings::*)()>(&GlobalNamespace::FakeMirrorSettings::SetGlobalParameters)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::FakeMirrorSettings*), "SetGlobalParameters", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
