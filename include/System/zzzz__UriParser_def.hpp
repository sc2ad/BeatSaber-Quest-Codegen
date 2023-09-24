#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
struct UriComponents;
}
namespace System {
class UriFormatException;
}
namespace System {
struct System__UriParser__UriQuirksVersion;
}
namespace System {
struct UriFormat;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class System__UriParser__BuiltInUriParser;
}
namespace System {
struct UriSyntaxFlags;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System {
struct System__UriParser__UriQuirksVersion;
}
namespace System {
class UriParser;
}
// Type: ::UriQuirksVersion
namespace System {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7736))
// CS Name: System.UriParser::UriQuirksVersion
struct CORDL_TYPE System__UriParser__UriQuirksVersion : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr System__UriParser__UriQuirksVersion(int32_t value__) noexcept;


                    constexpr System__UriParser__UriQuirksVersion(System__UriParser__UriQuirksVersion const&) = default;
                    constexpr System__UriParser__UriQuirksVersion(System__UriParser__UriQuirksVersion&&) = default;
                    constexpr System__UriParser__UriQuirksVersion& operator=(System__UriParser__UriQuirksVersion const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__UriParser__UriQuirksVersion& operator=(System__UriParser__UriQuirksVersion&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__UriParser__UriQuirksVersion(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __System__UriParser__UriQuirksVersion_Unwrapped : int32_t {
__V2 = 2,
__V3 = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __System__UriParser__UriQuirksVersion_Unwrapped () const noexcept {
return std::bit_cast<__System__UriParser__UriQuirksVersion_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field V2 offset 0
static System::System__UriParser__UriQuirksVersion const V2;

/// @brief Field V3 offset 0
static System::System__UriParser__UriQuirksVersion const V3;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System
// Type: System::UriParser
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7738))
// CS Name: System.UriParser
class CORDL_TYPE UriParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using BuiltInUriParser = System::System__UriParser__BuiltInUriParser;

using UriQuirksVersion = System::System__UriParser__UriQuirksVersion;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~UriParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "UriParser", modifiers: " const&", def_value: None }]
constexpr UriParser(UriParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UriParser", modifiers: "&&", def_value: None }]
constexpr UriParser(UriParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UriParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UriParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UriParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UriParser& operator=(UriParser&& o) noexcept = default;
  constexpr UriParser& operator=(UriParser const& o) noexcept = default;
                


// Fields

/// @brief Field SchemeOnlyFlags offset 0
static System::UriSyntaxFlags const SchemeOnlyFlags;

static System::Collections::Generic::Dictionary_2<::StringW,System::UriParser> __declspec(property(get=__get_m_Table, put=__set_m_Table))  m_Table;

static void __set_m_Table(System::Collections::Generic::Dictionary_2<::StringW,System::UriParser> value) ;

static System::Collections::Generic::Dictionary_2<::StringW,System::UriParser> __get_m_Table() ;

static System::Collections::Generic::Dictionary_2<::StringW,System::UriParser> __declspec(property(get=__get_m_TempTable, put=__set_m_TempTable))  m_TempTable;

static void __set_m_TempTable(System::Collections::Generic::Dictionary_2<::StringW,System::UriParser> value) ;

static System::Collections::Generic::Dictionary_2<::StringW,System::UriParser> __get_m_TempTable() ;

 System::UriSyntaxFlags __declspec(property(get=__get_m_Flags, put=__set_m_Flags))  m_Flags;

constexpr void __set_m_Flags(System::UriSyntaxFlags value) ;

constexpr System::UriSyntaxFlags __get_m_Flags() const;

 System::UriSyntaxFlags __declspec(property(get=__get_m_UpdatableFlags, put=__set_m_UpdatableFlags))  m_UpdatableFlags;

constexpr void __set_m_UpdatableFlags(System::UriSyntaxFlags value) ;

constexpr System::UriSyntaxFlags __get_m_UpdatableFlags() const;

 bool __declspec(property(get=__get_m_UpdatableFlagsUsed, put=__set_m_UpdatableFlagsUsed))  m_UpdatableFlagsUsed;

constexpr void __set_m_UpdatableFlagsUsed(bool value) ;

constexpr bool __get_m_UpdatableFlagsUsed() const;

/// @brief Field c_UpdatableFlags offset 0
static System::UriSyntaxFlags const c_UpdatableFlags;

 int32_t __declspec(property(get=__get_m_Port, put=__set_m_Port))  m_Port;

constexpr void __set_m_Port(int32_t value) ;

constexpr int32_t __get_m_Port() const;

 ::StringW __declspec(property(get=__get_m_Scheme, put=__set_m_Scheme))  m_Scheme;

constexpr void __set_m_Scheme(::StringW value) ;

constexpr ::StringW __get_m_Scheme() const;

/// @brief Field NoDefaultPort offset 0
static constexpr int32_t  NoDefaultPort{-1};

/// @brief Field c_InitialTableSize offset 0
static constexpr int32_t  c_InitialTableSize{25};

static System::UriParser __declspec(property(get=__get_HttpUri, put=__set_HttpUri))  HttpUri;

static void __set_HttpUri(System::UriParser value) ;

static System::UriParser __get_HttpUri() ;

static System::UriParser __declspec(property(get=__get_HttpsUri, put=__set_HttpsUri))  HttpsUri;

static void __set_HttpsUri(System::UriParser value) ;

static System::UriParser __get_HttpsUri() ;

static System::UriParser __declspec(property(get=__get_WsUri, put=__set_WsUri))  WsUri;

static void __set_WsUri(System::UriParser value) ;

static System::UriParser __get_WsUri() ;

static System::UriParser __declspec(property(get=__get_WssUri, put=__set_WssUri))  WssUri;

static void __set_WssUri(System::UriParser value) ;

static System::UriParser __get_WssUri() ;

static System::UriParser __declspec(property(get=__get_FtpUri, put=__set_FtpUri))  FtpUri;

static void __set_FtpUri(System::UriParser value) ;

static System::UriParser __get_FtpUri() ;

static System::UriParser __declspec(property(get=__get_FileUri, put=__set_FileUri))  FileUri;

static void __set_FileUri(System::UriParser value) ;

static System::UriParser __get_FileUri() ;

static System::UriParser __declspec(property(get=__get_GopherUri, put=__set_GopherUri))  GopherUri;

static void __set_GopherUri(System::UriParser value) ;

static System::UriParser __get_GopherUri() ;

static System::UriParser __declspec(property(get=__get_NntpUri, put=__set_NntpUri))  NntpUri;

static void __set_NntpUri(System::UriParser value) ;

static System::UriParser __get_NntpUri() ;

static System::UriParser __declspec(property(get=__get_NewsUri, put=__set_NewsUri))  NewsUri;

static void __set_NewsUri(System::UriParser value) ;

static System::UriParser __get_NewsUri() ;

static System::UriParser __declspec(property(get=__get_MailToUri, put=__set_MailToUri))  MailToUri;

static void __set_MailToUri(System::UriParser value) ;

static System::UriParser __get_MailToUri() ;

static System::UriParser __declspec(property(get=__get_UuidUri, put=__set_UuidUri))  UuidUri;

static void __set_UuidUri(System::UriParser value) ;

static System::UriParser __get_UuidUri() ;

static System::UriParser __declspec(property(get=__get_TelnetUri, put=__set_TelnetUri))  TelnetUri;

static void __set_TelnetUri(System::UriParser value) ;

static System::UriParser __get_TelnetUri() ;

static System::UriParser __declspec(property(get=__get_LdapUri, put=__set_LdapUri))  LdapUri;

static void __set_LdapUri(System::UriParser value) ;

static System::UriParser __get_LdapUri() ;

static System::UriParser __declspec(property(get=__get_NetTcpUri, put=__set_NetTcpUri))  NetTcpUri;

static void __set_NetTcpUri(System::UriParser value) ;

static System::UriParser __get_NetTcpUri() ;

static System::UriParser __declspec(property(get=__get_NetPipeUri, put=__set_NetPipeUri))  NetPipeUri;

static void __set_NetPipeUri(System::UriParser value) ;

static System::UriParser __get_NetPipeUri() ;

static System::UriParser __declspec(property(get=__get_VsMacrosUri, put=__set_VsMacrosUri))  VsMacrosUri;

static void __set_VsMacrosUri(System::UriParser value) ;

static System::UriParser __get_VsMacrosUri() ;

static System::System__UriParser__UriQuirksVersion __declspec(property(get=__get_s_QuirksVersion, put=__set_s_QuirksVersion))  s_QuirksVersion;

static void __set_s_QuirksVersion(System::System__UriParser__UriQuirksVersion value) ;

static System::System__UriParser__UriQuirksVersion __get_s_QuirksVersion() ;

/// @brief Field c_MaxCapacity offset 0
static constexpr int32_t  c_MaxCapacity{512};

/// @brief Field UnknownV1SyntaxFlags offset 0
static System::UriSyntaxFlags const UnknownV1SyntaxFlags;

static System::UriSyntaxFlags __declspec(property(get=__get_HttpSyntaxFlags, put=__set_HttpSyntaxFlags))  HttpSyntaxFlags;

static void __set_HttpSyntaxFlags(System::UriSyntaxFlags value) ;

static System::UriSyntaxFlags __get_HttpSyntaxFlags() ;

/// @brief Field FtpSyntaxFlags offset 0
static System::UriSyntaxFlags const FtpSyntaxFlags;

static System::UriSyntaxFlags __declspec(property(get=__get_FileSyntaxFlags, put=__set_FileSyntaxFlags))  FileSyntaxFlags;

static void __set_FileSyntaxFlags(System::UriSyntaxFlags value) ;

static System::UriSyntaxFlags __get_FileSyntaxFlags() ;

/// @brief Field VsmacrosSyntaxFlags offset 0
static System::UriSyntaxFlags const VsmacrosSyntaxFlags;

/// @brief Field GopherSyntaxFlags offset 0
static System::UriSyntaxFlags const GopherSyntaxFlags;

/// @brief Field NewsSyntaxFlags offset 0
static System::UriSyntaxFlags const NewsSyntaxFlags;

/// @brief Field NntpSyntaxFlags offset 0
static System::UriSyntaxFlags const NntpSyntaxFlags;

/// @brief Field TelnetSyntaxFlags offset 0
static System::UriSyntaxFlags const TelnetSyntaxFlags;

/// @brief Field LdapSyntaxFlags offset 0
static System::UriSyntaxFlags const LdapSyntaxFlags;

/// @brief Field MailtoSyntaxFlags offset 0
static System::UriSyntaxFlags const MailtoSyntaxFlags;

/// @brief Field NetPipeSyntaxFlags offset 0
static System::UriSyntaxFlags const NetPipeSyntaxFlags;

/// @brief Field NetTcpSyntaxFlags offset 0
static System::UriSyntaxFlags const NetTcpSyntaxFlags;


// Properties

 ::StringW __declspec(property(get=get_SchemeName))  SchemeName;

 int32_t __declspec(property(get=get_DefaultPort))  DefaultPort;

static bool __declspec(property(get=get_ShouldUseLegacyV2Quirks))  ShouldUseLegacyV2Quirks;

 System::UriSyntaxFlags __declspec(property(get=get_Flags))  Flags;

 bool __declspec(property(get=get_IsSimple))  IsSimple;


// Methods

/// @brief Method get_SchemeName addr 0x27b9614 size 0x8 virtual false final false
 ::StringW get_SchemeName() ;

/// @brief Method get_DefaultPort addr 0x27b961c size 0x8 virtual false final false
 int32_t get_DefaultPort() ;

/// @brief Method OnNewUri addr 0x27b9624 size 0x4 virtual true final false
 System::UriParser OnNewUri() ;

/// @brief Method InitializeAndValidate addr 0x27b9628 size 0x28 virtual true final false
 void InitializeAndValidate(System::Uri uri, ByRef<System::UriFormatException> parsingError) ;

/// @brief Method Resolve addr 0x27b9650 size 0x1e8 virtual true final false
 ::StringW Resolve(System::Uri baseUri, System::Uri relativeUri, ByRef<System::UriFormatException> parsingError) ;

/// @brief Method IsBaseOf addr 0x27b9838 size 0x1c virtual true final false
 bool IsBaseOf(System::Uri baseUri, System::Uri relativeUri) ;

/// @brief Method GetComponents addr 0x27b9854 size 0x22c virtual true final false
 ::StringW GetComponents(System::Uri uri, System::UriComponents components, System::UriFormat format) ;

/// @brief Method IsWellFormedOriginalString addr 0x27b9a80 size 0x18 virtual true final false
 bool IsWellFormedOriginalString(System::Uri uri) ;

/// @brief Method get_ShouldUseLegacyV2Quirks addr 0x27b9484 size 0x60 virtual false final false
static bool get_ShouldUseLegacyV2Quirks() ;

/// @brief Method get_Flags addr 0x27ba29c size 0x8 virtual false final false
 System::UriSyntaxFlags get_Flags() ;

/// @brief Method NotAny addr 0x27b62f8 size 0x8 virtual false final false
 bool NotAny(System::UriSyntaxFlags flags) ;

/// @brief Method InFact addr 0x27b62dc size 0x1c virtual false final false
 bool InFact(System::UriSyntaxFlags flags) ;

/// @brief Method IsAllSet addr 0x27ba300 size 0x8 virtual false final false
 bool IsAllSet(System::UriSyntaxFlags flags) ;

/// @brief Method IsFullMatch addr 0x27ba2a4 size 0x5c virtual false final false
 bool IsFullMatch(System::UriSyntaxFlags flags, System::UriSyntaxFlags expected) ;

static System::UriParser New_ctor(System::UriSyntaxFlags flags) ;

/// @brief Method .ctor addr 0x27ba308 size 0x6c virtual false final false
 void _ctor(System::UriSyntaxFlags flags) ;

/// @brief Method FindOrFetchAsUnknownV1Syntax addr 0x27ba374 size 0x2f0 virtual false final false
static System::UriParser FindOrFetchAsUnknownV1Syntax(::StringW lwrCaseScheme) ;

/// @brief Method GetSyntax addr 0x27b620c size 0xd0 virtual false final false
static System::UriParser GetSyntax(::StringW lwrCaseScheme) ;

/// @brief Method get_IsSimple addr 0x27ba664 size 0xc virtual false final false
 bool get_IsSimple() ;

/// @brief Method InternalOnNewUri addr 0x27ba670 size 0x44 virtual false final false
 System::UriParser InternalOnNewUri() ;

/// @brief Method InternalValidate addr 0x27ba6b4 size 0xc virtual false final false
 void InternalValidate(System::Uri thisUri, ByRef<System::UriFormatException> parsingError) ;

/// @brief Method InternalResolve addr 0x27ba6c0 size 0xc virtual false final false
 ::StringW InternalResolve(System::Uri thisBaseUri, System::Uri uriLink, ByRef<System::UriFormatException> parsingError) ;

/// @brief Method InternalIsBaseOf addr 0x27ba6cc size 0xc virtual false final false
 bool InternalIsBaseOf(System::Uri thisBaseUri, System::Uri uriLink) ;

/// @brief Method InternalGetComponents addr 0x27ba6d8 size 0xc virtual false final false
 ::StringW InternalGetComponents(System::Uri thisUri, System::UriComponents uriComponents, System::UriFormat uriFormat) ;

/// @brief Method InternalIsWellFormedOriginalString addr 0x27ba6e4 size 0xc virtual false final false
 bool InternalIsWellFormedOriginalString(System::Uri thisUri) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(System::System__UriParser__UriQuirksVersion, "System", "UriParser/UriQuirksVersion");
NEED_NO_BOX(System::UriParser);
DEFINE_IL2CPP_ARG_TYPE(System::UriParser, "System", "UriParser");
