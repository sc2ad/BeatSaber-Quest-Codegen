#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine {
class RenderSettings;
}
// Type: UnityEngine::RenderSettings
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10029))
// CS Name: UnityEngine.RenderSettings
class CORDL_TYPE RenderSettings : public UnityEngine::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RenderSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "RenderSettings", modifiers: " const&", def_value: None }]
constexpr RenderSettings(RenderSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RenderSettings", modifiers: "&&", def_value: None }]
constexpr RenderSettings(RenderSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RenderSettings(void* ptr) noexcept : UnityEngine::Object(ptr) {
}


  constexpr RenderSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RenderSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RenderSettings& operator=(RenderSettings&& o) noexcept = default;
  constexpr RenderSettings& operator=(RenderSettings const& o) noexcept = default;
                


// Properties

static UnityEngine::Color __declspec(property(get=get_fogColor, put=set_fogColor))  fogColor;


// Methods

/// @brief Method get_fogColor addr 0x2b406a0 size 0x48 virtual false final false
static UnityEngine::Color get_fogColor() ;

/// @brief Method set_fogColor addr 0x2b40724 size 0x44 virtual false final false
static void set_fogColor(UnityEngine::Color value) ;

/// @brief Method get_fogColor_Injected addr 0x2b406e8 size 0x3c virtual false final false
static void get_fogColor_Injected(ByRef<UnityEngine::Color> ret) ;

/// @brief Method set_fogColor_Injected addr 0x2b40768 size 0x3c virtual false final false
static void set_fogColor_Injected(ByRef<UnityEngine::Color> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::RenderSettings);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RenderSettings, "UnityEngine", "RenderSettings");
