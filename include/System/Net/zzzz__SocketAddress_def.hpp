#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Net {
class IPAddress;
}
namespace System::Net::Sockets {
struct AddressFamily;
}
namespace System::Net {
class IPEndPoint;
}
// Forward declare root types
namespace System::Net {
class SocketAddress;
}
// Type: System.Net::SocketAddress
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7934))
// CS Name: System.Net.SocketAddress
class CORDL_TYPE SocketAddress : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SocketAddress() = default;

// Ctor Parameters [CppParam { name: "", ty: "SocketAddress", modifiers: " const&", def_value: None }]
constexpr SocketAddress(SocketAddress const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SocketAddress", modifiers: "&&", def_value: None }]
constexpr SocketAddress(SocketAddress&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SocketAddress(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SocketAddress& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SocketAddress& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SocketAddress& operator=(SocketAddress&& o) noexcept = default;
  constexpr SocketAddress& operator=(SocketAddress const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_Size, put=__set_m_Size))  m_Size;

constexpr void __set_m_Size(int32_t value) ;

constexpr int32_t __get_m_Size() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_m_Buffer, put=__set_m_Buffer))  m_Buffer;

constexpr void __set_m_Buffer(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_m_Buffer() const;

 bool __declspec(property(get=__get_m_changed, put=__set_m_changed))  m_changed;

constexpr void __set_m_changed(bool value) ;

constexpr bool __get_m_changed() const;

 int32_t __declspec(property(get=__get_m_hash, put=__set_m_hash))  m_hash;

constexpr void __set_m_hash(int32_t value) ;

constexpr int32_t __get_m_hash() const;


// Properties

 ::System::Net::Sockets::AddressFamily __declspec(property(get=get_Family))  Family;

 int32_t __declspec(property(get=get_Size))  Size;

 uint8_t __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method get_Family addr 0x280d5a0 size 0x38 virtual false final false
 ::System::Net::Sockets::AddressFamily get_Family() ;

/// @brief Method get_Size addr 0x280d5d8 size 0x8 virtual false final false
 int32_t get_Size() ;

/// @brief Method get_Item addr 0x280d5e0 size 0x7c virtual false final false
 uint8_t get_Item(int32_t offset) ;

// Ctor Parameters [CppParam { name: "family", ty: "::System::Net::Sockets::AddressFamily", modifiers: "", def_value: None }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }]
explicit SocketAddress(::System::Net::Sockets::AddressFamily family, int32_t size) ;

/// @brief Method .ctor addr 0x280d65c size 0x120 virtual false final false
 void _ctor(::System::Net::Sockets::AddressFamily family, int32_t size) ;

// Ctor Parameters [CppParam { name: "ipAddress", ty: "::System::Net::IPAddress", modifiers: "", def_value: None }]
explicit SocketAddress(::System::Net::IPAddress ipAddress) ;

/// @brief Method .ctor addr 0x280d77c size 0x288 virtual false final false
 void _ctor(::System::Net::IPAddress ipAddress) ;

// Ctor Parameters [CppParam { name: "ipaddress", ty: "::System::Net::IPAddress", modifiers: "", def_value: None }, CppParam { name: "port", ty: "int32_t", modifiers: "", def_value: None }]
explicit SocketAddress(::System::Net::IPAddress ipaddress, int32_t port) ;

/// @brief Method .ctor addr 0x280da04 size 0x5c virtual false final false
 void _ctor(::System::Net::IPAddress ipaddress, int32_t port) ;

/// @brief Method GetIPAddress addr 0x280da60 size 0x1f4 virtual false final false
 ::System::Net::IPAddress GetIPAddress() ;

/// @brief Method GetIPEndPoint addr 0x280dc54 size 0xa8 virtual false final false
 ::System::Net::IPEndPoint GetIPEndPoint() ;

/// @brief Method Equals addr 0x280dcfc size 0xec virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType comparand) ;

/// @brief Method GetHashCode addr 0x280dde8 size 0x130 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x280df18 size 0x2ec virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
} // end anonymous namespace
NEED_NO_BOX(::System::Net::SocketAddress);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::SocketAddress, "System.Net", "SocketAddress");
