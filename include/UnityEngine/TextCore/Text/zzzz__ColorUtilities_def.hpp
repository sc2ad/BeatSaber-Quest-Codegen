#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace UnityEngine {
struct Color32;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class ColorUtilities;
}
// Type: UnityEngine.TextCore.Text::ColorUtilities
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13544))
// CS Name: UnityEngine.TextCore.Text.ColorUtilities
class CORDL_TYPE ColorUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ColorUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorUtilities", modifiers: " const&", def_value: None }]
constexpr ColorUtilities(ColorUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorUtilities", modifiers: "&&", def_value: None }]
constexpr ColorUtilities(ColorUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ColorUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorUtilities& operator=(ColorUtilities&& o) noexcept = default;
  constexpr ColorUtilities& operator=(ColorUtilities const& o) noexcept = default;
                


// Methods

/// @brief Method CompareColors addr 0x2bd3f38 size 0x10 virtual false final false
static bool CompareColors(::UnityEngine::Color32 a, ::UnityEngine::Color32 b) ;

/// @brief Method MultiplyColors addr 0x2bd3f48 size 0xc0 virtual false final false
static ::UnityEngine::Color32 MultiplyColors(::UnityEngine::Color32 c1, ::UnityEngine::Color32 c2) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::TextCore::Text
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::TextCore::Text::ColorUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::ColorUtilities, "UnityEngine.TextCore.Text", "ColorUtilities");
