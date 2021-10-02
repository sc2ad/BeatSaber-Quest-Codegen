// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/byref.hpp"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AnimationCurve
  class AnimationCurve;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TubeBloomPrePassLight
  class TubeBloomPrePassLight;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x6C
  #pragma pack(push, 1)
  // Autogenerated type: MenuNeonLightsGenerator
  // [TokenAttribute] Offset: FFFFFFFF
  // [ExecuteInEditMode] Offset: FFFFFFFF
  class MenuNeonLightsGenerator : public UnityEngine::MonoBehaviour {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    protected:
    #endif
    // private System.Boolean _generate
    // Size: 0x1
    // Offset: 0x18
    bool generate;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: generate and: radius
    char __padding0[0x3] = {};
    // private System.Single _radius
    // Size: 0x4
    // Offset: 0x1C
    float radius;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _angle
    // Size: 0x4
    // Offset: 0x20
    float angle;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Int32 _numberOfElements
    // Size: 0x4
    // Offset: 0x24
    int numberOfElements;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private UnityEngine.AnimationCurve _intensityCurve
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::AnimationCurve* intensityCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private System.Single _intensityMultiplier
    // Size: 0x4
    // Offset: 0x30
    float intensityMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: intensityMultiplier and: lengthCurve
    char __padding5[0x4] = {};
    // private UnityEngine.AnimationCurve _lengthCurve
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::AnimationCurve* lengthCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private System.Single _lengthMultiplier
    // Size: 0x4
    // Offset: 0x40
    float lengthMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: lengthMultiplier and: widthCurve
    char __padding7[0x4] = {};
    // private UnityEngine.AnimationCurve _widthCurve
    // Size: 0x8
    // Offset: 0x48
    UnityEngine::AnimationCurve* widthCurve;
    // Field size check
    static_assert(sizeof(UnityEngine::AnimationCurve*) == 0x8);
    // private System.Single _widthMultiplier
    // Size: 0x4
    // Offset: 0x50
    float widthMultiplier;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: widthMultiplier and: neonLightPrefab
    char __padding9[0x4] = {};
    // private TubeBloomPrePassLight _neonLightPrefab
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::TubeBloomPrePassLight* neonLightPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TubeBloomPrePassLight*) == 0x8);
    // private UnityEngine.Vector3 _afterSpawnRotation
    // Size: 0xC
    // Offset: 0x60
    UnityEngine::Vector3 afterSpawnRotation;
    // Field size check
    static_assert(sizeof(UnityEngine::Vector3) == 0xC);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Get instance field reference: private System.Boolean _generate
    bool& dyn__generate();
    // Get instance field reference: private System.Single _radius
    float& dyn__radius();
    // Get instance field reference: private System.Single _angle
    float& dyn__angle();
    // Get instance field reference: private System.Int32 _numberOfElements
    int& dyn__numberOfElements();
    // Get instance field reference: private UnityEngine.AnimationCurve _intensityCurve
    UnityEngine::AnimationCurve*& dyn__intensityCurve();
    // Get instance field reference: private System.Single _intensityMultiplier
    float& dyn__intensityMultiplier();
    // Get instance field reference: private UnityEngine.AnimationCurve _lengthCurve
    UnityEngine::AnimationCurve*& dyn__lengthCurve();
    // Get instance field reference: private System.Single _lengthMultiplier
    float& dyn__lengthMultiplier();
    // Get instance field reference: private UnityEngine.AnimationCurve _widthCurve
    UnityEngine::AnimationCurve*& dyn__widthCurve();
    // Get instance field reference: private System.Single _widthMultiplier
    float& dyn__widthMultiplier();
    // Get instance field reference: private TubeBloomPrePassLight _neonLightPrefab
    GlobalNamespace::TubeBloomPrePassLight*& dyn__neonLightPrefab();
    // Get instance field reference: private UnityEngine.Vector3 _afterSpawnRotation
    UnityEngine::Vector3& dyn__afterSpawnRotation();
    // public System.Void .ctor()
    // Offset: 0x1180548
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MenuNeonLightsGenerator* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MenuNeonLightsGenerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MenuNeonLightsGenerator*, creationType>()));
    }
  }; // MenuNeonLightsGenerator
  #pragma pack(pop)
  static check_size<sizeof(MenuNeonLightsGenerator), 96 + sizeof(UnityEngine::Vector3)> __GlobalNamespace_MenuNeonLightsGeneratorSizeCheck;
  static_assert(sizeof(MenuNeonLightsGenerator) == 0x6C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuNeonLightsGenerator*, "", "MenuNeonLightsGenerator");
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::MenuNeonLightsGenerator::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
