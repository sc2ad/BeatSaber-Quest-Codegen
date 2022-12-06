// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: Ice.FloorLightStreakTileEffect
#include "Ice/FloorLightStreakTileEffect.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::Ice::FloorLightStreakTileEffect::Element);
DEFINE_IL2CPP_ARG_TYPE(::Ice::FloorLightStreakTileEffect::Element*, "Ice", "FloorLightStreakTileEffect/Element");
// Type namespace: Ice
namespace Ice {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: Ice.FloorLightStreakTileEffect/Ice.Element
  // [TokenAttribute] Offset: FFFFFFFF
  class FloorLightStreakTileEffect::Element : public ::Il2CppObject {
    public:
    public:
    // public System.Action`1<Ice.FloorLightStreakTileEffect/Ice.Element> didMoveToNextTile
    // Size: 0x8
    // Offset: 0x10
    ::System::Action_1<::Ice::FloorLightStreakTileEffect::Element*>* didMoveToNextTile;
    // Field size check
    static_assert(sizeof(::System::Action_1<::Ice::FloorLightStreakTileEffect::Element*>*) == 0x8);
    // private System.Int32 _currentTileY
    // Size: 0x4
    // Offset: 0x18
    int currentTileY;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 _lineIndex
    // Size: 0x4
    // Offset: 0x1C
    int lineIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _nextTileRemainingTime
    // Size: 0x4
    // Offset: 0x20
    float nextTileRemainingTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private System.Single _stayOnTileDuration
    // Size: 0x4
    // Offset: 0x24
    float stayOnTileDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _color
    // Size: 0x10
    // Offset: 0x28
    ::UnityEngine::Color color;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    public:
    // Get instance field reference: public System.Action`1<Ice.FloorLightStreakTileEffect/Ice.Element> didMoveToNextTile
    [[deprecated("Use field access instead!")]] ::System::Action_1<::Ice::FloorLightStreakTileEffect::Element*>*& dyn_didMoveToNextTile();
    // Get instance field reference: private System.Int32 _currentTileY
    [[deprecated("Use field access instead!")]] int& dyn__currentTileY();
    // Get instance field reference: private System.Int32 _lineIndex
    [[deprecated("Use field access instead!")]] int& dyn__lineIndex();
    // Get instance field reference: private System.Single _nextTileRemainingTime
    [[deprecated("Use field access instead!")]] float& dyn__nextTileRemainingTime();
    // Get instance field reference: private System.Single _stayOnTileDuration
    [[deprecated("Use field access instead!")]] float& dyn__stayOnTileDuration();
    // Get instance field reference: private UnityEngine.Color _color
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__color();
    // public System.Int32 get_lineIndex()
    // Offset: 0x2B51530
    int get_lineIndex();
    // public System.Int32 get_currentTileY()
    // Offset: 0x2B51538
    int get_currentTileY();
    // public UnityEngine.Color get_color()
    // Offset: 0x2B51540
    ::UnityEngine::Color get_color();
    // public System.Void .ctor()
    // Offset: 0x2B51464
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FloorLightStreakTileEffect::Element* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::Ice::FloorLightStreakTileEffect::Element::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FloorLightStreakTileEffect::Element*, creationType>()));
    }
    // public System.Void Setup(UnityEngine.Color color, System.Int32 lineIndex, System.Single stayOnTileDuration)
    // Offset: 0x2B5107C
    void Setup(::UnityEngine::Color color, int lineIndex, float stayOnTileDuration);
    // public System.Void ManualUpdate(System.Single deltaTime)
    // Offset: 0x2B50F08
    void ManualUpdate(float deltaTime);
  }; // Ice.FloorLightStreakTileEffect/Ice.Element
  #pragma pack(pop)
  static check_size<sizeof(FloorLightStreakTileEffect::Element), 40 + sizeof(::UnityEngine::Color)> __Ice_FloorLightStreakTileEffect_ElementSizeCheck;
  static_assert(sizeof(FloorLightStreakTileEffect::Element) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: Ice::FloorLightStreakTileEffect::Element::get_lineIndex
// Il2CppName: get_lineIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Ice::FloorLightStreakTileEffect::Element::*)()>(&Ice::FloorLightStreakTileEffect::Element::get_lineIndex)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Ice::FloorLightStreakTileEffect::Element*), "get_lineIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Ice::FloorLightStreakTileEffect::Element::get_currentTileY
// Il2CppName: get_currentTileY
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (Ice::FloorLightStreakTileEffect::Element::*)()>(&Ice::FloorLightStreakTileEffect::Element::get_currentTileY)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Ice::FloorLightStreakTileEffect::Element*), "get_currentTileY", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Ice::FloorLightStreakTileEffect::Element::get_color
// Il2CppName: get_color
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (Ice::FloorLightStreakTileEffect::Element::*)()>(&Ice::FloorLightStreakTileEffect::Element::get_color)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(Ice::FloorLightStreakTileEffect::Element*), "get_color", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: Ice::FloorLightStreakTileEffect::Element::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: Ice::FloorLightStreakTileEffect::Element::Setup
// Il2CppName: Setup
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Ice::FloorLightStreakTileEffect::Element::*)(::UnityEngine::Color, int, float)>(&Ice::FloorLightStreakTileEffect::Element::Setup)> {
  static const MethodInfo* get() {
    static auto* color = &::il2cpp_utils::GetClassFromName("UnityEngine", "Color")->byval_arg;
    static auto* lineIndex = &::il2cpp_utils::GetClassFromName("System", "Int32")->byval_arg;
    static auto* stayOnTileDuration = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Ice::FloorLightStreakTileEffect::Element*), "Setup", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{color, lineIndex, stayOnTileDuration});
  }
};
// Writing MetadataGetter for method: Ice::FloorLightStreakTileEffect::Element::ManualUpdate
// Il2CppName: ManualUpdate
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (Ice::FloorLightStreakTileEffect::Element::*)(float)>(&Ice::FloorLightStreakTileEffect::Element::ManualUpdate)> {
  static const MethodInfo* get() {
    static auto* deltaTime = &::il2cpp_utils::GetClassFromName("System", "Single")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(Ice::FloorLightStreakTileEffect::Element*), "ManualUpdate", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{deltaTime});
  }
};
