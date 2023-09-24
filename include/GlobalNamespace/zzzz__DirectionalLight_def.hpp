#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Color;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class DirectionalLight;
}
// Type: ::DirectionalLight
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14657))
// CS Name: DirectionalLight
class CORDL_TYPE DirectionalLight : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~DirectionalLight() = default;

// Ctor Parameters [CppParam { name: "", ty: "DirectionalLight", modifiers: " const&", def_value: None }]
constexpr DirectionalLight(DirectionalLight const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DirectionalLight", modifiers: "&&", def_value: None }]
constexpr DirectionalLight(DirectionalLight&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DirectionalLight(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr DirectionalLight& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DirectionalLight& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DirectionalLight& operator=(DirectionalLight&& o) noexcept = default;
  constexpr DirectionalLight& operator=(DirectionalLight const& o) noexcept = default;
                


// Fields

/// @brief Field kMaxLights offset 0
static constexpr int32_t  kMaxLights{5};

 UnityEngine::Color __declspec(property(get=__get_color, put=__set_color))  color;

constexpr void __set_color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_color() const;

 float_t __declspec(property(get=__get_intensity, put=__set_intensity))  intensity;

constexpr void __set_intensity(float_t value) ;

constexpr float_t __get_intensity() const;

 float_t __declspec(property(get=__get_radius, put=__set_radius))  radius;

constexpr void __set_radius(float_t value) ;

constexpr float_t __get_radius() const;

static System::Collections::Generic::List_1<GlobalNamespace::DirectionalLight> __declspec(property(get=__get__lights, put=__set__lights))  _lights;

static void __set__lights(System::Collections::Generic::List_1<GlobalNamespace::DirectionalLight> value) ;

static System::Collections::Generic::List_1<GlobalNamespace::DirectionalLight> __get__lights() ;

static GlobalNamespace::DirectionalLight __declspec(property(get=__get__mainLight, put=__set__mainLight))  _mainLight;

static void __set__mainLight(GlobalNamespace::DirectionalLight value) ;

static GlobalNamespace::DirectionalLight __get__mainLight() ;


// Properties

static System::Collections::Generic::List_1<GlobalNamespace::DirectionalLight> __declspec(property(get=get_lights))  lights;


// Methods

/// @brief Method get_lights addr 0x1f98ec8 size 0x58 virtual false final false
static System::Collections::Generic::List_1<GlobalNamespace::DirectionalLight> get_lights() ;

/// @brief Method OnEnable addr 0x1f98f20 size 0xd0 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x1f98ff0 size 0x80 virtual false final false
 void OnDisable() ;

static GlobalNamespace::DirectionalLight New_ctor() ;

/// @brief Method .ctor addr 0x1f99070 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::DirectionalLight);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DirectionalLight, "", "DirectionalLight");
