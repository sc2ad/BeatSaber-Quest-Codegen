#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::InputSystem::Controls {
struct UnityEngine__InputSystem__Controls__DiscreteButtonControl__WriteMode;
}
namespace UnityEngine::InputSystem::Controls {
class DiscreteButtonControl;
}
// Type: ::WriteMode
namespace UnityEngine::InputSystem::Controls {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6714))
// CS Name: UnityEngine.InputSystem.Controls.DiscreteButtonControl::WriteMode
struct CORDL_TYPE UnityEngine__InputSystem__Controls__DiscreteButtonControl__WriteMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Controls__DiscreteButtonControl__WriteMode(int32_t value__) noexcept;


                    constexpr UnityEngine__InputSystem__Controls__DiscreteButtonControl__WriteMode(UnityEngine__InputSystem__Controls__DiscreteButtonControl__WriteMode const&) = default;
                    constexpr UnityEngine__InputSystem__Controls__DiscreteButtonControl__WriteMode(UnityEngine__InputSystem__Controls__DiscreteButtonControl__WriteMode&&) = default;
                    constexpr UnityEngine__InputSystem__Controls__DiscreteButtonControl__WriteMode& operator=(UnityEngine__InputSystem__Controls__DiscreteButtonControl__WriteMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Controls__DiscreteButtonControl__WriteMode& operator=(UnityEngine__InputSystem__Controls__DiscreteButtonControl__WriteMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Controls__DiscreteButtonControl__WriteMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__InputSystem__Controls__DiscreteButtonControl__WriteMode_Unwrapped : int32_t {
__WriteDisabled = 0,
__WriteNullAndMaxValue = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__InputSystem__Controls__DiscreteButtonControl__WriteMode_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__InputSystem__Controls__DiscreteButtonControl__WriteMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field WriteDisabled offset 0
static UnityEngine::InputSystem::Controls::UnityEngine__InputSystem__Controls__DiscreteButtonControl__WriteMode const WriteDisabled;

/// @brief Field WriteNullAndMaxValue offset 0
static UnityEngine::InputSystem::Controls::UnityEngine__InputSystem__Controls__DiscreteButtonControl__WriteMode const WriteNullAndMaxValue;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Controls
// Type: UnityEngine.InputSystem.Controls::DiscreteButtonControl
namespace UnityEngine::InputSystem::Controls {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6712))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6715))
// CS Name: UnityEngine.InputSystem.Controls.DiscreteButtonControl
class CORDL_TYPE DiscreteButtonControl : public UnityEngine::InputSystem::Controls::ButtonControl {
public:
// Declarations
using WriteMode = UnityEngine::InputSystem::Controls::UnityEngine__InputSystem__Controls__DiscreteButtonControl__WriteMode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x130};

virtual ~DiscreteButtonControl() = default;

// Ctor Parameters [CppParam { name: "", ty: "DiscreteButtonControl", modifiers: " const&", def_value: None }]
constexpr DiscreteButtonControl(DiscreteButtonControl const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DiscreteButtonControl", modifiers: "&&", def_value: None }]
constexpr DiscreteButtonControl(DiscreteButtonControl&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DiscreteButtonControl(void* ptr) noexcept : UnityEngine::InputSystem::Controls::ButtonControl(ptr) {
}


  constexpr DiscreteButtonControl& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DiscreteButtonControl& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DiscreteButtonControl& operator=(DiscreteButtonControl&& o) noexcept = default;
  constexpr DiscreteButtonControl& operator=(DiscreteButtonControl const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_minValue, put=__set_minValue))  minValue;

constexpr void __set_minValue(int32_t value) ;

constexpr int32_t __get_minValue() const;

 int32_t __declspec(property(get=__get_maxValue, put=__set_maxValue))  maxValue;

constexpr void __set_maxValue(int32_t value) ;

constexpr int32_t __get_maxValue() const;

 int32_t __declspec(property(get=__get_wrapAtValue, put=__set_wrapAtValue))  wrapAtValue;

constexpr void __set_wrapAtValue(int32_t value) ;

constexpr int32_t __get_wrapAtValue() const;

 int32_t __declspec(property(get=__get_nullValue, put=__set_nullValue))  nullValue;

constexpr void __set_nullValue(int32_t value) ;

constexpr int32_t __get_nullValue() const;

 UnityEngine::InputSystem::Controls::UnityEngine__InputSystem__Controls__DiscreteButtonControl__WriteMode __declspec(property(get=__get_writeMode, put=__set_writeMode))  writeMode;

constexpr void __set_writeMode(UnityEngine::InputSystem::Controls::UnityEngine__InputSystem__Controls__DiscreteButtonControl__WriteMode value) ;

constexpr UnityEngine::InputSystem::Controls::UnityEngine__InputSystem__Controls__DiscreteButtonControl__WriteMode __get_writeMode() const;


// Methods

/// @brief Method FinishSetup addr 0x2977c0c size 0xac virtual true final false
 void FinishSetup() ;

/// @brief Method ReadUnprocessedValueFromState addr 0x2977cb8 size 0x9c virtual true final false
 float_t ReadUnprocessedValueFromState(void* statePtr) ;

/// @brief Method WriteValueIntoState addr 0x2977d58 size 0xe8 virtual true final false
 void WriteValueIntoState(float_t value, void* statePtr) ;

// Ctor Parameters []
explicit DiscreteButtonControl() ;

/// @brief Method .ctor addr 0x2977e44 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Controls
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Controls::UnityEngine__InputSystem__Controls__DiscreteButtonControl__WriteMode, "UnityEngine.InputSystem.Controls", "DiscreteButtonControl/WriteMode");
NEED_NO_BOX(UnityEngine::InputSystem::Controls::DiscreteButtonControl);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Controls::DiscreteButtonControl, "UnityEngine.InputSystem.Controls", "DiscreteButtonControl");
