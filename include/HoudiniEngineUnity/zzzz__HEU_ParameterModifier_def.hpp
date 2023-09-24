#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction;
}
namespace HoudiniEngineUnity {
class HEU_ParameterModifier;
}
// Type: ::ModifierAction
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9702))
// CS Name: HoudiniEngineUnity.HEU_ParameterModifier::ModifierAction
struct CORDL_TYPE HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction(int32_t value__) noexcept;


                    constexpr HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction(HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction const&) = default;
                    constexpr HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction(HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction&&) = default;
                    constexpr HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction& operator=(HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction& operator=(HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction_Unwrapped : int32_t {
__MULTIPARM_INSERT = 0,
__MULTIPARM_REMOVE = 1,
__MULTIPARM_CLEAR = 2,
__SET_FLOAT = 3,
__SET_INT = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction_Unwrapped () const noexcept {
return std::bit_cast<__HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field MULTIPARM_INSERT offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction const MULTIPARM_INSERT;

/// @brief Field MULTIPARM_REMOVE offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction const MULTIPARM_REMOVE;

/// @brief Field MULTIPARM_CLEAR offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction const MULTIPARM_CLEAR;

/// @brief Field SET_FLOAT offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction const SET_FLOAT;

/// @brief Field SET_INT offset 0
static HoudiniEngineUnity::HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction const SET_INT;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
// Type: HoudiniEngineUnity::HEU_ParameterModifier
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9703))
// CS Name: HoudiniEngineUnity.HEU_ParameterModifier
class CORDL_TYPE HEU_ParameterModifier : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ModifierAction = HoudiniEngineUnity::HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction;

/// @brief Convert operator to HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_ParameterModifier>
constexpr operator  HoudiniEngineUnity::IEquivable_1<HoudiniEngineUnity::HEU_ParameterModifier>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HEU_ParameterModifier() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ParameterModifier", modifiers: " const&", def_value: None }]
constexpr HEU_ParameterModifier(HEU_ParameterModifier const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ParameterModifier", modifiers: "&&", def_value: None }]
constexpr HEU_ParameterModifier(HEU_ParameterModifier&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_ParameterModifier(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_ParameterModifier& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_ParameterModifier& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_ParameterModifier& operator=(HEU_ParameterModifier&& o) noexcept = default;
  constexpr HEU_ParameterModifier& operator=(HEU_ParameterModifier const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__parameterIndex, put=__set__parameterIndex))  _parameterIndex;

constexpr void __set__parameterIndex(int32_t value) ;

constexpr int32_t __get__parameterIndex() const;

 HoudiniEngineUnity::HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction __declspec(property(get=__get__action, put=__set__action))  _action;

constexpr void __set__action(HoudiniEngineUnity::HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction value) ;

constexpr HoudiniEngineUnity::HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction __get__action() const;

 int32_t __declspec(property(get=__get__instanceIndex, put=__set__instanceIndex))  _instanceIndex;

constexpr void __set__instanceIndex(int32_t value) ;

constexpr int32_t __get__instanceIndex() const;

 int32_t __declspec(property(get=__get__modifierValue, put=__set__modifierValue))  _modifierValue;

constexpr void __set__modifierValue(int32_t value) ;

constexpr int32_t __get__modifierValue() const;

 float_t __declspec(property(get=__get__floatValue, put=__set__floatValue))  _floatValue;

constexpr void __set__floatValue(float_t value) ;

constexpr float_t __get__floatValue() const;

 int32_t __declspec(property(get=__get__intValue, put=__set__intValue))  _intValue;

constexpr void __set__intValue(int32_t value) ;

constexpr int32_t __get__intValue() const;


// Methods

/// @brief Method GetNewModifier addr 0x20204bc size 0x84 virtual false final false
static HoudiniEngineUnity::HEU_ParameterModifier GetNewModifier(HoudiniEngineUnity::HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction action, int32_t parameterIndex, int32_t instanceIndex, int32_t modifierValue) ;

/// @brief Method IsEquivalentTo addr 0x2020548 size 0x28c virtual true final true
 bool IsEquivalentTo(HoudiniEngineUnity::HEU_ParameterModifier other) ;

static HoudiniEngineUnity::HEU_ParameterModifier New_ctor() ;

/// @brief Method .ctor addr 0x2020540 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HoudiniEngineUnity__HEU_ParameterModifier__ModifierAction, "HoudiniEngineUnity", "HEU_ParameterModifier/ModifierAction");
NEED_NO_BOX(HoudiniEngineUnity::HEU_ParameterModifier);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_ParameterModifier, "HoudiniEngineUnity", "HEU_ParameterModifier");
