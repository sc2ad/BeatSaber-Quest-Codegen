#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Net::Mail {
class MailAddress;
}
// Forward declare root types
namespace System::Net::Mail {
class MailAddressParser;
}
// Type: System.Net.Mail::MailAddressParser
namespace System::Net::Mail {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8229))
// CS Name: System.Net.Mail.MailAddressParser
class CORDL_TYPE MailAddressParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MailAddressParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "MailAddressParser", modifiers: " const&", def_value: None }]
constexpr MailAddressParser(MailAddressParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MailAddressParser", modifiers: "&&", def_value: None }]
constexpr MailAddressParser(MailAddressParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MailAddressParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MailAddressParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MailAddressParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MailAddressParser& operator=(MailAddressParser&& o) noexcept = default;
  constexpr MailAddressParser& operator=(MailAddressParser const& o) noexcept = default;
                


// Methods

/// @brief Method ParseAddress addr 0x276f624 size 0x30 virtual false final false
static ::System::Net::Mail::MailAddress ParseAddress(::StringW data) ;

/// @brief Method ParseAddress addr 0x276f654 size 0x378 virtual false final false
static ::System::Net::Mail::MailAddress ParseAddress(::StringW data, bool expectMultipleAddresses, ByRef<int32_t> index) ;

/// @brief Method ReadCfwsAndThrowIfIncomplete addr 0x276f9cc size 0x60 virtual false final false
static int32_t ReadCfwsAndThrowIfIncomplete(::StringW data, int32_t index) ;

/// @brief Method ParseDomain addr 0x276fa2c size 0xe8 virtual false final false
static ::StringW ParseDomain(::StringW data, ByRef<int32_t> index) ;

/// @brief Method ParseLocalPart addr 0x276fb14 size 0x2d4 virtual false final false
static ::StringW ParseLocalPart(::StringW data, ByRef<int32_t> index, bool expectAngleBracket, bool expectMultipleAddresses) ;

/// @brief Method ParseDisplayName addr 0x276fde8 size 0x204 virtual false final false
static ::StringW ParseDisplayName(::StringW data, ByRef<int32_t> index, bool expectMultipleAddresses) ;

/// @brief Method NormalizeOrThrow addr 0x277034c size 0xec virtual false final false
static ::StringW NormalizeOrThrow(::StringW input) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Mail
} // end anonymous namespace
NEED_NO_BOX(::System::Net::Mail::MailAddressParser);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Mail::MailAddressParser, "System.Net.Mail", "MailAddressParser");
