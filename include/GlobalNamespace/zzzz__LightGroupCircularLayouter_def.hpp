#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__LightGroupSubsystem_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__LightGroupCircularLayouter__RotationDirection;
}
namespace GlobalNamespace {
class LightGroupCircularLayouter;
}
// Type: ::RotationDirection
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5027))
// CS Name: LightGroupCircularLayouter::RotationDirection
struct CORDL_TYPE GlobalNamespace__LightGroupCircularLayouter__RotationDirection : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__LightGroupCircularLayouter__RotationDirection(int32_t value__) noexcept;


                    constexpr GlobalNamespace__LightGroupCircularLayouter__RotationDirection(GlobalNamespace__LightGroupCircularLayouter__RotationDirection const&) = default;
                    constexpr GlobalNamespace__LightGroupCircularLayouter__RotationDirection(GlobalNamespace__LightGroupCircularLayouter__RotationDirection&&) = default;
                    constexpr GlobalNamespace__LightGroupCircularLayouter__RotationDirection& operator=(GlobalNamespace__LightGroupCircularLayouter__RotationDirection const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__LightGroupCircularLayouter__RotationDirection& operator=(GlobalNamespace__LightGroupCircularLayouter__RotationDirection&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__LightGroupCircularLayouter__RotationDirection(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__LightGroupCircularLayouter__RotationDirection_Unwrapped : int32_t {
__Clockwise = 0,
__Counterclockwise = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__LightGroupCircularLayouter__RotationDirection_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__LightGroupCircularLayouter__RotationDirection_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Clockwise offset 0
static GlobalNamespace::GlobalNamespace__LightGroupCircularLayouter__RotationDirection const Clockwise;

/// @brief Field Counterclockwise offset 0
static GlobalNamespace::GlobalNamespace__LightGroupCircularLayouter__RotationDirection const Counterclockwise;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LightGroupCircularLayouter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5035))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5028))
// CS Name: LightGroupCircularLayouter
class CORDL_TYPE LightGroupCircularLayouter : public GlobalNamespace::LightGroupSubsystem {
public:
// Declarations
using RotationDirection = GlobalNamespace::GlobalNamespace__LightGroupCircularLayouter__RotationDirection;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~LightGroupCircularLayouter() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupCircularLayouter", modifiers: " const&", def_value: None }]
constexpr LightGroupCircularLayouter(LightGroupCircularLayouter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightGroupCircularLayouter", modifiers: "&&", def_value: None }]
constexpr LightGroupCircularLayouter(LightGroupCircularLayouter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightGroupCircularLayouter(void* ptr) noexcept : GlobalNamespace::LightGroupSubsystem(ptr) {
}


  constexpr LightGroupCircularLayouter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightGroupCircularLayouter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightGroupCircularLayouter& operator=(LightGroupCircularLayouter&& o) noexcept = default;
  constexpr LightGroupCircularLayouter& operator=(LightGroupCircularLayouter const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__radius, put=__set__radius))  _radius;

constexpr void __set__radius(float_t value) ;

constexpr float_t __get__radius() const;

 float_t __declspec(property(get=__get__angle, put=__set__angle))  _angle;

constexpr void __set__angle(float_t value) ;

constexpr float_t __get__angle() const;

 float_t __declspec(property(get=__get__startingAngle, put=__set__startingAngle))  _startingAngle;

constexpr void __set__startingAngle(float_t value) ;

constexpr float_t __get__startingAngle() const;

 GlobalNamespace::GlobalNamespace__LightGroupCircularLayouter__RotationDirection __declspec(property(get=__get__rotationDirection, put=__set__rotationDirection))  _rotationDirection;

constexpr void __set__rotationDirection(GlobalNamespace::GlobalNamespace__LightGroupCircularLayouter__RotationDirection value) ;

constexpr GlobalNamespace::GlobalNamespace__LightGroupCircularLayouter__RotationDirection __get__rotationDirection() const;

 bool __declspec(property(get=__get__staticRotation, put=__set__staticRotation))  _staticRotation;

constexpr void __set__staticRotation(bool value) ;

constexpr bool __get__staticRotation() const;

 UnityEngine::Vector3 __declspec(property(get=__get__additionalAngle, put=__set__additionalAngle))  _additionalAngle;

constexpr void __set__additionalAngle(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__additionalAngle() const;


// Methods

// Ctor Parameters []
explicit LightGroupCircularLayouter() ;

/// @brief Method .ctor addr 0x225e5a0 size 0x68 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__LightGroupCircularLayouter__RotationDirection, "", "LightGroupCircularLayouter/RotationDirection");
NEED_NO_BOX(GlobalNamespace::LightGroupCircularLayouter);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LightGroupCircularLayouter, "", "LightGroupCircularLayouter");
