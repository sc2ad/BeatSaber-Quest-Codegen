#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::XR::OpenXR {
class Constants;
}
// Type: UnityEngine.XR.OpenXR::Constants
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14162))
// CS Name: UnityEngine.XR.OpenXR.Constants
class CORDL_TYPE Constants : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Constants() = default;

// Ctor Parameters [CppParam { name: "", ty: "Constants", modifiers: " const&", def_value: None }]
constexpr Constants(Constants const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Constants", modifiers: "&&", def_value: None }]
constexpr Constants(Constants&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Constants(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Constants& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Constants& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Constants& operator=(Constants&& o) noexcept = default;
  constexpr Constants& operator=(Constants const& o) noexcept = default;
                


// Fields

/// @brief Field k_SettingsKey offset 0
static constexpr ::ConstString  k_SettingsKey{u"com.unity.xr.openxr.settings4"};

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::XR::OpenXR::Constants);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::OpenXR::Constants, "UnityEngine.XR.OpenXR", "Constants");
