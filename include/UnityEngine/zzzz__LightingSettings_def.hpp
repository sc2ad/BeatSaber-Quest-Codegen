#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine {
class LightingSettings;
}
// Type: UnityEngine::LightingSettings
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10100))
// CS Name: UnityEngine.LightingSettings
class CORDL_TYPE LightingSettings : public ::UnityEngine::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~LightingSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightingSettings", modifiers: " const&", def_value: None }]
constexpr LightingSettings(LightingSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightingSettings", modifiers: "&&", def_value: None }]
constexpr LightingSettings(LightingSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightingSettings(void* ptr) noexcept : ::UnityEngine::Object(ptr) {
}


  constexpr LightingSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightingSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightingSettings& operator=(LightingSettings&& o) noexcept = default;
  constexpr LightingSettings& operator=(LightingSettings const& o) noexcept = default;
                


// Methods

/// @brief Method LightingSettingsDontStripMe addr 0x2b5143c size 0x4 virtual false final false
 void LightingSettingsDontStripMe() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::LightingSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LightingSettings, "UnityEngine", "LightingSettings");
