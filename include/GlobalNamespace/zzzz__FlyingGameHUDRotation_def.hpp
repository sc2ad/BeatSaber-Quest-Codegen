#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
class BeatLineManager;
}
namespace GlobalNamespace {
class EnvironmentSpawnRotation;
}
// Forward declare root types
namespace GlobalNamespace {
class FlyingGameHUDRotation;
}
// Type: ::FlyingGameHUDRotation
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5087))
// CS Name: FlyingGameHUDRotation
class CORDL_TYPE FlyingGameHUDRotation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~FlyingGameHUDRotation() = default;

// Ctor Parameters [CppParam { name: "", ty: "FlyingGameHUDRotation", modifiers: " const&", def_value: None }]
constexpr FlyingGameHUDRotation(FlyingGameHUDRotation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FlyingGameHUDRotation", modifiers: "&&", def_value: None }]
constexpr FlyingGameHUDRotation(FlyingGameHUDRotation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FlyingGameHUDRotation(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FlyingGameHUDRotation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FlyingGameHUDRotation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FlyingGameHUDRotation& operator=(FlyingGameHUDRotation&& o) noexcept = default;
  constexpr FlyingGameHUDRotation& operator=(FlyingGameHUDRotation const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__smooth, put=__set__smooth))  _smooth;

constexpr void __set__smooth(float_t value) ;

constexpr float_t __get__smooth() const;

 ::GlobalNamespace::BeatLineManager __declspec(property(get=__get__beatLineManager, put=__set__beatLineManager))  _beatLineManager;

constexpr void __set__beatLineManager(::GlobalNamespace::BeatLineManager value) ;

constexpr ::GlobalNamespace::BeatLineManager __get__beatLineManager() const;

 ::GlobalNamespace::EnvironmentSpawnRotation __declspec(property(get=__get__environmentSpawnRotation, put=__set__environmentSpawnRotation))  _environmentSpawnRotation;

constexpr void __set__environmentSpawnRotation(::GlobalNamespace::EnvironmentSpawnRotation value) ;

constexpr ::GlobalNamespace::EnvironmentSpawnRotation __get__environmentSpawnRotation() const;

 float_t __declspec(property(get=__get__prevYAngle, put=__set__prevYAngle))  _prevYAngle;

constexpr void __set__prevYAngle(float_t value) ;

constexpr float_t __get__prevYAngle() const;

 float_t __declspec(property(get=__get__yAngle, put=__set__yAngle))  _yAngle;

constexpr void __set__yAngle(float_t value) ;

constexpr float_t __get__yAngle() const;


// Methods

/// @brief Method Start addr 0x22696a8 size 0xdc virtual false final false
 void Start() ;

/// @brief Method FixedUpdate addr 0x2269784 size 0x178 virtual false final false
 void FixedUpdate() ;

/// @brief Method LateUpdate addr 0x22698fc size 0x88 virtual false final false
 void LateUpdate() ;

// Ctor Parameters []
explicit FlyingGameHUDRotation() ;

/// @brief Method .ctor addr 0x2269984 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::FlyingGameHUDRotation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FlyingGameHUDRotation, "", "FlyingGameHUDRotation");
