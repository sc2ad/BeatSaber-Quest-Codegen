#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling;
}
namespace GlobalNamespace {
class ReflectionProbeBakingOverride;
}
// Type: ::ActiveStateHandling
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5952))
// CS Name: ReflectionProbeBakingOverride::ActiveStateHandling
struct CORDL_TYPE GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling(int32_t value__) noexcept;


                    constexpr GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling(GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling const&) = default;
                    constexpr GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling(GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling&&) = default;
                    constexpr GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling& operator=(GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling& operator=(GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling_Unwrapped : int32_t {
__LeaveAsIs = 0,
__Enable = 1,
__Disable = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field LeaveAsIs offset 0
static GlobalNamespace::GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling const LeaveAsIs;

/// @brief Field Enable offset 0
static GlobalNamespace::GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling const Enable;

/// @brief Field Disable offset 0
static GlobalNamespace::GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling const Disable;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ReflectionProbeBakingOverride
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5953))
// CS Name: ReflectionProbeBakingOverride
class CORDL_TYPE ReflectionProbeBakingOverride : public UnityEngine::MonoBehaviour {
public:
// Declarations
using ActiveStateHandling = GlobalNamespace::GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~ReflectionProbeBakingOverride() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionProbeBakingOverride", modifiers: " const&", def_value: None }]
constexpr ReflectionProbeBakingOverride(ReflectionProbeBakingOverride const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionProbeBakingOverride", modifiers: "&&", def_value: None }]
constexpr ReflectionProbeBakingOverride(ReflectionProbeBakingOverride&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReflectionProbeBakingOverride(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ReflectionProbeBakingOverride& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReflectionProbeBakingOverride& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReflectionProbeBakingOverride& operator=(ReflectionProbeBakingOverride&& o) noexcept = default;
  constexpr ReflectionProbeBakingOverride& operator=(ReflectionProbeBakingOverride const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling __declspec(property(get=__get__stateHandling, put=__set__stateHandling))  _stateHandling;

constexpr void __set__stateHandling(GlobalNamespace::GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling value) ;

constexpr GlobalNamespace::GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling __get__stateHandling() const;

 bool __declspec(property(get=__get__setPosition, put=__set__setPosition))  _setPosition;

constexpr void __set__setPosition(bool value) ;

constexpr bool __get__setPosition() const;

 UnityEngine::Vector3 __declspec(property(get=__get__localPosition, put=__set__localPosition))  _localPosition;

constexpr void __set__localPosition(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__localPosition() const;

 bool __declspec(property(get=__get__setRotation, put=__set__setRotation))  _setRotation;

constexpr void __set__setRotation(bool value) ;

constexpr bool __get__setRotation() const;

 UnityEngine::Vector3 __declspec(property(get=__get__localRotation, put=__set__localRotation))  _localRotation;

constexpr void __set__localRotation(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__localRotation() const;

 bool __declspec(property(get=__get__setScale, put=__set__setScale))  _setScale;

constexpr void __set__setScale(bool value) ;

constexpr bool __get__setScale() const;

 UnityEngine::Vector3 __declspec(property(get=__get__localScale, put=__set__localScale))  _localScale;

constexpr void __set__localScale(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__localScale() const;


// Methods

/// @brief Method UpdateForProbeBaking addr 0x219ce88 size 0xe8 virtual false final false
 void UpdateForProbeBaking() ;

static GlobalNamespace::ReflectionProbeBakingOverride New_ctor() ;

/// @brief Method .ctor addr 0x219cf70 size 0xa8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ReflectionProbeBakingOverride__ActiveStateHandling, "", "ReflectionProbeBakingOverride/ActiveStateHandling");
NEED_NO_BOX(GlobalNamespace::ReflectionProbeBakingOverride);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ReflectionProbeBakingOverride, "", "ReflectionProbeBakingOverride");
