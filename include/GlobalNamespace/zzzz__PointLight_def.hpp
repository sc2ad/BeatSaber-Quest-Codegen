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
class PointLight;
}
// Type: ::PointLight
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14659))
// CS Name: PointLight
class CORDL_TYPE PointLight : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~PointLight() = default;

// Ctor Parameters [CppParam { name: "", ty: "PointLight", modifiers: " const&", def_value: None }]
constexpr PointLight(PointLight const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PointLight", modifiers: "&&", def_value: None }]
constexpr PointLight(PointLight&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PointLight(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr PointLight& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PointLight& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PointLight& operator=(PointLight&& o) noexcept = default;
  constexpr PointLight& operator=(PointLight const& o) noexcept = default;
                


// Fields

/// @brief Field kMaxLights offset 0
static constexpr int32_t  kMaxLights{1};

 UnityEngine::Color __declspec(property(get=__get_color, put=__set_color))  color;

constexpr void __set_color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_color() const;

 float_t __declspec(property(get=__get_intensity, put=__set_intensity))  intensity;

constexpr void __set_intensity(float_t value) ;

constexpr float_t __get_intensity() const;

static System::Collections::Generic::List_1<GlobalNamespace::PointLight> __declspec(property(get=__get__lights, put=__set__lights))  _lights;

static void __set__lights(System::Collections::Generic::List_1<GlobalNamespace::PointLight> value) ;

static System::Collections::Generic::List_1<GlobalNamespace::PointLight> __get__lights() ;


// Properties

static System::Collections::Generic::List_1<GlobalNamespace::PointLight> __declspec(property(get=get_lights))  lights;


// Methods

/// @brief Method get_lights addr 0x1f99b58 size 0x58 virtual false final false
static System::Collections::Generic::List_1<GlobalNamespace::PointLight> get_lights() ;

/// @brief Method OnEnable addr 0x1f99bb0 size 0xd0 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x1f99c80 size 0x80 virtual false final false
 void OnDisable() ;

// Ctor Parameters []
explicit PointLight() ;

/// @brief Method .ctor addr 0x1f99d00 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PointLight);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PointLight, "", "PointLight");
