#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace HMUI {
class InputFieldView;
}
namespace UnityEngine {
class Transform;
}
namespace HMUI {
class UIKeyboard;
}
namespace UnityEngine {
class GameObject;
}
namespace VRUIControls {
class VRInputModule;
}
namespace UnityEngine {
class RectTransform;
}
namespace HMUI {
class ModalView;
}
// Forward declare root types
namespace GlobalNamespace {
class UIKeyboardManager;
}
// Type: ::UIKeyboardManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5569))
// CS Name: UIKeyboardManager
class CORDL_TYPE UIKeyboardManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~UIKeyboardManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "UIKeyboardManager", modifiers: " const&", def_value: None }]
constexpr UIKeyboardManager(UIKeyboardManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UIKeyboardManager", modifiers: "&&", def_value: None }]
constexpr UIKeyboardManager(UIKeyboardManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UIKeyboardManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr UIKeyboardManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UIKeyboardManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UIKeyboardManager& operator=(UIKeyboardManager&& o) noexcept = default;
  constexpr UIKeyboardManager& operator=(UIKeyboardManager const& o) noexcept = default;
                


// Fields

 HMUI::UIKeyboard __declspec(property(get=__get__uiKeyboard, put=__set__uiKeyboard))  _uiKeyboard;

constexpr void __set__uiKeyboard(HMUI::UIKeyboard value) ;

constexpr HMUI::UIKeyboard __get__uiKeyboard() const;

 HMUI::ModalView __declspec(property(get=__get__keyboardModalView, put=__set__keyboardModalView))  _keyboardModalView;

constexpr void __set__keyboardModalView(HMUI::ModalView value) ;

constexpr HMUI::ModalView __get__keyboardModalView() const;

 UnityEngine::RectTransform __declspec(property(get=__get__keyboardContainerTransform, put=__set__keyboardContainerTransform))  _keyboardContainerTransform;

constexpr void __set__keyboardContainerTransform(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get__keyboardContainerTransform() const;

 UnityEngine::Transform __declspec(property(get=__get__parentContainerTransform, put=__set__parentContainerTransform))  _parentContainerTransform;

constexpr void __set__parentContainerTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__parentContainerTransform() const;

 VRUIControls::VRInputModule __declspec(property(get=__get__vrInputModule, put=__set__vrInputModule))  _vrInputModule;

constexpr void __set__vrInputModule(VRUIControls::VRInputModule value) ;

constexpr VRUIControls::VRInputModule __get__vrInputModule() const;

/// @brief Field kKeyboardTopOffset offset 0
static constexpr float_t  kKeyboardTopOffset{5};

 HMUI::InputFieldView __declspec(property(get=__get__selectedInput, put=__set__selectedInput))  _selectedInput;

constexpr void __set__selectedInput(HMUI::InputFieldView value) ;

constexpr HMUI::InputFieldView __get__selectedInput() const;


// Properties

 HMUI::UIKeyboard __declspec(property(get=get_keyboard))  keyboard;


// Methods

/// @brief Method get_keyboard addr 0x212d788 size 0x8 virtual false final false
 HMUI::UIKeyboard get_keyboard() ;

/// @brief Method Start addr 0x212d790 size 0x8c virtual false final false
 void Start() ;

/// @brief Method OnEnable addr 0x212d81c size 0x8c virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x212d8a8 size 0x8c virtual false final false
 void OnDisable() ;

/// @brief Method OnDestroy addr 0x212d934 size 0xd0 virtual false final false
 void OnDestroy() ;

/// @brief Method OpenKeyboardFor addr 0x212da04 size 0x200 virtual false final false
 void OpenKeyboardFor(HMUI::InputFieldView input) ;

/// @brief Method CloseKeyboard addr 0x212dc04 size 0x98 virtual false final false
 void CloseKeyboard() ;

/// @brief Method TransferKeyboardTo addr 0x212dc9c size 0x94 virtual false final false
 void TransferKeyboardTo(HMUI::InputFieldView nextInput) ;

/// @brief Method ShouldCloseKeyboard addr 0x212dd30 size 0x58 virtual false final false
 bool ShouldCloseKeyboard(UnityEngine::GameObject root) ;

/// @brief Method ProcessMousePress addr 0x212dd88 size 0x168 virtual false final false
 void ProcessMousePress(UnityEngine::GameObject currentOverGo) ;

/// @brief Method HandleKeyboardOkButton addr 0x212def0 size 0x160 virtual false final false
 void HandleKeyboardOkButton() ;

// Ctor Parameters []
explicit UIKeyboardManager() ;

/// @brief Method .ctor addr 0x212e050 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::UIKeyboardManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UIKeyboardManager, "", "UIKeyboardManager");
