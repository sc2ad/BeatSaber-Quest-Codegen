#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform {
struct RoomType;
}
// Type: Oculus.Platform::RoomType
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13355))
// CS Name: Oculus.Platform.RoomType
struct CORDL_TYPE RoomType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr RoomType(int32_t value__) noexcept;


                    constexpr RoomType(RoomType const&) = default;
                    constexpr RoomType(RoomType&&) = default;
                    constexpr RoomType& operator=(RoomType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr RoomType& operator=(RoomType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit RoomType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __RoomType_Unwrapped : int32_t {
__Unknown = 0,
__Matchmaking = 1,
__Moderated = 2,
__Private = 3,
__Solo = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RoomType_Unwrapped () const noexcept {
return std::bit_cast<__RoomType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static Oculus::Platform::RoomType const Unknown;

/// @brief Field Matchmaking offset 0
static Oculus::Platform::RoomType const Matchmaking;

/// @brief Field Moderated offset 0
static Oculus::Platform::RoomType const Moderated;

/// @brief Field Private offset 0
static Oculus::Platform::RoomType const Private;

/// @brief Field Solo offset 0
static Oculus::Platform::RoomType const Solo;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::RoomType, "Oculus.Platform", "RoomType");
