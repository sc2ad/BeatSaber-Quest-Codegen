#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Composites {
struct UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins;
}
namespace UnityEngine::InputSystem::Composites {
class AxisComposite;
}
// Type: ::WhichSideWins
namespace UnityEngine::InputSystem::Composites {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6796))
// CS Name: UnityEngine.InputSystem.Composites.AxisComposite::WhichSideWins
struct CORDL_TYPE UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins(int32_t value__) noexcept;


                    constexpr UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins(UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins const&) = default;
                    constexpr UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins(UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins&&) = default;
                    constexpr UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins& operator=(UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins& operator=(UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins_Unwrapped : int32_t {
__Neither = 0,
__Positive = 1,
__Negative = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Neither offset 0
static UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins const Neither;

/// @brief Field Positive offset 0
static UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins const Positive;

/// @brief Field Negative offset 0
static UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins const Negative;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Composites
// Type: UnityEngine.InputSystem.Composites::AxisComposite
namespace UnityEngine::InputSystem::Composites {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6273)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6273), inst: 374 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6797))
// CS Name: UnityEngine.InputSystem.Composites.AxisComposite
class CORDL_TYPE AxisComposite : public UnityEngine::InputSystem::InputBindingComposite_1<float_t> {
public:
// Declarations
using WhichSideWins = UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~AxisComposite() = default;

// Ctor Parameters [CppParam { name: "", ty: "AxisComposite", modifiers: " const&", def_value: None }]
constexpr AxisComposite(AxisComposite const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AxisComposite", modifiers: "&&", def_value: None }]
constexpr AxisComposite(AxisComposite&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AxisComposite(void* ptr) noexcept : UnityEngine::InputSystem::InputBindingComposite_1<float_t>(ptr) {
}


  constexpr AxisComposite& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AxisComposite& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AxisComposite& operator=(AxisComposite&& o) noexcept = default;
  constexpr AxisComposite& operator=(AxisComposite const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_negative, put=__set_negative))  negative;

constexpr void __set_negative(int32_t value) ;

constexpr int32_t __get_negative() const;

 int32_t __declspec(property(get=__get_positive, put=__set_positive))  positive;

constexpr void __set_positive(int32_t value) ;

constexpr int32_t __get_positive() const;

 float_t __declspec(property(get=__get_minValue, put=__set_minValue))  minValue;

constexpr void __set_minValue(float_t value) ;

constexpr float_t __get_minValue() const;

 float_t __declspec(property(get=__get_maxValue, put=__set_maxValue))  maxValue;

constexpr void __set_maxValue(float_t value) ;

constexpr float_t __get_maxValue() const;

 UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins __declspec(property(get=__get_whichSideWins, put=__set_whichSideWins))  whichSideWins;

constexpr void __set_whichSideWins(UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins value) ;

constexpr UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins __get_whichSideWins() const;


// Properties

 float_t __declspec(property(get=get_midPoint))  midPoint;


// Methods

/// @brief Method get_midPoint addr 0x28c814c size 0x14 virtual false final false
 float_t get_midPoint() ;

/// @brief Method ReadValue addr 0x28c8160 size 0x120 virtual true final false
 float_t ReadValue(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext> context) ;

/// @brief Method EvaluateMagnitude addr 0x28c8280 size 0x4c virtual true final false
 float_t EvaluateMagnitude(ByRef<UnityEngine::InputSystem::InputBindingCompositeContext> context) ;

// Ctor Parameters []
explicit AxisComposite() ;

/// @brief Method .ctor addr 0x28c82cc size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Composites
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Composites::UnityEngine__InputSystem__Composites__AxisComposite__WhichSideWins, "UnityEngine.InputSystem.Composites", "AxisComposite/WhichSideWins");
NEED_NO_BOX(UnityEngine::InputSystem::Composites::AxisComposite);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Composites::AxisComposite, "UnityEngine.InputSystem.Composites", "AxisComposite");
