// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: PromoViewController
#include "GlobalNamespace/PromoViewController.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PreviewBeatmapLevelPackSO
  class PreviewBeatmapLevelPackSO;
  // Forward declaring type: BeatmapLevelPackSO
  class BeatmapLevelPackSO;
  // Forward declaring type: BeatmapLevelSO
  class BeatmapLevelSO;
  // Forward declaring type: IAnnotatedBeatmapLevelCollection
  class IAnnotatedBeatmapLevelCollection;
}
// Completed forward declares
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::PromoViewController::ButtonPromoTypePair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PromoViewController::ButtonPromoTypePair*, "", "PromoViewController/ButtonPromoTypePair");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: PromoViewController/ButtonPromoTypePair
  // [TokenAttribute] Offset: FFFFFFFF
  class PromoViewController::ButtonPromoTypePair : public ::Il2CppObject {
    public:
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // public UnityEngine.UI.Button button
    // Size: 0x8
    // Offset: 0x10
    ::UnityEngine::UI::Button* button;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // [NullAllowed] Offset: 0x1252348
    // public PreviewBeatmapLevelPackSO previewLevelPack
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::PreviewBeatmapLevelPackSO* previewLevelPack;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::PreviewBeatmapLevelPackSO*) == 0x8);
    // [NullAllowed] Offset: 0x1252358
    // public BeatmapLevelPackSO levelPack
    // Size: 0x8
    // Offset: 0x20
    ::GlobalNamespace::BeatmapLevelPackSO* levelPack;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapLevelPackSO*) == 0x8);
    // [NullAllowed] Offset: 0x1252368
    // public BeatmapLevelSO beatmapLevel
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::BeatmapLevelSO* beatmapLevel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::BeatmapLevelSO*) == 0x8);
    // private IAnnotatedBeatmapLevelCollection _annotatedBeatmapLevelCollection
    // Size: 0x8
    // Offset: 0x30
    ::GlobalNamespace::IAnnotatedBeatmapLevelCollection* annotatedBeatmapLevelCollection;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::IAnnotatedBeatmapLevelCollection*) == 0x8);
    public:
    // Get instance field reference: public UnityEngine.UI.Button button
    ::UnityEngine::UI::Button*& dyn_button();
    // Get instance field reference: public PreviewBeatmapLevelPackSO previewLevelPack
    ::GlobalNamespace::PreviewBeatmapLevelPackSO*& dyn_previewLevelPack();
    // Get instance field reference: public BeatmapLevelPackSO levelPack
    ::GlobalNamespace::BeatmapLevelPackSO*& dyn_levelPack();
    // Get instance field reference: public BeatmapLevelSO beatmapLevel
    ::GlobalNamespace::BeatmapLevelSO*& dyn_beatmapLevel();
    // Get instance field reference: private IAnnotatedBeatmapLevelCollection _annotatedBeatmapLevelCollection
    ::GlobalNamespace::IAnnotatedBeatmapLevelCollection*& dyn__annotatedBeatmapLevelCollection();
    // public IAnnotatedBeatmapLevelCollection get_annotatedBeatmapLevelCollection()
    // Offset: 0x13EAEE0
    ::GlobalNamespace::IAnnotatedBeatmapLevelCollection* get_annotatedBeatmapLevelCollection();
    // public System.Void .ctor()
    // Offset: 0x13EAFB0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PromoViewController::ButtonPromoTypePair* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::PromoViewController::ButtonPromoTypePair::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PromoViewController::ButtonPromoTypePair*, creationType>()));
    }
  }; // PromoViewController/ButtonPromoTypePair
  #pragma pack(pop)
  static check_size<sizeof(PromoViewController::ButtonPromoTypePair), 48 + sizeof(::GlobalNamespace::IAnnotatedBeatmapLevelCollection*)> __GlobalNamespace_PromoViewController_ButtonPromoTypePairSizeCheck;
  static_assert(sizeof(PromoViewController::ButtonPromoTypePair) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::PromoViewController::ButtonPromoTypePair::get_annotatedBeatmapLevelCollection
// Il2CppName: get_annotatedBeatmapLevelCollection
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IAnnotatedBeatmapLevelCollection* (GlobalNamespace::PromoViewController::ButtonPromoTypePair::*)()>(&GlobalNamespace::PromoViewController::ButtonPromoTypePair::get_annotatedBeatmapLevelCollection)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::PromoViewController::ButtonPromoTypePair*), "get_annotatedBeatmapLevelCollection", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::PromoViewController::ButtonPromoTypePair::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
