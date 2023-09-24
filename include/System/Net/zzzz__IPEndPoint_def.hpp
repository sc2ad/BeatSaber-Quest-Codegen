#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Net/zzzz__EndPoint_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Net {
class SocketAddress;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net::Sockets {
struct AddressFamily;
}
namespace System::Net {
class EndPoint;
}
// Forward declare root types
namespace System::Net {
class IPEndPoint;
}
// Type: System.Net::IPEndPoint
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7912))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7883))
// CS Name: System.Net.IPEndPoint
class CORDL_TYPE IPEndPoint : public System::Net::EndPoint {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~IPEndPoint() = default;

// Ctor Parameters [CppParam { name: "", ty: "IPEndPoint", modifiers: " const&", def_value: None }]
constexpr IPEndPoint(IPEndPoint const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IPEndPoint", modifiers: "&&", def_value: None }]
constexpr IPEndPoint(IPEndPoint&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPEndPoint(void* ptr) noexcept : System::Net::EndPoint(ptr) {
}


  constexpr IPEndPoint& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IPEndPoint& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IPEndPoint& operator=(IPEndPoint&& o) noexcept = default;
  constexpr IPEndPoint& operator=(IPEndPoint const& o) noexcept = default;
                


// Fields

/// @brief Field MinPort offset 0
static constexpr int32_t  MinPort{0};

/// @brief Field MaxPort offset 0
static constexpr int32_t  MaxPort{65535};

 System::Net::IPAddress __declspec(property(get=__get__address, put=__set__address))  _address;

constexpr void __set__address(System::Net::IPAddress value) ;

constexpr System::Net::IPAddress __get__address() const;

 int32_t __declspec(property(get=__get__port, put=__set__port))  _port;

constexpr void __set__port(int32_t value) ;

constexpr int32_t __get__port() const;

/// @brief Field AnyPort offset 0
static constexpr int32_t  AnyPort{0};

static System::Net::IPEndPoint __declspec(property(get=__get_Any, put=__set_Any))  Any;

static void __set_Any(System::Net::IPEndPoint value) ;

static System::Net::IPEndPoint __get_Any() ;

static System::Net::IPEndPoint __declspec(property(get=__get_IPv6Any, put=__set_IPv6Any))  IPv6Any;

static void __set_IPv6Any(System::Net::IPEndPoint value) ;

static System::Net::IPEndPoint __get_IPv6Any() ;


// Properties

 System::Net::Sockets::AddressFamily __declspec(property(get=get_AddressFamily))  AddressFamily;

 System::Net::IPAddress __declspec(property(get=get_Address))  Address;

 int32_t __declspec(property(get=get_Port))  Port;


// Methods

/// @brief Method get_AddressFamily addr 0x27faf64 size 0x2c virtual true final false
 System::Net::Sockets::AddressFamily get_AddressFamily() ;

static System::Net::IPEndPoint New_ctor(System::Net::IPAddress address, int32_t port) ;

/// @brief Method .ctor addr 0x27faf90 size 0xc0 virtual false final false
 void _ctor(System::Net::IPAddress address, int32_t port) ;

/// @brief Method get_Address addr 0x27fb058 size 0x8 virtual false final false
 System::Net::IPAddress get_Address() ;

/// @brief Method get_Port addr 0x27fb060 size 0x8 virtual false final false
 int32_t get_Port() ;

/// @brief Method ToString addr 0x27fb068 size 0xc0 virtual true final false
 ::StringW ToString() ;

/// @brief Method Serialize addr 0x27fb128 size 0x70 virtual true final false
 System::Net::SocketAddress Serialize() ;

/// @brief Method Create addr 0x27fb198 size 0x1f4 virtual true final false
 System::Net::EndPoint Create(System::Net::SocketAddress socketAddress) ;

/// @brief Method Equals addr 0x27fb38c size 0xb4 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType comparand) ;

/// @brief Method GetHashCode addr 0x27fb440 size 0x30 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::IPEndPoint);
DEFINE_IL2CPP_ARG_TYPE(System::Net::IPEndPoint, "System.Net", "IPEndPoint");
