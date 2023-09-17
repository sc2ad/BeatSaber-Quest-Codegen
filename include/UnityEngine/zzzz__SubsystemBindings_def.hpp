#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine {
class SubsystemBindings;
}
// Type: UnityEngine::SubsystemBindings
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15850))
// CS Name: UnityEngine.SubsystemBindings
class CORDL_TYPE SubsystemBindings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SubsystemBindings() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubsystemBindings", modifiers: " const&", def_value: None }]
constexpr SubsystemBindings(SubsystemBindings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubsystemBindings", modifiers: "&&", def_value: None }]
constexpr SubsystemBindings(SubsystemBindings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubsystemBindings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SubsystemBindings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubsystemBindings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubsystemBindings& operator=(SubsystemBindings&& o) noexcept = default;
  constexpr SubsystemBindings& operator=(SubsystemBindings const& o) noexcept = default;
                


// Methods

/// @brief Method DestroySubsystem addr 0x2ba33ec size 0x3c virtual false final false
static void DestroySubsystem(::cordl_internals::intptr_t nativePtr) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::SubsystemBindings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SubsystemBindings, "UnityEngine", "SubsystemBindings");
