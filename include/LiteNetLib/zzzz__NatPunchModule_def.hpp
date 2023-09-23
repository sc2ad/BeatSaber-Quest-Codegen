#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Net {
class IPEndPoint;
}
namespace LiteNetLib {
class INatPunchListener;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace LiteNetLib::Utils {
class NetPacketProcessor;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
namespace LiteNetLib {
class NetPacket;
}
namespace LiteNetLib {
class NetSocket;
}
namespace LiteNetLib {
struct NatAddressType;
}
// Forward declare root types
namespace LiteNetLib {
class LiteNetLib__NatPunchModule__NatIntroduceRequestPacket;
}
namespace LiteNetLib {
class LiteNetLib__NatPunchModule__NatIntroduceResponsePacket;
}
namespace LiteNetLib {
class LiteNetLib__NatPunchModule__NatPunchPacket;
}
namespace LiteNetLib {
class NatPunchModule;
}
namespace LiteNetLib {
struct LiteNetLib__NatPunchModule__RequestEventData;
}
namespace LiteNetLib {
struct LiteNetLib__NatPunchModule__SuccessEventData;
}
// Type: ::RequestEventData
namespace LiteNetLib {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14430))
// CS Name: LiteNetLib.NatPunchModule::RequestEventData
struct CORDL_TYPE LiteNetLib__NatPunchModule__RequestEventData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "LocalEndPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: None }, CppParam { name: "RemoteEndPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: None }, CppParam { name: "Token", ty: "::StringW", modifiers: "", def_value: None }]
constexpr LiteNetLib__NatPunchModule__RequestEventData(System::Net::IPEndPoint LocalEndPoint, System::Net::IPEndPoint RemoteEndPoint, ::StringW Token) noexcept;


                    constexpr LiteNetLib__NatPunchModule__RequestEventData(LiteNetLib__NatPunchModule__RequestEventData const&) = default;
                    constexpr LiteNetLib__NatPunchModule__RequestEventData(LiteNetLib__NatPunchModule__RequestEventData&&) = default;
                    constexpr LiteNetLib__NatPunchModule__RequestEventData& operator=(LiteNetLib__NatPunchModule__RequestEventData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LiteNetLib__NatPunchModule__RequestEventData& operator=(LiteNetLib__NatPunchModule__RequestEventData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__NatPunchModule__RequestEventData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Net::IPEndPoint __declspec(property(get=__get_LocalEndPoint, put=__set_LocalEndPoint))  LocalEndPoint;

constexpr void __set_LocalEndPoint(System::Net::IPEndPoint value) ;

constexpr System::Net::IPEndPoint __get_LocalEndPoint() const;

 System::Net::IPEndPoint __declspec(property(get=__get_RemoteEndPoint, put=__set_RemoteEndPoint))  RemoteEndPoint;

constexpr void __set_RemoteEndPoint(System::Net::IPEndPoint value) ;

constexpr System::Net::IPEndPoint __get_RemoteEndPoint() const;

 ::StringW __declspec(property(get=__get_Token, put=__set_Token))  Token;

constexpr void __set_Token(::StringW value) ;

constexpr ::StringW __get_Token() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LiteNetLib
// Type: ::SuccessEventData
namespace LiteNetLib {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14431))
// CS Name: LiteNetLib.NatPunchModule::SuccessEventData
struct CORDL_TYPE LiteNetLib__NatPunchModule__SuccessEventData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "TargetEndPoint", ty: "System::Net::IPEndPoint", modifiers: "", def_value: None }, CppParam { name: "Type", ty: "LiteNetLib::NatAddressType", modifiers: "", def_value: None }, CppParam { name: "Token", ty: "::StringW", modifiers: "", def_value: None }]
constexpr LiteNetLib__NatPunchModule__SuccessEventData(System::Net::IPEndPoint TargetEndPoint, LiteNetLib::NatAddressType Type, ::StringW Token) noexcept;


                    constexpr LiteNetLib__NatPunchModule__SuccessEventData(LiteNetLib__NatPunchModule__SuccessEventData const&) = default;
                    constexpr LiteNetLib__NatPunchModule__SuccessEventData(LiteNetLib__NatPunchModule__SuccessEventData&&) = default;
                    constexpr LiteNetLib__NatPunchModule__SuccessEventData& operator=(LiteNetLib__NatPunchModule__SuccessEventData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr LiteNetLib__NatPunchModule__SuccessEventData& operator=(LiteNetLib__NatPunchModule__SuccessEventData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__NatPunchModule__SuccessEventData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Net::IPEndPoint __declspec(property(get=__get_TargetEndPoint, put=__set_TargetEndPoint))  TargetEndPoint;

constexpr void __set_TargetEndPoint(System::Net::IPEndPoint value) ;

constexpr System::Net::IPEndPoint __get_TargetEndPoint() const;

 LiteNetLib::NatAddressType __declspec(property(get=__get_Type, put=__set_Type))  Type;

constexpr void __set_Type(LiteNetLib::NatAddressType value) ;

constexpr LiteNetLib::NatAddressType __get_Type() const;

 ::StringW __declspec(property(get=__get_Token, put=__set_Token))  Token;

constexpr void __set_Token(::StringW value) ;

constexpr ::StringW __get_Token() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def LiteNetLib
// Type: ::NatIntroduceRequestPacket
namespace LiteNetLib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14432))
// CS Name: LiteNetLib.NatPunchModule::NatIntroduceRequestPacket
class CORDL_TYPE LiteNetLib__NatPunchModule__NatIntroduceRequestPacket : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LiteNetLib__NatPunchModule__NatIntroduceRequestPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__NatPunchModule__NatIntroduceRequestPacket", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__NatPunchModule__NatIntroduceRequestPacket(LiteNetLib__NatPunchModule__NatIntroduceRequestPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__NatPunchModule__NatIntroduceRequestPacket", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__NatPunchModule__NatIntroduceRequestPacket(LiteNetLib__NatPunchModule__NatIntroduceRequestPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__NatPunchModule__NatIntroduceRequestPacket(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LiteNetLib__NatPunchModule__NatIntroduceRequestPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__NatPunchModule__NatIntroduceRequestPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__NatPunchModule__NatIntroduceRequestPacket& operator=(LiteNetLib__NatPunchModule__NatIntroduceRequestPacket&& o) noexcept = default;
  constexpr LiteNetLib__NatPunchModule__NatIntroduceRequestPacket& operator=(LiteNetLib__NatPunchModule__NatIntroduceRequestPacket const& o) noexcept = default;
                


// Fields

 System::Net::IPEndPoint __declspec(property(get=__get__Internal_k__BackingField, put=__set__Internal_k__BackingField))  _Internal_k__BackingField;

constexpr void __set__Internal_k__BackingField(System::Net::IPEndPoint value) ;

constexpr System::Net::IPEndPoint __get__Internal_k__BackingField() const;

 ::StringW __declspec(property(get=__get__Token_k__BackingField, put=__set__Token_k__BackingField))  _Token_k__BackingField;

constexpr void __set__Token_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Token_k__BackingField() const;


// Properties

 System::Net::IPEndPoint __declspec(property(get=get_Internal, put=set_Internal))  Internal;

 ::StringW __declspec(property(get=get_Token, put=set_Token))  Token;


// Methods

/// @brief Method get_Internal addr 0x208860c size 0x8 virtual false final false
 System::Net::IPEndPoint get_Internal() ;

/// @brief Method set_Internal addr 0x2088614 size 0x8 virtual false final false
 void set_Internal(System::Net::IPEndPoint value) ;

/// @brief Method get_Token addr 0x208861c size 0x8 virtual false final false
 ::StringW get_Token() ;

/// @brief Method set_Token addr 0x2088624 size 0x8 virtual false final false
 void set_Token(::StringW value) ;

// Ctor Parameters []
explicit LiteNetLib__NatPunchModule__NatIntroduceRequestPacket() ;

/// @brief Method .ctor addr 0x2087eb8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
// Type: ::NatIntroduceResponsePacket
namespace LiteNetLib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14433))
// CS Name: LiteNetLib.NatPunchModule::NatIntroduceResponsePacket
class CORDL_TYPE LiteNetLib__NatPunchModule__NatIntroduceResponsePacket : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~LiteNetLib__NatPunchModule__NatIntroduceResponsePacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__NatPunchModule__NatIntroduceResponsePacket", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__NatPunchModule__NatIntroduceResponsePacket(LiteNetLib__NatPunchModule__NatIntroduceResponsePacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__NatPunchModule__NatIntroduceResponsePacket", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__NatPunchModule__NatIntroduceResponsePacket(LiteNetLib__NatPunchModule__NatIntroduceResponsePacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__NatPunchModule__NatIntroduceResponsePacket(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LiteNetLib__NatPunchModule__NatIntroduceResponsePacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__NatPunchModule__NatIntroduceResponsePacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__NatPunchModule__NatIntroduceResponsePacket& operator=(LiteNetLib__NatPunchModule__NatIntroduceResponsePacket&& o) noexcept = default;
  constexpr LiteNetLib__NatPunchModule__NatIntroduceResponsePacket& operator=(LiteNetLib__NatPunchModule__NatIntroduceResponsePacket const& o) noexcept = default;
                


// Fields

 System::Net::IPEndPoint __declspec(property(get=__get__Internal_k__BackingField, put=__set__Internal_k__BackingField))  _Internal_k__BackingField;

constexpr void __set__Internal_k__BackingField(System::Net::IPEndPoint value) ;

constexpr System::Net::IPEndPoint __get__Internal_k__BackingField() const;

 System::Net::IPEndPoint __declspec(property(get=__get__External_k__BackingField, put=__set__External_k__BackingField))  _External_k__BackingField;

constexpr void __set__External_k__BackingField(System::Net::IPEndPoint value) ;

constexpr System::Net::IPEndPoint __get__External_k__BackingField() const;

 ::StringW __declspec(property(get=__get__Token_k__BackingField, put=__set__Token_k__BackingField))  _Token_k__BackingField;

constexpr void __set__Token_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Token_k__BackingField() const;


// Properties

 System::Net::IPEndPoint __declspec(property(get=get_Internal, put=set_Internal))  Internal;

 System::Net::IPEndPoint __declspec(property(get=get_External, put=set_External))  External;

 ::StringW __declspec(property(get=get_Token, put=set_Token))  Token;


// Methods

/// @brief Method get_Internal addr 0x208862c size 0x8 virtual false final false
 System::Net::IPEndPoint get_Internal() ;

/// @brief Method set_Internal addr 0x2088634 size 0x8 virtual false final false
 void set_Internal(System::Net::IPEndPoint value) ;

/// @brief Method get_External addr 0x208863c size 0x8 virtual false final false
 System::Net::IPEndPoint get_External() ;

/// @brief Method set_External addr 0x2088644 size 0x8 virtual false final false
 void set_External(System::Net::IPEndPoint value) ;

/// @brief Method get_Token addr 0x208864c size 0x8 virtual false final false
 ::StringW get_Token() ;

/// @brief Method set_Token addr 0x2088654 size 0x8 virtual false final false
 void set_Token(::StringW value) ;

// Ctor Parameters []
explicit LiteNetLib__NatPunchModule__NatIntroduceResponsePacket() ;

/// @brief Method .ctor addr 0x20876e0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
// Type: ::NatPunchPacket
namespace LiteNetLib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14434))
// CS Name: LiteNetLib.NatPunchModule::NatPunchPacket
class CORDL_TYPE LiteNetLib__NatPunchModule__NatPunchPacket : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~LiteNetLib__NatPunchModule__NatPunchPacket() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__NatPunchModule__NatPunchPacket", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__NatPunchModule__NatPunchPacket(LiteNetLib__NatPunchModule__NatPunchPacket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__NatPunchModule__NatPunchPacket", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__NatPunchModule__NatPunchPacket(LiteNetLib__NatPunchModule__NatPunchPacket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__NatPunchModule__NatPunchPacket(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LiteNetLib__NatPunchModule__NatPunchPacket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__NatPunchModule__NatPunchPacket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__NatPunchModule__NatPunchPacket& operator=(LiteNetLib__NatPunchModule__NatPunchPacket&& o) noexcept = default;
  constexpr LiteNetLib__NatPunchModule__NatPunchPacket& operator=(LiteNetLib__NatPunchModule__NatPunchPacket const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Token_k__BackingField, put=__set__Token_k__BackingField))  _Token_k__BackingField;

constexpr void __set__Token_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Token_k__BackingField() const;

 bool __declspec(property(get=__get__IsExternal_k__BackingField, put=__set__IsExternal_k__BackingField))  _IsExternal_k__BackingField;

constexpr void __set__IsExternal_k__BackingField(bool value) ;

constexpr bool __get__IsExternal_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_Token, put=set_Token))  Token;

 bool __declspec(property(get=get_IsExternal, put=set_IsExternal))  IsExternal;


// Methods

/// @brief Method get_Token addr 0x208865c size 0x8 virtual false final false
 ::StringW get_Token() ;

/// @brief Method set_Token addr 0x2088664 size 0x8 virtual false final false
 void set_Token(::StringW value) ;

/// @brief Method get_IsExternal addr 0x208866c size 0x8 virtual false final false
 bool get_IsExternal() ;

/// @brief Method set_IsExternal addr 0x2088674 size 0xc virtual false final false
 void set_IsExternal(bool value) ;

// Ctor Parameters []
explicit LiteNetLib__NatPunchModule__NatPunchPacket() ;

/// @brief Method .ctor addr 0x2088138 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
// Type: LiteNetLib::NatPunchModule
namespace LiteNetLib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14435))
// CS Name: LiteNetLib.NatPunchModule
class CORDL_TYPE NatPunchModule : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using NatPunchPacket = LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket;

using NatIntroduceResponsePacket = LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket;

using NatIntroduceRequestPacket = LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket;

using SuccessEventData = LiteNetLib::LiteNetLib__NatPunchModule__SuccessEventData;

using RequestEventData = LiteNetLib::LiteNetLib__NatPunchModule__RequestEventData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~NatPunchModule() = default;

// Ctor Parameters [CppParam { name: "", ty: "NatPunchModule", modifiers: " const&", def_value: None }]
constexpr NatPunchModule(NatPunchModule const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NatPunchModule", modifiers: "&&", def_value: None }]
constexpr NatPunchModule(NatPunchModule&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NatPunchModule(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NatPunchModule& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NatPunchModule& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NatPunchModule& operator=(NatPunchModule&& o) noexcept = default;
  constexpr NatPunchModule& operator=(NatPunchModule const& o) noexcept = default;
                


// Fields

 LiteNetLib::NetSocket __declspec(property(get=__get__socket, put=__set__socket))  _socket;

constexpr void __set__socket(LiteNetLib::NetSocket value) ;

constexpr LiteNetLib::NetSocket __get__socket() const;

 System::Collections::Generic::Queue_1<LiteNetLib::LiteNetLib__NatPunchModule__RequestEventData> __declspec(property(get=__get__requestEvents, put=__set__requestEvents))  _requestEvents;

constexpr void __set__requestEvents(System::Collections::Generic::Queue_1<LiteNetLib::LiteNetLib__NatPunchModule__RequestEventData> value) ;

constexpr System::Collections::Generic::Queue_1<LiteNetLib::LiteNetLib__NatPunchModule__RequestEventData> __get__requestEvents() const;

 System::Collections::Generic::Queue_1<LiteNetLib::LiteNetLib__NatPunchModule__SuccessEventData> __declspec(property(get=__get__successEvents, put=__set__successEvents))  _successEvents;

constexpr void __set__successEvents(System::Collections::Generic::Queue_1<LiteNetLib::LiteNetLib__NatPunchModule__SuccessEventData> value) ;

constexpr System::Collections::Generic::Queue_1<LiteNetLib::LiteNetLib__NatPunchModule__SuccessEventData> __get__successEvents() const;

 LiteNetLib::Utils::NetDataReader __declspec(property(get=__get__cacheReader, put=__set__cacheReader))  _cacheReader;

constexpr void __set__cacheReader(LiteNetLib::Utils::NetDataReader value) ;

constexpr LiteNetLib::Utils::NetDataReader __get__cacheReader() const;

 LiteNetLib::Utils::NetDataWriter __declspec(property(get=__get__cacheWriter, put=__set__cacheWriter))  _cacheWriter;

constexpr void __set__cacheWriter(LiteNetLib::Utils::NetDataWriter value) ;

constexpr LiteNetLib::Utils::NetDataWriter __get__cacheWriter() const;

 LiteNetLib::Utils::NetPacketProcessor __declspec(property(get=__get__netPacketProcessor, put=__set__netPacketProcessor))  _netPacketProcessor;

constexpr void __set__netPacketProcessor(LiteNetLib::Utils::NetPacketProcessor value) ;

constexpr LiteNetLib::Utils::NetPacketProcessor __get__netPacketProcessor() const;

 LiteNetLib::INatPunchListener __declspec(property(get=__get__natPunchListener, put=__set__natPunchListener))  _natPunchListener;

constexpr void __set__natPunchListener(LiteNetLib::INatPunchListener value) ;

constexpr LiteNetLib::INatPunchListener __get__natPunchListener() const;

/// @brief Field MaxTokenLength offset 0
static constexpr int32_t  MaxTokenLength{256};


// Methods

// Ctor Parameters [CppParam { name: "socket", ty: "LiteNetLib::NetSocket", modifiers: "", def_value: None }]
explicit NatPunchModule(LiteNetLib::NetSocket socket) ;

/// @brief Method .ctor addr 0x2087218 size 0x2c4 virtual false final false
 void _ctor(LiteNetLib::NetSocket socket) ;

/// @brief Method ProcessMessage addr 0x20874f0 size 0x10c virtual false final false
 void ProcessMessage(System::Net::IPEndPoint senderEndPoint, LiteNetLib::NetPacket packet) ;

/// @brief Method Init addr 0x208760c size 0x8 virtual false final false
 void Init(LiteNetLib::INatPunchListener listener) ;

/// @brief Method Send addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void Send(T packet, System::Net::IPEndPoint target) ;

/// @brief Method NatIntroduce addr 0x2087614 size 0xcc virtual false final false
 void NatIntroduce(System::Net::IPEndPoint hostInternal, System::Net::IPEndPoint hostExternal, System::Net::IPEndPoint clientInternal, System::Net::IPEndPoint clientExternal, ::StringW additionalInfo) ;

/// @brief Method PollEvents addr 0x20876e8 size 0x36c virtual false final false
 void PollEvents() ;

/// @brief Method SendNatIntroduceRequest addr 0x2087a54 size 0x84 virtual false final false
 void SendNatIntroduceRequest(::StringW host, int32_t port, ::StringW additionalInfo) ;

/// @brief Method SendNatIntroduceRequest addr 0x2087b80 size 0x11c virtual false final false
 void SendNatIntroduceRequest(System::Net::IPEndPoint masterServerEndPoint, ::StringW additionalInfo) ;

/// @brief Method OnNatIntroductionRequest addr 0x2087ec0 size 0x120 virtual false final false
 void OnNatIntroductionRequest(LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket req, System::Net::IPEndPoint senderEndPoint) ;

/// @brief Method OnNatIntroductionResponse addr 0x2087fe0 size 0x158 virtual false final false
 void OnNatIntroductionResponse(LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket req) ;

/// @brief Method OnNatPunch addr 0x20884bc size 0x150 virtual false final false
 void OnNatPunch(LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket req, System::Net::IPEndPoint senderEndPoint) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
NEED_NO_BOX(LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceRequestPacket, "LiteNetLib", "NatPunchModule/NatIntroduceRequestPacket");
NEED_NO_BOX(LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::LiteNetLib__NatPunchModule__NatIntroduceResponsePacket, "LiteNetLib", "NatPunchModule/NatIntroduceResponsePacket");
NEED_NO_BOX(LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::LiteNetLib__NatPunchModule__NatPunchPacket, "LiteNetLib", "NatPunchModule/NatPunchPacket");
NEED_NO_BOX(LiteNetLib::NatPunchModule);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NatPunchModule, "LiteNetLib", "NatPunchModule");
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::LiteNetLib__NatPunchModule__RequestEventData, "LiteNetLib", "NatPunchModule/RequestEventData");
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::LiteNetLib__NatPunchModule__SuccessEventData, "LiteNetLib", "NatPunchModule/SuccessEventData");
