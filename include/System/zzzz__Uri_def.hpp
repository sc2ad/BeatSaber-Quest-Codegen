#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
class UriParser;
}
namespace System {
struct UriIdnScope;
}
namespace System {
struct UriFormat;
}
namespace System {
class UriFormatException;
}
namespace System {
struct System__Uri__Offset;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
struct ParsingError;
}
namespace System {
struct System__Uri__Flags;
}
namespace System {
struct UriKind;
}
namespace System {
class System__Uri__UriInfo;
}
namespace System {
class System__Uri__MoreInfo;
}
namespace System {
struct UriHostNameType;
}
namespace System {
struct UriComponents;
}
namespace System {
struct System__Uri__Check;
}
// Forward declare root types
namespace System {
struct System__Uri__Check;
}
namespace System {
struct System__Uri__Flags;
}
namespace System {
class System__Uri__MoreInfo;
}
namespace System {
class System__Uri__UriInfo;
}
namespace System {
class Uri;
}
namespace System {
struct System__Uri__Offset;
}
// Type: ::Flags
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7721))
// CS Name: System.Uri::Flags
struct CORDL_TYPE System__Uri__Flags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: None }]
constexpr System__Uri__Flags(uint64_t value__) noexcept;


                    constexpr System__Uri__Flags(System__Uri__Flags const&) = default;
                    constexpr System__Uri__Flags(System__Uri__Flags&&) = default;
                    constexpr System__Uri__Flags& operator=(System__Uri__Flags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Uri__Flags& operator=(System__Uri__Flags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Uri__Flags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Uri__Flags_Unwrapped : uint64_t {
__Zero = 0u,
__SchemeNotCanonical = 1u,
__UserNotCanonical = 2u,
__HostNotCanonical = 4u,
__PortNotCanonical = 8u,
__PathNotCanonical = 16u,
__QueryNotCanonical = 32u,
__FragmentNotCanonical = 64u,
__CannotDisplayCanonical = 127u,
__E_UserNotCanonical = 128u,
__E_HostNotCanonical = 256u,
__E_PortNotCanonical = 512u,
__E_PathNotCanonical = 1024u,
__E_QueryNotCanonical = 2048u,
__E_FragmentNotCanonical = 4096u,
__E_CannotDisplayCanonical = 8064u,
__ShouldBeCompressed = 8192u,
__FirstSlashAbsent = 16384u,
__BackslashInPath = 32768u,
__IndexMask = 65535u,
__HostTypeMask = 458752u,
__HostNotParsed = 0u,
__IPv6HostType = 65536u,
__IPv4HostType = 131072u,
__DnsHostType = 196608u,
__UncHostType = 262144u,
__BasicHostType = 327680u,
__UnusedHostType = 393216u,
__UnknownHostType = 458752u,
__UserEscaped = 524288u,
__AuthorityFound = 1048576u,
__HasUserInfo = 2097152u,
__LoopbackHost = 4194304u,
__NotDefaultPort = 8388608u,
__UserDrivenParsing = 16777216u,
__CanonicalDnsHost = 33554432u,
__ErrorOrParsingRecursion = 67108864u,
__DosPath = 134217728u,
__UncPath = 268435456u,
__ImplicitFile = 536870912u,
__MinimalUriInfoSet = 1073741824u,
__AllUriInfoSet = 2147483648u,
__IdnHost = 4294967296u,
__HasUnicode = 8589934592u,
__HostUnicodeNormalized = 17179869184u,
__RestUnicodeNormalized = 34359738368u,
__UnicodeHost = 68719476736u,
__IntranetUri = 137438953472u,
__UseOrigUncdStrOffset = 274877906944u,
__UserIriCanonical = 549755813888u,
__PathIriCanonical = 1099511627776u,
__QueryIriCanonical = 2199023255552u,
__FragmentIriCanonical = 4398046511104u,
__IriCanonical = 8246337208320u,
__CompressedSlashes = 17592186044416u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Uri__Flags_Unwrapped () const noexcept {
return std::bit_cast<__System__Uri__Flags_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = uint64_t;


// Fields

 uint64_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint64_t value) ;

constexpr uint64_t __get_value__() const;

/// @brief Field Zero offset 0
static System::System__Uri__Flags const Zero;

/// @brief Field SchemeNotCanonical offset 0
static System::System__Uri__Flags const SchemeNotCanonical;

/// @brief Field UserNotCanonical offset 0
static System::System__Uri__Flags const UserNotCanonical;

/// @brief Field HostNotCanonical offset 0
static System::System__Uri__Flags const HostNotCanonical;

/// @brief Field PortNotCanonical offset 0
static System::System__Uri__Flags const PortNotCanonical;

/// @brief Field PathNotCanonical offset 0
static System::System__Uri__Flags const PathNotCanonical;

/// @brief Field QueryNotCanonical offset 0
static System::System__Uri__Flags const QueryNotCanonical;

/// @brief Field FragmentNotCanonical offset 0
static System::System__Uri__Flags const FragmentNotCanonical;

/// @brief Field CannotDisplayCanonical offset 0
static System::System__Uri__Flags const CannotDisplayCanonical;

/// @brief Field E_UserNotCanonical offset 0
static System::System__Uri__Flags const E_UserNotCanonical;

/// @brief Field E_HostNotCanonical offset 0
static System::System__Uri__Flags const E_HostNotCanonical;

/// @brief Field E_PortNotCanonical offset 0
static System::System__Uri__Flags const E_PortNotCanonical;

/// @brief Field E_PathNotCanonical offset 0
static System::System__Uri__Flags const E_PathNotCanonical;

/// @brief Field E_QueryNotCanonical offset 0
static System::System__Uri__Flags const E_QueryNotCanonical;

/// @brief Field E_FragmentNotCanonical offset 0
static System::System__Uri__Flags const E_FragmentNotCanonical;

/// @brief Field E_CannotDisplayCanonical offset 0
static System::System__Uri__Flags const E_CannotDisplayCanonical;

/// @brief Field ShouldBeCompressed offset 0
static System::System__Uri__Flags const ShouldBeCompressed;

/// @brief Field FirstSlashAbsent offset 0
static System::System__Uri__Flags const FirstSlashAbsent;

/// @brief Field BackslashInPath offset 0
static System::System__Uri__Flags const BackslashInPath;

/// @brief Field IndexMask offset 0
static System::System__Uri__Flags const IndexMask;

/// @brief Field HostTypeMask offset 0
static System::System__Uri__Flags const HostTypeMask;

/// @brief Field HostNotParsed offset 0
static System::System__Uri__Flags const HostNotParsed;

/// @brief Field IPv6HostType offset 0
static System::System__Uri__Flags const IPv6HostType;

/// @brief Field IPv4HostType offset 0
static System::System__Uri__Flags const IPv4HostType;

/// @brief Field DnsHostType offset 0
static System::System__Uri__Flags const DnsHostType;

/// @brief Field UncHostType offset 0
static System::System__Uri__Flags const UncHostType;

/// @brief Field BasicHostType offset 0
static System::System__Uri__Flags const BasicHostType;

/// @brief Field UnusedHostType offset 0
static System::System__Uri__Flags const UnusedHostType;

/// @brief Field UnknownHostType offset 0
static System::System__Uri__Flags const UnknownHostType;

/// @brief Field UserEscaped offset 0
static System::System__Uri__Flags const UserEscaped;

/// @brief Field AuthorityFound offset 0
static System::System__Uri__Flags const AuthorityFound;

/// @brief Field HasUserInfo offset 0
static System::System__Uri__Flags const HasUserInfo;

/// @brief Field LoopbackHost offset 0
static System::System__Uri__Flags const LoopbackHost;

/// @brief Field NotDefaultPort offset 0
static System::System__Uri__Flags const NotDefaultPort;

/// @brief Field UserDrivenParsing offset 0
static System::System__Uri__Flags const UserDrivenParsing;

/// @brief Field CanonicalDnsHost offset 0
static System::System__Uri__Flags const CanonicalDnsHost;

/// @brief Field ErrorOrParsingRecursion offset 0
static System::System__Uri__Flags const ErrorOrParsingRecursion;

/// @brief Field DosPath offset 0
static System::System__Uri__Flags const DosPath;

/// @brief Field UncPath offset 0
static System::System__Uri__Flags const UncPath;

/// @brief Field ImplicitFile offset 0
static System::System__Uri__Flags const ImplicitFile;

/// @brief Field MinimalUriInfoSet offset 0
static System::System__Uri__Flags const MinimalUriInfoSet;

/// @brief Field AllUriInfoSet offset 0
static System::System__Uri__Flags const AllUriInfoSet;

/// @brief Field IdnHost offset 0
static System::System__Uri__Flags const IdnHost;

/// @brief Field HasUnicode offset 0
static System::System__Uri__Flags const HasUnicode;

/// @brief Field HostUnicodeNormalized offset 0
static System::System__Uri__Flags const HostUnicodeNormalized;

/// @brief Field RestUnicodeNormalized offset 0
static System::System__Uri__Flags const RestUnicodeNormalized;

/// @brief Field UnicodeHost offset 0
static System::System__Uri__Flags const UnicodeHost;

/// @brief Field IntranetUri offset 0
static System::System__Uri__Flags const IntranetUri;

/// @brief Field UseOrigUncdStrOffset offset 0
static System::System__Uri__Flags const UseOrigUncdStrOffset;

/// @brief Field UserIriCanonical offset 0
static System::System__Uri__Flags const UserIriCanonical;

/// @brief Field PathIriCanonical offset 0
static System::System__Uri__Flags const PathIriCanonical;

/// @brief Field QueryIriCanonical offset 0
static System::System__Uri__Flags const QueryIriCanonical;

/// @brief Field FragmentIriCanonical offset 0
static System::System__Uri__Flags const FragmentIriCanonical;

/// @brief Field IriCanonical offset 0
static System::System__Uri__Flags const IriCanonical;

/// @brief Field CompressedSlashes offset 0
static System::System__Uri__Flags const CompressedSlashes;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: ::UriInfo
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7722))
// CS Name: System.Uri::UriInfo
class CORDL_TYPE System__Uri__UriInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~System__Uri__UriInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Uri__UriInfo", modifiers: " const&", def_value: None }]
constexpr System__Uri__UriInfo(System__Uri__UriInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Uri__UriInfo", modifiers: "&&", def_value: None }]
constexpr System__Uri__UriInfo(System__Uri__UriInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Uri__UriInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Uri__UriInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Uri__UriInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Uri__UriInfo& operator=(System__Uri__UriInfo&& o) noexcept = default;
  constexpr System__Uri__UriInfo& operator=(System__Uri__UriInfo const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_Host, put=__set_Host))  Host;

constexpr void __set_Host(::StringW value) ;

constexpr ::StringW __get_Host() const;

 ::StringW __declspec(property(get=__get_ScopeId, put=__set_ScopeId))  ScopeId;

constexpr void __set_ScopeId(::StringW value) ;

constexpr ::StringW __get_ScopeId() const;

 ::StringW __declspec(property(get=__get_String, put=__set_String))  String;

constexpr void __set_String(::StringW value) ;

constexpr ::StringW __get_String() const;

 System::System__Uri__Offset __declspec(property(get=__get_Offset, put=__set_Offset))  Offset;

constexpr void __set_Offset(System::System__Uri__Offset value) ;

constexpr System::System__Uri__Offset __get_Offset() const;

 ::StringW __declspec(property(get=__get_DnsSafeHost, put=__set_DnsSafeHost))  DnsSafeHost;

constexpr void __set_DnsSafeHost(::StringW value) ;

constexpr ::StringW __get_DnsSafeHost() const;

 System::System__Uri__MoreInfo __declspec(property(get=__get_MoreInfo, put=__set_MoreInfo))  MoreInfo;

constexpr void __set_MoreInfo(System::System__Uri__MoreInfo value) ;

constexpr System::System__Uri__MoreInfo __get_MoreInfo() const;


// Methods

static System::System__Uri__UriInfo New_ctor() ;

/// @brief Method .ctor addr 0x27b8014 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: ::Offset
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7723))
// CS Name: System.Uri::Offset
struct CORDL_TYPE System__Uri__Offset : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Scheme", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "User", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "Host", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "PortValue", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "Path", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "Query", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "Fragment", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "End", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr System__Uri__Offset(uint16_t Scheme, uint16_t User, uint16_t Host, uint16_t PortValue, uint16_t Path, uint16_t Query, uint16_t Fragment, uint16_t End) noexcept;


                    constexpr System__Uri__Offset(System__Uri__Offset const&) = default;
                    constexpr System__Uri__Offset(System__Uri__Offset&&) = default;
                    constexpr System__Uri__Offset& operator=(System__Uri__Offset const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Uri__Offset& operator=(System__Uri__Offset&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Uri__Offset(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint16_t __declspec(property(get=__get_Scheme, put=__set_Scheme))  Scheme;

constexpr void __set_Scheme(uint16_t value) ;

constexpr uint16_t __get_Scheme() const;

 uint16_t __declspec(property(get=__get_User, put=__set_User))  User;

constexpr void __set_User(uint16_t value) ;

constexpr uint16_t __get_User() const;

 uint16_t __declspec(property(get=__get_Host, put=__set_Host))  Host;

constexpr void __set_Host(uint16_t value) ;

constexpr uint16_t __get_Host() const;

 uint16_t __declspec(property(get=__get_PortValue, put=__set_PortValue))  PortValue;

constexpr void __set_PortValue(uint16_t value) ;

constexpr uint16_t __get_PortValue() const;

 uint16_t __declspec(property(get=__get_Path, put=__set_Path))  Path;

constexpr void __set_Path(uint16_t value) ;

constexpr uint16_t __get_Path() const;

 uint16_t __declspec(property(get=__get_Query, put=__set_Query))  Query;

constexpr void __set_Query(uint16_t value) ;

constexpr uint16_t __get_Query() const;

 uint16_t __declspec(property(get=__get_Fragment, put=__set_Fragment))  Fragment;

constexpr void __set_Fragment(uint16_t value) ;

constexpr uint16_t __get_Fragment() const;

 uint16_t __declspec(property(get=__get_End, put=__set_End))  End;

constexpr void __set_End(uint16_t value) ;

constexpr uint16_t __get_End() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: ::MoreInfo
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7724))
// CS Name: System.Uri::MoreInfo
class CORDL_TYPE System__Uri__MoreInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~System__Uri__MoreInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Uri__MoreInfo", modifiers: " const&", def_value: None }]
constexpr System__Uri__MoreInfo(System__Uri__MoreInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Uri__MoreInfo", modifiers: "&&", def_value: None }]
constexpr System__Uri__MoreInfo(System__Uri__MoreInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Uri__MoreInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Uri__MoreInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Uri__MoreInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Uri__MoreInfo& operator=(System__Uri__MoreInfo&& o) noexcept = default;
  constexpr System__Uri__MoreInfo& operator=(System__Uri__MoreInfo const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_Path, put=__set_Path))  Path;

constexpr void __set_Path(::StringW value) ;

constexpr ::StringW __get_Path() const;

 ::StringW __declspec(property(get=__get_Query, put=__set_Query))  Query;

constexpr void __set_Query(::StringW value) ;

constexpr ::StringW __get_Query() const;

 ::StringW __declspec(property(get=__get_Fragment, put=__set_Fragment))  Fragment;

constexpr void __set_Fragment(::StringW value) ;

constexpr ::StringW __get_Fragment() const;

 ::StringW __declspec(property(get=__get_AbsoluteUri, put=__set_AbsoluteUri))  AbsoluteUri;

constexpr void __set_AbsoluteUri(::StringW value) ;

constexpr ::StringW __get_AbsoluteUri() const;

 int32_t __declspec(property(get=__get_Hash, put=__set_Hash))  Hash;

constexpr void __set_Hash(int32_t value) ;

constexpr int32_t __get_Hash() const;

 ::StringW __declspec(property(get=__get_RemoteUrl, put=__set_RemoteUrl))  RemoteUrl;

constexpr void __set_RemoteUrl(::StringW value) ;

constexpr ::StringW __get_RemoteUrl() const;


// Methods

static System::System__Uri__MoreInfo New_ctor() ;

/// @brief Method .ctor addr 0x27b801c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: ::Check
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7725))
// CS Name: System.Uri::Check
struct CORDL_TYPE System__Uri__Check : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__Uri__Check(int32_t value__) noexcept;


                    constexpr System__Uri__Check(System__Uri__Check const&) = default;
                    constexpr System__Uri__Check(System__Uri__Check&&) = default;
                    constexpr System__Uri__Check& operator=(System__Uri__Check const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Uri__Check& operator=(System__Uri__Check&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Uri__Check(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__Uri__Check_Unwrapped : int32_t {
__None = 0,
__EscapedCanonical = 1,
__DisplayCanonical = 2,
__DotSlashAttn = 4,
__DotSlashEscaped = 128,
__BackslashInPath = 16,
__ReservedFound = 32,
__NotIriCanonical = 64,
__FoundNonAscii = 8,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__Uri__Check_Unwrapped () const noexcept {
return std::bit_cast<__System__Uri__Check_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::System__Uri__Check const None;

/// @brief Field EscapedCanonical offset 0
static System::System__Uri__Check const EscapedCanonical;

/// @brief Field DisplayCanonical offset 0
static System::System__Uri__Check const DisplayCanonical;

/// @brief Field DotSlashAttn offset 0
static System::System__Uri__Check const DotSlashAttn;

/// @brief Field DotSlashEscaped offset 0
static System::System__Uri__Check const DotSlashEscaped;

/// @brief Field BackslashInPath offset 0
static System::System__Uri__Check const BackslashInPath;

/// @brief Field ReservedFound offset 0
static System::System__Uri__Check const ReservedFound;

/// @brief Field NotIriCanonical offset 0
static System::System__Uri__Check const NotIriCanonical;

/// @brief Field FoundNonAscii offset 0
static System::System__Uri__Check const FoundNonAscii;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::Uri
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7726))
// CS Name: System.Uri
class CORDL_TYPE Uri : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Check = System::System__Uri__Check;

using MoreInfo = System::System__Uri__MoreInfo;

using Offset = System::System__Uri__Offset;

using UriInfo = System::System__Uri__UriInfo;

using Flags = System::System__Uri__Flags;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~Uri() = default;

// Ctor Parameters [CppParam { name: "", ty: "Uri", modifiers: " const&", def_value: None }]
constexpr Uri(Uri const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Uri", modifiers: "&&", def_value: None }]
constexpr Uri(Uri&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Uri(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Uri& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Uri& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Uri& operator=(Uri&& o) noexcept = default;
  constexpr Uri& operator=(Uri const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_UriSchemeFile, put=__set_UriSchemeFile))  UriSchemeFile;

static void __set_UriSchemeFile(::StringW value) ;

static ::StringW __get_UriSchemeFile() ;

static ::StringW __declspec(property(get=__get_UriSchemeFtp, put=__set_UriSchemeFtp))  UriSchemeFtp;

static void __set_UriSchemeFtp(::StringW value) ;

static ::StringW __get_UriSchemeFtp() ;

static ::StringW __declspec(property(get=__get_UriSchemeGopher, put=__set_UriSchemeGopher))  UriSchemeGopher;

static void __set_UriSchemeGopher(::StringW value) ;

static ::StringW __get_UriSchemeGopher() ;

static ::StringW __declspec(property(get=__get_UriSchemeHttp, put=__set_UriSchemeHttp))  UriSchemeHttp;

static void __set_UriSchemeHttp(::StringW value) ;

static ::StringW __get_UriSchemeHttp() ;

static ::StringW __declspec(property(get=__get_UriSchemeHttps, put=__set_UriSchemeHttps))  UriSchemeHttps;

static void __set_UriSchemeHttps(::StringW value) ;

static ::StringW __get_UriSchemeHttps() ;

static ::StringW __declspec(property(get=__get_UriSchemeWs, put=__set_UriSchemeWs))  UriSchemeWs;

static void __set_UriSchemeWs(::StringW value) ;

static ::StringW __get_UriSchemeWs() ;

static ::StringW __declspec(property(get=__get_UriSchemeWss, put=__set_UriSchemeWss))  UriSchemeWss;

static void __set_UriSchemeWss(::StringW value) ;

static ::StringW __get_UriSchemeWss() ;

static ::StringW __declspec(property(get=__get_UriSchemeMailto, put=__set_UriSchemeMailto))  UriSchemeMailto;

static void __set_UriSchemeMailto(::StringW value) ;

static ::StringW __get_UriSchemeMailto() ;

static ::StringW __declspec(property(get=__get_UriSchemeNews, put=__set_UriSchemeNews))  UriSchemeNews;

static void __set_UriSchemeNews(::StringW value) ;

static ::StringW __get_UriSchemeNews() ;

static ::StringW __declspec(property(get=__get_UriSchemeNntp, put=__set_UriSchemeNntp))  UriSchemeNntp;

static void __set_UriSchemeNntp(::StringW value) ;

static ::StringW __get_UriSchemeNntp() ;

static ::StringW __declspec(property(get=__get_UriSchemeNetTcp, put=__set_UriSchemeNetTcp))  UriSchemeNetTcp;

static void __set_UriSchemeNetTcp(::StringW value) ;

static ::StringW __get_UriSchemeNetTcp() ;

static ::StringW __declspec(property(get=__get_UriSchemeNetPipe, put=__set_UriSchemeNetPipe))  UriSchemeNetPipe;

static void __set_UriSchemeNetPipe(::StringW value) ;

static ::StringW __get_UriSchemeNetPipe() ;

static ::StringW __declspec(property(get=__get_SchemeDelimiter, put=__set_SchemeDelimiter))  SchemeDelimiter;

static void __set_SchemeDelimiter(::StringW value) ;

static ::StringW __get_SchemeDelimiter() ;

/// @brief Field c_Max16BitUtf8SequenceLength offset 0
static constexpr int32_t  c_Max16BitUtf8SequenceLength{12};

/// @brief Field c_MaxUriBufferSize offset 0
static constexpr int32_t  c_MaxUriBufferSize{65520};

/// @brief Field c_MaxUriSchemeName offset 0
static constexpr int32_t  c_MaxUriSchemeName{1024};

 ::StringW __declspec(property(get=__get_m_String, put=__set_m_String))  m_String;

constexpr void __set_m_String(::StringW value) ;

constexpr ::StringW __get_m_String() const;

 ::StringW __declspec(property(get=__get_m_originalUnicodeString, put=__set_m_originalUnicodeString))  m_originalUnicodeString;

constexpr void __set_m_originalUnicodeString(::StringW value) ;

constexpr ::StringW __get_m_originalUnicodeString() const;

 System::UriParser __declspec(property(get=__get_m_Syntax, put=__set_m_Syntax))  m_Syntax;

constexpr void __set_m_Syntax(System::UriParser value) ;

constexpr System::UriParser __get_m_Syntax() const;

 ::StringW __declspec(property(get=__get_m_DnsSafeHost, put=__set_m_DnsSafeHost))  m_DnsSafeHost;

constexpr void __set_m_DnsSafeHost(::StringW value) ;

constexpr ::StringW __get_m_DnsSafeHost() const;

 System::System__Uri__Flags __declspec(property(get=__get_m_Flags, put=__set_m_Flags))  m_Flags;

constexpr void __set_m_Flags(System::System__Uri__Flags value) ;

constexpr System::System__Uri__Flags __get_m_Flags() const;

 System::System__Uri__UriInfo __declspec(property(get=__get_m_Info, put=__set_m_Info))  m_Info;

constexpr void __set_m_Info(System::System__Uri__UriInfo value) ;

constexpr System::System__Uri__UriInfo __get_m_Info() const;

 bool __declspec(property(get=__get_m_iriParsing, put=__set_m_iriParsing))  m_iriParsing;

constexpr void __set_m_iriParsing(bool value) ;

constexpr bool __get_m_iriParsing() const;

static bool __declspec(property(get=__get_s_ConfigInitialized, put=__set_s_ConfigInitialized))  s_ConfigInitialized;

static void __set_s_ConfigInitialized(bool value) ;

static bool __get_s_ConfigInitialized() ;

static bool __declspec(property(get=__get_s_ConfigInitializing, put=__set_s_ConfigInitializing))  s_ConfigInitializing;

static void __set_s_ConfigInitializing(bool value) ;

static bool __get_s_ConfigInitializing() ;

static System::UriIdnScope __declspec(property(get=__get_s_IdnScope, put=__set_s_IdnScope))  s_IdnScope;

static void __set_s_IdnScope(System::UriIdnScope value) ;

static System::UriIdnScope __get_s_IdnScope() ;

static bool __declspec(property(get=__get_s_IriParsing, put=__set_s_IriParsing))  s_IriParsing;

static void __set_s_IriParsing(bool value) ;

static bool __get_s_IriParsing() ;

static bool __declspec(property(get=__get_useDotNetRelativeOrAbsolute, put=__set_useDotNetRelativeOrAbsolute))  useDotNetRelativeOrAbsolute;

static void __set_useDotNetRelativeOrAbsolute(bool value) ;

static bool __get_useDotNetRelativeOrAbsolute() ;

/// @brief Field DotNetRelativeOrAbsolute offset 0
static System::UriKind const DotNetRelativeOrAbsolute;

static bool __declspec(property(get=__get_IsWindowsFileSystem, put=__set_IsWindowsFileSystem))  IsWindowsFileSystem;

static void __set_IsWindowsFileSystem(bool value) ;

static bool __get_IsWindowsFileSystem() ;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_s_initLock, put=__set_s_initLock))  s_initLock;

static void __set_s_initLock(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_s_initLock() ;

/// @brief Field V1ToStringUnescape offset 0
static System::UriFormat const V1ToStringUnescape;

/// @brief Field c_DummyChar offset 0
static constexpr char16_t  c_DummyChar{￿};

/// @brief Field c_EOL offset 0
static constexpr char16_t  c_EOL{￾};

static ::ArrayW<char16_t> __declspec(property(get=__get_HexLowerChars, put=__set_HexLowerChars))  HexLowerChars;

static void __set_HexLowerChars(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_HexLowerChars() ;

static ::ArrayW<char16_t> __declspec(property(get=__get__WSchars, put=__set__WSchars))  _WSchars;

static void __set__WSchars(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get__WSchars() ;


// Properties

 bool __declspec(property(get=get_IsImplicitFile))  IsImplicitFile;

 bool __declspec(property(get=get_IsUncOrDosPath))  IsUncOrDosPath;

 bool __declspec(property(get=get_IsDosPath))  IsDosPath;

 bool __declspec(property(get=get_IsUncPath))  IsUncPath;

 System::System__Uri__Flags __declspec(property(get=get_HostType))  HostType;

 System::UriParser __declspec(property(get=get_Syntax))  Syntax;

 bool __declspec(property(get=get_IsNotAbsoluteUri))  IsNotAbsoluteUri;

 bool __declspec(property(get=get_AllowIdn))  AllowIdn;

 bool __declspec(property(get=get_UserDrivenParsing))  UserDrivenParsing;

 uint16_t __declspec(property(get=get_SecuredPathIndex))  SecuredPathIndex;

 ::StringW __declspec(property(get=get_AbsolutePath))  AbsolutePath;

 ::StringW __declspec(property(get=get_PrivateAbsolutePath))  PrivateAbsolutePath;

 ::StringW __declspec(property(get=get_AbsoluteUri))  AbsoluteUri;

 ::StringW __declspec(property(get=get_LocalPath))  LocalPath;

 ::StringW __declspec(property(get=get_Authority))  Authority;

 System::UriHostNameType __declspec(property(get=get_HostNameType))  HostNameType;

 bool __declspec(property(get=get_IsDefaultPort))  IsDefaultPort;

 bool __declspec(property(get=get_IsFile))  IsFile;

 bool __declspec(property(get=get_IsLoopback))  IsLoopback;

 ::StringW __declspec(property(get=get_PathAndQuery))  PathAndQuery;

 ::ArrayW<::StringW> __declspec(property(get=get_Segments))  Segments;

 bool __declspec(property(get=get_IsUnc))  IsUnc;

 ::StringW __declspec(property(get=get_Host))  Host;

static ::bs_hook::Il2CppWrapperType __declspec(property(get=get_InitializeLock))  InitializeLock;

 int32_t __declspec(property(get=get_Port))  Port;

 ::StringW __declspec(property(get=get_Query))  Query;

 ::StringW __declspec(property(get=get_Fragment))  Fragment;

 ::StringW __declspec(property(get=get_Scheme))  Scheme;

 bool __declspec(property(get=get_OriginalStringSwitched))  OriginalStringSwitched;

 ::StringW __declspec(property(get=get_OriginalString))  OriginalString;

 ::StringW __declspec(property(get=get_DnsSafeHost))  DnsSafeHost;

 bool __declspec(property(get=get_IsAbsoluteUri))  IsAbsoluteUri;

 bool __declspec(property(get=get_UserEscaped))  UserEscaped;

 ::StringW __declspec(property(get=get_UserInfo))  UserInfo;

 bool __declspec(property(get=get_HasAuthority))  HasAuthority;


// Methods

/// @brief Method get_IsImplicitFile addr 0x2757eec size 0xc virtual false final false
 bool get_IsImplicitFile() ;

/// @brief Method get_IsUncOrDosPath addr 0x2757ef8 size 0x10 virtual false final false
 bool get_IsUncOrDosPath() ;

/// @brief Method get_IsDosPath addr 0x2757f08 size 0xc virtual false final false
 bool get_IsDosPath() ;

/// @brief Method get_IsUncPath addr 0x2757f14 size 0xc virtual false final false
 bool get_IsUncPath() ;

/// @brief Method get_HostType addr 0x2757f20 size 0xc virtual false final false
 System::System__Uri__Flags get_HostType() ;

/// @brief Method get_Syntax addr 0x2757f2c size 0x8 virtual false final false
 System::UriParser get_Syntax() ;

/// @brief Method get_IsNotAbsoluteUri addr 0x2757f34 size 0x10 virtual false final false
 bool get_IsNotAbsoluteUri() ;

/// @brief Method IriParsingStatic addr 0x2757f44 size 0x8c virtual false final false
static bool IriParsingStatic(System::UriParser syntax) ;

/// @brief Method get_AllowIdn addr 0x2757fd0 size 0xbc virtual false final false
 bool get_AllowIdn() ;

/// @brief Method AllowIdnStatic addr 0x275809c size 0xc8 virtual false final false
 bool AllowIdnStatic(System::UriParser syntax, System::System__Uri__Flags flags) ;

/// @brief Method IsIntranet addr 0x2758170 size 0x8 virtual false final false
 bool IsIntranet(::StringW schemeHost) ;

/// @brief Method get_UserDrivenParsing addr 0x2758178 size 0xc virtual false final false
 bool get_UserDrivenParsing() ;

/// @brief Method SetUserDrivenParsing addr 0x2758184 size 0x14 virtual false final false
 void SetUserDrivenParsing() ;

/// @brief Method get_SecuredPathIndex addr 0x2758198 size 0x5c virtual false final false
 uint16_t get_SecuredPathIndex() ;

/// @brief Method NotAny addr 0x275808c size 0x10 virtual false final false
 bool NotAny(System::System__Uri__Flags flags) ;

/// @brief Method InFact addr 0x27581f4 size 0x10 virtual false final false
 bool InFact(System::System__Uri__Flags flags) ;

/// @brief Method StaticNotAny addr 0x2758164 size 0xc virtual false final false
static bool StaticNotAny(System::System__Uri__Flags allFlags, System::System__Uri__Flags checkFlags) ;

/// @brief Method StaticInFact addr 0x2758204 size 0xc virtual false final false
static bool StaticInFact(System::System__Uri__Flags allFlags, System::System__Uri__Flags checkFlags) ;

/// @brief Method EnsureUriInfo addr 0x2758210 size 0x24 virtual false final false
 System::System__Uri__UriInfo EnsureUriInfo() ;

/// @brief Method EnsureParseRemaining addr 0x27587c8 size 0x10 virtual false final false
 void EnsureParseRemaining() ;

/// @brief Method EnsureHostString addr 0x2759390 size 0x60 virtual false final false
 void EnsureHostString(bool allowDnsOptimization) ;

static System::Uri New_ctor(::StringW uriString) ;

/// @brief Method .ctor addr 0x27597ec size 0x84 virtual false final false
 void _ctor(::StringW uriString) ;

static System::Uri New_ctor(::StringW uriString, System::UriKind uriKind) ;

/// @brief Method .ctor addr 0x2759a30 size 0x88 virtual false final false
 void _ctor(::StringW uriString, System::UriKind uriKind) ;

static System::Uri New_ctor(System::Uri baseUri, ::StringW relativeUri) ;

/// @brief Method .ctor addr 0x2759ab8 size 0xc8 virtual false final false
 void _ctor(System::Uri baseUri, ::StringW relativeUri) ;

/// @brief Method CreateUri addr 0x2759b90 size 0x188 virtual false final false
 void CreateUri(System::Uri baseUri, ::StringW relativeUri, bool dontEscape) ;

static System::Uri New_ctor(System::Uri baseUri, System::Uri relativeUri) ;

/// @brief Method .ctor addr 0x275a33c size 0x224 virtual false final false
 void _ctor(System::Uri baseUri, System::Uri relativeUri) ;

/// @brief Method GetCombinedString addr 0x275a560 size 0x250 virtual false final false
static System::ParsingError GetCombinedString(System::Uri baseUri, ::StringW relativeStr, bool dontEscape, ByRef<::StringW> result) ;

/// @brief Method GetException addr 0x275b380 size 0x1a0 virtual false final false
static System::UriFormatException GetException(System::ParsingError err) ;

static System::Uri New_ctor(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method .ctor addr 0x275b520 size 0x104 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x275b624 size 0x4 virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method GetObjectData addr 0x275b628 size 0xd8 virtual false final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method get_AbsolutePath addr 0x275b704 size 0xc8 virtual false final false
 ::StringW get_AbsolutePath() ;

/// @brief Method get_PrivateAbsolutePath addr 0x275b7cc size 0xa8 virtual false final false
 ::StringW get_PrivateAbsolutePath() ;

/// @brief Method get_AbsoluteUri addr 0x275b874 size 0x104 virtual false final false
 ::StringW get_AbsoluteUri() ;

/// @brief Method get_LocalPath addr 0x275b978 size 0x74 virtual false final false
 ::StringW get_LocalPath() ;

/// @brief Method get_Authority addr 0x275bfe0 size 0x7c virtual false final false
 ::StringW get_Authority() ;

/// @brief Method get_HostNameType addr 0x275c05c size 0x100 virtual false final false
 System::UriHostNameType get_HostNameType() ;

/// @brief Method get_IsDefaultPort addr 0x275c15c size 0xb0 virtual false final false
 bool get_IsDefaultPort() ;

/// @brief Method get_IsFile addr 0x275c20c size 0xc8 virtual false final false
 bool get_IsFile() ;

/// @brief Method get_IsLoopback addr 0x275c2d4 size 0x88 virtual false final false
 bool get_IsLoopback() ;

/// @brief Method get_PathAndQuery addr 0x275c35c size 0xd0 virtual false final false
 ::StringW get_PathAndQuery() ;

/// @brief Method get_Segments addr 0x275c42c size 0x210 virtual false final false
 ::ArrayW<::StringW> get_Segments() ;

/// @brief Method get_IsUnc addr 0x275c63c size 0x7c virtual false final false
 bool get_IsUnc() ;

/// @brief Method get_Host addr 0x275c6b8 size 0x7c virtual false final false
 ::StringW get_Host() ;

/// @brief Method StaticIsFile addr 0x275c734 size 0x18 virtual false final false
static bool StaticIsFile(System::UriParser syntax) ;

/// @brief Method get_InitializeLock addr 0x275c74c size 0xd4 virtual false final false
static ::bs_hook::Il2CppWrapperType get_InitializeLock() ;

/// @brief Method InitializeUriConfig addr 0x275c820 size 0x1a0 virtual false final false
static void InitializeUriConfig() ;

/// @brief Method GetLocalPath addr 0x275b9ec size 0x5f4 virtual false final false
 ::StringW GetLocalPath() ;

/// @brief Method get_Port addr 0x275cf68 size 0xcc virtual false final false
 int32_t get_Port() ;

/// @brief Method get_Query addr 0x275d034 size 0x108 virtual false final false
 ::StringW get_Query() ;

/// @brief Method get_Fragment addr 0x275d13c size 0x108 virtual false final false
 ::StringW get_Fragment() ;

/// @brief Method get_Scheme addr 0x275d244 size 0x78 virtual false final false
 ::StringW get_Scheme() ;

/// @brief Method get_OriginalStringSwitched addr 0x275d2bc size 0x48 virtual false final false
 bool get_OriginalStringSwitched() ;

/// @brief Method get_OriginalString addr 0x275a8e4 size 0x28 virtual false final false
 ::StringW get_OriginalString() ;

/// @brief Method get_DnsSafeHost addr 0x275d304 size 0x254 virtual false final false
 ::StringW get_DnsSafeHost() ;

/// @brief Method get_IsAbsoluteUri addr 0x2759b80 size 0x10 virtual false final false
 bool get_IsAbsoluteUri() ;

/// @brief Method get_UserEscaped addr 0x275d558 size 0xc virtual false final false
 bool get_UserEscaped() ;

/// @brief Method get_UserInfo addr 0x275d564 size 0x7c virtual false final false
 ::StringW get_UserInfo() ;

/// @brief Method IsGenDelim addr 0x275d5e0 size 0x4c virtual false final false
static bool IsGenDelim(char16_t ch) ;

/// @brief Method CheckSchemeName addr 0x275d62c size 0x140 virtual false final false
static bool CheckSchemeName(::StringW schemeName) ;

/// @brief Method IsHexDigit addr 0x275d814 size 0x3c virtual false final false
static bool IsHexDigit(char16_t character) ;

/// @brief Method FromHex addr 0x275d850 size 0xb0 virtual false final false
static int32_t FromHex(char16_t digit) ;

/// @brief Method GetHashCode addr 0x275d900 size 0x138 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x275dad8 size 0xcc virtual true final false
 ::StringW ToString() ;

/// @brief Method op_Equality addr 0x275ddbc size 0x34 virtual false final false
static bool op_Equality(System::Uri uri1, System::Uri uri2) ;

/// @brief Method op_Inequality addr 0x275a1d4 size 0x48 virtual false final false
static bool op_Inequality(System::Uri uri1, System::Uri uri2) ;

/// @brief Method Equals addr 0x275ddf0 size 0x588 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType comparand) ;

/// @brief Method CheckForColonInFirstPathSegment addr 0x275e430 size 0xb8 virtual false final false
static bool CheckForColonInFirstPathSegment(::StringW uriString) ;

/// @brief Method InternalEscapeString addr 0x275e4e8 size 0xe0 virtual false final false
static ::StringW InternalEscapeString(::StringW rawString) ;

/// @brief Method ParseScheme addr 0x275e5c8 size 0xe0 virtual false final false
static System::ParsingError ParseScheme(::StringW uriString, ByRef<System::System__Uri__Flags> flags, ByRef<System::UriParser> syntax) ;

/// @brief Method ParseMinimal addr 0x275ebf0 size 0x80 virtual false final false
 System::UriFormatException ParseMinimal() ;

/// @brief Method PrivateParseMinimal addr 0x275ec70 size 0x668 virtual false final false
 System::ParsingError PrivateParseMinimal() ;

/// @brief Method PrivateParseMinimalIri addr 0x276011c size 0xd4 virtual false final false
 void PrivateParseMinimalIri(::StringW newHost, uint16_t idx) ;

/// @brief Method CreateUriInfo addr 0x2758234 size 0x594 virtual false final false
 void CreateUriInfo(System::System__Uri__Flags cF) ;

/// @brief Method CreateHostString addr 0x27593f0 size 0x3fc virtual false final false
 void CreateHostString() ;

/// @brief Method CreateHostStringHelper addr 0x2760630 size 0x1e4 virtual false final false
static ::StringW CreateHostStringHelper(::StringW str, uint16_t idx, uint16_t end, ByRef<System::System__Uri__Flags> flags, ByRef<::StringW> scopeId) ;

/// @brief Method GetHostViaCustomSyntax addr 0x27601f0 size 0x440 virtual false final false
 void GetHostViaCustomSyntax() ;

/// @brief Method GetParts addr 0x275b700 size 0x4 virtual false final false
 ::StringW GetParts(System::UriComponents uriParts, System::UriFormat formatAs) ;

/// @brief Method GetEscapedParts addr 0x2760de8 size 0xc8 virtual false final false
 ::StringW GetEscapedParts(System::UriComponents uriParts) ;

/// @brief Method GetUnescapedParts addr 0x275ce98 size 0xd0 virtual false final false
 ::StringW GetUnescapedParts(System::UriComponents uriParts, System::UriFormat formatAs) ;

/// @brief Method ReCreateParts addr 0x2761460 size 0xc8c virtual false final false
 ::StringW ReCreateParts(System::UriComponents parts, uint16_t nonCanonical, System::UriFormat formatAs) ;

/// @brief Method GetUriPartsFromUserString addr 0x2760eb0 size 0x5b0 virtual false final false
 ::StringW GetUriPartsFromUserString(System::UriComponents uriParts) ;

/// @brief Method ParseRemaining addr 0x27587d8 size 0xbb8 virtual false final false
 void ParseRemaining() ;

/// @brief Method ParseSchemeCheckImplicitFile addr 0x275e6a8 size 0x548 virtual false final false
static uint16_t ParseSchemeCheckImplicitFile(void* uriString, uint16_t length, ByRef<System::ParsingError> err, ByRef<System::System__Uri__Flags> flags, ByRef<System::UriParser> syntax) ;

/// @brief Method CheckKnownSchemes addr 0x27627f8 size 0x500 virtual false final false
static bool CheckKnownSchemes(void* lptr, uint16_t nChars, ByRef<System::UriParser> syntax) ;

/// @brief Method CheckSchemeSyntax addr 0x275a7b0 size 0x134 virtual false final false
static System::ParsingError CheckSchemeSyntax(void* ptr, uint16_t length, ByRef<System::UriParser> syntax) ;

/// @brief Method CheckAuthorityHelper addr 0x275f318 size 0xe04 virtual false final false
 uint16_t CheckAuthorityHelper(void* pString, uint16_t idx, uint16_t length, ByRef<System::ParsingError> err, ByRef<System::System__Uri__Flags> flags, System::UriParser syntax, ByRef<::StringW> newHost) ;

/// @brief Method CheckAuthorityHelperHandleDnsIri addr 0x2762cf8 size 0x350 virtual false final false
 void CheckAuthorityHelperHandleDnsIri(void* pString, uint16_t start, int32_t end, int32_t startInput, bool iriParsing, bool hasUnicode, System::UriParser syntax, ::StringW userInfoString, ByRef<System::System__Uri__Flags> flags, ByRef<bool> justNormalized, ByRef<::StringW> newHost, ByRef<System::ParsingError> err) ;

/// @brief Method CheckAuthorityHelperHandleAnyHostIri addr 0x2763048 size 0x2c4 virtual false final false
 void CheckAuthorityHelperHandleAnyHostIri(void* pString, int32_t startInput, int32_t end, bool iriParsing, bool hasUnicode, System::UriParser syntax, ByRef<System::System__Uri__Flags> flags, ByRef<::StringW> newHost, ByRef<System::ParsingError> err) ;

/// @brief Method FindEndOfComponent addr 0x2762754 size 0x54 virtual false final false
 void FindEndOfComponent(::StringW input, ByRef<uint16_t> idx, uint16_t end, char16_t delim) ;

/// @brief Method FindEndOfComponent addr 0x2763484 size 0x94 virtual false final false
 void FindEndOfComponent(void* str, ByRef<uint16_t> idx, uint16_t end, char16_t delim) ;

/// @brief Method CheckCanonical addr 0x2760814 size 0x3f8 virtual false final false
 System::System__Uri__Check CheckCanonical(void* str, ByRef<uint16_t> idx, uint16_t end, char16_t delim) ;

/// @brief Method GetCanonicalPath addr 0x27620ec size 0x668 virtual false final false
 ::ArrayW<char16_t> GetCanonicalPath(::ArrayW<char16_t> dest, ByRef<int32_t> pos, System::UriFormat formatAs) ;

/// @brief Method UnescapeOnly addr 0x2763518 size 0x21c virtual false final false
static void UnescapeOnly(void* pch, int32_t start, ByRef<int32_t> end, char16_t ch1, char16_t ch2, char16_t ch3) ;

/// @brief Method Compress addr 0x275c9c0 size 0x4d8 virtual false final false
static ::ArrayW<char16_t> Compress(::ArrayW<char16_t> dest, uint16_t start, ByRef<int32_t> destLength, System::UriParser syntax) ;

/// @brief Method CalculateCaseInsensitiveHashCode addr 0x275da38 size 0xa0 virtual false final false
static int32_t CalculateCaseInsensitiveHashCode(::StringW text) ;

/// @brief Method CombineUri addr 0x275a90c size 0xa74 virtual false final false
static ::StringW CombineUri(System::Uri basePart, ::StringW relativePart, System::UriFormat uriFormat) ;

/// @brief Method get_HasAuthority addr 0x2763734 size 0xc virtual false final false
 bool get_HasAuthority() ;

/// @brief Method IsLWS addr 0x275f2d8 size 0x40 virtual false final false
static bool IsLWS(char16_t ch) ;

/// @brief Method IsAsciiLetter addr 0x275d76c size 0x2c virtual false final false
static bool IsAsciiLetter(char16_t character) ;

/// @brief Method IsAsciiLetterOrDigit addr 0x275d798 size 0x7c virtual false final false
static bool IsAsciiLetterOrDigit(char16_t character) ;

/// @brief Method IsBidiControlCharacter addr 0x2763740 size 0x48 virtual false final false
static bool IsBidiControlCharacter(char16_t ch) ;

/// @brief Method StripBidiControlCharacter addr 0x276330c size 0x178 virtual false final false
static ::StringW StripBidiControlCharacter(void* strToClean, int32_t start, int32_t length) ;

/// @brief Method CreateThis addr 0x2759870 size 0x1c0 virtual false final false
 void CreateThis(::StringW uri, bool dontEscape, System::UriKind uriKind) ;

/// @brief Method InitializeUri addr 0x2763788 size 0x4d4 virtual false final false
 void InitializeUri(System::ParsingError err, System::UriKind uriKind, ByRef<System::UriFormatException> e) ;

/// @brief Method CheckForConfigLoad addr 0x2763c5c size 0xac virtual false final false
 bool CheckForConfigLoad(::StringW data) ;

/// @brief Method CheckForUnicode addr 0x2763d08 size 0x118 virtual false final false
 bool CheckForUnicode(::StringW data) ;

/// @brief Method CheckForEscapedUnreserved addr 0x2763e20 size 0x1ac virtual false final false
 bool CheckForEscapedUnreserved(::StringW data) ;

/// @brief Method TryCreate addr 0x275e378 size 0xb8 virtual false final false
static bool TryCreate(::StringW uriString, System::UriKind uriKind, ByRef<System::Uri> result) ;

/// @brief Method TryCreate addr 0x2764240 size 0xd0 virtual false final false
static bool TryCreate(System::Uri baseUri, ::StringW relativeUri, ByRef<System::Uri> result) ;

/// @brief Method TryCreate addr 0x2764310 size 0x174 virtual false final false
static bool TryCreate(System::Uri baseUri, System::Uri relativeUri, ByRef<System::Uri> result) ;

/// @brief Method GetComponents addr 0x2760c0c size 0x1dc virtual false final false
 ::StringW GetComponents(System::UriComponents components, System::UriFormat format) ;

/// @brief Method IsWellFormedOriginalString addr 0x27646a4 size 0x44 virtual false final false
 bool IsWellFormedOriginalString() ;

/// @brief Method IsWellFormedUriString addr 0x2764b6c size 0x9c virtual false final false
static bool IsWellFormedUriString(::StringW uriString, System::UriKind uriKind) ;

/// @brief Method InternalIsWellFormedOriginalString addr 0x27646e8 size 0x484 virtual false final false
 bool InternalIsWellFormedOriginalString() ;

/// @brief Method UnescapeDataString addr 0x2764c08 size 0x1a8 virtual false final false
static ::StringW UnescapeDataString(::StringW stringToUnescape) ;

/// @brief Method EscapeUnescapeIri addr 0x27627a8 size 0x50 virtual false final false
 ::StringW EscapeUnescapeIri(::StringW input, int32_t start, int32_t end, System::UriComponents component) ;

static System::Uri New_ctor(System::System__Uri__Flags flags, System::UriParser uriParser, ::StringW uri) ;

/// @brief Method .ctor addr 0x2764db0 size 0x40 virtual false final false
 void _ctor(System::System__Uri__Flags flags, System::UriParser uriParser, ::StringW uri) ;

/// @brief Method CreateHelper addr 0x2763fcc size 0x274 virtual false final false
static System::Uri CreateHelper(::StringW uriString, bool dontEscape, System::UriKind uriKind, ByRef<System::UriFormatException> e) ;

/// @brief Method ResolveHelper addr 0x2759d18 size 0x4bc virtual false final false
static System::Uri ResolveHelper(System::Uri baseUri, System::Uri relativeUri, ByRef<::StringW> newUriString, ByRef<bool> userEscaped, ByRef<System::UriFormatException> e) ;

/// @brief Method GetRelativeSerializationString addr 0x2764484 size 0x220 virtual false final false
 ::StringW GetRelativeSerializationString(System::UriFormat format) ;

/// @brief Method GetComponentsHelper addr 0x275dba4 size 0x218 virtual false final false
 ::StringW GetComponentsHelper(System::UriComponents uriComponents, System::UriFormat uriFormat) ;

/// @brief Method IsBaseOf addr 0x2764df0 size 0xb8 virtual false final false
 bool IsBaseOf(System::Uri uri) ;

/// @brief Method IsBaseOfHelper addr 0x2764ea8 size 0x204 virtual false final false
 bool IsBaseOfHelper(System::Uri uriLink) ;

/// @brief Method CreateThisFromUri addr 0x275a21c size 0x120 virtual false final false
 void CreateThisFromUri(System::Uri otherUri) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::System__Uri__Check, "System", "Uri/Check");
DEFINE_IL2CPP_ARG_TYPE(System::System__Uri__Flags, "System", "Uri/Flags");
NEED_NO_BOX(System::System__Uri__MoreInfo);
DEFINE_IL2CPP_ARG_TYPE(System::System__Uri__MoreInfo, "System", "Uri/MoreInfo");
NEED_NO_BOX(System::System__Uri__UriInfo);
DEFINE_IL2CPP_ARG_TYPE(System::System__Uri__UriInfo, "System", "Uri/UriInfo");
NEED_NO_BOX(System::Uri);
DEFINE_IL2CPP_ARG_TYPE(System::Uri, "System", "Uri");
DEFINE_IL2CPP_ARG_TYPE(System::System__Uri__Offset, "System", "Uri/Offset");
