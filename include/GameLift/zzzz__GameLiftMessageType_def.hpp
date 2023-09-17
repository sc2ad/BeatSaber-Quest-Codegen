#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace GameLift {
struct GameLiftMessageType;
}
namespace {
// Type: GameLift::GameLiftMessageType
namespace GameLift {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2557))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12921))
// CS Name: GameLift.GameLiftMessageType
struct CORDL_TYPE GameLiftMessageType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GameLiftMessageType(int32_t value__) noexcept;


                    constexpr GameLiftMessageType(GameLiftMessageType const&) = default;
                    constexpr GameLiftMessageType(GameLiftMessageType&&) = default;
                    constexpr GameLiftMessageType& operator=(GameLiftMessageType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GameLiftMessageType& operator=(GameLiftMessageType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GameLiftMessageType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GameLiftMessageType_Unwrapped : int32_t {
__AuthenticateUserRequest = 0,
__AuthenticateUserResponse = 1,
__MessageReceivedAcknowledge = 2,
__MultipartMessage = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GameLiftMessageType_Unwrapped () const noexcept {
return std::bit_cast<__GameLiftMessageType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field AuthenticateUserRequest offset 0
static GameLift::GameLiftMessageType const AuthenticateUserRequest;

/// @brief Field AuthenticateUserResponse offset 0
static GameLift::GameLiftMessageType const AuthenticateUserResponse;

/// @brief Field MessageReceivedAcknowledge offset 0
static GameLift::GameLiftMessageType const MessageReceivedAcknowledge;

/// @brief Field MultipartMessage offset 0
static GameLift::GameLiftMessageType const MultipartMessage;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GameLift
DEFINE_IL2CPP_ARG_TYPE(::GameLift::GameLiftMessageType, "GameLift", "GameLiftMessageType");
} // end anonymous namespace
