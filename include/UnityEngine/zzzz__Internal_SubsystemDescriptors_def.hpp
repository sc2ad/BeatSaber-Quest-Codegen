#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace UnityEngine {
class SubsystemDescriptor;
}
// Forward declare root types
namespace UnityEngine {
class Internal_SubsystemDescriptors;
}
// Type: UnityEngine::Internal_SubsystemDescriptors
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15847))
// CS Name: UnityEngine.Internal_SubsystemDescriptors
class CORDL_TYPE Internal_SubsystemDescriptors : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Internal_SubsystemDescriptors() = default;

// Ctor Parameters [CppParam { name: "", ty: "Internal_SubsystemDescriptors", modifiers: " const&", def_value: None }]
constexpr Internal_SubsystemDescriptors(Internal_SubsystemDescriptors const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Internal_SubsystemDescriptors", modifiers: "&&", def_value: None }]
constexpr Internal_SubsystemDescriptors(Internal_SubsystemDescriptors&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Internal_SubsystemDescriptors(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Internal_SubsystemDescriptors& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Internal_SubsystemDescriptors& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Internal_SubsystemDescriptors& operator=(Internal_SubsystemDescriptors&& o) noexcept = default;
  constexpr Internal_SubsystemDescriptors& operator=(Internal_SubsystemDescriptors const& o) noexcept = default;
                


// Methods

/// @brief Method Internal_AddDescriptor addr 0x2ba3030 size 0x54 virtual false final false
static void Internal_AddDescriptor(::UnityEngine::SubsystemDescriptor descriptor) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Internal_SubsystemDescriptors);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Internal_SubsystemDescriptors, "UnityEngine", "Internal_SubsystemDescriptors");
