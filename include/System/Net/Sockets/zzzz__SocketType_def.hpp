#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Net::Sockets {
struct SocketType;
}
// Type: System.Net.Sockets::SocketType
namespace System::Net::Sockets {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8203))
// CS Name: System.Net.Sockets.SocketType
struct CORDL_TYPE SocketType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SocketType(int32_t value__) noexcept;


                    constexpr SocketType(SocketType const&) = default;
                    constexpr SocketType(SocketType&&) = default;
                    constexpr SocketType& operator=(SocketType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SocketType& operator=(SocketType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SocketType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SocketType_Unwrapped : int32_t {
__Stream = 1,
__Dgram = 2,
__Raw = 3,
__Rdm = 4,
__Seqpacket = 5,
__Unknown = -1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SocketType_Unwrapped () const noexcept {
return std::bit_cast<__SocketType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Stream offset 0
static System::Net::Sockets::SocketType const Stream;

/// @brief Field Dgram offset 0
static System::Net::Sockets::SocketType const Dgram;

/// @brief Field Raw offset 0
static System::Net::Sockets::SocketType const Raw;

/// @brief Field Rdm offset 0
static System::Net::Sockets::SocketType const Rdm;

/// @brief Field Seqpacket offset 0
static System::Net::Sockets::SocketType const Seqpacket;

/// @brief Field Unknown offset 0
static System::Net::Sockets::SocketType const Unknown;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::SocketType, "System.Net.Sockets", "SocketType");
