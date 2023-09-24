#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class FlyingCar;
}
// Type: ::FlyingCar
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5086))
// CS Name: FlyingCar
class CORDL_TYPE FlyingCar : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~FlyingCar() = default;

// Ctor Parameters [CppParam { name: "", ty: "FlyingCar", modifiers: " const&", def_value: None }]
constexpr FlyingCar(FlyingCar const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FlyingCar", modifiers: "&&", def_value: None }]
constexpr FlyingCar(FlyingCar&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FlyingCar(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr FlyingCar& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FlyingCar& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FlyingCar& operator=(FlyingCar&& o) noexcept = default;
  constexpr FlyingCar& operator=(FlyingCar const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__startZ, put=__set__startZ))  _startZ;

constexpr void __set__startZ(float_t value) ;

constexpr float_t __get__startZ() const;

 float_t __declspec(property(get=__get__endZ, put=__set__endZ))  _endZ;

constexpr void __set__endZ(float_t value) ;

constexpr float_t __get__endZ() const;

 float_t __declspec(property(get=__get__speed, put=__set__speed))  _speed;

constexpr void __set__speed(float_t value) ;

constexpr float_t __get__speed() const;

 float_t __declspec(property(get=__get__progress, put=__set__progress))  _progress;

constexpr void __set__progress(float_t value) ;

constexpr float_t __get__progress() const;

 UnityEngine::Vector3 __declspec(property(get=__get__pos, put=__set__pos))  _pos;

constexpr void __set__pos(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__pos() const;


// Methods

/// @brief Method Start addr 0x22695a4 size 0x44 virtual false final false
 void Start() ;

/// @brief Method Update addr 0x226962c size 0x60 virtual false final false
 void Update() ;

/// @brief Method UpdatePos addr 0x22695e8 size 0x44 virtual false final false
 void UpdatePos() ;

static GlobalNamespace::FlyingCar New_ctor() ;

/// @brief Method .ctor addr 0x226968c size 0x1c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::FlyingCar);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FlyingCar, "", "FlyingCar");
