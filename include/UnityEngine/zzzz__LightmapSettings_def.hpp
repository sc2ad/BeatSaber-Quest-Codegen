#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
// Forward declare root types
namespace UnityEngine {
class LightmapSettings;
}
// Type: UnityEngine::LightmapSettings
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10034))
// CS Name: UnityEngine.LightmapSettings
class CORDL_TYPE LightmapSettings : public UnityEngine::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~LightmapSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightmapSettings", modifiers: " const&", def_value: None }]
constexpr LightmapSettings(LightmapSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightmapSettings", modifiers: "&&", def_value: None }]
constexpr LightmapSettings(LightmapSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightmapSettings(void* ptr) noexcept : UnityEngine::Object(ptr) {
}


  constexpr LightmapSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightmapSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightmapSettings& operator=(LightmapSettings&& o) noexcept = default;
  constexpr LightmapSettings& operator=(LightmapSettings const& o) noexcept = default;
                

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::LightmapSettings);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::LightmapSettings, "UnityEngine", "LightmapSettings");
