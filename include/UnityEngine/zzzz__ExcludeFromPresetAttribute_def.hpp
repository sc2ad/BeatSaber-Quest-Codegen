#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine {
class ExcludeFromPresetAttribute;
}
// Type: UnityEngine::ExcludeFromPresetAttribute
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10165))
// CS Name: UnityEngine.ExcludeFromPresetAttribute
class CORDL_TYPE ExcludeFromPresetAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ExcludeFromPresetAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExcludeFromPresetAttribute", modifiers: " const&", def_value: None }]
constexpr ExcludeFromPresetAttribute(ExcludeFromPresetAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExcludeFromPresetAttribute", modifiers: "&&", def_value: None }]
constexpr ExcludeFromPresetAttribute(ExcludeFromPresetAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExcludeFromPresetAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr ExcludeFromPresetAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExcludeFromPresetAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExcludeFromPresetAttribute& operator=(ExcludeFromPresetAttribute&& o) noexcept = default;
  constexpr ExcludeFromPresetAttribute& operator=(ExcludeFromPresetAttribute const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ExcludeFromPresetAttribute() ;

/// @brief Method .ctor addr 0x2b5b400 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ExcludeFromPresetAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ExcludeFromPresetAttribute, "UnityEngine", "ExcludeFromPresetAttribute");
