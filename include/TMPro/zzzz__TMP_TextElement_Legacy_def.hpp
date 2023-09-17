#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
// Forward declare root types
namespace TMPro {
class TMP_TextElement_Legacy;
}
// Type: TMPro::TMP_TextElement_Legacy
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12391))
// CS Name: TMPro.TMP_TextElement_Legacy
class CORDL_TYPE TMP_TextElement_Legacy : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~TMP_TextElement_Legacy() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_TextElement_Legacy", modifiers: " const&", def_value: None }]
constexpr TMP_TextElement_Legacy(TMP_TextElement_Legacy const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_TextElement_Legacy", modifiers: "&&", def_value: None }]
constexpr TMP_TextElement_Legacy(TMP_TextElement_Legacy&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_TextElement_Legacy(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMP_TextElement_Legacy& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_TextElement_Legacy& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_TextElement_Legacy& operator=(TMP_TextElement_Legacy&& o) noexcept = default;
  constexpr TMP_TextElement_Legacy& operator=(TMP_TextElement_Legacy const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_id, put=__set_id))  id;

constexpr void __set_id(int32_t value) ;

constexpr int32_t __get_id() const;

 float_t __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(float_t value) ;

constexpr float_t __get_x() const;

 float_t __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(float_t value) ;

constexpr float_t __get_y() const;

 float_t __declspec(property(get=__get_width, put=__set_width))  width;

constexpr void __set_width(float_t value) ;

constexpr float_t __get_width() const;

 float_t __declspec(property(get=__get_height, put=__set_height))  height;

constexpr void __set_height(float_t value) ;

constexpr float_t __get_height() const;

 float_t __declspec(property(get=__get_xOffset, put=__set_xOffset))  xOffset;

constexpr void __set_xOffset(float_t value) ;

constexpr float_t __get_xOffset() const;

 float_t __declspec(property(get=__get_yOffset, put=__set_yOffset))  yOffset;

constexpr void __set_yOffset(float_t value) ;

constexpr float_t __get_yOffset() const;

 float_t __declspec(property(get=__get_xAdvance, put=__set_xAdvance))  xAdvance;

constexpr void __set_xAdvance(float_t value) ;

constexpr float_t __get_xAdvance() const;

 float_t __declspec(property(get=__get_scale, put=__set_scale))  scale;

constexpr void __set_scale(float_t value) ;

constexpr float_t __get_scale() const;


// Methods

// Ctor Parameters []
explicit TMP_TextElement_Legacy() ;

/// @brief Method .ctor addr 0x2aaa5c0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
NEED_NO_BOX(::TMPro::TMP_TextElement_Legacy);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_TextElement_Legacy, "TMPro", "TMP_TextElement_Legacy");
