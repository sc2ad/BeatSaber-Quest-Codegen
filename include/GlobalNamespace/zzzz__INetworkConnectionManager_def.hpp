#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__IConnectionManager_def.hpp"
#include "GlobalNamespace/zzzz__IPollable_def.hpp"
#include "GlobalNamespace/zzzz__IUnconnectedConnectionManager_def.hpp"
#include "GlobalNamespace/zzzz__IUnconnectedMessageSender_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Net {
class IPEndPoint;
}
namespace GlobalNamespace {
class GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate;
}
// Forward declare root types
namespace GlobalNamespace {
class INetworkConnectionManager;
}
namespace {
// Type: ::INetworkConnectionManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12794)), TypeDefinitionIndex(TypeDefinitionIndex(12723)), TypeDefinitionIndex(TypeDefinitionIndex(2413)), TypeDefinitionIndex(TypeDefinitionIndex(12792)), TypeDefinitionIndex(TypeDefinitionIndex(12707))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12718))
// CS Name: INetworkConnectionManager
class CORDL_TYPE INetworkConnectionManager : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IConnectionManager
constexpr operator  GlobalNamespace::IConnectionManager() const noexcept;

/// @brief Convert operator to GlobalNamespace::IPollable
constexpr operator  GlobalNamespace::IPollable() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief Convert operator to GlobalNamespace::IUnconnectedConnectionManager
constexpr operator  GlobalNamespace::IUnconnectedConnectionManager() const noexcept;

/// @brief Convert operator to GlobalNamespace::IUnconnectedMessageSender
constexpr operator  GlobalNamespace::IUnconnectedMessageSender() const noexcept;

~INetworkConnectionManager() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INetworkConnectionManager(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 int32_t __declspec(property(get=get_port))  port;

 bool __declspec(property(get=get_isClient))  isClient;

 bool __declspec(property(get=get_isServer))  isServer;


// Methods

/// @brief Method add_onStatisticsUpdatedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_onStatisticsUpdatedEvent(GlobalNamespace::GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate value) ;

/// @brief Method remove_onStatisticsUpdatedEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_onStatisticsUpdatedEvent(GlobalNamespace::GlobalNamespace__NetworkStatisticsState__NetworkStatisticsUpdateDelegate value) ;

/// @brief Method get_port addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_port() ;

/// @brief Method get_isClient addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isClient() ;

/// @brief Method get_isServer addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isServer() ;

/// @brief Method ConnectToEndPoint addr 0x0 size 0xffffffffffffffff virtual true final false
 void ConnectToEndPoint(::StringW userId, ::StringW userName, System::Net::IPEndPoint remoteEndPoint, ::StringW remoteUserId, ::StringW remoteUserName, bool remoteUserIsConnectionOwner) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::INetworkConnectionManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::INetworkConnectionManager, "", "INetworkConnectionManager");
} // end anonymous namespace
