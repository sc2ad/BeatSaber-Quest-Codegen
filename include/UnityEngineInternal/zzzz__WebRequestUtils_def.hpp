#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Uri;
}
namespace System::Text::RegularExpressions {
class Regex;
}
// Forward declare root types
namespace UnityEngineInternal {
class WebRequestUtils;
}
// Type: UnityEngineInternal::WebRequestUtils
namespace UnityEngineInternal {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15548))
// CS Name: UnityEngineInternal.WebRequestUtils
class CORDL_TYPE WebRequestUtils : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~WebRequestUtils() = default;

// Ctor Parameters [CppParam { name: "", ty: "WebRequestUtils", modifiers: " const&", def_value: None }]
constexpr WebRequestUtils(WebRequestUtils const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WebRequestUtils", modifiers: "&&", def_value: None }]
constexpr WebRequestUtils(WebRequestUtils&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WebRequestUtils(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr WebRequestUtils& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WebRequestUtils& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WebRequestUtils& operator=(WebRequestUtils&& o) noexcept = default;
  constexpr WebRequestUtils& operator=(WebRequestUtils const& o) noexcept = default;
                


// Fields

static System::Text::RegularExpressions::Regex __declspec(property(get=__get_domainRegex, put=__set_domainRegex))  domainRegex;

static void __set_domainRegex(System::Text::RegularExpressions::Regex value) ;

static System::Text::RegularExpressions::Regex __get_domainRegex() ;


// Methods

/// @brief Method RedirectTo addr 0x2d33d5c size 0xf4 virtual false final false
static ::StringW RedirectTo(::StringW baseUri, ::StringW redirectUri) ;

/// @brief Method MakeInitialUrl addr 0x2d33e50 size 0x398 virtual false final false
static ::StringW MakeInitialUrl(::StringW targetUrl, ::StringW localUrl) ;

/// @brief Method MakeUriString addr 0x2d341e8 size 0x3f4 virtual false final false
static ::StringW MakeUriString(System::Uri targetUri, ::StringW targetUrl, bool prependProtocol) ;

/// @brief Method URLDecode addr 0x2d345dc size 0xa4 virtual false final false
static ::StringW URLDecode(::StringW encoded) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngineInternal
NEED_NO_BOX(UnityEngineInternal::WebRequestUtils);
DEFINE_IL2CPP_ARG_TYPE(UnityEngineInternal::WebRequestUtils, "UnityEngineInternal", "WebRequestUtils");
