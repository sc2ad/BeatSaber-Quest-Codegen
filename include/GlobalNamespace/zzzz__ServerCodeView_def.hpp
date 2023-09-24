#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace HMUI {
class ButtonBinder;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Button;
}
// Forward declare root types
namespace GlobalNamespace {
class ServerCodeView;
}
// Type: ::ServerCodeView
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5900))
// CS Name: ServerCodeView
class CORDL_TYPE ServerCodeView : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ServerCodeView() = default;

// Ctor Parameters [CppParam { name: "", ty: "ServerCodeView", modifiers: " const&", def_value: None }]
constexpr ServerCodeView(ServerCodeView const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ServerCodeView", modifiers: "&&", def_value: None }]
constexpr ServerCodeView(ServerCodeView&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ServerCodeView(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ServerCodeView& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ServerCodeView& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ServerCodeView& operator=(ServerCodeView&& o) noexcept = default;
  constexpr ServerCodeView& operator=(ServerCodeView const& o) noexcept = default;
                


// Fields

 TMPro::TextMeshProUGUI __declspec(property(get=__get__serverCodeText, put=__set__serverCodeText))  _serverCodeText;

constexpr void __set__serverCodeText(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__serverCodeText() const;

 UnityEngine::UI::Button __declspec(property(get=__get__button, put=__set__button))  _button;

constexpr void __set__button(UnityEngine::UI::Button value) ;

constexpr UnityEngine::UI::Button __get__button() const;

 HMUI::ButtonBinder __declspec(property(get=__get__buttonBinder, put=__set__buttonBinder))  _buttonBinder;

constexpr void __set__buttonBinder(HMUI::ButtonBinder value) ;

constexpr HMUI::ButtonBinder __get__buttonBinder() const;

 ::StringW __declspec(property(get=__get__serverCode, put=__set__serverCode))  _serverCode;

constexpr void __set__serverCode(::StringW value) ;

constexpr ::StringW __get__serverCode() const;

 bool __declspec(property(get=__get__codeIsShown, put=__set__codeIsShown))  _codeIsShown;

constexpr void __set__codeIsShown(bool value) ;

constexpr bool __get__codeIsShown() const;


// Methods

/// @brief Method SetCode addr 0x218f43c size 0xc virtual false final false
 void SetCode(::StringW serverCode) ;

/// @brief Method OnEnable addr 0x218f4e8 size 0x98 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x218f580 size 0x1c virtual false final false
 void OnDisable() ;

/// @brief Method HandleShowServerCodeButtonPressed addr 0x218f59c size 0x10 virtual false final false
 void HandleShowServerCodeButtonPressed() ;

/// @brief Method RefreshText addr 0x218f448 size 0xa0 virtual false final false
 void RefreshText(bool showCode) ;

static GlobalNamespace::ServerCodeView New_ctor() ;

/// @brief Method .ctor addr 0x218f5ac size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ServerCodeView);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ServerCodeView, "", "ServerCodeView");
