#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace System::Runtime::ConstrainedExecution {
class PrePrepareMethodAttribute;
}
// Type: System.Runtime.ConstrainedExecution::PrePrepareMethodAttribute
namespace System::Runtime::ConstrainedExecution {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3346))
// CS Name: System.Runtime.ConstrainedExecution.PrePrepareMethodAttribute
class CORDL_TYPE PrePrepareMethodAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PrePrepareMethodAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "PrePrepareMethodAttribute", modifiers: " const&", def_value: None }]
constexpr PrePrepareMethodAttribute(PrePrepareMethodAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PrePrepareMethodAttribute", modifiers: "&&", def_value: None }]
constexpr PrePrepareMethodAttribute(PrePrepareMethodAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PrePrepareMethodAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr PrePrepareMethodAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PrePrepareMethodAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PrePrepareMethodAttribute& operator=(PrePrepareMethodAttribute&& o) noexcept = default;
  constexpr PrePrepareMethodAttribute& operator=(PrePrepareMethodAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit PrePrepareMethodAttribute() ;

/// @brief Method .ctor addr 0x236d97c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::ConstrainedExecution
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::ConstrainedExecution::PrePrepareMethodAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::ConstrainedExecution::PrePrepareMethodAttribute, "System.Runtime.ConstrainedExecution", "PrePrepareMethodAttribute");
