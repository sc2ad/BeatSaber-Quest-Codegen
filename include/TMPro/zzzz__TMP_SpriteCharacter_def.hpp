#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "TMPro/zzzz__TMP_TextElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace TMPro {
class TMP_SpriteGlyph;
}
namespace TMPro {
class TMP_SpriteAsset;
}
// Forward declare root types
namespace TMPro {
class TMP_SpriteCharacter;
}
// Type: TMPro::TMP_SpriteCharacter
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12390))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12364))
// CS Name: TMPro.TMP_SpriteCharacter
class CORDL_TYPE TMP_SpriteCharacter : public TMPro::TMP_TextElement {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~TMP_SpriteCharacter() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_SpriteCharacter", modifiers: " const&", def_value: None }]
constexpr TMP_SpriteCharacter(TMP_SpriteCharacter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_SpriteCharacter", modifiers: "&&", def_value: None }]
constexpr TMP_SpriteCharacter(TMP_SpriteCharacter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_SpriteCharacter(void* ptr) noexcept : TMPro::TMP_TextElement(ptr) {
}


  constexpr TMP_SpriteCharacter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_SpriteCharacter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_SpriteCharacter& operator=(TMP_SpriteCharacter&& o) noexcept = default;
  constexpr TMP_SpriteCharacter& operator=(TMP_SpriteCharacter const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_Name, put=__set_m_Name))  m_Name;

constexpr void __set_m_Name(::StringW value) ;

constexpr ::StringW __get_m_Name() const;

 int32_t __declspec(property(get=__get_m_HashCode, put=__set_m_HashCode))  m_HashCode;

constexpr void __set_m_HashCode(int32_t value) ;

constexpr int32_t __get_m_HashCode() const;


// Properties

 ::StringW __declspec(property(get=get_name, put=set_name))  name;

 int32_t __declspec(property(get=get_hashCode))  hashCode;


// Methods

/// @brief Method get_name addr 0x2aacebc size 0x8 virtual false final false
 ::StringW get_name() ;

/// @brief Method set_name addr 0x2aacce8 size 0x78 virtual false final false
 void set_name(::StringW value) ;

/// @brief Method get_hashCode addr 0x2aacf30 size 0x8 virtual false final false
 int32_t get_hashCode() ;

// Ctor Parameters []
explicit TMP_SpriteCharacter() ;

/// @brief Method .ctor addr 0x2aaccc8 size 0x20 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "unicode", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "glyph", ty: "TMPro::TMP_SpriteGlyph", modifiers: "", def_value: None }]
explicit TMP_SpriteCharacter(uint32_t unicode, TMPro::TMP_SpriteGlyph glyph) ;

/// @brief Method .ctor addr 0x2aacf40 size 0x54 virtual false final false
 void _ctor(uint32_t unicode, TMPro::TMP_SpriteGlyph glyph) ;

// Ctor Parameters [CppParam { name: "unicode", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "spriteAsset", ty: "TMPro::TMP_SpriteAsset", modifiers: "", def_value: None }, CppParam { name: "glyph", ty: "TMPro::TMP_SpriteGlyph", modifiers: "", def_value: None }]
explicit TMP_SpriteCharacter(uint32_t unicode, TMPro::TMP_SpriteAsset spriteAsset, TMPro::TMP_SpriteGlyph glyph) ;

/// @brief Method .ctor addr 0x2aacf94 size 0x60 virtual false final false
 void _ctor(uint32_t unicode, TMPro::TMP_SpriteAsset spriteAsset, TMPro::TMP_SpriteGlyph glyph) ;

// Ctor Parameters [CppParam { name: "unicode", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "glyphIndex", ty: "uint32_t", modifiers: "", def_value: None }]
explicit TMP_SpriteCharacter(uint32_t unicode, uint32_t glyphIndex) ;

/// @brief Method .ctor addr 0x2aacff4 size 0x40 virtual false final false
 void _ctor(uint32_t unicode, uint32_t glyphIndex) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
NEED_NO_BOX(TMPro::TMP_SpriteCharacter);
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_SpriteCharacter, "TMPro", "TMP_SpriteCharacter");
