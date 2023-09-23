#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Timeline {
struct NotificationFlags;
}
// Type: UnityEngine.Timeline::NotificationFlags
namespace UnityEngine::Timeline {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14117))
// CS Name: UnityEngine.Timeline.NotificationFlags
struct CORDL_TYPE NotificationFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int16_t", modifiers: "", def_value: None }]
constexpr NotificationFlags(int16_t value__) noexcept;


                    constexpr NotificationFlags(NotificationFlags const&) = default;
                    constexpr NotificationFlags(NotificationFlags&&) = default;
                    constexpr NotificationFlags& operator=(NotificationFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NotificationFlags& operator=(NotificationFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x2};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NotificationFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __NotificationFlags_Unwrapped : int16_t {
__TriggerInEditMode = 1,
__Retroactive = 2,
__TriggerOnce = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NotificationFlags_Unwrapped () const noexcept {
return std::bit_cast<__NotificationFlags_Unwrapped>(__instance);
}


// Fields

 int16_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int16_t value) ;

constexpr int16_t __get_value__() const;

/// @brief Field TriggerInEditMode offset 0
static UnityEngine::Timeline::NotificationFlags const TriggerInEditMode;

/// @brief Field Retroactive offset 0
static UnityEngine::Timeline::NotificationFlags const Retroactive;

/// @brief Field TriggerOnce offset 0
static UnityEngine::Timeline::NotificationFlags const TriggerOnce;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::Timeline
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::NotificationFlags, "UnityEngine.Timeline", "NotificationFlags");
