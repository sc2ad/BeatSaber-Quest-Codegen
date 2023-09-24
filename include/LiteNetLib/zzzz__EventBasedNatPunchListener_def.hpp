#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace LiteNetLib {
class INatPunchListener;
}
namespace System::Net {
class IPEndPoint;
}
namespace LiteNetLib {
class LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionSuccess;
}
namespace LiteNetLib {
class LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionRequest;
}
namespace LiteNetLib {
struct NatAddressType;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace LiteNetLib {
class EventBasedNatPunchListener;
}
namespace LiteNetLib {
class LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionRequest;
}
namespace LiteNetLib {
class LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionSuccess;
}
// Type: ::OnNatIntroductionRequest
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14427))
// CS Name: LiteNetLib.EventBasedNatPunchListener::OnNatIntroductionRequest
class CORDL_TYPE LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionRequest : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionRequest() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionRequest", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionRequest(LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionRequest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionRequest", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionRequest(LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionRequest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionRequest(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionRequest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionRequest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionRequest& operator=(LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionRequest&& o) noexcept = default;
  constexpr LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionRequest& operator=(LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionRequest const& o) noexcept = default;
                


// Methods

static LiteNetLib::LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionRequest New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2086eb4 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2086fe4 size 0x14 virtual true final false
 void Invoke(System::Net::IPEndPoint localEndPoint, System::Net::IPEndPoint remoteEndPoint, ::StringW token) ;

/// @brief Method BeginInvoke addr 0x2086ff8 size 0x2c virtual true final false
 System::IAsyncResult BeginInvoke(System::Net::IPEndPoint localEndPoint, System::Net::IPEndPoint remoteEndPoint, ::StringW token, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x2087024 size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
// Type: ::OnNatIntroductionSuccess
namespace LiteNetLib {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14428))
// CS Name: LiteNetLib.EventBasedNatPunchListener::OnNatIntroductionSuccess
class CORDL_TYPE LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionSuccess : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionSuccess() = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionSuccess", modifiers: " const&", def_value: None }]
constexpr LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionSuccess(LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionSuccess const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionSuccess", modifiers: "&&", def_value: None }]
constexpr LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionSuccess(LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionSuccess&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionSuccess(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionSuccess& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionSuccess& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionSuccess& operator=(LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionSuccess&& o) noexcept = default;
  constexpr LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionSuccess& operator=(LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionSuccess const& o) noexcept = default;
                


// Methods

static LiteNetLib::LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionSuccess New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2087030 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2087160 size 0x14 virtual true final false
 void Invoke(System::Net::IPEndPoint targetEndPoint, LiteNetLib::NatAddressType type, ::StringW token) ;

/// @brief Method BeginInvoke addr 0x2087174 size 0x98 virtual true final false
 System::IAsyncResult BeginInvoke(System::Net::IPEndPoint targetEndPoint, LiteNetLib::NatAddressType type, ::StringW token, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x208720c size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
// Type: LiteNetLib::EventBasedNatPunchListener
namespace LiteNetLib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14429))
// CS Name: LiteNetLib.EventBasedNatPunchListener
class CORDL_TYPE EventBasedNatPunchListener : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using OnNatIntroductionSuccess = LiteNetLib::LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionSuccess;

using OnNatIntroductionRequest = LiteNetLib::LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionRequest;

/// @brief Convert operator to LiteNetLib::INatPunchListener
constexpr operator  LiteNetLib::INatPunchListener() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~EventBasedNatPunchListener() = default;

// Ctor Parameters [CppParam { name: "", ty: "EventBasedNatPunchListener", modifiers: " const&", def_value: None }]
constexpr EventBasedNatPunchListener(EventBasedNatPunchListener const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EventBasedNatPunchListener", modifiers: "&&", def_value: None }]
constexpr EventBasedNatPunchListener(EventBasedNatPunchListener&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EventBasedNatPunchListener(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EventBasedNatPunchListener& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EventBasedNatPunchListener& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EventBasedNatPunchListener& operator=(EventBasedNatPunchListener&& o) noexcept = default;
  constexpr EventBasedNatPunchListener& operator=(EventBasedNatPunchListener const& o) noexcept = default;
                


// Fields

 LiteNetLib::LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionRequest __declspec(property(get=__get_NatIntroductionRequest, put=__set_NatIntroductionRequest))  NatIntroductionRequest;

constexpr void __set_NatIntroductionRequest(LiteNetLib::LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionRequest value) ;

constexpr LiteNetLib::LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionRequest __get_NatIntroductionRequest() const;

 LiteNetLib::LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionSuccess __declspec(property(get=__get_NatIntroductionSuccess, put=__set_NatIntroductionSuccess))  NatIntroductionSuccess;

constexpr void __set_NatIntroductionSuccess(LiteNetLib::LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionSuccess value) ;

constexpr LiteNetLib::LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionSuccess __get_NatIntroductionSuccess() const;


// Methods

/// @brief Method add_NatIntroductionRequest addr 0x2086c04 size 0x9c virtual false final false
 void add_NatIntroductionRequest(LiteNetLib::LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionRequest value) ;

/// @brief Method remove_NatIntroductionRequest addr 0x2086ca0 size 0x9c virtual false final false
 void remove_NatIntroductionRequest(LiteNetLib::LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionRequest value) ;

/// @brief Method add_NatIntroductionSuccess addr 0x2086d3c size 0x9c virtual false final false
 void add_NatIntroductionSuccess(LiteNetLib::LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionSuccess value) ;

/// @brief Method remove_NatIntroductionSuccess addr 0x2086dd8 size 0x9c virtual false final false
 void remove_NatIntroductionSuccess(LiteNetLib::LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionSuccess value) ;

/// @brief Method LiteNetLib.INatPunchListener.OnNatIntroductionRequest addr 0x2086e74 size 0x1c virtual true final true
 void LiteNetLib_INatPunchListener_OnNatIntroductionRequest(System::Net::IPEndPoint localEndPoint, System::Net::IPEndPoint remoteEndPoint, ::StringW token) ;

/// @brief Method LiteNetLib.INatPunchListener.OnNatIntroductionSuccess addr 0x2086e90 size 0x1c virtual true final true
 void LiteNetLib_INatPunchListener_OnNatIntroductionSuccess(System::Net::IPEndPoint targetEndPoint, LiteNetLib::NatAddressType type, ::StringW token) ;

static LiteNetLib::EventBasedNatPunchListener New_ctor() ;

/// @brief Method .ctor addr 0x2086eac size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
NEED_NO_BOX(LiteNetLib::EventBasedNatPunchListener);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::EventBasedNatPunchListener, "LiteNetLib", "EventBasedNatPunchListener");
NEED_NO_BOX(LiteNetLib::LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionRequest);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionRequest, "LiteNetLib", "EventBasedNatPunchListener/OnNatIntroductionRequest");
NEED_NO_BOX(LiteNetLib::LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionSuccess);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::LiteNetLib__EventBasedNatPunchListener__OnNatIntroductionSuccess, "LiteNetLib", "EventBasedNatPunchListener/OnNatIntroductionSuccess");
