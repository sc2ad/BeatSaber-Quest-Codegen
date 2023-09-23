#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Newtonsoft::Json {
struct StringEscapeHandling;
}
namespace System::IO {
class TextWriter;
}
namespace Newtonsoft::Json {
template<typename T>
class IArrayPool_1;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class JavaScriptUtils;
}
// Type: Newtonsoft.Json.Utilities::JavaScriptUtils
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11831))
// CS Name: Newtonsoft.Json.Utilities.JavaScriptUtils
class CORDL_TYPE JavaScriptUtils : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~JavaScriptUtils() = default;

// Ctor Parameters [CppParam { name: "", ty: "JavaScriptUtils", modifiers: " const&", def_value: None }]
constexpr JavaScriptUtils(JavaScriptUtils const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JavaScriptUtils", modifiers: "&&", def_value: None }]
constexpr JavaScriptUtils(JavaScriptUtils&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JavaScriptUtils(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr JavaScriptUtils& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JavaScriptUtils& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JavaScriptUtils& operator=(JavaScriptUtils&& o) noexcept = default;
  constexpr JavaScriptUtils& operator=(JavaScriptUtils const& o) noexcept = default;
                


// Fields

static ::ArrayW<bool> __declspec(property(get=__get_SingleQuoteCharEscapeFlags, put=__set_SingleQuoteCharEscapeFlags))  SingleQuoteCharEscapeFlags;

static void __set_SingleQuoteCharEscapeFlags(::ArrayW<bool> value) ;

static ::ArrayW<bool> __get_SingleQuoteCharEscapeFlags() ;

static ::ArrayW<bool> __declspec(property(get=__get_DoubleQuoteCharEscapeFlags, put=__set_DoubleQuoteCharEscapeFlags))  DoubleQuoteCharEscapeFlags;

static void __set_DoubleQuoteCharEscapeFlags(::ArrayW<bool> value) ;

static ::ArrayW<bool> __get_DoubleQuoteCharEscapeFlags() ;

static ::ArrayW<bool> __declspec(property(get=__get_HtmlCharEscapeFlags, put=__set_HtmlCharEscapeFlags))  HtmlCharEscapeFlags;

static void __set_HtmlCharEscapeFlags(::ArrayW<bool> value) ;

static ::ArrayW<bool> __get_HtmlCharEscapeFlags() ;

/// @brief Field UnicodeTextLength offset 0
static constexpr int32_t  UnicodeTextLength{6};

/// @brief Field EscapedUnicodeText offset 0
static constexpr ::ConstString  EscapedUnicodeText{u"!"};


// Methods

/// @brief Method GetCharEscapeFlags addr 0x24eb79c size 0x98 virtual false final false
static ::ArrayW<bool> GetCharEscapeFlags(Newtonsoft::Json::StringEscapeHandling stringEscapeHandling, char16_t quoteChar) ;

/// @brief Method ShouldEscapeJavaScriptString addr 0x24eb834 size 0x88 virtual false final false
static bool ShouldEscapeJavaScriptString(::StringW s, ::ArrayW<bool> charEscapeFlags) ;

/// @brief Method WriteEscapedJavaScriptString addr 0x24eb8bc size 0x4ec virtual false final false
static void WriteEscapedJavaScriptString(System::IO::TextWriter writer, ::StringW s, char16_t delimiter, bool appendDelimiters, ::ArrayW<bool> charEscapeFlags, Newtonsoft::Json::StringEscapeHandling stringEscapeHandling, Newtonsoft::Json::IArrayPool_1<char16_t> bufferPool, ByRef<::ArrayW<char16_t>> writeBuffer) ;

/// @brief Method ToEscapedJavaScriptString addr 0x24ebe60 size 0x24c virtual false final false
static ::StringW ToEscapedJavaScriptString(::StringW value, char16_t delimiter, bool appendDelimiters, Newtonsoft::Json::StringEscapeHandling stringEscapeHandling) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
NEED_NO_BOX(Newtonsoft::Json::Utilities::JavaScriptUtils);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Utilities::JavaScriptUtils, "Newtonsoft.Json.Utilities", "JavaScriptUtils");
