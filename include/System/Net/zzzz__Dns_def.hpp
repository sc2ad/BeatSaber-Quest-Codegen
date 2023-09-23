#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class AsyncCallback;
}
namespace System::Net {
class IPAddress;
}
namespace System {
class IAsyncResult;
}
namespace System::Net {
class IPHostEntry;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace System::Net {
class Dns;
}
namespace System::Net {
class System__Net__Dns__GetHostAddressesCallback;
}
// Type: ::GetHostAddressesCallback
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8013))
// CS Name: System.Net.Dns::GetHostAddressesCallback
class CORDL_TYPE System__Net__Dns__GetHostAddressesCallback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~System__Net__Dns__GetHostAddressesCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Dns__GetHostAddressesCallback", modifiers: " const&", def_value: None }]
constexpr System__Net__Dns__GetHostAddressesCallback(System__Net__Dns__GetHostAddressesCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Dns__GetHostAddressesCallback", modifiers: "&&", def_value: None }]
constexpr System__Net__Dns__GetHostAddressesCallback(System__Net__Dns__GetHostAddressesCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__Dns__GetHostAddressesCallback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr System__Net__Dns__GetHostAddressesCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__Dns__GetHostAddressesCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__Dns__GetHostAddressesCallback& operator=(System__Net__Dns__GetHostAddressesCallback&& o) noexcept = default;
  constexpr System__Net__Dns__GetHostAddressesCallback& operator=(System__Net__Dns__GetHostAddressesCallback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit System__Net__Dns__GetHostAddressesCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x282d424 size 0xd4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x282e0d8 size 0x14 virtual true final false
 ::ArrayW<System::Net::IPAddress> Invoke(::StringW hostName) ;

/// @brief Method BeginInvoke addr 0x282d4f8 size 0x20 virtual true final false
 System::IAsyncResult BeginInvoke(::StringW hostName, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x282d624 size 0xc virtual true final false
 ::ArrayW<System::Net::IPAddress> EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
// Type: System.Net::Dns
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8014))
// CS Name: System.Net.Dns
class CORDL_TYPE Dns : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using GetHostAddressesCallback = System::Net::System__Net__Dns__GetHostAddressesCallback;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Dns() = default;

// Ctor Parameters [CppParam { name: "", ty: "Dns", modifiers: " const&", def_value: None }]
constexpr Dns(Dns const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Dns", modifiers: "&&", def_value: None }]
constexpr Dns(Dns&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Dns(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Dns& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Dns& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Dns& operator=(Dns&& o) noexcept = default;
  constexpr Dns& operator=(Dns const& o) noexcept = default;
                


// Methods

/// @brief Method BeginGetHostAddresses addr 0x282d294 size 0x190 virtual false final false
static System::IAsyncResult BeginGetHostAddresses(::StringW hostNameOrAddress, System::AsyncCallback requestCallback, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method EndGetHostAddresses addr 0x282d518 size 0x10c virtual false final false
static ::ArrayW<System::Net::IPAddress> EndGetHostAddresses(System::IAsyncResult asyncResult) ;

/// @brief Method GetHostByName_icall addr 0x282d630 size 0x4 virtual false final false
static bool GetHostByName_icall(::StringW host, ByRef<::StringW> h_name, ByRef<::ArrayW<::StringW>> h_aliases, ByRef<::ArrayW<::StringW>> h_addr_list, int32_t hint) ;

/// @brief Method GetHostByAddr_icall addr 0x282d634 size 0x4 virtual false final false
static bool GetHostByAddr_icall(::StringW addr, ByRef<::StringW> h_name, ByRef<::ArrayW<::StringW>> h_aliases, ByRef<::ArrayW<::StringW>> h_addr_list, int32_t hint) ;

/// @brief Method GetHostName_icall addr 0x282d638 size 0x4 virtual false final false
static bool GetHostName_icall(ByRef<::StringW> h_name) ;

/// @brief Method Error_11001 addr 0x282d63c size 0x6c virtual false final false
static void Error_11001(::StringW hostName) ;

/// @brief Method hostent_to_IPHostEntry addr 0x282d6a8 size 0x314 virtual false final false
static System::Net::IPHostEntry hostent_to_IPHostEntry(::StringW originalHostName, ::StringW h_name, ::ArrayW<::StringW> h_aliases, ::ArrayW<::StringW> h_addrlist) ;

/// @brief Method GetHostByAddressFromString addr 0x282d9bc size 0x12c virtual false final false
static System::Net::IPHostEntry GetHostByAddressFromString(::StringW address, bool parse) ;

/// @brief Method GetHostEntry addr 0x282dae8 size 0x174 virtual false final false
static System::Net::IPHostEntry GetHostEntry(::StringW hostNameOrAddress) ;

/// @brief Method GetHostEntry addr 0x282dc5c size 0x6c virtual false final false
static System::Net::IPHostEntry GetHostEntry(System::Net::IPAddress address) ;

/// @brief Method GetHostAddresses addr 0x282ddb4 size 0x1dc virtual false final false
static ::ArrayW<System::Net::IPAddress> GetHostAddresses(::StringW hostNameOrAddress) ;

/// @brief Method GetHostByName addr 0x282dcc8 size 0xec virtual false final false
static System::Net::IPHostEntry GetHostByName(::StringW hostName) ;

/// @brief Method GetHostName addr 0x282df90 size 0x2c virtual false final false
static ::StringW GetHostName() ;

/// @brief Method GetHostAddressesAsync addr 0x282dfbc size 0x11c virtual false final false
static System::Threading::Tasks::Task_1<::ArrayW<System::Net::IPAddress>> GetHostAddressesAsync(::StringW hostNameOrAddress) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::Dns);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Dns, "System.Net", "Dns");
NEED_NO_BOX(System::Net::System__Net__Dns__GetHostAddressesCallback);
DEFINE_IL2CPP_ARG_TYPE(System::Net::System__Net__Dns__GetHostAddressesCallback, "System.Net", "Dns/GetHostAddressesCallback");
