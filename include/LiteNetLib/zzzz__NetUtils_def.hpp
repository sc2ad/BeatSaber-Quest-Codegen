#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Net {
class IPAddress;
}
namespace System::Net {
class IPEndPoint;
}
namespace System::Net::Sockets {
struct AddressFamily;
}
namespace LiteNetLib {
struct LocalAddrType;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
// Forward declare root types
namespace LiteNetLib {
class NetUtils;
}
// Type: LiteNetLib::NetUtils
namespace LiteNetLib {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14464))
// CS Name: LiteNetLib.NetUtils
class CORDL_TYPE NetUtils : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NetUtils() = default;

// Ctor Parameters [CppParam { name: "", ty: "NetUtils", modifiers: " const&", def_value: None }]
constexpr NetUtils(NetUtils const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NetUtils", modifiers: "&&", def_value: None }]
constexpr NetUtils(NetUtils&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NetUtils(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NetUtils& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NetUtils& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NetUtils& operator=(NetUtils&& o) noexcept = default;
  constexpr NetUtils& operator=(NetUtils const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_IpList, put=__set_IpList))  IpList;

static void __set_IpList(System::Collections::Generic::List_1<::StringW> value) ;

static System::Collections::Generic::List_1<::StringW> __get_IpList() ;


// Methods

/// @brief Method MakeEndPoint addr 0x2087ad8 size 0xa8 virtual false final false
static System::Net::IPEndPoint MakeEndPoint(::StringW hostStr, int32_t port) ;

/// @brief Method ResolveAddress addr 0x208db3c size 0x1b8 virtual false final false
static System::Net::IPAddress ResolveAddress(::StringW hostStr) ;

/// @brief Method ResolveAddress addr 0x20927e8 size 0xcc virtual false final false
static System::Net::IPAddress ResolveAddress(::StringW hostStr, System::Net::Sockets::AddressFamily addressFamily) ;

/// @brief Method ResolveAddresses addr 0x20928b4 size 0x20 virtual false final false
static ::ArrayW<System::Net::IPAddress> ResolveAddresses(::StringW hostStr) ;

/// @brief Method GetLocalIpList addr 0x20928d4 size 0xa4 virtual false final false
static System::Collections::Generic::List_1<::StringW> GetLocalIpList(LiteNetLib::LocalAddrType addrType) ;

/// @brief Method GetLocalIpList addr 0x2092978 size 0x84c virtual false final false
static void GetLocalIpList(System::Collections::Generic::IList_1<::StringW> targetList, LiteNetLib::LocalAddrType addrType) ;

/// @brief Method GetLocalIp addr 0x2087c9c size 0x21c virtual false final false
static ::StringW GetLocalIp(LiteNetLib::LocalAddrType addrType) ;

/// @brief Method PrintInterfaceInfos addr 0x20931c4 size 0x41c virtual false final false
static void PrintInterfaceInfos() ;

/// @brief Method RelativeSequenceNumber addr 0x20913f4 size 0x2c virtual false final false
static int32_t RelativeSequenceNumber(int32_t number, int32_t expected) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def LiteNetLib
NEED_NO_BOX(LiteNetLib::NetUtils);
DEFINE_IL2CPP_ARG_TYPE(LiteNetLib::NetUtils, "LiteNetLib", "NetUtils");
