#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
struct Vector4;
}
namespace Unity::XR::Oculus {
struct SystemHeadset;
}
// Forward declare root types
namespace Unity::XR::Oculus {
class Utils;
}
// Type: Unity.XR.Oculus::Utils
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15214))
// CS Name: Unity.XR.Oculus.Utils
class CORDL_TYPE Utils : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Utils() = default;

// Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: " const&", def_value: None }]
constexpr Utils(Utils const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Utils", modifiers: "&&", def_value: None }]
constexpr Utils(Utils&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Utils(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Utils& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Utils& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Utils& operator=(Utils&& o) noexcept = default;
  constexpr Utils& operator=(Utils const& o) noexcept = default;
                


// Methods

/// @brief Method SetColorScaleAndOffset addr 0x2ade738 size 0x40 virtual false final false
static void SetColorScaleAndOffset(::UnityEngine::Vector4 colorScale, ::UnityEngine::Vector4 colorOffset) ;

/// @brief Method GetSystemHeadsetType addr 0x2ade780 size 0x4 virtual false final false
static ::Unity::XR::Oculus::SystemHeadset GetSystemHeadsetType() ;

/// @brief Method SetFoveationLevel addr 0x2ade788 size 0x8c virtual false final false
static bool SetFoveationLevel(int32_t level) ;

/// @brief Method EnableDynamicFFR addr 0x2ade81c size 0x8c virtual false final false
static bool EnableDynamicFFR(bool enable) ;

/// @brief Method GetFoveationLevel addr 0x2ade8b0 size 0x78 virtual false final false
static int32_t GetFoveationLevel() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::Oculus
} // end anonymous namespace
NEED_NO_BOX(::Unity::XR::Oculus::Utils);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::Utils, "Unity.XR.Oculus", "Utils");
