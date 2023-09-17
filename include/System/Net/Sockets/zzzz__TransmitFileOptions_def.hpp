#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Net::Sockets {
struct TransmitFileOptions;
}
// Type: System.Net.Sockets::TransmitFileOptions
namespace System::Net::Sockets {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8206))
// CS Name: System.Net.Sockets.TransmitFileOptions
struct CORDL_TYPE TransmitFileOptions : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TransmitFileOptions(int32_t value__) noexcept;


                    constexpr TransmitFileOptions(TransmitFileOptions const&) = default;
                    constexpr TransmitFileOptions(TransmitFileOptions&&) = default;
                    constexpr TransmitFileOptions& operator=(TransmitFileOptions const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr TransmitFileOptions& operator=(TransmitFileOptions&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit TransmitFileOptions(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __TransmitFileOptions_Unwrapped : int32_t {
__UseDefaultWorkerThread = 0,
__Disconnect = 1,
__ReuseSocket = 2,
__WriteBehind = 4,
__UseSystemThread = 16,
__UseKernelApc = 32,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TransmitFileOptions_Unwrapped () const noexcept {
return std::bit_cast<__TransmitFileOptions_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field UseDefaultWorkerThread offset 0
static ::System::Net::Sockets::TransmitFileOptions const UseDefaultWorkerThread;

/// @brief Field Disconnect offset 0
static ::System::Net::Sockets::TransmitFileOptions const Disconnect;

/// @brief Field ReuseSocket offset 0
static ::System::Net::Sockets::TransmitFileOptions const ReuseSocket;

/// @brief Field WriteBehind offset 0
static ::System::Net::Sockets::TransmitFileOptions const WriteBehind;

/// @brief Field UseSystemThread offset 0
static ::System::Net::Sockets::TransmitFileOptions const UseSystemThread;

/// @brief Field UseKernelApc offset 0
static ::System::Net::Sockets::TransmitFileOptions const UseKernelApc;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Net::Sockets
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Sockets::TransmitFileOptions, "System.Net.Sockets", "TransmitFileOptions");
