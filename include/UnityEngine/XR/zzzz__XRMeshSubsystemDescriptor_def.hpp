#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/XR/zzzz__XRMeshSubsystem_def.hpp"
#include "UnityEngine/zzzz__IntegratedSubsystemDescriptor_1_def.hpp"
// Forward declare root types
namespace UnityEngine::XR {
class XRMeshSubsystemDescriptor;
}
// Type: UnityEngine.XR::XRMeshSubsystemDescriptor
namespace UnityEngine::XR {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15844), inst: 3777 }), TypeDefinitionIndex(TypeDefinitionIndex(15844)), TypeDefinitionIndex(TypeDefinitionIndex(15589))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15582))
// CS Name: UnityEngine.XR.XRMeshSubsystemDescriptor
class CORDL_TYPE XRMeshSubsystemDescriptor : public UnityEngine::IntegratedSubsystemDescriptor_1<UnityEngine::XR::XRMeshSubsystem> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~XRMeshSubsystemDescriptor() = default;

// Ctor Parameters [CppParam { name: "", ty: "XRMeshSubsystemDescriptor", modifiers: " const&", def_value: None }]
constexpr XRMeshSubsystemDescriptor(XRMeshSubsystemDescriptor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XRMeshSubsystemDescriptor", modifiers: "&&", def_value: None }]
constexpr XRMeshSubsystemDescriptor(XRMeshSubsystemDescriptor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XRMeshSubsystemDescriptor(void* ptr) noexcept : UnityEngine::IntegratedSubsystemDescriptor_1<UnityEngine::XR::XRMeshSubsystem>(ptr) {
}


  constexpr XRMeshSubsystemDescriptor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XRMeshSubsystemDescriptor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XRMeshSubsystemDescriptor& operator=(XRMeshSubsystemDescriptor&& o) noexcept = default;
  constexpr XRMeshSubsystemDescriptor& operator=(XRMeshSubsystemDescriptor const& o) noexcept = default;
                


// Methods

static UnityEngine::XR::XRMeshSubsystemDescriptor New_ctor() ;

/// @brief Method .ctor addr 0x2d3a16c size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR
NEED_NO_BOX(UnityEngine::XR::XRMeshSubsystemDescriptor);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::XRMeshSubsystemDescriptor, "UnityEngine.XR", "XRMeshSubsystemDescriptor");
