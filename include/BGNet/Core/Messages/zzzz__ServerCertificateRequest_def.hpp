#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "BGNet/Core/Messages/zzzz__BaseReliableResponse_def.hpp"
#include "BGNet/Core/Messages/zzzz__IHandshakeMessage_def.hpp"
#include "BGNet/Core/Messages/zzzz__IHandshakeServerToClientMessage_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace GlobalNamespace {
class ByteArrayNetSerializable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace GlobalNamespace {
template<typename T>
class PacketPool_1;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Forward declare root types
namespace BGNet::Core::Messages {
class BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5;
}
namespace BGNet::Core::Messages {
class ServerCertificateRequest;
}
namespace {
// Type: ::<get_certificateList>d__5
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3748)), TypeDefinitionIndex(TypeDefinitionIndex(3821)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3820), inst: 772 }), TypeDefinitionIndex(TypeDefinitionIndex(3747)), TypeDefinitionIndex(TypeDefinitionIndex(2413)), TypeDefinitionIndex(TypeDefinitionIndex(3820)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3821), inst: 772 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12973))
// CS Name: BGNet.Core.Messages.ServerCertificateRequest::<get_certificateList>d__5
class CORDL_TYPE BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<::ArrayW<uint8_t>>
constexpr operator  System::Collections::Generic::IEnumerable_1<::ArrayW<uint8_t>>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<::ArrayW<uint8_t>>
constexpr operator  System::Collections::Generic::IEnumerator_1<::ArrayW<uint8_t>>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5() = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5", modifiers: " const&", def_value: None }]
constexpr BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5(BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5", modifiers: "&&", def_value: None }]
constexpr BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5(BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5& operator=(BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5&& o) noexcept = default;
  constexpr BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5& operator=(BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 BGNet::Core::Messages::ServerCertificateRequest __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(BGNet::Core::Messages::ServerCertificateRequest value) ;

constexpr BGNet::Core::Messages::ServerCertificateRequest __get___4__this() const;

 int32_t __declspec(property(get=__get__i_5__2, put=__set__i_5__2))  _i_5__2;

constexpr void __set__i_5__2(int32_t value) ;

constexpr int32_t __get__i_5__2() const;


// Properties

 ::ArrayW<uint8_t> __declspec(property(get=System_Collections_Generic_IEnumerator_System_Byte[]__get_Current))  System_Collections_Generic_IEnumerator_System_Byte[]__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5(int32_t __1__state) ;

/// @brief Method .ctor addr 0xde32a0 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0xde398c size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0xde3990 size 0x9c virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Byte[]>.get_Current addr 0xde3a2c size 0x8 virtual true final true
 ::ArrayW<uint8_t> System_Collections_Generic_IEnumerator_System_Byte[]__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0xde3a34 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0xde3a74 size 0x8 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<System.Byte[]>.GetEnumerator addr 0xde3a7c size 0xa4 virtual true final true
 System::Collections::Generic::IEnumerator_1<::ArrayW<uint8_t>> System_Collections_Generic_IEnumerable_System_Byte[]__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0xde3b20 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
// Type: BGNet.Core.Messages::ServerCertificateRequest
namespace BGNet::Core::Messages {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12968)), TypeDefinitionIndex(TypeDefinitionIndex(12954)), TypeDefinitionIndex(TypeDefinitionIndex(14531)), TypeDefinitionIndex(TypeDefinitionIndex(12966)), TypeDefinitionIndex(TypeDefinitionIndex(12724)), TypeDefinitionIndex(TypeDefinitionIndex(12979))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12974))
// CS Name: BGNet.Core.Messages.ServerCertificateRequest
class CORDL_TYPE ServerCertificateRequest : public BGNet::Core::Messages::BaseReliableResponse {
public:
// Declarations
using _get_certificateList_d__5 = BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5;

/// @brief Convert operator to BGNet::Core::Messages::IHandshakeServerToClientMessage
constexpr operator  BGNet::Core::Messages::IHandshakeServerToClientMessage() const noexcept;

/// @brief Convert operator to BGNet::Core::Messages::IHandshakeMessage
constexpr operator  BGNet::Core::Messages::IHandshakeMessage() const noexcept;

/// @brief Convert operator to BGNet::Core::Messages::IUnconnectedMessage
constexpr operator  BGNet::Core::Messages::IUnconnectedMessage() const noexcept;

/// @brief Convert operator to LiteNetLib::Utils::INetSerializable
constexpr operator  LiteNetLib::Utils::INetSerializable() const noexcept;

/// @brief Convert operator to GlobalNamespace::IPoolablePacket
constexpr operator  GlobalNamespace::IPoolablePacket() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ServerCertificateRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "ServerCertificateRequest", modifiers: " const&", def_value: None }]
constexpr ServerCertificateRequest(ServerCertificateRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ServerCertificateRequest", modifiers: "&&", def_value: None }]
constexpr ServerCertificateRequest(ServerCertificateRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ServerCertificateRequest(void* ptr) noexcept : BGNet::Core::Messages::BaseReliableResponse(ptr) {
}


  constexpr ServerCertificateRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ServerCertificateRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ServerCertificateRequest& operator=(ServerCertificateRequest&& o) noexcept = default;
  constexpr ServerCertificateRequest& operator=(ServerCertificateRequest const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::ByteArrayNetSerializable> __declspec(property(get=__get__certificateList, put=__set__certificateList))  _certificateList;

constexpr void __set__certificateList(::ArrayW<GlobalNamespace::ByteArrayNetSerializable> value) ;

constexpr ::ArrayW<GlobalNamespace::ByteArrayNetSerializable> __get__certificateList() const;

 int32_t __declspec(property(get=__get__certificateCount, put=__set__certificateCount))  _certificateCount;

constexpr void __set__certificateCount(int32_t value) ;

constexpr int32_t __get__certificateCount() const;


// Properties

static GlobalNamespace::PacketPool_1<BGNet::Core::Messages::ServerCertificateRequest> __declspec(property(get=get_pool))  pool;

 System::Collections::Generic::IEnumerable_1<::ArrayW<uint8_t>> __declspec(property(get=get_certificateList))  certificateList;


// Methods

/// @brief Method get_pool addr 0xde00ac size 0x40 virtual false final false
static GlobalNamespace::PacketPool_1<BGNet::Core::Messages::ServerCertificateRequest> get_pool() ;

/// @brief Method get_certificateList addr 0xdddb74 size 0x78 virtual false final false
 System::Collections::Generic::IEnumerable_1<::ArrayW<uint8_t>> get_certificateList() ;

/// @brief Method Init addr 0xde1b34 size 0x3c0 virtual false final false
 BGNet::Core::Messages::ServerCertificateRequest Init(System::Collections::Generic::IEnumerable_1<::ArrayW<uint8_t>> certificateList) ;

/// @brief Method Serialize addr 0xde32d4 size 0x84 virtual true final false
 void Serialize(LiteNetLib::Utils::NetDataWriter writer) ;

/// @brief Method Deserialize addr 0xde3358 size 0x144 virtual true final false
 void Deserialize(LiteNetLib::Utils::NetDataReader reader) ;

/// @brief Method Release addr 0xde349c size 0xa0 virtual true final false
 void Release() ;

// Ctor Parameters []
explicit ServerCertificateRequest() ;

/// @brief Method .ctor addr 0xde353c size 0x450 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGNet::Core::Messages
NEED_NO_BOX(::BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::BGNet__Core__Messages__ServerCertificateRequest___get_certificateList_d__5, "BGNet.Core.Messages", "ServerCertificateRequest/<get_certificateList>d__5");
NEED_NO_BOX(::BGNet::Core::Messages::ServerCertificateRequest);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::Messages::ServerCertificateRequest, "BGNet.Core.Messages", "ServerCertificateRequest");
} // end anonymous namespace
