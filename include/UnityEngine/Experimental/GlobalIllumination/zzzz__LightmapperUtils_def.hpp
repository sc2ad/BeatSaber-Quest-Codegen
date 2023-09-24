#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
namespace UnityEngine::Experimental::GlobalIllumination {
struct LightMode;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct Cookie;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct LinearColor;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct DiscLight;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct PointLight;
}
namespace UnityEngine {
struct LightmapBakeType;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct RectangleLight;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct DirectionalLight;
}
namespace UnityEngine::Experimental::GlobalIllumination {
struct SpotLight;
}
namespace UnityEngine {
class Light;
}
// Forward declare root types
namespace UnityEngine::Experimental::GlobalIllumination {
class LightmapperUtils;
}
// Type: UnityEngine.Experimental.GlobalIllumination::LightmapperUtils
namespace UnityEngine::Experimental::GlobalIllumination {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10334))
// CS Name: UnityEngine.Experimental.GlobalIllumination.LightmapperUtils
class CORDL_TYPE LightmapperUtils : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~LightmapperUtils() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightmapperUtils", modifiers: " const&", def_value: None }]
constexpr LightmapperUtils(LightmapperUtils const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightmapperUtils", modifiers: "&&", def_value: None }]
constexpr LightmapperUtils(LightmapperUtils&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightmapperUtils(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LightmapperUtils& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightmapperUtils& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightmapperUtils& operator=(LightmapperUtils&& o) noexcept = default;
  constexpr LightmapperUtils& operator=(LightmapperUtils const& o) noexcept = default;
                


// Methods

/// @brief Method Extract addr 0x2b79530 size 0x20 virtual false final false
static UnityEngine::Experimental::GlobalIllumination::LightMode Extract(UnityEngine::LightmapBakeType baketype) ;

/// @brief Method ExtractIndirect addr 0x2b79550 size 0x7c virtual false final false
static UnityEngine::Experimental::GlobalIllumination::LinearColor ExtractIndirect(UnityEngine::Light l) ;

/// @brief Method ExtractInnerCone addr 0x2b795cc size 0x54 virtual false final false
static float_t ExtractInnerCone(UnityEngine::Light l) ;

/// @brief Method ExtractColorTemperature addr 0x2b79620 size 0x74 virtual false final false
static UnityEngine::Color ExtractColorTemperature(UnityEngine::Light l) ;

/// @brief Method ApplyColorTemperature addr 0x2b79694 size 0x78 virtual false final false
static void ApplyColorTemperature(UnityEngine::Color cct, ByRef<UnityEngine::Experimental::GlobalIllumination::LinearColor> lightColor) ;

/// @brief Method Extract addr 0x2b7970c size 0x19c virtual false final false
static void Extract(UnityEngine::Light l, ByRef<UnityEngine::Experimental::GlobalIllumination::DirectionalLight> dir) ;

/// @brief Method Extract addr 0x2b798a8 size 0x1b4 virtual false final false
static void Extract(UnityEngine::Light l, ByRef<UnityEngine::Experimental::GlobalIllumination::PointLight> point) ;

/// @brief Method Extract addr 0x2b79a5c size 0x1dc virtual false final false
static void Extract(UnityEngine::Light l, ByRef<UnityEngine::Experimental::GlobalIllumination::SpotLight> spot) ;

/// @brief Method Extract addr 0x2b79c38 size 0x1b4 virtual false final false
static void Extract(UnityEngine::Light l, ByRef<UnityEngine::Experimental::GlobalIllumination::RectangleLight> rect) ;

/// @brief Method Extract addr 0x2b79dec size 0x1b4 virtual false final false
static void Extract(UnityEngine::Light l, ByRef<UnityEngine::Experimental::GlobalIllumination::DiscLight> disc) ;

/// @brief Method Extract addr 0x2b79fa0 size 0x144 virtual false final false
static void Extract(UnityEngine::Light l, ByRef<UnityEngine::Experimental::GlobalIllumination::Cookie> cookie) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Experimental::GlobalIllumination
NEED_NO_BOX(UnityEngine::Experimental::GlobalIllumination::LightmapperUtils);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Experimental::GlobalIllumination::LightmapperUtils, "UnityEngine.Experimental.GlobalIllumination", "LightmapperUtils");
