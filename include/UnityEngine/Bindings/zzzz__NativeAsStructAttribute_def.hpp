#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::Bindings {
class NativeAsStructAttribute;
}
// Type: UnityEngine.Bindings::NativeAsStructAttribute
namespace UnityEngine::Bindings {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15877))
// CS Name: UnityEngine.Bindings.NativeAsStructAttribute
class CORDL_TYPE NativeAsStructAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NativeAsStructAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeAsStructAttribute", modifiers: " const&", def_value: None }]
constexpr NativeAsStructAttribute(NativeAsStructAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NativeAsStructAttribute", modifiers: "&&", def_value: None }]
constexpr NativeAsStructAttribute(NativeAsStructAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NativeAsStructAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr NativeAsStructAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NativeAsStructAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NativeAsStructAttribute& operator=(NativeAsStructAttribute&& o) noexcept = default;
  constexpr NativeAsStructAttribute& operator=(NativeAsStructAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit NativeAsStructAttribute() ;

/// @brief Method .ctor addr 0x2ba151c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Bindings
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Bindings::NativeAsStructAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::NativeAsStructAttribute, "UnityEngine.Bindings", "NativeAsStructAttribute");
