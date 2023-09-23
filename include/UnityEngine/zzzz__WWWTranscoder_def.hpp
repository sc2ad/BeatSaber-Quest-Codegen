#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
// Forward declare root types
namespace UnityEngine {
class WWWTranscoder;
}
// Type: UnityEngine::WWWTranscoder
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15550))
// CS Name: UnityEngine.WWWTranscoder
class CORDL_TYPE WWWTranscoder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~WWWTranscoder() = default;

// Ctor Parameters [CppParam { name: "", ty: "WWWTranscoder", modifiers: " const&", def_value: None }]
constexpr WWWTranscoder(WWWTranscoder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WWWTranscoder", modifiers: "&&", def_value: None }]
constexpr WWWTranscoder(WWWTranscoder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WWWTranscoder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr WWWTranscoder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WWWTranscoder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WWWTranscoder& operator=(WWWTranscoder&& o) noexcept = default;
  constexpr WWWTranscoder& operator=(WWWTranscoder const& o) noexcept = default;
                


// Fields

static ::ArrayW<uint8_t> __declspec(property(get=__get_ucHexChars, put=__set_ucHexChars))  ucHexChars;

static void __set_ucHexChars(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_ucHexChars() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_lcHexChars, put=__set_lcHexChars))  lcHexChars;

static void __set_lcHexChars(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_lcHexChars() ;

static uint8_t __declspec(property(get=__get_urlEscapeChar, put=__set_urlEscapeChar))  urlEscapeChar;

static void __set_urlEscapeChar(uint8_t value) ;

static uint8_t __get_urlEscapeChar() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_urlSpace, put=__set_urlSpace))  urlSpace;

static void __set_urlSpace(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_urlSpace() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_dataSpace, put=__set_dataSpace))  dataSpace;

static void __set_dataSpace(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_dataSpace() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_urlForbidden, put=__set_urlForbidden))  urlForbidden;

static void __set_urlForbidden(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_urlForbidden() ;

static uint8_t __declspec(property(get=__get_qpEscapeChar, put=__set_qpEscapeChar))  qpEscapeChar;

static void __set_qpEscapeChar(uint8_t value) ;

static uint8_t __get_qpEscapeChar() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_qpSpace, put=__set_qpSpace))  qpSpace;

static void __set_qpSpace(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_qpSpace() ;

static ::ArrayW<uint8_t> __declspec(property(get=__get_qpForbidden, put=__set_qpForbidden))  qpForbidden;

static void __set_qpForbidden(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_qpForbidden() ;


// Methods

/// @brief Method Hex2Byte addr 0x2d349b4 size 0xac virtual false final false
static uint8_t Hex2Byte(::ArrayW<uint8_t> b, int32_t offset) ;

/// @brief Method Byte2Hex addr 0x2d34a60 size 0x54 virtual false final false
static void Byte2Hex(uint8_t b, ::ArrayW<uint8_t> hexChars, ByRef<uint8_t> byte0, ByRef<uint8_t> byte1) ;

/// @brief Method URLEncode addr 0x2d34ab4 size 0x6c virtual false final false
static ::ArrayW<uint8_t> URLEncode(::ArrayW<uint8_t> toEncode) ;

/// @brief Method Encode addr 0x2d34b20 size 0x3ac virtual false final false
static ::ArrayW<uint8_t> Encode(::ArrayW<uint8_t> input, uint8_t escapeChar, ::ArrayW<uint8_t> space, ::ArrayW<uint8_t> forbidden, bool uppercase) ;

/// @brief Method ByteArrayContains addr 0x2d34ecc size 0x4c virtual false final false
static bool ByteArrayContains(::ArrayW<uint8_t> array, uint8_t b) ;

/// @brief Method URLDecode addr 0x2d34680 size 0x64 virtual false final false
static ::ArrayW<uint8_t> URLDecode(::ArrayW<uint8_t> toEncode) ;

/// @brief Method ByteSubArrayEquals addr 0x2d351f8 size 0x78 virtual false final false
static bool ByteSubArrayEquals(::ArrayW<uint8_t> array, int32_t index, ::ArrayW<uint8_t> comperand) ;

/// @brief Method Decode addr 0x2d34f18 size 0x2e0 virtual false final false
static ::ArrayW<uint8_t> Decode(::ArrayW<uint8_t> input, uint8_t escapeChar, ::ArrayW<uint8_t> space) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::WWWTranscoder);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::WWWTranscoder, "UnityEngine", "WWWTranscoder");
