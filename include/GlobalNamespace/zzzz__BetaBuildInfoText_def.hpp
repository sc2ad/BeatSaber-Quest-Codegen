#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class BetaBuildInfoText;
}
// Type: ::BetaBuildInfoText
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5860))
// CS Name: BetaBuildInfoText
class CORDL_TYPE BetaBuildInfoText : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~BetaBuildInfoText() = default;

// Ctor Parameters [CppParam { name: "", ty: "BetaBuildInfoText", modifiers: " const&", def_value: None }]
constexpr BetaBuildInfoText(BetaBuildInfoText const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BetaBuildInfoText", modifiers: "&&", def_value: None }]
constexpr BetaBuildInfoText(BetaBuildInfoText&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BetaBuildInfoText(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BetaBuildInfoText& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BetaBuildInfoText& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BetaBuildInfoText& operator=(BetaBuildInfoText&& o) noexcept = default;
  constexpr BetaBuildInfoText& operator=(BetaBuildInfoText const& o) noexcept = default;
                


// Fields

 TMPro::TextMeshProUGUI __declspec(property(get=__get__text, put=__set__text))  _text;

constexpr void __set__text(TMPro::TextMeshProUGUI value) ;

constexpr TMPro::TextMeshProUGUI __get__text() const;


// Methods

/// @brief Method Start addr 0x2185210 size 0x24 virtual false final false
 void Start() ;

static GlobalNamespace::BetaBuildInfoText New_ctor() ;

/// @brief Method .ctor addr 0x2185234 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BetaBuildInfoText);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BetaBuildInfoText, "", "BetaBuildInfoText");
