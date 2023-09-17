#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace GlobalNamespace {
struct NetworkStatisticsDelta;
}
// Forward declare root types
namespace GlobalNamespace {
class ____GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate;
}
namespace GlobalNamespace {
struct NetworkStatisticsState;
}
// Type: ::NetworkStatisticsUpdateDelegate
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12839))
// CS Name: NetworkStatisticsState::NetworkStatisticsUpdateDelegate
class CORDL_TYPE ____GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate(____GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate(____GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate& operator=(____GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate&& o) noexcept = default;
  constexpr ____GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate& operator=(____GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0xdbffa8 size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0xdc007c size 0x14 virtual true final false
 void Invoke(ByRef<::GlobalNamespace::NetworkStatisticsState> statisticsState) ;

/// @brief Method BeginInvoke addr 0xdc0090 size 0x8c virtual true final false
 ::System::IAsyncResult BeginInvoke(ByRef<::GlobalNamespace::NetworkStatisticsState> statisticsState, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0xdc011c size 0xc virtual true final false
 void EndInvoke(ByRef<::GlobalNamespace::NetworkStatisticsState> statisticsState, ::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::NetworkStatisticsState
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12840))
// CS Name: NetworkStatisticsState
struct CORDL_TYPE NetworkStatisticsState : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using NetworkStatisticsUpdateDelegate = ::GlobalNamespace::____GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate;

// Ctor Parameters [CppParam { name: "packetsSent", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsReceived", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "bytesSent", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "bytesReceived", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsLost", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsSentEncrypted", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsSentPlaintext", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsSentRejected", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsReceivedEncrypted", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsReceivedPlaintext", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "packetsReceivedRejected", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "encryptionProcessingTime", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "decryptionProcessingTime", ty: "int64_t", modifiers: "", def_value: None }]
constexpr NetworkStatisticsState(int64_t packetsSent, int64_t packetsReceived, int64_t bytesSent, int64_t bytesReceived, int64_t packetsLost, int64_t packetsSentEncrypted, int64_t packetsSentPlaintext, int64_t packetsSentRejected, int64_t packetsReceivedEncrypted, int64_t packetsReceivedPlaintext, int64_t packetsReceivedRejected, int64_t encryptionProcessingTime, int64_t decryptionProcessingTime) noexcept;


                    constexpr NetworkStatisticsState(NetworkStatisticsState const&) = default;
                    constexpr NetworkStatisticsState(NetworkStatisticsState&&) = default;
                    constexpr NetworkStatisticsState& operator=(NetworkStatisticsState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NetworkStatisticsState& operator=(NetworkStatisticsState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x68};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NetworkStatisticsState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int64_t __declspec(property(get=__get_packetsSent, put=__set_packetsSent))  packetsSent;

constexpr void __set_packetsSent(int64_t value) ;

constexpr int64_t __get_packetsSent() const;

 int64_t __declspec(property(get=__get_packetsReceived, put=__set_packetsReceived))  packetsReceived;

constexpr void __set_packetsReceived(int64_t value) ;

constexpr int64_t __get_packetsReceived() const;

 int64_t __declspec(property(get=__get_bytesSent, put=__set_bytesSent))  bytesSent;

constexpr void __set_bytesSent(int64_t value) ;

constexpr int64_t __get_bytesSent() const;

 int64_t __declspec(property(get=__get_bytesReceived, put=__set_bytesReceived))  bytesReceived;

constexpr void __set_bytesReceived(int64_t value) ;

constexpr int64_t __get_bytesReceived() const;

 int64_t __declspec(property(get=__get_packetsLost, put=__set_packetsLost))  packetsLost;

constexpr void __set_packetsLost(int64_t value) ;

constexpr int64_t __get_packetsLost() const;

 int64_t __declspec(property(get=__get_packetsSentEncrypted, put=__set_packetsSentEncrypted))  packetsSentEncrypted;

constexpr void __set_packetsSentEncrypted(int64_t value) ;

constexpr int64_t __get_packetsSentEncrypted() const;

 int64_t __declspec(property(get=__get_packetsSentPlaintext, put=__set_packetsSentPlaintext))  packetsSentPlaintext;

constexpr void __set_packetsSentPlaintext(int64_t value) ;

constexpr int64_t __get_packetsSentPlaintext() const;

 int64_t __declspec(property(get=__get_packetsSentRejected, put=__set_packetsSentRejected))  packetsSentRejected;

constexpr void __set_packetsSentRejected(int64_t value) ;

constexpr int64_t __get_packetsSentRejected() const;

 int64_t __declspec(property(get=__get_packetsReceivedEncrypted, put=__set_packetsReceivedEncrypted))  packetsReceivedEncrypted;

constexpr void __set_packetsReceivedEncrypted(int64_t value) ;

constexpr int64_t __get_packetsReceivedEncrypted() const;

 int64_t __declspec(property(get=__get_packetsReceivedPlaintext, put=__set_packetsReceivedPlaintext))  packetsReceivedPlaintext;

constexpr void __set_packetsReceivedPlaintext(int64_t value) ;

constexpr int64_t __get_packetsReceivedPlaintext() const;

 int64_t __declspec(property(get=__get_packetsReceivedRejected, put=__set_packetsReceivedRejected))  packetsReceivedRejected;

constexpr void __set_packetsReceivedRejected(int64_t value) ;

constexpr int64_t __get_packetsReceivedRejected() const;

 int64_t __declspec(property(get=__get_encryptionProcessingTime, put=__set_encryptionProcessingTime))  encryptionProcessingTime;

constexpr void __set_encryptionProcessingTime(int64_t value) ;

constexpr int64_t __get_encryptionProcessingTime() const;

 int64_t __declspec(property(get=__get_decryptionProcessingTime, put=__set_decryptionProcessingTime))  decryptionProcessingTime;

constexpr void __set_decryptionProcessingTime(int64_t value) ;

constexpr int64_t __get_decryptionProcessingTime() const;


// Methods

/// @brief Method .ctor addr 0xdbff08 size 0x28 virtual false final false
 void _ctor(int64_t packetsSent, int64_t packetsReceived, int64_t bytesSent, int64_t bytesReceived, int64_t packetsLost, int64_t packetsSentEncrypted, int64_t packetsSentPlaintext, int64_t packetsSentRejected, int64_t packetsReceivedEncrypted, int64_t packetsReceivedPlaintext, int64_t packetsReceivedRejected, int64_t encryptionProcessingTime, int64_t decryptionProcessingTime) ;

/// @brief Method op_Subtraction addr 0xdbff30 size 0x50 virtual false final false
static ::GlobalNamespace::NetworkStatisticsDelta op_Subtraction(ByRef<::GlobalNamespace::NetworkStatisticsState> a, ByRef<::GlobalNamespace::NetworkStatisticsState> b) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate, "", "NetworkStatisticsState/NetworkStatisticsUpdateDelegate");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NetworkStatisticsState, "", "NetworkStatisticsState");
