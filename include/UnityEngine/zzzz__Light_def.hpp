#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct LightShadows;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct LightType;
}
namespace UnityEngine {
struct LightBakingOutput;
}
// Forward declare root types
namespace UnityEngine {
class Light;
}
// Type: UnityEngine::Light
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10129))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10005))
// CS Name: UnityEngine.Light
class CORDL_TYPE Light : public UnityEngine::Behaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Light() = default;

// Ctor Parameters [CppParam { name: "", ty: "Light", modifiers: " const&", def_value: None }]
constexpr Light(Light const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Light", modifiers: "&&", def_value: None }]
constexpr Light(Light&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Light(void* ptr) noexcept : UnityEngine::Behaviour(ptr) {
}


  constexpr Light& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Light& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Light& operator=(Light&& o) noexcept = default;
  constexpr Light& operator=(Light const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_BakedIndex, put=__set_m_BakedIndex))  m_BakedIndex;

constexpr void __set_m_BakedIndex(int32_t value) ;

constexpr int32_t __get_m_BakedIndex() const;


// Properties

 UnityEngine::LightShadows __declspec(property(get=get_shadows))  shadows;

 float_t __declspec(property(get=get_cookieSize))  cookieSize;

 UnityEngine::Texture __declspec(property(get=get_cookie))  cookie;

 UnityEngine::LightType __declspec(property(get=get_type))  type;

 float_t __declspec(property(get=get_spotAngle))  spotAngle;

 UnityEngine::Color __declspec(property(get=get_color, put=set_color))  color;

 float_t __declspec(property(get=get_colorTemperature))  colorTemperature;

 bool __declspec(property(get=get_useColorTemperature))  useColorTemperature;

 float_t __declspec(property(get=get_intensity, put=set_intensity))  intensity;

 float_t __declspec(property(get=get_bounceIntensity))  bounceIntensity;

 float_t __declspec(property(get=get_range))  range;

 UnityEngine::LightBakingOutput __declspec(property(get=get_bakingOutput))  bakingOutput;


// Methods

/// @brief Method get_shadows addr 0x2b2cb04 size 0x3c virtual false final false
 UnityEngine::LightShadows get_shadows() ;

/// @brief Method get_cookieSize addr 0x2b2cb40 size 0x3c virtual false final false
 float_t get_cookieSize() ;

/// @brief Method get_cookie addr 0x2b2cb7c size 0x3c virtual false final false
 UnityEngine::Texture get_cookie() ;

/// @brief Method get_type addr 0x2b2cbb8 size 0x3c virtual false final false
 UnityEngine::LightType get_type() ;

/// @brief Method get_spotAngle addr 0x2b2cbf4 size 0x3c virtual false final false
 float_t get_spotAngle() ;

/// @brief Method get_color addr 0x2b2cc30 size 0x58 virtual false final false
 UnityEngine::Color get_color() ;

/// @brief Method set_color addr 0x2b2cccc size 0x54 virtual false final false
 void set_color(UnityEngine::Color value) ;

/// @brief Method get_colorTemperature addr 0x2b2cd64 size 0x3c virtual false final false
 float_t get_colorTemperature() ;

/// @brief Method get_useColorTemperature addr 0x2b2cda0 size 0x3c virtual false final false
 bool get_useColorTemperature() ;

/// @brief Method get_intensity addr 0x2b2cddc size 0x3c virtual false final false
 float_t get_intensity() ;

/// @brief Method set_intensity addr 0x2b2ce18 size 0x4c virtual false final false
 void set_intensity(float_t value) ;

/// @brief Method get_bounceIntensity addr 0x2b2ce64 size 0x3c virtual false final false
 float_t get_bounceIntensity() ;

/// @brief Method get_range addr 0x2b2cea0 size 0x3c virtual false final false
 float_t get_range() ;

/// @brief Method get_bakingOutput addr 0x2b2cedc size 0x68 virtual false final false
 UnityEngine::LightBakingOutput get_bakingOutput() ;

/// @brief Method get_color_Injected addr 0x2b2cc88 size 0x44 virtual false final false
 void get_color_Injected(ByRef<UnityEngine::Color> ret) ;

/// @brief Method set_color_Injected addr 0x2b2cd20 size 0x44 virtual false final false
 void set_color_Injected(ByRef<UnityEngine::Color> value) ;

/// @brief Method get_bakingOutput_Injected addr 0x2b2cf44 size 0x44 virtual false final false
 void get_bakingOutput_Injected(ByRef<UnityEngine::LightBakingOutput> ret) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::Light);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Light, "UnityEngine", "Light");
