#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Net {
class CookieTokenizer;
}
namespace System::Net {
class Cookie;
}
// Forward declare root types
namespace System::Net {
class CookieParser;
}
// Type: System.Net::CookieParser
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7975))
// CS Name: System.Net.CookieParser
class CORDL_TYPE CookieParser : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CookieParser() = default;

// Ctor Parameters [CppParam { name: "", ty: "CookieParser", modifiers: " const&", def_value: None }]
constexpr CookieParser(CookieParser const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CookieParser", modifiers: "&&", def_value: None }]
constexpr CookieParser(CookieParser&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CookieParser(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CookieParser& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CookieParser& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CookieParser& operator=(CookieParser&& o) noexcept = default;
  constexpr CookieParser& operator=(CookieParser const& o) noexcept = default;
                


// Fields

 System::Net::CookieTokenizer __declspec(property(get=__get_m_tokenizer, put=__set_m_tokenizer))  m_tokenizer;

constexpr void __set_m_tokenizer(System::Net::CookieTokenizer value) ;

constexpr System::Net::CookieTokenizer __get_m_tokenizer() const;


// Methods

// Ctor Parameters [CppParam { name: "cookieString", ty: "::StringW", modifiers: "", def_value: None }]
explicit CookieParser(::StringW cookieString) ;

/// @brief Method .ctor addr 0x281bf7c size 0x78 virtual false final false
 void _ctor(::StringW cookieString) ;

/// @brief Method Get addr 0x281bff4 size 0x55c virtual false final false
 System::Net::Cookie Get() ;

/// @brief Method CheckQuoted addr 0x281a65c size 0xc4 virtual false final false
static ::StringW CheckQuoted(::StringW value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::CookieParser);
DEFINE_IL2CPP_ARG_TYPE(System::Net::CookieParser, "System.Net", "CookieParser");
