#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
struct TimerState;
}
// Type: UnityEngine.UIElements::TimerState
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7026))
// CS Name: UnityEngine.UIElements.TimerState
struct CORDL_TYPE TimerState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to ::System::IEquatable_1<::UnityEngine::UIElements::TimerState>
constexpr operator  ::System::IEquatable_1<::UnityEngine::UIElements::TimerState>() const;

// Ctor Parameters [CppParam { name: "_start_k__BackingField", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "_now_k__BackingField", ty: "int64_t", modifiers: "", def_value: None }]
constexpr TimerState(int64_t _start_k__BackingField, int64_t _now_k__BackingField) noexcept;


                    constexpr TimerState(TimerState const&) = default;
                    constexpr TimerState(TimerState&&) = default;
                    constexpr TimerState& operator=(TimerState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TimerState& operator=(TimerState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TimerState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int64_t __declspec(property(get=__get__start_k__BackingField, put=__set__start_k__BackingField))  _start_k__BackingField;

constexpr void __set__start_k__BackingField(int64_t value) ;

constexpr int64_t __get__start_k__BackingField() const;

 int64_t __declspec(property(get=__get__now_k__BackingField, put=__set__now_k__BackingField))  _now_k__BackingField;

constexpr void __set__now_k__BackingField(int64_t value) ;

constexpr int64_t __get__now_k__BackingField() const;


// Properties

 int64_t __declspec(property(get=get_start, put=set_start))  start;

 int64_t __declspec(property(get=get_now, put=set_now))  now;

 int64_t __declspec(property(get=get_deltaTime))  deltaTime;


// Methods

/// @brief Method get_start addr 0x2c8ecb0 size 0x8 virtual false final false
 int64_t get_start() ;

/// @brief Method set_start addr 0x2c8ecb8 size 0x8 virtual false final false
 void set_start(int64_t value) ;

/// @brief Method get_now addr 0x2c8ecc0 size 0x8 virtual false final false
 int64_t get_now() ;

/// @brief Method set_now addr 0x2c8ecc8 size 0x8 virtual false final false
 void set_now(int64_t value) ;

/// @brief Method get_deltaTime addr 0x2c8ecd0 size 0xc virtual false final false
 int64_t get_deltaTime() ;

/// @brief Method Equals addr 0x2c8ecdc size 0x88 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x2c8ed64 size 0x24 virtual true final true
 bool Equals(::UnityEngine::UIElements::TimerState other) ;

/// @brief Method GetHashCode addr 0x2c8ed88 size 0x7c virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TimerState, "UnityEngine.UIElements", "TimerState");
