#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine {
class ExecuteInEditMode;
}
// Type: UnityEngine::ExecuteInEditMode
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10159))
// CS Name: UnityEngine.ExecuteInEditMode
class CORDL_TYPE ExecuteInEditMode : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ExecuteInEditMode() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExecuteInEditMode", modifiers: " const&", def_value: None }]
constexpr ExecuteInEditMode(ExecuteInEditMode const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExecuteInEditMode", modifiers: "&&", def_value: None }]
constexpr ExecuteInEditMode(ExecuteInEditMode&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExecuteInEditMode(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr ExecuteInEditMode& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExecuteInEditMode& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExecuteInEditMode& operator=(ExecuteInEditMode&& o) noexcept = default;
  constexpr ExecuteInEditMode& operator=(ExecuteInEditMode const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ExecuteInEditMode() ;

/// @brief Method .ctor addr 0x2b5b358 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ExecuteInEditMode);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ExecuteInEditMode, "UnityEngine", "ExecuteInEditMode");
