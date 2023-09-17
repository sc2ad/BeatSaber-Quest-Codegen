#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace System::Xml::Schema {
class BaseValidator;
}
// Type: System.Xml.Schema::BaseValidator
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11535))
// CS Name: System.Xml.Schema.BaseValidator
class CORDL_TYPE BaseValidator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BaseValidator() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseValidator", modifiers: " const&", def_value: None }]
constexpr BaseValidator(BaseValidator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseValidator", modifiers: "&&", def_value: None }]
constexpr BaseValidator(BaseValidator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseValidator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BaseValidator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseValidator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseValidator& operator=(BaseValidator&& o) noexcept = default;
  constexpr BaseValidator& operator=(BaseValidator const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml::Schema
} // end anonymous namespace
NEED_NO_BOX(::System::Xml::Schema::BaseValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::BaseValidator, "System.Xml.Schema", "BaseValidator");
