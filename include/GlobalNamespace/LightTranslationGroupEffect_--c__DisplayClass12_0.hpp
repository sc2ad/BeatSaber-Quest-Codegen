// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: LightTranslationGroupEffect
#include "GlobalNamespace/LightTranslationGroupEffect.hpp"
// Including type: UnityEngine.Vector2
#include "UnityEngine/Vector2.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: FloatTween
  class FloatTween;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: LightTranslationBeatmapEventData
  class LightTranslationBeatmapEventData;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::LightTranslationGroupEffect::$$c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightTranslationGroupEffect::$$c__DisplayClass12_0*, "", "LightTranslationGroupEffect/<>c__DisplayClass12_0");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: LightTranslationGroupEffect/<>c__DisplayClass12_0
  // [TokenAttribute] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: FFFFFFFF
  class LightTranslationGroupEffect::$$c__DisplayClass12_0 : public ::Il2CppObject {
    public:
    public:
    // public Tweening.FloatTween translationTween
    // Size: 0x8
    // Offset: 0x10
    ::Tweening::FloatTween* translationTween;
    // Field size check
    static_assert(sizeof(::Tweening::FloatTween*) == 0x8);
    // public UnityEngine.Vector2 translationLimits
    // Size: 0x8
    // Offset: 0x18
    ::UnityEngine::Vector2 translationLimits;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public UnityEngine.Vector2 distributionLimits
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::Vector2 distributionLimits;
    // Field size check
    static_assert(sizeof(::UnityEngine::Vector2) == 0x8);
    // public System.Boolean mirrored
    // Size: 0x1
    // Offset: 0x28
    bool mirrored;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: mirrored and: $$4__this
    char __padding3[0x7] = {};
    // public LightTranslationGroupEffect <>4__this
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::LightTranslationGroupEffect* $$4__this;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::LightTranslationGroupEffect*) == 0x8);
    public:
    // Get instance field reference: public Tweening.FloatTween translationTween
    [[deprecated("Use field access instead!")]] ::Tweening::FloatTween*& dyn_translationTween();
    // Get instance field reference: public UnityEngine.Vector2 translationLimits
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_translationLimits();
    // Get instance field reference: public UnityEngine.Vector2 distributionLimits
    [[deprecated("Use field access instead!")]] ::UnityEngine::Vector2& dyn_distributionLimits();
    // Get instance field reference: public System.Boolean mirrored
    [[deprecated("Use field access instead!")]] bool& dyn_mirrored();
    // Get instance field reference: public LightTranslationGroupEffect <>4__this
    [[deprecated("Use field access instead!")]] ::GlobalNamespace::LightTranslationGroupEffect*& dyn_$$4__this();
    // public System.Void .ctor()
    // Offset: 0x1518828
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LightTranslationGroupEffect::$$c__DisplayClass12_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::LightTranslationGroupEffect::$$c__DisplayClass12_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LightTranslationGroupEffect::$$c__DisplayClass12_0*, creationType>()));
    }
    // System.Void <GetTranslationEventHandler>b__0(LightTranslationBeatmapEventData currentEventData)
    // Offset: 0x1518B40
    void $GetTranslationEventHandler$b__0(::GlobalNamespace::LightTranslationBeatmapEventData* currentEventData);
  }; // LightTranslationGroupEffect/<>c__DisplayClass12_0
  #pragma pack(pop)
  static check_size<sizeof(LightTranslationGroupEffect::$$c__DisplayClass12_0), 48 + sizeof(::GlobalNamespace::LightTranslationGroupEffect*)> __GlobalNamespace_LightTranslationGroupEffect_$$c__DisplayClass12_0SizeCheck;
  static_assert(sizeof(LightTranslationGroupEffect::$$c__DisplayClass12_0) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::LightTranslationGroupEffect::$$c__DisplayClass12_0::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::LightTranslationGroupEffect::$$c__DisplayClass12_0::$GetTranslationEventHandler$b__0
// Il2CppName: <GetTranslationEventHandler>b__0
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::LightTranslationGroupEffect::$$c__DisplayClass12_0::*)(::GlobalNamespace::LightTranslationBeatmapEventData*)>(&GlobalNamespace::LightTranslationGroupEffect::$$c__DisplayClass12_0::$GetTranslationEventHandler$b__0)> {
  static const MethodInfo* get() {
    static auto* currentEventData = &::il2cpp_utils::GetClassFromName("", "LightTranslationBeatmapEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::LightTranslationGroupEffect::$$c__DisplayClass12_0*), "<GetTranslationEventHandler>b__0", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{currentEventData});
  }
};
