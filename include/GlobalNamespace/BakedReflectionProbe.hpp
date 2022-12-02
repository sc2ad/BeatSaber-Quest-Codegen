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
  // Forward declaring type: ReflectionProbeDataSO
  class ReflectionProbeDataSO;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Cubemap
  class Cubemap;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: BakedReflectionProbe
  class BakedReflectionProbe;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::BakedReflectionProbe);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BakedReflectionProbe*, "", "BakedReflectionProbe");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: BakedReflectionProbe
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteAlways] Offset: FFFFFFFF
  class BakedReflectionProbe : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private System.Int32 _resolutionBeforeDownsample
    // Size: 0x4
    // Offset: 0x18
    int resolutionBeforeDownsample;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _downsampleByHalfCount
    // Size: 0x4
    // Offset: 0x1C
    int downsampleByHalfCount;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.Vector3 _size
    // Size: 0xC
    // Offset: 0x20
    ::UnityEngine::Vector3 size;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _offset
    // Size: 0xC
    // Offset: 0x2C
    ::UnityEngine::Vector3 offset;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector3) == 0xC);
    // [SpaceAttribute] Offset: 0x1123120
    // [NullAllowed] Offset: 0x1123120
    // private ReflectionProbeDataSO _reflectionProbeData
    // Size: 0x8
    // Offset: 0x38
    ::GlobalNamespace::ReflectionProbeDataSO* reflectionProbeData;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::ReflectionProbeDataSO*) == 0x8);
    // private UnityEngine.Cubemap _blackCubemap
    // Size: 0x8
    // Offset: 0x40
    ::UnityEngine::Cubemap* blackCubemap;
    // Field size check
    static_assert(sizeof(::UnityEngine::Cubemap*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x112316C
    // Get static field: static private readonly System.Int32 _reflectionProbeBoundsMinPropertyId
    static int _get__reflectionProbeBoundsMinPropertyId();
    // Set static field: static private readonly System.Int32 _reflectionProbeBoundsMinPropertyId
    static void _set__reflectionProbeBoundsMinPropertyId(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x112317C
    // Get static field: static private readonly System.Int32 _reflectionProbeBoundsMaxPropertyId
    static int _get__reflectionProbeBoundsMaxPropertyId();
    // Set static field: static private readonly System.Int32 _reflectionProbeBoundsMaxPropertyId
    static void _set__reflectionProbeBoundsMaxPropertyId(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x112318C
    // Get static field: static private readonly System.Int32 _reflectionProbePositionPropertyId
    static int _get__reflectionProbePositionPropertyId();
    // Set static field: static private readonly System.Int32 _reflectionProbePositionPropertyId
    static void _set__reflectionProbePositionPropertyId(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x112319C
    // Get static field: static private readonly System.Int32 _reflectionProbeTexture1PropertyId
    static int _get__reflectionProbeTexture1PropertyId();
    // Set static field: static private readonly System.Int32 _reflectionProbeTexture1PropertyId
    static void _set__reflectionProbeTexture1PropertyId(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0x11231AC
    // Get static field: static private readonly System.Int32 _reflectionProbeTexture2PropertyId
    static int _get__reflectionProbeTexture2PropertyId();
    // Set static field: static private readonly System.Int32 _reflectionProbeTexture2PropertyId
    static void _set__reflectionProbeTexture2PropertyId(int value);
    // Get instance field reference: private System.Int32 _resolutionBeforeDownsample
    [[deprecated("Use field access instead!")]] int& dyn__resolutionBeforeDownsample();
    // Get instance field reference: private System.Int32 _downsampleByHalfCount
    [[deprecated("Use field access instead!")]] int& dyn__downsampleByHalfCount();
    // Get instance field reference: private UnityEngine.Vector3 _size
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__size();
    // Get instance field reference: private UnityEngine.Vector3 _offset
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector3& dyn__offset();
    // Get instance field reference: private ReflectionProbeDataSO _reflectionProbeData
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::ReflectionProbeDataSO*& dyn__reflectionProbeData();
    // Get instance field reference: private UnityEngine.Cubemap _blackCubemap
    [[deprecated("Use field access instead!")]] ::UnityEngine::Cubemap*& dyn__blackCubemap();
    // public ReflectionProbeDataSO get_reflectionProbeData()
    // Offset: 0x139DDC4
    ::GlobalNamespace::ReflectionProbeDataSO* get_reflectionProbeData();
    // public System.Void set_reflectionProbeData(ReflectionProbeDataSO value)
    // Offset: 0x139DDCC
    void set_reflectionProbeData(::GlobalNamespace::ReflectionProbeDataSO* value);
    // public UnityEngine.Vector3 get_position()
    // Offset: 0x139DDD4
    ::UnityEngine::Vector3 get_position();
    // public System.Int32 get_resolutionBeforeDownsample()
    // Offset: 0x139DDF8
    int get_resolutionBeforeDownsample();
    // public System.Int32 get_downsampleByHalfCount()
    // Offset: 0x139DE00
    int get_downsampleByHalfCount();
    // public System.Void .ctor()
    // Offset: 0x139E1B8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BakedReflectionProbe* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::BakedReflectionProbe::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BakedReflectionProbe*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x139E1CC
    static void _cctor();
    // protected System.Void Start()
    // Offset: 0x139DE08
    void Start();
    // private System.Void SendDataToShaders()
    // Offset: 0x139DEC0
    void SendDataToShaders();
  }; // BakedReflectionProbe
  #pragma pack(pop)
  static check_size<sizeof(BakedReflectionProbe), 64 + sizeof(::UnityEngine::Cubemap*)> __GlobalNamespace_BakedReflectionProbeSizeCheck;
  static_assert(sizeof(BakedReflectionProbe) == 0x48);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::BakedReflectionProbe::get_reflectionProbeData
// Il2CppName: get_reflectionProbeData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ReflectionProbeDataSO* (GlobalNamespace::BakedReflectionProbe::*)()>(&GlobalNamespace::BakedReflectionProbe::get_reflectionProbeData)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BakedReflectionProbe*), "get_reflectionProbeData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BakedReflectionProbe::set_reflectionProbeData
// Il2CppName: set_reflectionProbeData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BakedReflectionProbe::*)(::GlobalNamespace::ReflectionProbeDataSO*)>(&GlobalNamespace::BakedReflectionProbe::set_reflectionProbeData)> {
  static const MethodInfo* get() {
    static auto* value = &::il2cpp_utils::GetClassFromName("", "ReflectionProbeDataSO")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BakedReflectionProbe*), "set_reflectionProbeData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{value});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BakedReflectionProbe::get_position
// Il2CppName: get_position
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (GlobalNamespace::BakedReflectionProbe::*)()>(&GlobalNamespace::BakedReflectionProbe::get_position)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BakedReflectionProbe*), "get_position", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BakedReflectionProbe::get_resolutionBeforeDownsample
// Il2CppName: get_resolutionBeforeDownsample
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BakedReflectionProbe::*)()>(&GlobalNamespace::BakedReflectionProbe::get_resolutionBeforeDownsample)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BakedReflectionProbe*), "get_resolutionBeforeDownsample", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BakedReflectionProbe::get_downsampleByHalfCount
// Il2CppName: get_downsampleByHalfCount
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (GlobalNamespace::BakedReflectionProbe::*)()>(&GlobalNamespace::BakedReflectionProbe::get_downsampleByHalfCount)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BakedReflectionProbe*), "get_downsampleByHalfCount", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BakedReflectionProbe::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BakedReflectionProbe::_cctor
// Il2CppName: .cctor
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&GlobalNamespace::BakedReflectionProbe::_cctor)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BakedReflectionProbe*), ".cctor", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BakedReflectionProbe::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BakedReflectionProbe::*)()>(&GlobalNamespace::BakedReflectionProbe::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BakedReflectionProbe*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::BakedReflectionProbe::SendDataToShaders
// Il2CppName: SendDataToShaders
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::BakedReflectionProbe::*)()>(&GlobalNamespace::BakedReflectionProbe::SendDataToShaders)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::BakedReflectionProbe*), "SendDataToShaders", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
