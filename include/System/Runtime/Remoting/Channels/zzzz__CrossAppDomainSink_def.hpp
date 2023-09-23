#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Runtime::Remoting::Messaging {
class CADMethodCallMessage;
}
namespace System::Runtime::Remoting::Messaging {
class CADMethodReturnMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Channels {
class CrossAppDomainSink;
}
namespace System::Runtime::Remoting::Channels {
struct System__Runtime__Remoting__Channels__CrossAppDomainSink__ProcessMessageRes;
}
// Type: ::ProcessMessageRes
namespace System::Runtime::Remoting::Channels {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3113))
// CS Name: System.Runtime.Remoting.Channels.CrossAppDomainSink::ProcessMessageRes
struct CORDL_TYPE System__Runtime__Remoting__Channels__CrossAppDomainSink__ProcessMessageRes : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "arrResponse", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "cadMrm", ty: "System::Runtime::Remoting::Messaging::CADMethodReturnMessage", modifiers: "", def_value: None }]
constexpr System__Runtime__Remoting__Channels__CrossAppDomainSink__ProcessMessageRes(::ArrayW<uint8_t> arrResponse, System::Runtime::Remoting::Messaging::CADMethodReturnMessage cadMrm) noexcept;


                    constexpr System__Runtime__Remoting__Channels__CrossAppDomainSink__ProcessMessageRes(System__Runtime__Remoting__Channels__CrossAppDomainSink__ProcessMessageRes const&) = default;
                    constexpr System__Runtime__Remoting__Channels__CrossAppDomainSink__ProcessMessageRes(System__Runtime__Remoting__Channels__CrossAppDomainSink__ProcessMessageRes&&) = default;
                    constexpr System__Runtime__Remoting__Channels__CrossAppDomainSink__ProcessMessageRes& operator=(System__Runtime__Remoting__Channels__CrossAppDomainSink__ProcessMessageRes const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Runtime__Remoting__Channels__CrossAppDomainSink__ProcessMessageRes& operator=(System__Runtime__Remoting__Channels__CrossAppDomainSink__ProcessMessageRes&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Runtime__Remoting__Channels__CrossAppDomainSink__ProcessMessageRes(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_arrResponse, put=__set_arrResponse))  arrResponse;

constexpr void __set_arrResponse(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_arrResponse() const;

 System::Runtime::Remoting::Messaging::CADMethodReturnMessage __declspec(property(get=__get_cadMrm, put=__set_cadMrm))  cadMrm;

constexpr void __set_cadMrm(System::Runtime::Remoting::Messaging::CADMethodReturnMessage value) ;

constexpr System::Runtime::Remoting::Messaging::CADMethodReturnMessage __get_cadMrm() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Channels
// Type: System.Runtime.Remoting.Channels::CrossAppDomainSink
namespace System::Runtime::Remoting::Channels {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3114))
// CS Name: System.Runtime.Remoting.Channels.CrossAppDomainSink
class CORDL_TYPE CrossAppDomainSink : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ProcessMessageRes = System::Runtime::Remoting::Channels::System__Runtime__Remoting__Channels__CrossAppDomainSink__ProcessMessageRes;

/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMessageSink
constexpr operator  System::Runtime::Remoting::Messaging::IMessageSink() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CrossAppDomainSink() = default;

// Ctor Parameters [CppParam { name: "", ty: "CrossAppDomainSink", modifiers: " const&", def_value: None }]
constexpr CrossAppDomainSink(CrossAppDomainSink const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CrossAppDomainSink", modifiers: "&&", def_value: None }]
constexpr CrossAppDomainSink(CrossAppDomainSink&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CrossAppDomainSink(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CrossAppDomainSink& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CrossAppDomainSink& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CrossAppDomainSink& operator=(CrossAppDomainSink&& o) noexcept = default;
  constexpr CrossAppDomainSink& operator=(CrossAppDomainSink const& o) noexcept = default;
                


// Fields

static System::Collections::Hashtable __declspec(property(get=__get_s_sinks, put=__set_s_sinks))  s_sinks;

static void __set_s_sinks(System::Collections::Hashtable value) ;

static System::Collections::Hashtable __get_s_sinks() ;

static System::Reflection::MethodInfo __declspec(property(get=__get_processMessageMethod, put=__set_processMessageMethod))  processMessageMethod;

static void __set_processMessageMethod(System::Reflection::MethodInfo value) ;

static System::Reflection::MethodInfo __get_processMessageMethod() ;

 int32_t __declspec(property(get=__get__domainID, put=__set__domainID))  _domainID;

constexpr void __set__domainID(int32_t value) ;

constexpr int32_t __get__domainID() const;


// Properties

 int32_t __declspec(property(get=get_TargetDomainId))  TargetDomainId;


// Methods

// Ctor Parameters [CppParam { name: "domainID", ty: "int32_t", modifiers: "", def_value: None }]
explicit CrossAppDomainSink(int32_t domainID) ;

/// @brief Method .ctor addr 0x2337008 size 0x28 virtual false final false
 void _ctor(int32_t domainID) ;

/// @brief Method GetSink addr 0x2336cf0 size 0x2a0 virtual false final false
static System::Runtime::Remoting::Channels::CrossAppDomainSink GetSink(int32_t domainID) ;

/// @brief Method get_TargetDomainId addr 0x2337030 size 0x8 virtual false final false
 int32_t get_TargetDomainId() ;

/// @brief Method ProcessMessageInDomain addr 0x2337038 size 0x138 virtual false final false
static System::Runtime::Remoting::Channels::System__Runtime__Remoting__Channels__CrossAppDomainSink__ProcessMessageRes ProcessMessageInDomain(::ArrayW<uint8_t> arrRequest, System::Runtime::Remoting::Messaging::CADMethodCallMessage cadMsg) ;

/// @brief Method SyncProcessMessage addr 0x23372b0 size 0x434 virtual true final false
 System::Runtime::Remoting::Messaging::IMessage SyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage msgRequest) ;

/// @brief Method AsyncProcessMessage addr 0x23379f8 size 0xcc virtual true final false
 System::Runtime::Remoting::Messaging::IMessageCtrl AsyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage reqMsg, System::Runtime::Remoting::Messaging::IMessageSink replySink) ;

/// @brief Method SendAsyncMessage addr 0x2337af0 size 0x10c virtual false final false
 void SendAsyncMessage(::bs_hook::Il2CppWrapperType data) ;

/// @brief Method <AsyncProcessMessage>b__10_0 addr 0x2337cf8 size 0x80 virtual false final false
 void _AsyncProcessMessage_b__10_0(::bs_hook::Il2CppWrapperType data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Channels
NEED_NO_BOX(System::Runtime::Remoting::Channels::CrossAppDomainSink);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Channels::CrossAppDomainSink, "System.Runtime.Remoting.Channels", "CrossAppDomainSink");
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Channels::System__Runtime__Remoting__Channels__CrossAppDomainSink__ProcessMessageRes, "System.Runtime.Remoting.Channels", "CrossAppDomainSink/ProcessMessageRes");
