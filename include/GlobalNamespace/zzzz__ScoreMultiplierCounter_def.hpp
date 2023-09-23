#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType;
}
namespace GlobalNamespace {
class ScoreMultiplierCounter;
}
// Type: ::MultiplierEventType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5410))
// CS Name: ScoreMultiplierCounter::MultiplierEventType
struct CORDL_TYPE GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType(GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType const&) = default;
                    constexpr GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType(GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType&&) = default;
                    constexpr GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType& operator=(GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType& operator=(GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType_Unwrapped : int32_t {
__Positive = 0,
__Neutral = 1,
__Negative = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Positive offset 0
static GlobalNamespace::GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType const Positive;

/// @brief Field Neutral offset 0
static GlobalNamespace::GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType const Neutral;

/// @brief Field Negative offset 0
static GlobalNamespace::GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType const Negative;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ScoreMultiplierCounter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5411))
// CS Name: ScoreMultiplierCounter
class CORDL_TYPE ScoreMultiplierCounter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using MultiplierEventType = GlobalNamespace::GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ScoreMultiplierCounter() = default;

// Ctor Parameters [CppParam { name: "", ty: "ScoreMultiplierCounter", modifiers: " const&", def_value: None }]
constexpr ScoreMultiplierCounter(ScoreMultiplierCounter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ScoreMultiplierCounter", modifiers: "&&", def_value: None }]
constexpr ScoreMultiplierCounter(ScoreMultiplierCounter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ScoreMultiplierCounter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ScoreMultiplierCounter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ScoreMultiplierCounter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ScoreMultiplierCounter& operator=(ScoreMultiplierCounter&& o) noexcept = default;
  constexpr ScoreMultiplierCounter& operator=(ScoreMultiplierCounter const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__multiplier, put=__set__multiplier))  _multiplier;

constexpr void __set__multiplier(int32_t value) ;

constexpr int32_t __get__multiplier() const;

 int32_t __declspec(property(get=__get__multiplierIncreaseProgress, put=__set__multiplierIncreaseProgress))  _multiplierIncreaseProgress;

constexpr void __set__multiplierIncreaseProgress(int32_t value) ;

constexpr int32_t __get__multiplierIncreaseProgress() const;

 int32_t __declspec(property(get=__get__multiplierIncreaseMaxProgress, put=__set__multiplierIncreaseMaxProgress))  _multiplierIncreaseMaxProgress;

constexpr void __set__multiplierIncreaseMaxProgress(int32_t value) ;

constexpr int32_t __get__multiplierIncreaseMaxProgress() const;


// Properties

 int32_t __declspec(property(get=get_multiplier))  multiplier;

 float_t __declspec(property(get=get_normalizedProgress))  normalizedProgress;


// Methods

/// @brief Method get_multiplier addr 0x2110090 size 0x8 virtual false final false
 int32_t get_multiplier() ;

/// @brief Method get_normalizedProgress addr 0x210f7b0 size 0x14 virtual false final false
 float_t get_normalizedProgress() ;

/// @brief Method Reset addr 0x2110098 size 0x18 virtual false final false
 void Reset() ;

/// @brief Method ProcessMultiplierEvent addr 0x210f70c size 0x9c virtual false final false
 bool ProcessMultiplierEvent(GlobalNamespace::GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType multiplierEventType) ;

// Ctor Parameters []
explicit ScoreMultiplierCounter() ;

/// @brief Method .ctor addr 0x2110078 size 0x18 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__ScoreMultiplierCounter__MultiplierEventType, "", "ScoreMultiplierCounter/MultiplierEventType");
NEED_NO_BOX(GlobalNamespace::ScoreMultiplierCounter);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScoreMultiplierCounter, "", "ScoreMultiplierCounter");
