#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
namespace TMPro {
class TextMeshPro;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerIntroCountdownTextController;
}
// Type: ::MultiplayerIntroCountdownTextController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5313))
// CS Name: MultiplayerIntroCountdownTextController
class CORDL_TYPE MultiplayerIntroCountdownTextController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MultiplayerIntroCountdownTextController() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerIntroCountdownTextController", modifiers: " const&", def_value: None }]
constexpr MultiplayerIntroCountdownTextController(MultiplayerIntroCountdownTextController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerIntroCountdownTextController", modifiers: "&&", def_value: None }]
constexpr MultiplayerIntroCountdownTextController(MultiplayerIntroCountdownTextController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerIntroCountdownTextController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MultiplayerIntroCountdownTextController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerIntroCountdownTextController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerIntroCountdownTextController& operator=(MultiplayerIntroCountdownTextController&& o) noexcept = default;
  constexpr MultiplayerIntroCountdownTextController& operator=(MultiplayerIntroCountdownTextController const& o) noexcept = default;
                


// Fields

 ::ArrayW<TMPro::TextMeshPro> __declspec(property(get=__get__texts, put=__set__texts))  _texts;

constexpr void __set__texts(::ArrayW<TMPro::TextMeshPro> value) ;

constexpr ::ArrayW<TMPro::TextMeshPro> __get__texts() const;


// Properties

 bool __declspec(property(put=set_hide))  hide;

 float_t __declspec(property(get=get_fontSize, put=set_fontSize))  fontSize;

 float_t __declspec(property(get=get_alpha, put=set_alpha))  alpha;


// Methods

/// @brief Method SetText addr 0x20fa7a0 size 0x70 virtual false final false
 void SetText(::StringW text) ;

/// @brief Method SetDistances addr 0x20fa184 size 0x88 virtual false final false
 void SetDistances(float_t distance) ;

/// @brief Method set_hide addr 0x20f971c size 0x2c virtual false final false
 void set_hide(bool value) ;

/// @brief Method set_fontSize addr 0x20fa000 size 0x70 virtual false final false
 void set_fontSize(float_t value) ;

/// @brief Method get_fontSize addr 0x20f9748 size 0x38 virtual false final false
 float_t get_fontSize() ;

/// @brief Method set_alpha addr 0x20fa088 size 0x84 virtual false final false
 void set_alpha(float_t value) ;

/// @brief Method get_alpha addr 0x20f9780 size 0x40 virtual false final false
 float_t get_alpha() ;

// Ctor Parameters []
explicit MultiplayerIntroCountdownTextController() ;

/// @brief Method .ctor addr 0x20fa860 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MultiplayerIntroCountdownTextController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerIntroCountdownTextController, "", "MultiplayerIntroCountdownTextController");
