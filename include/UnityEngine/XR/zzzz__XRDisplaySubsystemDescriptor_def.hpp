#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/XR/zzzz__XRDisplaySubsystem_def.hpp"
#include "UnityEngine/zzzz__IntegratedSubsystemDescriptor_1_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::XR {
class XRDisplaySubsystemDescriptor;
}
// Type: UnityEngine.XR::XRDisplaySubsystemDescriptor
namespace UnityEngine::XR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15844)), TypeDefinitionIndex(TypeDefinitionIndex(15594)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15844), inst: 3776 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15590))
// CS Name: UnityEngine.XR.XRDisplaySubsystemDescriptor
class CORDL_TYPE XRDisplaySubsystemDescriptor : public ::UnityEngine::IntegratedSubsystemDescriptor_1<::UnityEngine::XR::XRDisplaySubsystem> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~XRDisplaySubsystemDescriptor() = default;

// Ctor Parameters [CppParam { name: "", ty: "XRDisplaySubsystemDescriptor", modifiers: " const&", def_value: None }]
constexpr XRDisplaySubsystemDescriptor(XRDisplaySubsystemDescriptor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XRDisplaySubsystemDescriptor", modifiers: "&&", def_value: None }]
constexpr XRDisplaySubsystemDescriptor(XRDisplaySubsystemDescriptor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XRDisplaySubsystemDescriptor(void* ptr) noexcept : ::UnityEngine::IntegratedSubsystemDescriptor_1<::UnityEngine::XR::XRDisplaySubsystem>(ptr) {
}


  constexpr XRDisplaySubsystemDescriptor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XRDisplaySubsystemDescriptor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XRDisplaySubsystemDescriptor& operator=(XRDisplaySubsystemDescriptor&& o) noexcept = default;
  constexpr XRDisplaySubsystemDescriptor& operator=(XRDisplaySubsystemDescriptor const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit XRDisplaySubsystemDescriptor() ;

/// @brief Method .ctor addr 0x2d3a9b8 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::XR::XRDisplaySubsystemDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::XRDisplaySubsystemDescriptor, "UnityEngine.XR", "XRDisplaySubsystemDescriptor");
