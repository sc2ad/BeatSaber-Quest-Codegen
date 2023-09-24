#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class LightWithIdManager;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentLightSimpleController;
}
// Type: ::EnvironmentLightSimpleController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4979))
// CS Name: EnvironmentLightSimpleController
class CORDL_TYPE EnvironmentLightSimpleController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~EnvironmentLightSimpleController() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentLightSimpleController", modifiers: " const&", def_value: None }]
constexpr EnvironmentLightSimpleController(EnvironmentLightSimpleController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentLightSimpleController", modifiers: "&&", def_value: None }]
constexpr EnvironmentLightSimpleController(EnvironmentLightSimpleController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnvironmentLightSimpleController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr EnvironmentLightSimpleController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnvironmentLightSimpleController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnvironmentLightSimpleController& operator=(EnvironmentLightSimpleController&& o) noexcept = default;
  constexpr EnvironmentLightSimpleController& operator=(EnvironmentLightSimpleController const& o) noexcept = default;
                


// Fields

 UnityEngine::Color __declspec(property(get=__get__color, put=__set__color))  _color;

constexpr void __set__color(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__color() const;

 int32_t __declspec(property(get=__get__colorId, put=__set__colorId))  _colorId;

constexpr void __set__colorId(int32_t value) ;

constexpr int32_t __get__colorId() const;

 GlobalNamespace::LightWithIdManager __declspec(property(get=__get__lightManager, put=__set__lightManager))  _lightManager;

constexpr void __set__lightManager(GlobalNamespace::LightWithIdManager value) ;

constexpr GlobalNamespace::LightWithIdManager __get__lightManager() const;


// Methods

/// @brief Method LateUpdate addr 0x22520c0 size 0x2c virtual false final false
 void LateUpdate() ;

static GlobalNamespace::EnvironmentLightSimpleController New_ctor() ;

/// @brief Method .ctor addr 0x22520ec size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::EnvironmentLightSimpleController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentLightSimpleController, "", "EnvironmentLightSimpleController");
