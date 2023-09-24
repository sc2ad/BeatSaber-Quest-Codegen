#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "TMPro/zzzz__TMP_TextElement_Legacy_def.hpp"
// Forward declare root types
namespace TMPro {
class TMP_Glyph;
}
// Type: TMPro::TMP_Glyph
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12391))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12300))
// CS Name: TMPro.TMP_Glyph
class CORDL_TYPE TMP_Glyph : public TMPro::TMP_TextElement_Legacy {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~TMP_Glyph() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_Glyph", modifiers: " const&", def_value: None }]
constexpr TMP_Glyph(TMP_Glyph const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_Glyph", modifiers: "&&", def_value: None }]
constexpr TMP_Glyph(TMP_Glyph&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_Glyph(void* ptr) noexcept : TMPro::TMP_TextElement_Legacy(ptr) {
}


  constexpr TMP_Glyph& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_Glyph& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_Glyph& operator=(TMP_Glyph&& o) noexcept = default;
  constexpr TMP_Glyph& operator=(TMP_Glyph const& o) noexcept = default;
                


// Methods

/// @brief Method Clone addr 0x2a78814 size 0x7c virtual false final false
static TMPro::TMP_Glyph Clone(TMPro::TMP_Glyph source) ;

static TMPro::TMP_Glyph New_ctor() ;

/// @brief Method .ctor addr 0x2a78890 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
NEED_NO_BOX(TMPro::TMP_Glyph);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_Glyph, "TMPro", "TMP_Glyph");
