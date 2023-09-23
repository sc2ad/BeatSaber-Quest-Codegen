#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Composites {
struct UnityEngine__InputSystem__Composites__Vector2Composite__Mode;
}
namespace UnityEngine::InputSystem::Composites {
class Vector2Composite;
}
// Type: ::Mode
namespace UnityEngine::InputSystem::Composites {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6802))
// CS Name: UnityEngine.InputSystem.Composites.Vector2Composite::Mode
struct CORDL_TYPE UnityEngine__InputSystem__Composites__Vector2Composite__Mode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Composites__Vector2Composite__Mode(int32_t value__) noexcept;


                    constexpr UnityEngine__InputSystem__Composites__Vector2Composite__Mode(UnityEngine__InputSystem__Composites__Vector2Composite__Mode const&) = default;
                    constexpr UnityEngine__InputSystem__Composites__Vector2Composite__Mode(UnityEngine__InputSystem__Composites__Vector2Composite__Mode&&) = default;
                    constexpr UnityEngine__InputSystem__Composites__Vector2Composite__Mode& operator=(UnityEngine__InputSystem__Composites__Vector2Composite__Mode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Composites__Vector2Composite__Mode& operator=(UnityEngine__InputSystem__Composites__Vector2Composite__Mode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Composites__Vector2Composite__Mode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__InputSystem__Composites__Vector2Composite__Mode_Unwrapped : int32_t {
__Analog = 2,
__DigitalNormalized = 0,
__Digital = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__InputSystem__Composites__Vector2Composite__Mode_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__InputSystem__Composites__Vector2Composite__Mode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Analog offset 0
static UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector2Composite__Mode const Analog;

/// @brief Field DigitalNormalized offset 0
static UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector2Composite__Mode const DigitalNormalized;

/// @brief Field Digital offset 0
static UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector2Composite__Mode const Digital;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Composites
// Type: UnityEngine.InputSystem.Composites::Vector2Composite
namespace UnityEngine::InputSystem::Composites {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6273), inst: 393 }), TypeDefinitionIndex(TypeDefinitionIndex(10184)), TypeDefinitionIndex(TypeDefinitionIndex(6273))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6803))
// CS Name: UnityEngine.InputSystem.Composites.Vector2Composite
class CORDL_TYPE Vector2Composite : public UnityEngine::InputSystem::InputBindingComposite_1<UnityEngine::Vector2> {
public:
// Declarations
using Mode = UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector2Composite__Mode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Vector2Composite() = default;

// Ctor Parameters [CppParam { name: "", ty: "Vector2Composite", modifiers: " const&", def_value: None }]
constexpr Vector2Composite(Vector2Composite const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Vector2Composite", modifiers: "&&", def_value: None }]
constexpr Vector2Composite(Vector2Composite&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Vector2Composite(void* ptr) noexcept : UnityEngine::InputSystem::InputBindingComposite_1<UnityEngine::Vector2>(ptr) {
}


  constexpr Vector2Composite& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Vector2Composite& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Vector2Composite& operator=(Vector2Composite&& o) noexcept = default;
  constexpr Vector2Composite& operator=(Vector2Composite const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_up, put=__set_up))  up;

constexpr void __set_up(int32_t value) ;

constexpr int32_t __get_up() const;

 int32_t __declspec(property(get=__get_down, put=__set_down))  down;

constexpr void __set_down(int32_t value) ;

constexpr int32_t __get_down() const;

 int32_t __declspec(property(get=__get_left, put=__set_left))  left;

constexpr void __set_left(int32_t value) ;

constexpr int32_t __get_left() const;

 int32_t __declspec(property(get=__get_right, put=__set_right))  right;

constexpr void __set_right(int32_t value) ;

constexpr int32_t __get_right() const;

 bool __declspec(property(get=__get_normalize, put=__set_normalize))  normalize;

constexpr void __set_normalize(bool value) ;

constexpr bool __get_normalize() const;

 UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector2Composite__Mode __declspec(property(get=__get_mode, put=__set_mode))  mode;

constexpr void __set_mode(UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector2Composite__Mode value) ;

constexpr UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector2Composite__Mode __get_mode() const;


// Methods

/// @brief Method ReadValue addr 0x28c9098 size 0x164 virtual true final false
 UnityEngine::Vector2 ReadValue(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext> context) ;

/// @brief Method EvaluateMagnitude addr 0x28c91fc size 0x70 virtual true final false
 float_t EvaluateMagnitude(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext> context) ;

// Ctor Parameters []
explicit Vector2Composite() ;

/// @brief Method .ctor addr 0x28c926c size 0x50 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Composites
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__Vector2Composite__Mode, "UnityEngine.InputSystem.Composites", "Vector2Composite/Mode");
NEED_NO_BOX(UnityEngine::InputSystem::Composites::Vector2Composite);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Composites::Vector2Composite, "UnityEngine.InputSystem.Composites", "Vector2Composite");
