#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace System::Runtime::CompilerServices {
class IsByRefLikeAttribute;
}
// Type: System.Runtime.CompilerServices::IsByRefLikeAttribute
namespace System::Runtime::CompilerServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3369))
// CS Name: System.Runtime.CompilerServices.IsByRefLikeAttribute
class CORDL_TYPE IsByRefLikeAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~IsByRefLikeAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "IsByRefLikeAttribute", modifiers: " const&", def_value: None }]
constexpr IsByRefLikeAttribute(IsByRefLikeAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IsByRefLikeAttribute", modifiers: "&&", def_value: None }]
constexpr IsByRefLikeAttribute(IsByRefLikeAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IsByRefLikeAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr IsByRefLikeAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IsByRefLikeAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IsByRefLikeAttribute& operator=(IsByRefLikeAttribute&& o) noexcept = default;
  constexpr IsByRefLikeAttribute& operator=(IsByRefLikeAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit IsByRefLikeAttribute() ;

/// @brief Method .ctor addr 0x236e0d0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::CompilerServices
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::CompilerServices::IsByRefLikeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::IsByRefLikeAttribute, "System.Runtime.CompilerServices", "IsByRefLikeAttribute");
