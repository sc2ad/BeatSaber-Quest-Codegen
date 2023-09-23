#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
struct UnityEngine__InputSystem__Controls__AxisControl__Clamp;
}
namespace UnityEngine::InputSystem::Controls {
class AxisControl;
}
// Type: ::Clamp
namespace UnityEngine::InputSystem::Controls {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6710))
// CS Name: UnityEngine.InputSystem.Controls.AxisControl::Clamp
struct CORDL_TYPE UnityEngine__InputSystem__Controls__AxisControl__Clamp : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Controls__AxisControl__Clamp(int32_t value__) noexcept;


                    constexpr UnityEngine__InputSystem__Controls__AxisControl__Clamp(UnityEngine__InputSystem__Controls__AxisControl__Clamp const&) = default;
                    constexpr UnityEngine__InputSystem__Controls__AxisControl__Clamp(UnityEngine__InputSystem__Controls__AxisControl__Clamp&&) = default;
                    constexpr UnityEngine__InputSystem__Controls__AxisControl__Clamp& operator=(UnityEngine__InputSystem__Controls__AxisControl__Clamp const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Controls__AxisControl__Clamp& operator=(UnityEngine__InputSystem__Controls__AxisControl__Clamp&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Controls__AxisControl__Clamp(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__InputSystem__Controls__AxisControl__Clamp_Unwrapped : int32_t {
__None = 0,
__BeforeNormalize = 1,
__AfterNormalize = 2,
__ToConstantBeforeNormalize = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__InputSystem__Controls__AxisControl__Clamp_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__InputSystem__Controls__AxisControl__Clamp_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static UnityEngine::InputSystem::Controls::UnityEngine__InputSystem__Controls__AxisControl__Clamp const None;

/// @brief Field BeforeNormalize offset 0
static UnityEngine::InputSystem::Controls::UnityEngine__InputSystem__Controls__AxisControl__Clamp const BeforeNormalize;

/// @brief Field AfterNormalize offset 0
static UnityEngine::InputSystem::Controls::UnityEngine__InputSystem__Controls__AxisControl__Clamp const AfterNormalize;

/// @brief Field ToConstantBeforeNormalize offset 0
static UnityEngine::InputSystem::Controls::UnityEngine__InputSystem__Controls__AxisControl__Clamp const ToConstantBeforeNormalize;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Controls
// Type: UnityEngine.InputSystem.Controls::AxisControl
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6299)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6299), inst: 374 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6711))
// CS Name: UnityEngine.InputSystem.Controls.AxisControl
class CORDL_TYPE AxisControl : public UnityEngine::InputSystem::InputControl_1<float_t> {
public:
// Declarations
using Clamp = UnityEngine::InputSystem::Controls::UnityEngine__InputSystem__Controls__AxisControl__Clamp;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x118};

virtual ~AxisControl() = default;

// Ctor Parameters [CppParam { name: "", ty: "AxisControl", modifiers: " const&", def_value: None }]
constexpr AxisControl(AxisControl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AxisControl", modifiers: "&&", def_value: None }]
constexpr AxisControl(AxisControl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AxisControl(void* ptr) noexcept : UnityEngine::InputSystem::InputControl_1<float_t>(ptr) {
}


  constexpr AxisControl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AxisControl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AxisControl& operator=(AxisControl&& o) noexcept = default;
  constexpr AxisControl& operator=(AxisControl const& o) noexcept = default;
                


// Fields

 UnityEngine::InputSystem::Controls::UnityEngine__InputSystem__Controls__AxisControl__Clamp __declspec(property(get=__get_clamp, put=__set_clamp))  clamp;

constexpr void __set_clamp(UnityEngine::InputSystem::Controls::UnityEngine__InputSystem__Controls__AxisControl__Clamp value) ;

constexpr UnityEngine::InputSystem::Controls::UnityEngine__InputSystem__Controls__AxisControl__Clamp __get_clamp() const;

 float_t __declspec(property(get=__get_clampMin, put=__set_clampMin))  clampMin;

constexpr void __set_clampMin(float_t value) ;

constexpr float_t __get_clampMin() const;

 float_t __declspec(property(get=__get_clampMax, put=__set_clampMax))  clampMax;

constexpr void __set_clampMax(float_t value) ;

constexpr float_t __get_clampMax() const;

 float_t __declspec(property(get=__get_clampConstant, put=__set_clampConstant))  clampConstant;

constexpr void __set_clampConstant(float_t value) ;

constexpr float_t __get_clampConstant() const;

 bool __declspec(property(get=__get_invert, put=__set_invert))  invert;

constexpr void __set_invert(bool value) ;

constexpr bool __get_invert() const;

 bool __declspec(property(get=__get_normalize, put=__set_normalize))  normalize;

constexpr void __set_normalize(bool value) ;

constexpr bool __get_normalize() const;

 float_t __declspec(property(get=__get_normalizeMin, put=__set_normalizeMin))  normalizeMin;

constexpr void __set_normalizeMin(float_t value) ;

constexpr float_t __get_normalizeMin() const;

 float_t __declspec(property(get=__get_normalizeMax, put=__set_normalizeMax))  normalizeMax;

constexpr void __set_normalizeMax(float_t value) ;

constexpr float_t __get_normalizeMax() const;

 float_t __declspec(property(get=__get_normalizeZero, put=__set_normalizeZero))  normalizeZero;

constexpr void __set_normalizeZero(float_t value) ;

constexpr float_t __get_normalizeZero() const;

 bool __declspec(property(get=__get_scale, put=__set_scale))  scale;

constexpr void __set_scale(bool value) ;

constexpr bool __get_scale() const;

 float_t __declspec(property(get=__get_scaleFactor, put=__set_scaleFactor))  scaleFactor;

constexpr void __set_scaleFactor(float_t value) ;

constexpr float_t __get_scaleFactor() const;


// Methods

/// @brief Method Preprocess addr 0x2977138 size 0xd4 virtual false final false
 float_t Preprocess(float_t value) ;

/// @brief Method Unpreprocess addr 0x297720c size 0x4c virtual false final false
 float_t Unpreprocess(float_t value) ;

// Ctor Parameters []
explicit AxisControl() ;

/// @brief Method .ctor addr 0x2977258 size 0x88 virtual false final false
 void _ctor() ;

/// @brief Method FinishSetup addr 0x29772e0 size 0xa4 virtual true final false
 void FinishSetup() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x2977384 size 0x34 virtual true final false
 float_t ReadUnprocessedValueFromState(void* statePtr) ;

/// @brief Method WriteValueIntoState addr 0x29773b8 size 0x40 virtual true final false
 void WriteValueIntoState(float_t value, void* statePtr) ;

/// @brief Method CompareValue addr 0x29773f8 size 0xec virtual true final false
 bool CompareValue(void* firstStatePtr, void* secondStatePtr) ;

/// @brief Method EvaluateMagnitude addr 0x29774e4 size 0xe8 virtual true final false
 float_t EvaluateMagnitude(void* statePtr) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Controls
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Controls::UnityEngine__InputSystem__Controls__AxisControl__Clamp, "UnityEngine.InputSystem.Controls", "AxisControl/Clamp");
NEED_NO_BOX(UnityEngine::InputSystem::Controls::AxisControl);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Controls::AxisControl, "UnityEngine.InputSystem.Controls", "AxisControl");
