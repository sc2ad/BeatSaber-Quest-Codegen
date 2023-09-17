#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib {
class NetPeer;
}
namespace LiteNetLib {
struct ConnectionRequestResult;
}
namespace LiteNetLib {
class NetConnectRequestPacket;
}
namespace System::Net {
class IPEndPoint;
}
namespace LiteNetLib {
class NetManager;
}
// Forward declare root types
namespace LiteNetLib {
class ConnectionRequest;
}
// Type: LiteNetLib::ConnectionRequest
namespace LiteNetLib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14410))
// CS Name: LiteNetLib.ConnectionRequest
class CORDL_TYPE ConnectionRequest : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~ConnectionRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConnectionRequest", modifiers: " const&", def_value: None }]
constexpr ConnectionRequest(ConnectionRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConnectionRequest", modifiers: "&&", def_value: None }]
constexpr ConnectionRequest(ConnectionRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConnectionRequest(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ConnectionRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConnectionRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConnectionRequest& operator=(ConnectionRequest&& o) noexcept = default;
  constexpr ConnectionRequest& operator=(ConnectionRequest const& o) noexcept = default;
                


// Fields

 ::LiteNetLib::NetManager __declspec(property(get=__get__listener, put=__set__listener))  _listener;

constexpr void __set__listener(::LiteNetLib::NetManager value) ;

constexpr ::LiteNetLib::NetManager __get__listener() const;

 int32_t __declspec(property(get=__get__used, put=__set__used))  _used;

constexpr void __set__used(int32_t value) ;

constexpr int32_t __get__used() const;

 ::LiteNetLib::Utils::NetDataReader __declspec(property(get=__get_Data, put=__set_Data))  Data;

constexpr void __set_Data(::LiteNetLib::Utils::NetDataReader value) ;

constexpr ::LiteNetLib::Utils::NetDataReader __get_Data() const;

 ::LiteNetLib::ConnectionRequestResult __declspec(property(get=__get__Result_k__BackingField, put=__set__Result_k__BackingField))  _Result_k__BackingField;

constexpr void __set__Result_k__BackingField(::LiteNetLib::ConnectionRequestResult value) ;

constexpr ::LiteNetLib::ConnectionRequestResult __get__Result_k__BackingField() const;

 int64_t __declspec(property(get=__get_ConnectionTime, put=__set_ConnectionTime))  ConnectionTime;

constexpr void __set_ConnectionTime(int64_t value) ;

constexpr int64_t __get_ConnectionTime() const;

 uint8_t __declspec(property(get=__get_ConnectionNumber, put=__set_ConnectionNumber))  ConnectionNumber;

constexpr void __set_ConnectionNumber(uint8_t value) ;

constexpr uint8_t __get_ConnectionNumber() const;

 ::System::Net::IPEndPoint __declspec(property(get=__get_RemoteEndPoint, put=__set_RemoteEndPoint))  RemoteEndPoint;

constexpr void __set_RemoteEndPoint(::System::Net::IPEndPoint value) ;

constexpr ::System::Net::IPEndPoint __get_RemoteEndPoint() const;


// Properties

 ::LiteNetLib::ConnectionRequestResult __declspec(property(get=get_Result, put=set_Result))  Result;


// Methods

/// @brief Method get_Result addr 0x2084a34 size 0x8 virtual false final false
 ::LiteNetLib::ConnectionRequestResult get_Result() ;

/// @brief Method set_Result addr 0x2084a3c size 0x8 virtual false final false
 void set_Result(::LiteNetLib::ConnectionRequestResult value) ;

/// @brief Method TryActivate addr 0x2084a44 size 0x28 virtual false final false
 bool TryActivate() ;

/// @brief Method UpdateRequest addr 0x2084a6c size 0x30 virtual false final false
 void UpdateRequest(::LiteNetLib::NetConnectRequestPacket connRequest) ;

// Ctor Parameters [CppParam { name: "connectionId", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "connectionNumber", ty: "uint8_t", modifiers: "", def_value: None }, CppParam { name: "netDataReader", ty: "::LiteNetLib::Utils::NetDataReader", modifiers: "", def_value: None }, CppParam { name: "endPoint", ty: "::System::Net::IPEndPoint", modifiers: "", def_value: None }, CppParam { name: "listener", ty: "::LiteNetLib::NetManager", modifiers: "", def_value: None }]
explicit ConnectionRequest(int64_t connectionId, uint8_t connectionNumber, ::LiteNetLib::Utils::NetDataReader netDataReader, ::System::Net::IPEndPoint endPoint, ::LiteNetLib::NetManager listener) ;

/// @brief Method .ctor addr 0x2084a9c size 0x58 virtual false final false
 void _ctor(int64_t connectionId, uint8_t connectionNumber, ::LiteNetLib::Utils::NetDataReader netDataReader, ::System::Net::IPEndPoint endPoint, ::LiteNetLib::NetManager listener) ;

/// @brief Method AcceptIfKey addr 0x2084af4 size 0x1a8 virtual false final false
 ::LiteNetLib::NetPeer AcceptIfKey(::StringW key) ;

/// @brief Method Accept addr 0x208519c size 0x64 virtual false final false
 ::LiteNetLib::NetPeer Accept() ;

/// @brief Method Reject addr 0x2085200 size 0x88 virtual false final false
 void Reject(::ArrayW<uint8_t> rejectData, int32_t start, int32_t length, bool force) ;

/// @brief Method Reject addr 0x2085288 size 0x8 virtual false final false
 void Reject(::ArrayW<uint8_t> rejectData, int32_t start, int32_t length) ;

/// @brief Method RejectForce addr 0x2085290 size 0x8 virtual false final false
 void RejectForce(::ArrayW<uint8_t> rejectData, int32_t start, int32_t length) ;

/// @brief Method RejectForce addr 0x2085298 size 0x14 virtual false final false
 void RejectForce() ;

/// @brief Method RejectForce addr 0x20852ac size 0x20 virtual false final false
 void RejectForce(::ArrayW<uint8_t> rejectData) ;

/// @brief Method RejectForce addr 0x20852cc size 0x28 virtual false final false
 void RejectForce(::LiteNetLib::Utils::NetDataWriter rejectData) ;

/// @brief Method Reject addr 0x20852f4 size 0x14 virtual false final false
 void Reject() ;

/// @brief Method Reject addr 0x2085308 size 0x20 virtual false final false
 void Reject(::ArrayW<uint8_t> rejectData) ;

/// @brief Method Reject addr 0x2085328 size 0x28 virtual false final false
 void Reject(::LiteNetLib::Utils::NetDataWriter rejectData) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
} // end anonymous namespace
NEED_NO_BOX(::LiteNetLib::ConnectionRequest);
DEFINE_IL2CPP_ARG_TYPE(::LiteNetLib::ConnectionRequest, "LiteNetLib", "ConnectionRequest");
