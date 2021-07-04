// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: BakedReflectionProbe
  // [ExecuteAlways] Offset: E1123C
  class BakedReflectionProbe : public UnityEngine::MonoBehaviour {
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
    UnityEngine::Vector3 size;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // private UnityEngine.Vector3 _offset
    // Size: 0xC
    // Offset: 0x2C
    UnityEngine::Vector3 offset;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    // [SpaceAttribute] Offset: 0xE27DD0
    // [NullAllowed] Offset: 0xE27DD0
    // private ReflectionProbeDataSO _reflectionProbeData
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::ReflectionProbeDataSO* reflectionProbeData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ReflectionProbeDataSO*) == 0x8);
    // private UnityEngine.Cubemap _blackCubemap
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Cubemap* blackCubemap;
    // Field size check
    static_assert(sizeof(UnityEngine::Cubemap*) == 0x8);
    // Creating value type constructor for type: BakedReflectionProbe
    BakedReflectionProbe(int resolutionBeforeDownsample_ = {}, int downsampleByHalfCount_ = {}, UnityEngine::Vector3 size_ = {}, UnityEngine::Vector3 offset_ = {}, GlobalNamespace::ReflectionProbeDataSO* reflectionProbeData_ = {}, UnityEngine::Cubemap* blackCubemap_ = {}) noexcept : resolutionBeforeDownsample{resolutionBeforeDownsample_}, downsampleByHalfCount{downsampleByHalfCount_}, size{size_}, offset{offset_}, reflectionProbeData{reflectionProbeData_}, blackCubemap{blackCubemap_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE27E1C
    // Get static field: static private readonly System.Int32 _reflectionProbeBoundsMinPropertyId
    static int _get__reflectionProbeBoundsMinPropertyId();
    // Set static field: static private readonly System.Int32 _reflectionProbeBoundsMinPropertyId
    static void _set__reflectionProbeBoundsMinPropertyId(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE27E2C
    // Get static field: static private readonly System.Int32 _reflectionProbeBoundsMaxPropertyId
    static int _get__reflectionProbeBoundsMaxPropertyId();
    // Set static field: static private readonly System.Int32 _reflectionProbeBoundsMaxPropertyId
    static void _set__reflectionProbeBoundsMaxPropertyId(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE27E3C
    // Get static field: static private readonly System.Int32 _reflectionProbePositionPropertyId
    static int _get__reflectionProbePositionPropertyId();
    // Set static field: static private readonly System.Int32 _reflectionProbePositionPropertyId
    static void _set__reflectionProbePositionPropertyId(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE27E4C
    // Get static field: static private readonly System.Int32 _reflectionProbeTexture1PropertyId
    static int _get__reflectionProbeTexture1PropertyId();
    // Set static field: static private readonly System.Int32 _reflectionProbeTexture1PropertyId
    static void _set__reflectionProbeTexture1PropertyId(int value);
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xE27E5C
    // Get static field: static private readonly System.Int32 _reflectionProbeTexture2PropertyId
    static int _get__reflectionProbeTexture2PropertyId();
    // Set static field: static private readonly System.Int32 _reflectionProbeTexture2PropertyId
    static void _set__reflectionProbeTexture2PropertyId(int value);
    // public ReflectionProbeDataSO get_reflectionProbeData()
    // Offset: 0x11B7934
    GlobalNamespace::ReflectionProbeDataSO* get_reflectionProbeData();
    // public System.Void set_reflectionProbeData(ReflectionProbeDataSO value)
    // Offset: 0x11B793C
    void set_reflectionProbeData(GlobalNamespace::ReflectionProbeDataSO* value);
    // public UnityEngine.Vector3 get_position()
    // Offset: 0x11B7944
    UnityEngine::Vector3 get_position();
    // public System.Int32 get_resolutionBeforeDownsample()
    // Offset: 0x11B7968
    int get_resolutionBeforeDownsample();
    // public System.Int32 get_downsampleByHalfCount()
    // Offset: 0x11B7970
    int get_downsampleByHalfCount();
    // protected System.Void Start()
    // Offset: 0x11B7978
    void Start();
    // private System.Void SendDataToShaders()
    // Offset: 0x11B7A30
    void SendDataToShaders();
    // public System.Void .ctor()
    // Offset: 0x11B7D28
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BakedReflectionProbe* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BakedReflectionProbe::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BakedReflectionProbe*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x11B7D3C
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // BakedReflectionProbe
  #pragma pack(pop)
  static check_size<sizeof(BakedReflectionProbe), 64 + sizeof(UnityEngine::Cubemap*)> __GlobalNamespace_BakedReflectionProbeSizeCheck;
  static_assert(sizeof(BakedReflectionProbe) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BakedReflectionProbe*, "", "BakedReflectionProbe");
// Writing MetadataGetter for method: GlobalNamespace::BakedReflectionProbe::get_reflectionProbeData
// Il2CppName: get_reflectionProbeData
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BakedReflectionProbe::set_reflectionProbeData
// Il2CppName: set_reflectionProbeData
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BakedReflectionProbe::get_position
// Il2CppName: get_position
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BakedReflectionProbe::get_resolutionBeforeDownsample
// Il2CppName: get_resolutionBeforeDownsample
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BakedReflectionProbe::get_downsampleByHalfCount
// Il2CppName: get_downsampleByHalfCount
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BakedReflectionProbe::Start
// Il2CppName: Start
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BakedReflectionProbe::SendDataToShaders
// Il2CppName: SendDataToShaders
// Cannot perform method pointer template specialization from operators!
// Writing MetadataGetter for method: GlobalNamespace::BakedReflectionProbe::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::BakedReflectionProbe::_cctor
// Il2CppName: .cctor
// Cannot perform method pointer template specialization from operators!