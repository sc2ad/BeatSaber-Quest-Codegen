#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__TrackedDevice_def.hpp"
// Forward declare root types
namespace Unity::XR::OpenVR {
class ViveLighthouse;
}
// Type: Unity.XR.OpenVR::ViveLighthouse
namespace Unity::XR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6372))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6201))
// CS Name: Unity.XR.OpenVR.ViveLighthouse
class CORDL_TYPE ViveLighthouse : public UnityEngine::InputSystem::TrackedDevice {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x178};

virtual ~ViveLighthouse() = default;

// Ctor Parameters [CppParam { name: "", ty: "ViveLighthouse", modifiers: " const&", def_value: None }]
constexpr ViveLighthouse(ViveLighthouse const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ViveLighthouse", modifiers: "&&", def_value: None }]
constexpr ViveLighthouse(ViveLighthouse&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ViveLighthouse(void* ptr) noexcept : UnityEngine::InputSystem::TrackedDevice(ptr) {
}


  constexpr ViveLighthouse& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ViveLighthouse& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ViveLighthouse& operator=(ViveLighthouse&& o) noexcept = default;
  constexpr ViveLighthouse& operator=(ViveLighthouse const& o) noexcept = default;
                


// Methods

static Unity::XR::OpenVR::ViveLighthouse New_ctor() ;

/// @brief Method .ctor addr 0x28a2c4c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::OpenVR
NEED_NO_BOX(Unity::XR::OpenVR::ViveLighthouse);
DEFINE_IL2CPP_ARG_TYPE(Unity::XR::OpenVR::ViveLighthouse, "Unity.XR.OpenVR", "ViveLighthouse");
