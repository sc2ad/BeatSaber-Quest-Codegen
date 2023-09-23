#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
class SubsystemDescriptorBindings;
}
// Type: UnityEngine::SubsystemDescriptorBindings
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15845))
// CS Name: UnityEngine.SubsystemDescriptorBindings
class CORDL_TYPE SubsystemDescriptorBindings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SubsystemDescriptorBindings() = default;

// Ctor Parameters [CppParam { name: "", ty: "SubsystemDescriptorBindings", modifiers: " const&", def_value: None }]
constexpr SubsystemDescriptorBindings(SubsystemDescriptorBindings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SubsystemDescriptorBindings", modifiers: "&&", def_value: None }]
constexpr SubsystemDescriptorBindings(SubsystemDescriptorBindings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SubsystemDescriptorBindings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SubsystemDescriptorBindings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SubsystemDescriptorBindings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SubsystemDescriptorBindings& operator=(SubsystemDescriptorBindings&& o) noexcept = default;
  constexpr SubsystemDescriptorBindings& operator=(SubsystemDescriptorBindings const& o) noexcept = default;
                


// Methods

/// @brief Method Create addr 0x2ba2fd8 size 0x3c virtual false final false
static ::cordl_internals::intptr_t Create(::cordl_internals::intptr_t descriptorPtr) ;

/// @brief Method GetId addr 0x2ba2f88 size 0x3c virtual false final false
static ::StringW GetId(::cordl_internals::intptr_t descriptorPtr) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::SubsystemDescriptorBindings);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SubsystemDescriptorBindings, "UnityEngine", "SubsystemDescriptorBindings");
