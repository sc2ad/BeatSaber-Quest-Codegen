// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/byref.hpp"
// Including type: HMUI.Interactable
#include "HMUI/Interactable.hpp"
// Including type: UnityEngine.EventSystems.IPointerDownHandler
#include "UnityEngine/EventSystems/IPointerDownHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerUpHandler
#include "UnityEngine/EventSystems/IPointerUpHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerEnterHandler
#include "UnityEngine/EventSystems/IPointerEnterHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerExitHandler
#include "UnityEngine/EventSystems/IPointerExitHandler.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: AlphabetScrollInfo
#include "GlobalNamespace/AlphabetScrollInfo.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "beatsaber-hook/shared/utils/utils.h"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TableView
  class TableView;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Forward declaring type: AlphabetScrollbar
  class AlphabetScrollbar;
}
#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
NEED_NO_BOX(::HMUI::AlphabetScrollbar);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::AlphabetScrollbar*, "HMUI", "AlphabetScrollbar");
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x75
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.AlphabetScrollbar
  // [TokenAttribute] Offset: FFFFFFFF
  // [RequireComponent] Offset: 10E7984
  class AlphabetScrollbar : public ::HMUI::Interactable/*, public ::UnityEngine::EventSystems::IPointerDownHandler, public ::UnityEngine::EventSystems::IPointerUpHandler, public ::UnityEngine::EventSystems::IPointerEnterHandler, public ::UnityEngine::EventSystems::IPointerExitHandler*/ {
    public:
    // Nested type: ::HMUI::AlphabetScrollbar::$PointerMoveInsideCoroutine$d__18
    class $PointerMoveInsideCoroutine$d__18;
    public:
    // private HMUI.TableView _tableView
    // Size: 0x8
    // Offset: 0x28
    ::HMUI::TableView* tableView;
    // Field size check
    static_assert(sizeof(::HMUI::TableView*) == 0x8);
    // [SpaceAttribute] Offset: 0x10E8518
    // private System.Single _characterHeight
    // Size: 0x4
    // Offset: 0x30
    float characterHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _normalColor
    // Size: 0x10
    // Offset: 0x34
    ::UnityEngine::Color normalColor;
    // Field size check
    static_assert(sizeof(::UnityEngine::Color) == 0x10);
    // Padding between fields: normalColor and: textPrefab
    char __padding2[0x4] = {};
    // [SpaceAttribute] Offset: 0x10E8560
    // private TMPro.TextMeshProUGUI _textPrefab
    // Size: 0x8
    // Offset: 0x48
    ::TMPro::TextMeshProUGUI* textPrefab;
    // Field size check
    static_assert(sizeof(::TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI[] _prealocatedTexts
    // Size: 0x8
    // Offset: 0x50
    ::ArrayW<::TMPro::TextMeshProUGUI*> prealocatedTexts;
    // Field size check
    static_assert(sizeof(::ArrayW<::TMPro::TextMeshProUGUI*>) == 0x8);
    // private UnityEngine.UI.Image _highlightImage
    // Size: 0x8
    // Offset: 0x58
    ::UnityEngine::UI::Image* highlightImage;
    // Field size check
    static_assert(sizeof(::UnityEngine::UI::Image*) == 0x8);
    // private System.Collections.Generic.IReadOnlyList`1<AlphabetScrollInfo/Data> _characterScrollData
    // Size: 0x8
    // Offset: 0x60
    ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::AlphabetScrollInfo::Data*>* characterScrollData;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::AlphabetScrollInfo::Data*>*) == 0x8);
    // private System.Collections.Generic.List`1<TMPro.TextMeshProUGUI> _texts
    // Size: 0x8
    // Offset: 0x68
    ::System::Collections::Generic::List_1<::TMPro::TextMeshProUGUI*>* texts;
    // Field size check
    static_assert(sizeof(::System::Collections::Generic::List_1<::TMPro::TextMeshProUGUI*>*) == 0x8);
    // private System.Int32 _highlightedCharacterIndex
    // Size: 0x4
    // Offset: 0x70
    int highlightedCharacterIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _pointerIsDown
    // Size: 0x1
    // Offset: 0x74
    bool pointerIsDown;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    public:
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IPointerDownHandler
    operator ::UnityEngine::EventSystems::IPointerDownHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(this);
    }
    // Creating interface conversion operator: i_IPointerDownHandler
    inline ::UnityEngine::EventSystems::IPointerDownHandler* i_IPointerDownHandler() noexcept {
      return reinterpret_cast<::UnityEngine::EventSystems::IPointerDownHandler*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IPointerUpHandler
    operator ::UnityEngine::EventSystems::IPointerUpHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(this);
    }
    // Creating interface conversion operator: i_IPointerUpHandler
    inline ::UnityEngine::EventSystems::IPointerUpHandler* i_IPointerUpHandler() noexcept {
      return reinterpret_cast<::UnityEngine::EventSystems::IPointerUpHandler*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IPointerEnterHandler
    operator ::UnityEngine::EventSystems::IPointerEnterHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(this);
    }
    // Creating interface conversion operator: i_IPointerEnterHandler
    inline ::UnityEngine::EventSystems::IPointerEnterHandler* i_IPointerEnterHandler() noexcept {
      return reinterpret_cast<::UnityEngine::EventSystems::IPointerEnterHandler*>(this);
    }
    // Creating interface conversion operator: operator ::UnityEngine::EventSystems::IPointerExitHandler
    operator ::UnityEngine::EventSystems::IPointerExitHandler() noexcept {
      return *reinterpret_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(this);
    }
    // Creating interface conversion operator: i_IPointerExitHandler
    inline ::UnityEngine::EventSystems::IPointerExitHandler* i_IPointerExitHandler() noexcept {
      return reinterpret_cast<::UnityEngine::EventSystems::IPointerExitHandler*>(this);
    }
    // Get instance field reference: private HMUI.TableView _tableView
    [[deprecated("Use field access instead!")]] ::HMUI::TableView*& dyn__tableView();
    // Get instance field reference: private System.Single _characterHeight
    [[deprecated("Use field access instead!")]] float& dyn__characterHeight();
    // Get instance field reference: private UnityEngine.Color _normalColor
    [[deprecated("Use field access instead!")]] ::UnityEngine::Color& dyn__normalColor();
    // Get instance field reference: private TMPro.TextMeshProUGUI _textPrefab
    [[deprecated("Use field access instead!")]] ::TMPro::TextMeshProUGUI*& dyn__textPrefab();
    // Get instance field reference: private TMPro.TextMeshProUGUI[] _prealocatedTexts
    [[deprecated("Use field access instead!")]] ::ArrayW<::TMPro::TextMeshProUGUI*>& dyn__prealocatedTexts();
    // Get instance field reference: private UnityEngine.UI.Image _highlightImage
    [[deprecated("Use field access instead!")]] ::UnityEngine::UI::Image*& dyn__highlightImage();
    // Get instance field reference: private System.Collections.Generic.IReadOnlyList`1<AlphabetScrollInfo/Data> _characterScrollData
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::AlphabetScrollInfo::Data*>*& dyn__characterScrollData();
    // Get instance field reference: private System.Collections.Generic.List`1<TMPro.TextMeshProUGUI> _texts
    [[deprecated("Use field access instead!")]] ::System::Collections::Generic::List_1<::TMPro::TextMeshProUGUI*>*& dyn__texts();
    // Get instance field reference: private System.Int32 _highlightedCharacterIndex
    [[deprecated("Use field access instead!")]] int& dyn__highlightedCharacterIndex();
    // Get instance field reference: private System.Boolean _pointerIsDown
    [[deprecated("Use field access instead!")]] bool& dyn__pointerIsDown();
    // protected System.Void Awake()
    // Offset: 0x1719428
    void Awake();
    // public System.Void SetData(System.Collections.Generic.IReadOnlyList`1<AlphabetScrollInfo/Data> characterScrollData)
    // Offset: 0x1719448
    void SetData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::AlphabetScrollInfo::Data*>* characterScrollData);
    // public System.Void OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1719D18
    void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnPointerUp(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x171A064
    void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x171A06C
    void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnPointerExit(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x171A114
    void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData);
    // private System.Void PrepareTransforms()
    // Offset: 0x17197CC
    void PrepareTransforms();
    // private System.Void RefreshHighlight()
    // Offset: 0x171A144
    void RefreshHighlight();
    // private System.Collections.IEnumerator PointerMoveInsideCoroutine(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x171A098
    ::System::Collections::IEnumerator* PointerMoveInsideCoroutine(::UnityEngine::EventSystems::PointerEventData* eventData);
    // private System.Int32 GetPointerCharacterIndex(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x1719E14
    int GetPointerCharacterIndex(::UnityEngine::EventSystems::PointerEventData* eventData);
    // private System.Void InitText(TMPro.TextMeshProUGUI text, System.Char character)
    // Offset: 0x17196CC
    void InitText(::TMPro::TextMeshProUGUI* text, ::Il2CppChar character);
    // public System.Void .ctor()
    // Offset: 0x171A308
    // Implemented from: HMUI.Interactable
    // Base method: System.Void Interactable::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AlphabetScrollbar* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("::HMUI::AlphabetScrollbar::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AlphabetScrollbar*, creationType>()));
    }
  }; // HMUI.AlphabetScrollbar
  #pragma pack(pop)
  static check_size<sizeof(AlphabetScrollbar), 116 + sizeof(bool)> __HMUI_AlphabetScrollbarSizeCheck;
  static_assert(sizeof(AlphabetScrollbar) == 0x75);
}
#include "beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
// Writing MetadataGetter for method: HMUI::AlphabetScrollbar::Awake
// Il2CppName: Awake
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AlphabetScrollbar::*)()>(&HMUI::AlphabetScrollbar::Awake)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::AlphabetScrollbar*), "Awake", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::AlphabetScrollbar::SetData
// Il2CppName: SetData
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AlphabetScrollbar::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::AlphabetScrollInfo::Data*>*)>(&HMUI::AlphabetScrollbar::SetData)> {
  static const MethodInfo* get() {
    static auto* characterScrollData = &::il2cpp_utils::MakeGeneric(::il2cpp_utils::GetClassFromName("System.Collections.Generic", "IReadOnlyList`1"), ::std::vector<const Il2CppClass*>{::il2cpp_utils::GetClassFromName("", "AlphabetScrollInfo/Data")})->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::AlphabetScrollbar*), "SetData", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{characterScrollData});
  }
};
// Writing MetadataGetter for method: HMUI::AlphabetScrollbar::OnPointerDown
// Il2CppName: OnPointerDown
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AlphabetScrollbar::*)(::UnityEngine::EventSystems::PointerEventData*)>(&HMUI::AlphabetScrollbar::OnPointerDown)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::AlphabetScrollbar*), "OnPointerDown", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::AlphabetScrollbar::OnPointerUp
// Il2CppName: OnPointerUp
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AlphabetScrollbar::*)(::UnityEngine::EventSystems::PointerEventData*)>(&HMUI::AlphabetScrollbar::OnPointerUp)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::AlphabetScrollbar*), "OnPointerUp", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::AlphabetScrollbar::OnPointerEnter
// Il2CppName: OnPointerEnter
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AlphabetScrollbar::*)(::UnityEngine::EventSystems::PointerEventData*)>(&HMUI::AlphabetScrollbar::OnPointerEnter)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::AlphabetScrollbar*), "OnPointerEnter", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::AlphabetScrollbar::OnPointerExit
// Il2CppName: OnPointerExit
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AlphabetScrollbar::*)(::UnityEngine::EventSystems::PointerEventData*)>(&HMUI::AlphabetScrollbar::OnPointerExit)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::AlphabetScrollbar*), "OnPointerExit", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::AlphabetScrollbar::PrepareTransforms
// Il2CppName: PrepareTransforms
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AlphabetScrollbar::*)()>(&HMUI::AlphabetScrollbar::PrepareTransforms)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::AlphabetScrollbar*), "PrepareTransforms", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::AlphabetScrollbar::RefreshHighlight
// Il2CppName: RefreshHighlight
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AlphabetScrollbar::*)()>(&HMUI::AlphabetScrollbar::RefreshHighlight)> {
  static const MethodInfo* get() {
    return ::il2cpp_utils::FindMethod(classof(HMUI::AlphabetScrollbar*), "RefreshHighlight", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{});
  }
};
// Writing MetadataGetter for method: HMUI::AlphabetScrollbar::PointerMoveInsideCoroutine
// Il2CppName: PointerMoveInsideCoroutine
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (HMUI::AlphabetScrollbar::*)(::UnityEngine::EventSystems::PointerEventData*)>(&HMUI::AlphabetScrollbar::PointerMoveInsideCoroutine)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::AlphabetScrollbar*), "PointerMoveInsideCoroutine", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::AlphabetScrollbar::GetPointerCharacterIndex
// Il2CppName: GetPointerCharacterIndex
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int (HMUI::AlphabetScrollbar::*)(::UnityEngine::EventSystems::PointerEventData*)>(&HMUI::AlphabetScrollbar::GetPointerCharacterIndex)> {
  static const MethodInfo* get() {
    static auto* eventData = &::il2cpp_utils::GetClassFromName("UnityEngine.EventSystems", "PointerEventData")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::AlphabetScrollbar*), "GetPointerCharacterIndex", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{eventData});
  }
};
// Writing MetadataGetter for method: HMUI::AlphabetScrollbar::InitText
// Il2CppName: InitText
template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (HMUI::AlphabetScrollbar::*)(::TMPro::TextMeshProUGUI*, ::Il2CppChar)>(&HMUI::AlphabetScrollbar::InitText)> {
  static const MethodInfo* get() {
    static auto* text = &::il2cpp_utils::GetClassFromName("TMPro", "TextMeshProUGUI")->byval_arg;
    static auto* character = &::il2cpp_utils::GetClassFromName("System", "Char")->byval_arg;
    return ::il2cpp_utils::FindMethod(classof(HMUI::AlphabetScrollbar*), "InitText", std::vector<Il2CppClass*>(), ::std::vector<const Il2CppType*>{text, character});
  }
};
// Writing MetadataGetter for method: HMUI::AlphabetScrollbar::New_ctor
// Il2CppName: .ctor
// Cannot get method pointer of value based method overload from template for constructor!
// Try using FindMethod instead!
