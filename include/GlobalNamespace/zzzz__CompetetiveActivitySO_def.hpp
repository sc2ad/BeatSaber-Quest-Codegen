#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PS5ActivityDataSO_def.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class CompetetiveActivitySO;
}
// Type: ::CompetetiveActivitySO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4647))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4644))
// CS Name: CompetetiveActivitySO
class CORDL_TYPE CompetetiveActivitySO : public ::GlobalNamespace::PS5ActivityDataSO {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~CompetetiveActivitySO() = default;

// Ctor Parameters [CppParam { name: "", ty: "CompetetiveActivitySO", modifiers: " const&", def_value: None }]
constexpr CompetetiveActivitySO(CompetetiveActivitySO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CompetetiveActivitySO", modifiers: "&&", def_value: None }]
constexpr CompetetiveActivitySO(CompetetiveActivitySO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CompetetiveActivitySO(void* ptr) noexcept : ::GlobalNamespace::PS5ActivityDataSO(ptr) {
}


  constexpr CompetetiveActivitySO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CompetetiveActivitySO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CompetetiveActivitySO& operator=(CompetetiveActivitySO&& o) noexcept = default;
  constexpr CompetetiveActivitySO& operator=(CompetetiveActivitySO const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit CompetetiveActivitySO() ;

/// @brief Method .ctor addr 0x221a79c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::CompetetiveActivitySO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CompetetiveActivitySO, "", "CompetetiveActivitySO");
