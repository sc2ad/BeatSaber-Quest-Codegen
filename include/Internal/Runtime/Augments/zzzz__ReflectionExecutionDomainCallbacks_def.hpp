#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System {
class Type;
}
namespace System {
class Exception;
}
// Forward declare root types
namespace Internal::Runtime::Augments {
class ReflectionExecutionDomainCallbacks;
}
// Type: Internal.Runtime.Augments::ReflectionExecutionDomainCallbacks
namespace Internal::Runtime::Augments {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2307))
// CS Name: Internal.Runtime.Augments.ReflectionExecutionDomainCallbacks
class CORDL_TYPE ReflectionExecutionDomainCallbacks : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ReflectionExecutionDomainCallbacks() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionExecutionDomainCallbacks", modifiers: " const&", def_value: None }]
constexpr ReflectionExecutionDomainCallbacks(ReflectionExecutionDomainCallbacks const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionExecutionDomainCallbacks", modifiers: "&&", def_value: None }]
constexpr ReflectionExecutionDomainCallbacks(ReflectionExecutionDomainCallbacks&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReflectionExecutionDomainCallbacks(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ReflectionExecutionDomainCallbacks& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReflectionExecutionDomainCallbacks& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReflectionExecutionDomainCallbacks& operator=(ReflectionExecutionDomainCallbacks&& o) noexcept = default;
  constexpr ReflectionExecutionDomainCallbacks& operator=(ReflectionExecutionDomainCallbacks const& o) noexcept = default;
                


// Methods

/// @brief Method CreateMissingMetadataException addr 0x22bf0a4 size 0x5c virtual false final false
 ::System::Exception CreateMissingMetadataException(::System::Type attributeType) ;

// Ctor Parameters []
explicit ReflectionExecutionDomainCallbacks() ;

/// @brief Method .ctor addr 0x22bf09c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Internal::Runtime::Augments
} // end anonymous namespace
NEED_NO_BOX(::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks);
DEFINE_IL2CPP_ARG_TYPE(::Internal::Runtime::Augments::ReflectionExecutionDomainCallbacks, "Internal.Runtime.Augments", "ReflectionExecutionDomainCallbacks");
