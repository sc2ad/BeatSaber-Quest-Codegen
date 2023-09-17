#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::Internal {
class ExcludeFromDocsAttribute;
}
// Type: UnityEngine.Internal::ExcludeFromDocsAttribute
namespace UnityEngine::Internal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10258))
// CS Name: UnityEngine.Internal.ExcludeFromDocsAttribute
class CORDL_TYPE ExcludeFromDocsAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ExcludeFromDocsAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExcludeFromDocsAttribute", modifiers: " const&", def_value: None }]
constexpr ExcludeFromDocsAttribute(ExcludeFromDocsAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExcludeFromDocsAttribute", modifiers: "&&", def_value: None }]
constexpr ExcludeFromDocsAttribute(ExcludeFromDocsAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExcludeFromDocsAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr ExcludeFromDocsAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExcludeFromDocsAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExcludeFromDocsAttribute& operator=(ExcludeFromDocsAttribute&& o) noexcept = default;
  constexpr ExcludeFromDocsAttribute& operator=(ExcludeFromDocsAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ExcludeFromDocsAttribute() ;

/// @brief Method .ctor addr 0x2b71c40 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Internal
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Internal::ExcludeFromDocsAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Internal::ExcludeFromDocsAttribute, "UnityEngine.Internal", "ExcludeFromDocsAttribute");
