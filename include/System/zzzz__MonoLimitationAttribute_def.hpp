#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MonoTODOAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System {
class MonoLimitationAttribute;
}
// Type: System::MonoLimitationAttribute
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2537))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2538))
// CS Name: System.MonoLimitationAttribute
class CORDL_TYPE MonoLimitationAttribute : public System::MonoTODOAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MonoLimitationAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoLimitationAttribute", modifiers: " const&", def_value: None }]
constexpr MonoLimitationAttribute(MonoLimitationAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoLimitationAttribute", modifiers: "&&", def_value: None }]
constexpr MonoLimitationAttribute(MonoLimitationAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoLimitationAttribute(void* ptr) noexcept : System::MonoTODOAttribute(ptr) {
}


  constexpr MonoLimitationAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoLimitationAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoLimitationAttribute& operator=(MonoLimitationAttribute&& o) noexcept = default;
  constexpr MonoLimitationAttribute& operator=(MonoLimitationAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "comment", ty: "::StringW", modifiers: "", def_value: None }]
explicit MonoLimitationAttribute(::StringW comment) ;

/// @brief Method .ctor addr 0x24696f4 size 0x28 virtual false final false
 void _ctor(::StringW comment) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::MonoLimitationAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::MonoLimitationAttribute, "System", "MonoLimitationAttribute");
