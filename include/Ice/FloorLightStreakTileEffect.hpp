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
NEED_NO_BOX(Ice::FloorLightStreakTileEffect);
DEFINE_IL2CPP_ARG_TYPE(Ice::FloorLightStreakTileEffect*, "Ice", "FloorLightStreakTileEffect");
// Type namespace: Ice
namespace Ice {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Ice.FloorLightStreakTileEffect
  // [TokenAttribute] Offset: FFFFFFFF
  class FloorLightStreakTileEffect : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: Ice::FloorLightStreakTileEffect::Element
    class Element;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
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
    Ice::FloorLightTilesGrid* floorLightTilesGrid;
    // Field size check
    static_assert(sizeof(Ice::FloorLightTilesGrid*) == 0x8);
    // [InjectAttribute] Offset: 0xF65B44
    // private readonly IAudioTimeSource _audioTimeSource
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IAudioTimeSource* audioTimeSource;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IAudioTimeSource*) == 0x8);
    // private SimpleMemoryPool`1<Ice.FloorLightStreakTileEffect/Ice.Element> _elementsPool
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::SimpleMemoryPool_1<Ice::FloorLightStreakTileEffect::Element*>* elementsPool;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SimpleMemoryPool_1<Ice::FloorLightStreakTileEffect::Element*>*) == 0x8);
    public:
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
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
    float& dyn__stayOnTileDuration();
    // Get instance field reference: private Ice.FloorLightTilesGrid _floorLightTilesGrid
    Ice::FloorLightTilesGrid*& dyn__floorLightTilesGrid();
    // Get instance field reference: private readonly IAudioTimeSource _audioTimeSource
    GlobalNamespace::IAudioTimeSource*& dyn__audioTimeSource();
    // Get instance field reference: private SimpleMemoryPool`1<Ice.FloorLightStreakTileEffect/Ice.Element> _elementsPool
    GlobalNamespace::SimpleMemoryPool_1<Ice::FloorLightStreakTileEffect::Element*>*& dyn__elementsPool();
    // protected System.Void Start()
    // Offset: 0x26A7C10
    void Start();
    // protected System.Void Update()
    // Offset: 0x26A7CBC
    void Update();
    // public System.Void SpawnEffect(System.Int32 x, UnityEngine.Color color)
    // Offset: 0x26A7EEC
    void SpawnEffect(int x, UnityEngine::Color color);
    // public System.Void DespawnAllEffects()
    // Offset: 0x26A81F0
    void DespawnAllEffects();
    // private Ice.FloorLightStreakTileEffect/Ice.Element CreateNewElement()
    // Offset: 0x26A82C8
    Ice::FloorLightStreakTileEffect::Element* CreateNewElement();
    // private System.Void HandleElementDidMoveToNextTile(Ice.FloorLightStreakTileEffect/Ice.Element element)
    // Offset: 0x26A83AC
    void HandleElementDidMoveToNextTile(Ice::FloorLightStreakTileEffect::Element* element);
    // public System.Void .ctor()
    // Offset: 0x26A845C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FloorLightStreakTileEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Ice::FloorLightStreakTileEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FloorLightStreakTileEffect*, creationType>()));
    }
  }; // Ice.FloorLightStreakTileEffect
  #pragma pack(pop)
  static check_size<sizeof(FloorLightStreakTileEffect), 48 + sizeof(GlobalNamespace::SimpleMemoryPool_1<Ice::FloorLightStreakTileEffect::Element*>*)> __Ice_FloorLightStreakTileEffectSizeCheck;
  static_assert(sizeof(FloorLightStreakTileEffect) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
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
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Ice::FloorLightStreakTileEffect::*)(int, UnityEngine::Color)>(&Ice::FloorLightStreakTileEffect::SpawnEffect)> {
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
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<Ice::FloorLightStreakTileEffect::Element* (Ice::FloorLightStreakTileEffect::*)()>(&Ice::FloorLightStreakTileEffect::CreateNewElement)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Ice::FloorLightStreakTileEffect*), "CreateNewElement", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Ice::FloorLightStreakTileEffect::HandleElementDidMoveToNextTile
// Il2CppName: HandleElementDidMoveToNextTile
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Ice::FloorLightStreakTileEffect::*)(Ice::FloorLightStreakTileEffect::Element*)>(&Ice::FloorLightStreakTileEffect::HandleElementDidMoveToNextTile)> {
  static const MethodInfo* get() {
    static auto* element = &::il2cpp_utils::GetClassFromName("Ice", "FloorLightStreakTileEffect/Element")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Ice::FloorLightStreakTileEffect*), "HandleElementDidMoveToNextTile", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{element});
  }
};
// Writing MetadataGetter for method: Ice::FloorLightStreakTileEffect::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!