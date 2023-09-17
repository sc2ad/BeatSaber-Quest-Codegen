#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
class TextAreaAttribute;
}
// Type: UnityEngine::TextAreaAttribute
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10112))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10121))
// CS Name: UnityEngine.TextAreaAttribute
class CORDL_TYPE TextAreaAttribute : public ::UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TextAreaAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextAreaAttribute", modifiers: " const&", def_value: None }]
constexpr TextAreaAttribute(TextAreaAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextAreaAttribute", modifiers: "&&", def_value: None }]
constexpr TextAreaAttribute(TextAreaAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextAreaAttribute(void* ptr) noexcept : ::UnityEngine::PropertyAttribute(ptr) {
}


  constexpr TextAreaAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextAreaAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextAreaAttribute& operator=(TextAreaAttribute&& o) noexcept = default;
  constexpr TextAreaAttribute& operator=(TextAreaAttribute const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_minLines, put=__set_minLines))  minLines;

constexpr void __set_minLines(int32_t value) ;

constexpr int32_t __get_minLines() const;

 int32_t __declspec(property(get=__get_maxLines, put=__set_maxLines))  maxLines;

constexpr void __set_maxLines(int32_t value) ;

constexpr int32_t __get_maxLines() const;


// Methods

// Ctor Parameters []
explicit TextAreaAttribute() ;

/// @brief Method .ctor addr 0x2b54f18 size 0x20 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "minLines", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maxLines", ty: "int32_t", modifiers: "", def_value: None }]
explicit TextAreaAttribute(int32_t minLines, int32_t maxLines) ;

/// @brief Method .ctor addr 0x2b54f38 size 0x2c virtual false final false
 void _ctor(int32_t minLines, int32_t maxLines) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::TextAreaAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextAreaAttribute, "UnityEngine", "TextAreaAttribute");
