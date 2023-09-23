#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace TMPro {
class TextMeshProUGUI;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__SimpleDialogPromptViewController____c__DisplayClass5_0;
}
namespace GlobalNamespace {
class SimpleDialogPromptViewController;
}
// Type: ::<>c__DisplayClass5_0
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5849))
// CS Name: SimpleDialogPromptViewController::<>c__DisplayClass5_0
class CORDL_TYPE GlobalNamespace__SimpleDialogPromptViewController____c__DisplayClass5_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__SimpleDialogPromptViewController____c__DisplayClass5_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SimpleDialogPromptViewController____c__DisplayClass5_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__SimpleDialogPromptViewController____c__DisplayClass5_0(GlobalNamespace__SimpleDialogPromptViewController____c__DisplayClass5_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SimpleDialogPromptViewController____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__SimpleDialogPromptViewController____c__DisplayClass5_0(GlobalNamespace__SimpleDialogPromptViewController____c__DisplayClass5_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SimpleDialogPromptViewController____c__DisplayClass5_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__SimpleDialogPromptViewController____c__DisplayClass5_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__SimpleDialogPromptViewController____c__DisplayClass5_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__SimpleDialogPromptViewController____c__DisplayClass5_0& operator=(GlobalNamespace__SimpleDialogPromptViewController____c__DisplayClass5_0&& o) noexcept = default;
  constexpr GlobalNamespace__SimpleDialogPromptViewController____c__DisplayClass5_0& operator=(GlobalNamespace__SimpleDialogPromptViewController____c__DisplayClass5_0 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_buttonNum, put=__set_buttonNum))  buttonNum;

constexpr void __set_buttonNum(int32_t value) ;

constexpr int32_t __get_buttonNum() const;

 GlobalNamespace::SimpleDialogPromptViewController __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::SimpleDialogPromptViewController value) ;

constexpr GlobalNamespace::SimpleDialogPromptViewController __get___4__this() const;


// Methods

// Ctor Parameters []
explicit GlobalNamespace__SimpleDialogPromptViewController____c__DisplayClass5_0() ;

/// @brief Method .ctor addr 0x2181bd8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <DidActivate>b__0 addr 0x2181ddc size 0x38 virtual false final false
 void _DidActivate_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SimpleDialogPromptViewController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13656))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5850))
// CS Name: SimpleDialogPromptViewController
class CORDL_TYPE SimpleDialogPromptViewController : public HMUI::ViewController {
public:
// Declarations
using __c__DisplayClass5_0 = GlobalNamespace::GlobalNamespace__SimpleDialogPromptViewController____c__DisplayClass5_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~SimpleDialogPromptViewController() = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleDialogPromptViewController", modifiers: " const&", def_value: None }]
constexpr SimpleDialogPromptViewController(SimpleDialogPromptViewController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleDialogPromptViewController", modifiers: "&&", def_value: None }]
constexpr SimpleDialogPromptViewController(SimpleDialogPromptViewController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SimpleDialogPromptViewController(void* ptr) noexcept : HMUI::ViewController(ptr) {
}


  constexpr SimpleDialogPromptViewController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SimpleDialogPromptViewController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SimpleDialogPromptViewController& operator=(SimpleDialogPromptViewController&& o) noexcept = default;
  constexpr SimpleDialogPromptViewController& operator=(SimpleDialogPromptViewController const& o) noexcept = default;
                


// Fields

 TMPro::TextMeshProUGUI __declspec(property(get=__get__titleText, put=__set__titleText))  _titleText;

constexpr void __set__titleText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__titleText() const;

 TMPro::TextMeshProUGUI __declspec(property(get=__get__messageText, put=__set__messageText))  _messageText;

constexpr void __set__messageText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__messageText() const;

 ::ArrayW<UnityEngine::UI::Button> __declspec(property(get=__get__buttons, put=__set__buttons))  _buttons;

constexpr void __set__buttons(::ArrayW<UnityEngine::UI::Button> value) ;

constexpr ::ArrayW<UnityEngine::UI::Button> __get__buttons() const;

 ::ArrayW<TMPro::TextMeshProUGUI> __declspec(property(get=__get__buttonTexts, put=__set__buttonTexts))  _buttonTexts;

constexpr void __set__buttonTexts(::ArrayW<TMPro::TextMeshProUGUI> value) ;

constexpr ::ArrayW<TMPro::TextMeshProUGUI> __get__buttonTexts() const;

 System::Action_1<int32_t> __declspec(property(get=__get__didFinishAction, put=__set__didFinishAction))  _didFinishAction;

constexpr void __set__didFinishAction(System::Action_1<int32_t> value) ;

constexpr System::Action_1<int32_t> __get__didFinishAction() const;


// Methods

/// @brief Method DidActivate addr 0x2181aac size 0x12c virtual true final false
 void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) ;

/// @brief Method DidDeactivate addr 0x2181be0 size 0xc virtual true final false
 void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) ;

/// @brief Method Init addr 0x2181bec size 0x10 virtual false final false
 void Init(::StringW title, ::StringW message, ::StringW buttonText, System::Action_1<int32_t> didFinishAction) ;

/// @brief Method Init addr 0x2181dd0 size 0xc virtual false final false
 void Init(::StringW title, ::StringW message, ::StringW firstButtonText, ::StringW secondButtonText, System::Action_1<int32_t> didFinishAction) ;

/// @brief Method Init addr 0x2181bfc size 0x1d4 virtual false final false
 void Init(::StringW title, ::StringW message, ::StringW firstButtonText, ::StringW secondButtonText, ::StringW thirdButtonText, System::Action_1<int32_t> didFinishAction) ;

// Ctor Parameters []
explicit SimpleDialogPromptViewController() ;

/// @brief Method .ctor addr 0x2180d3c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__SimpleDialogPromptViewController____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SimpleDialogPromptViewController____c__DisplayClass5_0, "", "SimpleDialogPromptViewController/<>c__DisplayClass5_0");
NEED_NO_BOX(GlobalNamespace::SimpleDialogPromptViewController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SimpleDialogPromptViewController, "", "SimpleDialogPromptViewController");
