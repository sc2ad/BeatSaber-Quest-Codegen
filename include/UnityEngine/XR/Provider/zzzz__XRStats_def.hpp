#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class IntegratedSubsystem;
}
// Forward declare root types
namespace UnityEngine::XR::Provider {
class XRStats;
}
// Type: UnityEngine.XR.Provider::XRStats
namespace UnityEngine::XR::Provider {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15595))
// CS Name: UnityEngine.XR.Provider.XRStats
class CORDL_TYPE XRStats : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~XRStats() = default;

// Ctor Parameters [CppParam { name: "", ty: "XRStats", modifiers: " const&", def_value: None }]
constexpr XRStats(XRStats const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XRStats", modifiers: "&&", def_value: None }]
constexpr XRStats(XRStats&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XRStats(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XRStats& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XRStats& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XRStats& operator=(XRStats&& o) noexcept = default;
  constexpr XRStats& operator=(XRStats const& o) noexcept = default;
                


// Methods

/// @brief Method TryGetStat addr 0x2d3abcc size 0x5c virtual false final false
static bool TryGetStat(UnityEngine::IntegratedSubsystem xrSubsystem, ::StringW tag, ByRef<float_t> value) ;

/// @brief Method TryGetStat_Internal addr 0x2d3ac28 size 0x54 virtual false final false
static bool TryGetStat_Internal(::cordl_internals::intptr_t ptr, ::StringW tag, ByRef<float_t> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Provider
NEED_NO_BOX(UnityEngine::XR::Provider::XRStats);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::Provider::XRStats, "UnityEngine.XR.Provider", "XRStats");
