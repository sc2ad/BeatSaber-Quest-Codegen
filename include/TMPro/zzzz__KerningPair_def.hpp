#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace TMPro {
struct GlyphValueRecord_Legacy;
}
// Forward declare root types
namespace TMPro {
class KerningPair;
}
// Type: TMPro::KerningPair
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12305))
// CS Name: TMPro.KerningPair
class CORDL_TYPE KerningPair : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~KerningPair() = default;

// Ctor Parameters [CppParam { name: "", ty: "KerningPair", modifiers: " const&", def_value: None }]
constexpr KerningPair(KerningPair const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "KerningPair", modifiers: "&&", def_value: None }]
constexpr KerningPair(KerningPair&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit KerningPair(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr KerningPair& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr KerningPair& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr KerningPair& operator=(KerningPair&& o) noexcept = default;
  constexpr KerningPair& operator=(KerningPair const& o) noexcept = default;
                


// Fields

 uint32_t __declspec(property(get=__get_m_FirstGlyph, put=__set_m_FirstGlyph))  m_FirstGlyph;

constexpr void __set_m_FirstGlyph(uint32_t value) ;

constexpr uint32_t __get_m_FirstGlyph() const;

 TMPro::GlyphValueRecord_Legacy __declspec(property(get=__get_m_FirstGlyphAdjustments, put=__set_m_FirstGlyphAdjustments))  m_FirstGlyphAdjustments;

constexpr void __set_m_FirstGlyphAdjustments(TMPro::GlyphValueRecord_Legacy value) ;

constexpr TMPro::GlyphValueRecord_Legacy __get_m_FirstGlyphAdjustments() const;

 uint32_t __declspec(property(get=__get_m_SecondGlyph, put=__set_m_SecondGlyph))  m_SecondGlyph;

constexpr void __set_m_SecondGlyph(uint32_t value) ;

constexpr uint32_t __get_m_SecondGlyph() const;

 TMPro::GlyphValueRecord_Legacy __declspec(property(get=__get_m_SecondGlyphAdjustments, put=__set_m_SecondGlyphAdjustments))  m_SecondGlyphAdjustments;

constexpr void __set_m_SecondGlyphAdjustments(TMPro::GlyphValueRecord_Legacy value) ;

constexpr TMPro::GlyphValueRecord_Legacy __get_m_SecondGlyphAdjustments() const;

 float_t __declspec(property(get=__get_xOffset, put=__set_xOffset))  xOffset;

constexpr void __set_xOffset(float_t value) ;

constexpr float_t __get_xOffset() const;

static TMPro::KerningPair __declspec(property(get=__get_empty, put=__set_empty))  empty;

static void __set_empty(TMPro::KerningPair value) ;

static TMPro::KerningPair __get_empty() ;

 bool __declspec(property(get=__get_m_IgnoreSpacingAdjustments, put=__set_m_IgnoreSpacingAdjustments))  m_IgnoreSpacingAdjustments;

constexpr void __set_m_IgnoreSpacingAdjustments(bool value) ;

constexpr bool __get_m_IgnoreSpacingAdjustments() const;


// Properties

 uint32_t __declspec(property(get=get_firstGlyph, put=set_firstGlyph))  firstGlyph;

 TMPro::GlyphValueRecord_Legacy __declspec(property(get=get_firstGlyphAdjustments))  firstGlyphAdjustments;

 uint32_t __declspec(property(get=get_secondGlyph, put=set_secondGlyph))  secondGlyph;

 TMPro::GlyphValueRecord_Legacy __declspec(property(get=get_secondGlyphAdjustments))  secondGlyphAdjustments;

 bool __declspec(property(get=get_ignoreSpacingAdjustments))  ignoreSpacingAdjustments;


// Methods

/// @brief Method get_firstGlyph addr 0x2a789f0 size 0x8 virtual false final false
 uint32_t get_firstGlyph() ;

/// @brief Method set_firstGlyph addr 0x2a789f8 size 0x8 virtual false final false
 void set_firstGlyph(uint32_t value) ;

/// @brief Method get_firstGlyphAdjustments addr 0x2a78a00 size 0xc virtual false final false
 TMPro::GlyphValueRecord_Legacy get_firstGlyphAdjustments() ;

/// @brief Method get_secondGlyph addr 0x2a78a0c size 0x8 virtual false final false
 uint32_t get_secondGlyph() ;

/// @brief Method set_secondGlyph addr 0x2a78a14 size 0x8 virtual false final false
 void set_secondGlyph(uint32_t value) ;

/// @brief Method get_secondGlyphAdjustments addr 0x2a78a1c size 0xc virtual false final false
 TMPro::GlyphValueRecord_Legacy get_secondGlyphAdjustments() ;

/// @brief Method get_ignoreSpacingAdjustments addr 0x2a78a28 size 0x8 virtual false final false
 bool get_ignoreSpacingAdjustments() ;

static TMPro::KerningPair New_ctor() ;

/// @brief Method .ctor addr 0x2a78a30 size 0x24 virtual false final false
 void _ctor() ;

static TMPro::KerningPair New_ctor(uint32_t left, uint32_t right, float_t offset) ;

/// @brief Method .ctor addr 0x2a78a54 size 0x40 virtual false final false
 void _ctor(uint32_t left, uint32_t right, float_t offset) ;

static TMPro::KerningPair New_ctor(uint32_t firstGlyph, TMPro::GlyphValueRecord_Legacy firstGlyphAdjustments, uint32_t secondGlyph, TMPro::GlyphValueRecord_Legacy secondGlyphAdjustments) ;

/// @brief Method .ctor addr 0x2a78a94 size 0x80 virtual false final false
 void _ctor(uint32_t firstGlyph, TMPro::GlyphValueRecord_Legacy firstGlyphAdjustments, uint32_t secondGlyph, TMPro::GlyphValueRecord_Legacy secondGlyphAdjustments) ;

/// @brief Method ConvertLegacyKerningData addr 0x2a78b14 size 0xc virtual false final false
 void ConvertLegacyKerningData() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
NEED_NO_BOX(TMPro::KerningPair);
DEFINE_IL2CPP_ARG_TYPE(TMPro::KerningPair, "TMPro", "KerningPair");
