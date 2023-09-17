#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine {
class ExecuteAlways;
}
// Type: UnityEngine::ExecuteAlways
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10160))
// CS Name: UnityEngine.ExecuteAlways
class CORDL_TYPE ExecuteAlways : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ExecuteAlways() = default;

// Ctor Parameters [CppParam { name: "", ty: "ExecuteAlways", modifiers: " const&", def_value: None }]
constexpr ExecuteAlways(ExecuteAlways const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ExecuteAlways", modifiers: "&&", def_value: None }]
constexpr ExecuteAlways(ExecuteAlways&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ExecuteAlways(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr ExecuteAlways& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ExecuteAlways& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ExecuteAlways& operator=(ExecuteAlways&& o) noexcept = default;
  constexpr ExecuteAlways& operator=(ExecuteAlways const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit ExecuteAlways() ;

/// @brief Method .ctor addr 0x2b5b360 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ExecuteAlways);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ExecuteAlways, "UnityEngine", "ExecuteAlways");
