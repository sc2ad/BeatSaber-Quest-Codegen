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
// Forward declaring namespace: Ice
namespace Ice {
  // Forward declaring type: FloorLightTilesGrid
  class FloorLightTilesGrid;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IAudioTimeSource
  class IAudioTimeSource;
  // Forward declaring type: SimpleMemoryPool`1<T>
  template<typename T>
  class SimpleMemoryPool_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: Ice
namespace Ice {
  // Forward declaring type: FloorLightStreakTileEffect
  class FloorLightStreakTileEffect;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Ice::FloorLightStreakTileEffect);
DEFINE_IL2CPP_ARG_TYPE(::Ice::FloorLightStreakTileEffect*, "Ice", "FloorLightStreakTileEffect");
// Type namespace: Ice
namespace Ice {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Ice.FloorLightStreakTileEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class FloorLightStreakTileEffect : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::Ice::FloorLightStreakTileEffect::Element
    class Element;
    public:
    // private System.Single _stayOnTileDuration
    // Size: 0x4
    // Offset: 0x18
    float stayOnTileDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: stayOnTileDuration and: floorLightTilesGrid
    char __padding0[0x4] = {};
    // private Ice.FloorLightTilesGrid _floorLightTilesGrid
    // Size: 0x8
    // Offset: 0x20
    ::Ice::FloorLightTilesGrid* floorLightTilesGrid;
    // Field size check
    static_assert(sizeof(::Ice::FloorLightTilesGrid*) == 0x8);
    // [InjectAttribute] Offset: 0x1140BB8
    // private readonly IAudioTimeSource _audioTimeSource
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::IAudioTimeSource* audioTimeSource;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IAudioTimeSource*) == 0x8);
    // private SimpleMemoryPool`1<Ice.FloorLightStreakTileEffect/Ice.Element> _elementsPool
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::SimpleMemoryPool_1<::Ice::FloorLightStreakTileEffect::Element*>* elementsPool;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::SimpleMemoryPool_1<::Ice::FloorLightStreakTileEffect::Element*>*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kFadeInDuration
    static constexpr const float kFadeInDuration = 0.1;
    // Get static field: static private System.Single kFadeInDuration
    static float _get_kFadeInDuration();
    // Set static field: static private System.Single kFadeInDuration
    static void _set_kFadeInDuration(float value);
    // static field const value: static private System.Single kFadeOutDuration
    static constexpr const float kFadeOutDuration = 0.4;
    // Get static field: static private System.Single kFadeOutDuration
    static float _get_kFadeOutDuration();
    // Set static field: static private System.Single kFadeOutDuration
    static void _set_kFadeOutDuration(float value);
    // Get instance field reference: private System.Single _stayOnTileDuration
    [[deprecated("Use field access instead!")]] float& dyn__stayOnTileDuration();
    // Get instance field reference: private Ice.FloorLightTilesGrid _floorLightTilesGrid
    [[deprecated("Use field access instead!")]] ::Ice::FloorLightTilesGrid*& dyn__floorLightTilesGrid();
    // Get instance field reference: private readonly IAudioTimeSource _audioTimeSource
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::IAudioTimeSource*& dyn__audioTimeSource();
    // Get instance field reference: private SimpleMemoryPool`1<Ice.FloorLightStreakTileEffect/Ice.Element> _elementsPool
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::SimpleMemoryPool_1<::Ice::FloorLightStreakTileEffect::Element*>*& dyn__elementsPool();
    // public System.Void .ctor()
    // Offset: 0x2B589AC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FloorLightStreakTileEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Ice::FloorLightStreakTileEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FloorLightStreakTileEffect*, creationType>()));
    }
    // protected System.Void Start()
    // Offset: 0x2B58160
    void Start();
    // protected System.Void Update()
    // Offset: 0x2B5820C
    void Update();
    // public System.Void SpawnEffect(System.Int32 x, UnityEngine.Color color)
    // Offset: 0x2B5843C
    void SpawnEffect(int x, ::UnityEngine::Color color);
    // public System.Void DespawnAllEffects()
    // Offset: 0x2B58740
    void DespawnAllEffects();
    // private Ice.FloorLightStreakTileEffect/Ice.Element CreateNewElement()
    // Offset: 0x2B58818
    ::Ice::FloorLightStreakTileEffect::Element* CreateNewElement();
    // private System.Void HandleElementDidMoveToNextTile(Ice.FloorLightStreakTileEffect/Ice.Element element)
    // Offset: 0x2B588FC
    void HandleElementDidMoveToNextTile(::Ice::FloorLightStreakTileEffect::Element* element);
  }; // Ice.FloorLightStreakTileEffect
  #pragma pack(pop)
  static check_size<sizeof(FloorLightStreakTileEffect), 48 + sizeof(::GlobalNamespace::SimpleMemoryPool_1<::Ice::FloorLightStreakTileEffect::Element*>*)> __Ice_FloorLightStreakTileEffectSizeCheck;
  static_assert(sizeof(FloorLightStreakTileEffect) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Ice::FloorLightStreakTileEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Ice::FloorLightStreakTileEffect::Start
// Il2CppName: Start
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Ice::FloorLightStreakTileEffect::*)()>(&Ice::FloorLightStreakTileEffect::Start)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Ice::FloorLightStreakTileEffect*), "Start", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Ice::FloorLightStreakTileEffect::Update
// Il2CppName: Update
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Ice::FloorLightStreakTileEffect::*)()>(&Ice::FloorLightStreakTileEffect::Update)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Ice::FloorLightStreakTileEffect*), "Update", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Ice::FloorLightStreakTileEffect::SpawnEffect
// Il2CppName: SpawnEffect
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Ice::FloorLightStreakTileEffect::*)(int, ::UnityEngine::Color)>(&Ice::FloorLightStreakTileEffect::SpawnEffect)> {
  static const MethodInfo* get() {
    static auto* x = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Ice::FloorLightStreakTileEffect*), "SpawnEffect", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{x, color});
  }
};
// Writing MetadataGetter for method: Ice::FloorLightStreakTileEffect::DespawnAllEffects
// Il2CppName: DespawnAllEffects
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Ice::FloorLightStreakTileEffect::*)()>(&Ice::FloorLightStreakTileEffect::DespawnAllEffects)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Ice::FloorLightStreakTileEffect*), "DespawnAllEffects", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Ice::FloorLightStreakTileEffect::CreateNewElement
// Il2CppName: CreateNewElement
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Ice::FloorLightStreakTileEffect::Element* (Ice::FloorLightStreakTileEffect::*)()>(&Ice::FloorLightStreakTileEffect::CreateNewElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Ice::FloorLightStreakTileEffect*), "CreateNewElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Ice::FloorLightStreakTileEffect::HandleElementDidMoveToNextTile
// Il2CppName: HandleElementDidMoveToNextTile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Ice::FloorLightStreakTileEffect::*)(::Ice::FloorLightStreakTileEffect::Element*)>(&Ice::FloorLightStreakTileEffect::HandleElementDidMoveToNextTile)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("Ice", "FloorLightStreakTileEffect/Element")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Ice::FloorLightStreakTileEffect*), "HandleElementDidMoveToNextTile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
