#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "TMPro/zzzz__TMP_TextElement_Legacy_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace TMPro {
class TMP_Sprite;
}
// Type: TMPro::TMP_Sprite
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12391))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12359))
// CS Name: TMPro.TMP_Sprite
class CORDL_TYPE TMP_Sprite : public ::TMPro::TMP_TextElement_Legacy {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~TMP_Sprite() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_Sprite", modifiers: " const&", def_value: None }]
constexpr TMP_Sprite(TMP_Sprite const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_Sprite", modifiers: "&&", def_value: None }]
constexpr TMP_Sprite(TMP_Sprite&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_Sprite(void* ptr) noexcept : ::TMPro::TMP_TextElement_Legacy(ptr) {
}


  constexpr TMP_Sprite& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_Sprite& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_Sprite& operator=(TMP_Sprite&& o) noexcept = default;
  constexpr TMP_Sprite& operator=(TMP_Sprite const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 int32_t __declspec(property(get=__get_hashCode, put=__set_hashCode))  hashCode;

constexpr void __set_hashCode(int32_t value) ;

constexpr int32_t __get_hashCode() const;

 int32_t __declspec(property(get=__get_unicode, put=__set_unicode))  unicode;

constexpr void __set_unicode(int32_t value) ;

constexpr int32_t __get_unicode() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get_pivot, put=__set_pivot))  pivot;

constexpr void __set_pivot(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get_pivot() const;

 ::UnityEngine::Sprite __declspec(property(get=__get_sprite, put=__set_sprite))  sprite;

constexpr void __set_sprite(::UnityEngine::Sprite value) ;

constexpr ::UnityEngine::Sprite __get_sprite() const;


// Methods

// Ctor Parameters []
explicit TMP_Sprite() ;

/// @brief Method .ctor addr 0x2aaa5b8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
NEED_NO_BOX(::TMPro::TMP_Sprite);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_Sprite, "TMPro", "TMP_Sprite");
