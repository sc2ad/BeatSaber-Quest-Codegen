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
  // Forward declaring type: GameplayModifierInfoListItemsList
  class GameplayModifierInfoListItemsList;
  // Forward declaring type: GameplayModifiersModelSO
  class GameplayModifiersModelSO;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: ModifiersSelectionView
  class ModifiersSelectionView;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::ModifiersSelectionView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ModifiersSelectionView*, "", "ModifiersSelectionView");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: ModifiersSelectionView
  // [TokenAttribute] Offset: FFFFFFFF
  class ModifiersSelectionView : public ::UnityEngine::MonoBehaviour {
    public:
    // Nested type: ::GlobalNamespace::ModifiersSelectionView::$$c__DisplayClass3_0
    class $$c__DisplayClass3_0;
    #ifdef USE_CODEGEN_FIELDS
    public:
    #else
    #ifdef CODEGEN_FIELD_ACCESSIBILITY
    CODEGEN_FIELD_ACCESSIBILITY:
    #else
    protected:
    #endif
    #endif
    // private GameplayModifierInfoListItemsList _modifierInfoList
    // Size: 0x8
    // Offset: 0x18
    ::GlobalNamespace::GameplayModifierInfoListItemsList* modifierInfoList;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayModifierInfoListItemsList*) == 0x8);
    // private TMPro.TextMeshProUGUI _noModifiersText
    // Size: 0x8
    // Offset: 0x20
    ::TMPro::TextMeshProUGUI* noModifiersText;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // [SpaceAttribute] Offset: 0x124EF9C
    // private GameplayModifiersModelSO _gameplayModifiersModel
    // Size: 0x8
    // Offset: 0x28
    ::GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel;
    // Field size check
    static_assert(sizeof(::GlobalNamespace::GameplayModifiersModelSO*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private GameplayModifierInfoListItemsList _modifierInfoList
    ::GlobalNamespace::GameplayModifierInfoListItemsList*& dyn__modifierInfoList();
    // Get instance field reference: private TMPro.TextMeshProUGUI _noModifiersText
    ::TMPro::TextMeshProUGUI*& dyn__noModifiersText();
    // Get instance field reference: private GameplayModifiersModelSO _gameplayModifiersModel
    ::GlobalNamespace::GameplayModifiersModelSO*& dyn__gameplayModifiersModel();
    // public System.Void SetGameplayModifiers(GameplayModifiers gameplayModifiers)
    // Offset: 0x1426924
    void SetGameplayModifiers(::GlobalNamespace::GameplayModifiers* gameplayModifiers);
    // public System.Void .ctor()
    // Offset: 0x1426A7C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ModifiersSelectionView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::ModifiersSelectionView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ModifiersSelectionView*, creationType>()));
    }
  }; // ModifiersSelectionView
  #pragma pack(pop)
  static check_size<sizeof(ModifiersSelectionView), 40 + sizeof(::GlobalNamespace::GameplayModifiersModelSO*)> __GlobalNamespace_ModifiersSelectionViewSizeCheck;
  static_assert(sizeof(ModifiersSelectionView) == 0x30);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::ModifiersSelectionView::SetGameplayModifiers
// Il2CppName: SetGameplayModifiers
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::ModifiersSelectionView::*)(::GlobalNamespace::GameplayModifiers*)>(&GlobalNamespace::ModifiersSelectionView::SetGameplayModifiers)> {
  static const MethodInfo* get() {
    static auto* gameplayModifiers = &::il2cpp_utils::GetClassFromName("", "GameplayModifiers")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::ModifiersSelectionView*), "SetGameplayModifiers", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{gameplayModifiers});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::ModifiersSelectionView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
