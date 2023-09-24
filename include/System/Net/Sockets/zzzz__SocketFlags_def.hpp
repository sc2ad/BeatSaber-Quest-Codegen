#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Net::Sockets {
struct SocketFlags;
}
// Type: System.Net.Sockets::SocketFlags
namespace System::Net::Sockets {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8199))
// CS Name: System.Net.Sockets.SocketFlags
struct CORDL_TYPE SocketFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SocketFlags(int32_t value__) noexcept;


                    constexpr SocketFlags(SocketFlags const&) = default;
                    constexpr SocketFlags(SocketFlags&&) = default;
                    constexpr SocketFlags& operator=(SocketFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SocketFlags& operator=(SocketFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SocketFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SocketFlags_Unwrapped : int32_t {
__None = 0,
__OutOfBand = 1,
__Peek = 2,
__DontRoute = 4,
__MaxIOVectorLength = 16,
__Truncated = 256,
__ControlDataTruncated = 512,
__Broadcast = 1024,
__Multicast = 2048,
__Partial = 32768,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SocketFlags_Unwrapped () const noexcept {
return std::bit_cast<__SocketFlags_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::Net::Sockets::SocketFlags const None;

/// @brief Field OutOfBand offset 0
static System::Net::Sockets::SocketFlags const OutOfBand;

/// @brief Field Peek offset 0
static System::Net::Sockets::SocketFlags const Peek;

/// @brief Field DontRoute offset 0
static System::Net::Sockets::SocketFlags const DontRoute;

/// @brief Field MaxIOVectorLength offset 0
static System::Net::Sockets::SocketFlags const MaxIOVectorLength;

/// @brief Field Truncated offset 0
static System::Net::Sockets::SocketFlags const Truncated;

/// @brief Field ControlDataTruncated offset 0
static System::Net::Sockets::SocketFlags const ControlDataTruncated;

/// @brief Field Broadcast offset 0
static System::Net::Sockets::SocketFlags const Broadcast;

/// @brief Field Multicast offset 0
static System::Net::Sockets::SocketFlags const Multicast;

/// @brief Field Partial offset 0
static System::Net::Sockets::SocketFlags const Partial;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::SocketFlags, "System.Net.Sockets", "SocketFlags");
