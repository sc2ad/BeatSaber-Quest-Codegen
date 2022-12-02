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
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Forward declaring type: StandardLevelBuyInfoView
  class StandardLevelBuyInfoView;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::GlobalNamespace::StandardLevelBuyInfoView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardLevelBuyInfoView*, "", "StandardLevelBuyInfoView");
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: StandardLevelBuyInfoView
  // [TokenAttribute] Offset: FFFFFFFF
  class StandardLevelBuyInfoView : public ::UnityEngine::MonoBehaviour {
    public:
    public:
    // private TMPro.TextMeshProUGUI _text
    // Size: 0x8
    // Offset: 0x18
    ::TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private UnityEngine.UI.Button _buyLevelButton
    // Size: 0x8
    // Offset: 0x20
    ::UnityEngine::UI::Button* buyLevelButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _openPackButton
    // Size: 0x8
    // Offset: 0x28
    ::UnityEngine::UI::Button* openPackButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _buyPackButton
    // Size: 0x8
    // Offset: 0x30
    ::UnityEngine::UI::Button* buyPackButton;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Button*) == 0x8);
    public:
    // Deleting conversion operator: operator ::System::IntPtr
    constexpr operator ::System::IntPtr() const noexcept = delete;
    // Get instance field reference: private TMPro.TextMeshProUGUI _text
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshProUGUI*& dyn__text();
    // Get instance field reference: private UnityEngine.UI.Button _buyLevelButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__buyLevelButton();
    // Get instance field reference: private UnityEngine.UI.Button _openPackButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__openPackButton();
    // Get instance field reference: private UnityEngine.UI.Button _buyPackButton
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Button*& dyn__buyPackButton();
    // public UnityEngine.UI.Button get_buyLevelButton()
    // Offset: 0x147D540
    ::UnityEngine::UI::Button* get_buyLevelButton();
    // public UnityEngine.UI.Button get_openPackButton()
    // Offset: 0x147D548
    ::UnityEngine::UI::Button* get_openPackButton();
    // public UnityEngine.UI.Button get_buyPackButton()
    // Offset: 0x147D550
    ::UnityEngine::UI::Button* get_buyPackButton();
    // public System.Void .ctor()
    // Offset: 0x147D5CC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StandardLevelBuyInfoView* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::GlobalNamespace::StandardLevelBuyInfoView::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StandardLevelBuyInfoView*, creationType>()));
    }
    // public System.Void RefreshView(System.String infoText, System.Boolean canBuyPack)
    // Offset: 0x147D558
    void RefreshView(::StringW infoText, bool canBuyPack);
  }; // StandardLevelBuyInfoView
  #pragma pack(pop)
  static check_size<sizeof(StandardLevelBuyInfoView), 48 + sizeof(::UnityEngine::UI::Button*)> __GlobalNamespace_StandardLevelBuyInfoViewSizeCheck;
  static_assert(sizeof(StandardLevelBuyInfoView) == 0x38);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelBuyInfoView::get_buyLevelButton
// Il2CppName: get_buyLevelButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Button* (GlobalNamespace::StandardLevelBuyInfoView::*)()>(&GlobalNamespace::StandardLevelBuyInfoView::get_buyLevelButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelBuyInfoView*), "get_buyLevelButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelBuyInfoView::get_openPackButton
// Il2CppName: get_openPackButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Button* (GlobalNamespace::StandardLevelBuyInfoView::*)()>(&GlobalNamespace::StandardLevelBuyInfoView::get_openPackButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelBuyInfoView*), "get_openPackButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelBuyInfoView::get_buyPackButton
// Il2CppName: get_buyPackButton
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Button* (GlobalNamespace::StandardLevelBuyInfoView::*)()>(&GlobalNamespace::StandardLevelBuyInfoView::get_buyPackButton)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelBuyInfoView*), "get_buyPackButton", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelBuyInfoView::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
// Writing MetadataGetter for method: GlobalNamespace::StandardLevelBuyInfoView::RefreshView
// Il2CppName: RefreshView
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (GlobalNamespace::StandardLevelBuyInfoView::*)(::StringW, bool)>(&GlobalNamespace::StandardLevelBuyInfoView::RefreshView)> {
  static const MethodInfo* get() {
    static auto* infoText = &::il2cpp_utils::GetClassFromName("System", "String")->byval_arg;
    static auto* canBuyPack = &::il2cpp_utils::GetClassFromName("System", "Boolean")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(GlobalNamespace::StandardLevelBuyInfoView*), "RefreshView", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{infoText, canBuyPack});
  }
};
