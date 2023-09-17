#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace UnityEngine::Rendering {
struct CameraEvent;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class CameraEventUtils;
}
// Type: UnityEngine.Rendering::CameraEventUtils
namespace UnityEngine::Rendering {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10274))
// CS Name: UnityEngine.Rendering.CameraEventUtils
class CORDL_TYPE CameraEventUtils : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CameraEventUtils() = default;

// Ctor Parameters [CppParam { name: "", ty: "CameraEventUtils", modifiers: " const&", def_value: None }]
constexpr CameraEventUtils(CameraEventUtils const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CameraEventUtils", modifiers: "&&", def_value: None }]
constexpr CameraEventUtils(CameraEventUtils&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CameraEventUtils(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CameraEventUtils& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CameraEventUtils& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CameraEventUtils& operator=(CameraEventUtils&& o) noexcept = default;
  constexpr CameraEventUtils& operator=(CameraEventUtils const& o) noexcept = default;
                


// Methods

/// @brief Method IsValid addr 0x2b73a48 size 0xc virtual false final false
static bool IsValid(::UnityEngine::Rendering::CameraEvent value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::Rendering::CameraEventUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CameraEventUtils, "UnityEngine.Rendering", "CameraEventUtils");
