#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Net {
class IPAddress;
}
// Forward declare root types
namespace System::Net {
class IPHostEntry;
}
// Type: System.Net::IPHostEntry
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7922))
// CS Name: System.Net.IPHostEntry
class CORDL_TYPE IPHostEntry : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~IPHostEntry() = default;

// Ctor Parameters [CppParam { name: "", ty: "IPHostEntry", modifiers: " const&", def_value: None }]
constexpr IPHostEntry(IPHostEntry const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IPHostEntry", modifiers: "&&", def_value: None }]
constexpr IPHostEntry(IPHostEntry&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPHostEntry(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr IPHostEntry& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IPHostEntry& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IPHostEntry& operator=(IPHostEntry&& o) noexcept = default;
  constexpr IPHostEntry& operator=(IPHostEntry const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_hostName, put=__set_hostName))  hostName;

constexpr void __set_hostName(::StringW value) ;

constexpr ::StringW __get_hostName() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_aliases, put=__set_aliases))  aliases;

constexpr void __set_aliases(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_aliases() const;

 ::ArrayW<System::Net::IPAddress> __declspec(property(get=__get_addressList, put=__set_addressList))  addressList;

constexpr void __set_addressList(::ArrayW<System::Net::IPAddress> value) ;

constexpr ::ArrayW<System::Net::IPAddress> __get_addressList() const;

 bool __declspec(property(get=__get_isTrustedHost, put=__set_isTrustedHost))  isTrustedHost;

constexpr void __set_isTrustedHost(bool value) ;

constexpr bool __get_isTrustedHost() const;


// Properties

 ::StringW __declspec(property(get=get_HostName, put=set_HostName))  HostName;

 ::ArrayW<::StringW> __declspec(property(put=set_Aliases))  Aliases;

 ::ArrayW<System::Net::IPAddress> __declspec(property(get=get_AddressList, put=set_AddressList))  AddressList;


// Methods

/// @brief Method get_HostName addr 0x280c01c size 0x8 virtual false final false
 ::StringW get_HostName() ;

/// @brief Method set_HostName addr 0x280c024 size 0x8 virtual false final false
 void set_HostName(::StringW value) ;

/// @brief Method set_Aliases addr 0x280c02c size 0x8 virtual false final false
 void set_Aliases(::ArrayW<::StringW> value) ;

/// @brief Method get_AddressList addr 0x280c034 size 0x8 virtual false final false
 ::ArrayW<System::Net::IPAddress> get_AddressList() ;

/// @brief Method set_AddressList addr 0x280c03c size 0x8 virtual false final false
 void set_AddressList(::ArrayW<System::Net::IPAddress> value) ;

// Ctor Parameters []
explicit IPHostEntry() ;

/// @brief Method .ctor addr 0x280c044 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::IPHostEntry);
DEFINE_IL2CPP_ARG_TYPE(System::Net::IPHostEntry, "System.Net", "IPHostEntry");
