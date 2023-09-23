#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace UnityEngine {
class WWWForm;
}
// Type: UnityEngine::WWWForm
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15549))
// CS Name: UnityEngine.WWWForm
class CORDL_TYPE WWWForm : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~WWWForm() = default;

// Ctor Parameters [CppParam { name: "", ty: "WWWForm", modifiers: " const&", def_value: None }]
constexpr WWWForm(WWWForm const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WWWForm", modifiers: "&&", def_value: None }]
constexpr WWWForm(WWWForm&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WWWForm(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr WWWForm& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WWWForm& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WWWForm& operator=(WWWForm&& o) noexcept = default;
  constexpr WWWForm& operator=(WWWForm const& o) noexcept = default;
                


// Fields

static ::ArrayW<uint8_t> __declspec(property(get=__get_dDash, put=__set_dDash))  dDash;

static void __set_dDash(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_dDash() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_crlf, put=__set_crlf))  crlf;

static void __set_crlf(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_crlf() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_contentTypeHeader, put=__set_contentTypeHeader))  contentTypeHeader;

static void __set_contentTypeHeader(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_contentTypeHeader() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_dispositionHeader, put=__set_dispositionHeader))  dispositionHeader;

static void __set_dispositionHeader(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_dispositionHeader() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_endQuote, put=__set_endQuote))  endQuote;

static void __set_endQuote(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_endQuote() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_fileNameField, put=__set_fileNameField))  fileNameField;

static void __set_fileNameField(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_fileNameField() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_ampersand, put=__set_ampersand))  ampersand;

static void __set_ampersand(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_ampersand() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_equal, put=__set_equal))  equal;

static void __set_equal(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_equal() ;


// Properties

static System::Text::Encoding __declspec(property(get=get_DefaultEncoding))  DefaultEncoding;


// Methods

/// @brief Method get_DefaultEncoding addr 0x2d34774 size 0x8 virtual false final false
static System::Text::Encoding get_DefaultEncoding() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::WWWForm);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::WWWForm, "UnityEngine", "WWWForm");
