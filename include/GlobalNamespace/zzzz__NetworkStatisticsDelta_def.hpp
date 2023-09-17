#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace GlobalNamespace {
struct NetworkStatisticsDelta;
}
// Type: ::NetworkStatisticsDelta
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12841))
// CS Name: NetworkStatisticsDelta
struct CORDL_TYPE NetworkStatisticsDelta : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "packetsSentDelta", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsReceivedDelta", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "bytesSentDelta", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "bytesReceivedDelta", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsLostDelta", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsSentEncryptedDelta", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsSentPlaintextDelta", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsSentRejectedDelta", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsReceivedEncryptedDelta", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsReceivedPlaintextDelta", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsReceivedRejectedDelta", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "encryptionProcessingTimeDelta", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "decryptionProcessingTimeDelta", ty: "int64_t", modifiers: "", def_value: None }]
constexpr NetworkStatisticsDelta(int64_t packetsSentDelta, int64_t packetsReceivedDelta, int64_t bytesSentDelta, int64_t bytesReceivedDelta, int64_t packetsLostDelta, int64_t packetsSentEncryptedDelta, int64_t packetsSentPlaintextDelta, int64_t packetsSentRejectedDelta, int64_t packetsReceivedEncryptedDelta, int64_t packetsReceivedPlaintextDelta, int64_t packetsReceivedRejectedDelta, int64_t encryptionProcessingTimeDelta, int64_t decryptionProcessingTimeDelta) noexcept;


                    constexpr NetworkStatisticsDelta(NetworkStatisticsDelta const&) = default;
                    constexpr NetworkStatisticsDelta(NetworkStatisticsDelta&&) = default;
                    constexpr NetworkStatisticsDelta& operator=(NetworkStatisticsDelta const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NetworkStatisticsDelta& operator=(NetworkStatisticsDelta&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x68};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NetworkStatisticsDelta(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int64_t __declspec(property(get=__get_packetsSentDelta, put=__set_packetsSentDelta))  packetsSentDelta;

constexpr void __set_packetsSentDelta(int64_t value) ;

constexpr int64_t __get_packetsSentDelta() const;

 int64_t __declspec(property(get=__get_packetsReceivedDelta, put=__set_packetsReceivedDelta))  packetsReceivedDelta;

constexpr void __set_packetsReceivedDelta(int64_t value) ;

constexpr int64_t __get_packetsReceivedDelta() const;

 int64_t __declspec(property(get=__get_bytesSentDelta, put=__set_bytesSentDelta))  bytesSentDelta;

constexpr void __set_bytesSentDelta(int64_t value) ;

constexpr int64_t __get_bytesSentDelta() const;

 int64_t __declspec(property(get=__get_bytesReceivedDelta, put=__set_bytesReceivedDelta))  bytesReceivedDelta;

constexpr void __set_bytesReceivedDelta(int64_t value) ;

constexpr int64_t __get_bytesReceivedDelta() const;

 int64_t __declspec(property(get=__get_packetsLostDelta, put=__set_packetsLostDelta))  packetsLostDelta;

constexpr void __set_packetsLostDelta(int64_t value) ;

constexpr int64_t __get_packetsLostDelta() const;

 int64_t __declspec(property(get=__get_packetsSentEncryptedDelta, put=__set_packetsSentEncryptedDelta))  packetsSentEncryptedDelta;

constexpr void __set_packetsSentEncryptedDelta(int64_t value) ;

constexpr int64_t __get_packetsSentEncryptedDelta() const;

 int64_t __declspec(property(get=__get_packetsSentPlaintextDelta, put=__set_packetsSentPlaintextDelta))  packetsSentPlaintextDelta;

constexpr void __set_packetsSentPlaintextDelta(int64_t value) ;

constexpr int64_t __get_packetsSentPlaintextDelta() const;

 int64_t __declspec(property(get=__get_packetsSentRejectedDelta, put=__set_packetsSentRejectedDelta))  packetsSentRejectedDelta;

constexpr void __set_packetsSentRejectedDelta(int64_t value) ;

constexpr int64_t __get_packetsSentRejectedDelta() const;

 int64_t __declspec(property(get=__get_packetsReceivedEncryptedDelta, put=__set_packetsReceivedEncryptedDelta))  packetsReceivedEncryptedDelta;

constexpr void __set_packetsReceivedEncryptedDelta(int64_t value) ;

constexpr int64_t __get_packetsReceivedEncryptedDelta() const;

 int64_t __declspec(property(get=__get_packetsReceivedPlaintextDelta, put=__set_packetsReceivedPlaintextDelta))  packetsReceivedPlaintextDelta;

constexpr void __set_packetsReceivedPlaintextDelta(int64_t value) ;

constexpr int64_t __get_packetsReceivedPlaintextDelta() const;

 int64_t __declspec(property(get=__get_packetsReceivedRejectedDelta, put=__set_packetsReceivedRejectedDelta))  packetsReceivedRejectedDelta;

constexpr void __set_packetsReceivedRejectedDelta(int64_t value) ;

constexpr int64_t __get_packetsReceivedRejectedDelta() const;

 int64_t __declspec(property(get=__get_encryptionProcessingTimeDelta, put=__set_encryptionProcessingTimeDelta))  encryptionProcessingTimeDelta;

constexpr void __set_encryptionProcessingTimeDelta(int64_t value) ;

constexpr int64_t __get_encryptionProcessingTimeDelta() const;

 int64_t __declspec(property(get=__get_decryptionProcessingTimeDelta, put=__set_decryptionProcessingTimeDelta))  decryptionProcessingTimeDelta;

constexpr void __set_decryptionProcessingTimeDelta(int64_t value) ;

constexpr int64_t __get_decryptionProcessingTimeDelta() const;


// Methods

/// @brief Method .ctor addr 0xdbff80 size 0x28 virtual false final false
 void _ctor(int64_t packetsSentDelta, int64_t packetsReceivedDelta, int64_t bytesSentDelta, int64_t bytesReceivedDelta, int64_t packetsLostDelta, int64_t packetsSentEncryptedDelta, int64_t packetsSentPlaintextDelta, int64_t packetsSentRejectedDelta, int64_t packetsReceivedEncryptedDelta, int64_t packetsReceivedPlaintextDelta, int64_t packetsReceivedRejectedDelta, int64_t encryptionProcessingTimeDelta, int64_t decryptionProcessingTimeDelta) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkStatisticsDelta, "", "NetworkStatisticsDelta");
