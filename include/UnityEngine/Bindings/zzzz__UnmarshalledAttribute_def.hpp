#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::Bindings {
class UnmarshalledAttribute;
}
// Type: UnityEngine.Bindings::UnmarshalledAttribute
namespace UnityEngine::Bindings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15880))
// CS Name: UnityEngine.Bindings.UnmarshalledAttribute
class CORDL_TYPE UnmarshalledAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnmarshalledAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnmarshalledAttribute", modifiers: " const&", def_value: None }]
constexpr UnmarshalledAttribute(UnmarshalledAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnmarshalledAttribute", modifiers: "&&", def_value: None }]
constexpr UnmarshalledAttribute(UnmarshalledAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnmarshalledAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr UnmarshalledAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnmarshalledAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnmarshalledAttribute& operator=(UnmarshalledAttribute&& o) noexcept = default;
  constexpr UnmarshalledAttribute& operator=(UnmarshalledAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit UnmarshalledAttribute() ;

/// @brief Method .ctor addr 0x2ba16e8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Bindings
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Bindings::UnmarshalledAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::UnmarshalledAttribute, "UnityEngine.Bindings", "UnmarshalledAttribute");
