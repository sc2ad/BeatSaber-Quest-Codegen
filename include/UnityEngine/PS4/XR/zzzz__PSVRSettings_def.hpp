#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
// Forward declare root types
namespace UnityEngine::PS4::XR {
class PSVRSettings;
}
// Type: UnityEngine.PS4.XR::PSVRSettings
namespace UnityEngine::PS4::XR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16083))
// CS Name: UnityEngine.PS4.XR.PSVRSettings
class CORDL_TYPE PSVRSettings : public UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PSVRSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "PSVRSettings", modifiers: " const&", def_value: None }]
constexpr PSVRSettings(PSVRSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PSVRSettings", modifiers: "&&", def_value: None }]
constexpr PSVRSettings(PSVRSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PSVRSettings(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr PSVRSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PSVRSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PSVRSettings& operator=(PSVRSettings&& o) noexcept = default;
  constexpr PSVRSettings& operator=(PSVRSettings const& o) noexcept = default;
                


// Methods

static UnityEngine::PS4::XR::PSVRSettings New_ctor() ;

/// @brief Method .ctor addr 0x2b077e8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::PS4::XR
NEED_NO_BOX(UnityEngine::PS4::XR::PSVRSettings);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PS4::XR::PSVRSettings, "UnityEngine.PS4.XR", "PSVRSettings");
