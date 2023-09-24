#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__XRHMD_def.hpp"
// Forward declare root types
namespace Unity::XR::GoogleVr {
class DaydreamHMD;
}
// Type: Unity.XR.GoogleVr::DaydreamHMD
namespace Unity::XR::GoogleVr {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6407))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6205))
// CS Name: Unity.XR.GoogleVr.DaydreamHMD
class CORDL_TYPE DaydreamHMD : public UnityEngine::InputSystem::XR::XRHMD {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x1a8};

virtual ~DaydreamHMD() = default;

// Ctor Parameters [CppParam { name: "", ty: "DaydreamHMD", modifiers: " const&", def_value: None }]
constexpr DaydreamHMD(DaydreamHMD const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DaydreamHMD", modifiers: "&&", def_value: None }]
constexpr DaydreamHMD(DaydreamHMD&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DaydreamHMD(void* ptr) noexcept : UnityEngine::InputSystem::XR::XRHMD(ptr) {
}


  constexpr DaydreamHMD& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DaydreamHMD& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DaydreamHMD& operator=(DaydreamHMD&& o) noexcept = default;
  constexpr DaydreamHMD& operator=(DaydreamHMD const& o) noexcept = default;
                


// Methods

static Unity::XR::GoogleVr::DaydreamHMD New_ctor() ;

/// @brief Method .ctor addr 0x28a31c8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::GoogleVr
NEED_NO_BOX(Unity::XR::GoogleVr::DaydreamHMD);
DEFINE_IL2CPP_ARG_TYPE(Unity::XR::GoogleVr::DaydreamHMD, "Unity.XR.GoogleVr", "DaydreamHMD");
