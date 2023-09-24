#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Net/NetworkInformation/zzzz__UnixIPGlobalProperties_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::Net::NetworkInformation {
class MibIPGlobalProperties;
}
// Type: System.Net.NetworkInformation::MibIPGlobalProperties
namespace System::Net::NetworkInformation {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8137))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8139))
// CS Name: System.Net.NetworkInformation.MibIPGlobalProperties
class CORDL_TYPE MibIPGlobalProperties : public System::Net::NetworkInformation::UnixIPGlobalProperties {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MibIPGlobalProperties() = default;

// Ctor Parameters [CppParam { name: "", ty: "MibIPGlobalProperties", modifiers: " const&", def_value: None }]
constexpr MibIPGlobalProperties(MibIPGlobalProperties const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MibIPGlobalProperties", modifiers: "&&", def_value: None }]
constexpr MibIPGlobalProperties(MibIPGlobalProperties&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MibIPGlobalProperties(void* ptr) noexcept : System::Net::NetworkInformation::UnixIPGlobalProperties(ptr) {
}


  constexpr MibIPGlobalProperties& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MibIPGlobalProperties& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MibIPGlobalProperties& operator=(MibIPGlobalProperties&& o) noexcept = default;
  constexpr MibIPGlobalProperties& operator=(MibIPGlobalProperties const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_StatisticsFile, put=__set_StatisticsFile))  StatisticsFile;

constexpr void __set_StatisticsFile(::StringW value) ;

constexpr ::StringW __get_StatisticsFile() const;

 ::StringW __declspec(property(get=__get_StatisticsFileIPv6, put=__set_StatisticsFileIPv6))  StatisticsFileIPv6;

constexpr void __set_StatisticsFileIPv6(::StringW value) ;

constexpr ::StringW __get_StatisticsFileIPv6() const;

 ::StringW __declspec(property(get=__get_TcpFile, put=__set_TcpFile))  TcpFile;

constexpr void __set_TcpFile(::StringW value) ;

constexpr ::StringW __get_TcpFile() const;

 ::StringW __declspec(property(get=__get_Tcp6File, put=__set_Tcp6File))  Tcp6File;

constexpr void __set_Tcp6File(::StringW value) ;

constexpr ::StringW __get_Tcp6File() const;

 ::StringW __declspec(property(get=__get_UdpFile, put=__set_UdpFile))  UdpFile;

constexpr void __set_UdpFile(::StringW value) ;

constexpr ::StringW __get_UdpFile() const;

 ::StringW __declspec(property(get=__get_Udp6File, put=__set_Udp6File))  Udp6File;

constexpr void __set_Udp6File(::StringW value) ;

constexpr ::StringW __get_Udp6File() const;

static ::ArrayW<char16_t> __declspec(property(get=__get_wsChars, put=__set_wsChars))  wsChars;

static void __set_wsChars(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_wsChars() ;


// Methods

static System::Net::NetworkInformation::MibIPGlobalProperties New_ctor(::StringW procDir) ;

/// @brief Method .ctor addr 0x285df68 size 0x168 virtual false final false
 void _ctor(::StringW procDir) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::NetworkInformation
NEED_NO_BOX(System::Net::NetworkInformation::MibIPGlobalProperties);
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::MibIPGlobalProperties, "System.Net.NetworkInformation", "MibIPGlobalProperties");
