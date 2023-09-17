#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace TMPro {
class TMP_TextParsingUtilities;
}
// Type: TMPro::TMP_TextParsingUtilities
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12393))
// CS Name: TMPro.TMP_TextParsingUtilities
class CORDL_TYPE TMP_TextParsingUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TMP_TextParsingUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_TextParsingUtilities", modifiers: " const&", def_value: None }]
constexpr TMP_TextParsingUtilities(TMP_TextParsingUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_TextParsingUtilities", modifiers: "&&", def_value: None }]
constexpr TMP_TextParsingUtilities(TMP_TextParsingUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_TextParsingUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMP_TextParsingUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_TextParsingUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_TextParsingUtilities& operator=(TMP_TextParsingUtilities&& o) noexcept = default;
  constexpr TMP_TextParsingUtilities& operator=(TMP_TextParsingUtilities const& o) noexcept = default;
                


// Fields

static ::TMPro::TMP_TextParsingUtilities __declspec(property(get=__get_s_Instance, put=__set_s_Instance))  s_Instance;

static void __set_s_Instance(::TMPro::TMP_TextParsingUtilities value) ;

static ::TMPro::TMP_TextParsingUtilities __get_s_Instance() ;

/// @brief Field k_LookupStringL offset 0
static constexpr ::ConstString  k_LookupStringL{u"-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@abcdefghijklmnopqrstuvwxyz[-]^_`abcdefghijklmnopqrstuvwxyz{|}~-"};

/// @brief Field k_LookupStringU offset 0
static constexpr ::ConstString  k_LookupStringU{u"-------------------------------- !-#$%&-()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[-]^_`ABCDEFGHIJKLMNOPQRSTUVWXYZ{|}~-"};


// Properties

static ::TMPro::TMP_TextParsingUtilities __declspec(property(get=get_instance))  instance;


// Methods

/// @brief Method get_instance addr 0x2ab1278 size 0x58 virtual false final false
static ::TMPro::TMP_TextParsingUtilities get_instance() ;

/// @brief Method GetHashCode addr 0x2aad37c size 0xbc virtual false final false
static int32_t GetHashCode(::StringW s) ;

/// @brief Method GetHashCodeCaseSensitive addr 0x2aacec4 size 0x6c virtual false final false
static int32_t GetHashCodeCaseSensitive(::StringW s) ;

/// @brief Method ToLowerASCIIFast addr 0x2ab1344 size 0x74 virtual false final false
static char16_t ToLowerASCIIFast(char16_t c) ;

/// @brief Method ToUpperASCIIFast addr 0x2ab12d0 size 0x74 virtual false final false
static char16_t ToUpperASCIIFast(char16_t c) ;

/// @brief Method ToUpperASCIIFast addr 0x2ab13b8 size 0x74 virtual false final false
static uint32_t ToUpperASCIIFast(uint32_t c) ;

/// @brief Method ToLowerASCIIFast addr 0x2ab142c size 0x74 virtual false final false
static uint32_t ToLowerASCIIFast(uint32_t c) ;

/// @brief Method IsHighSurrogate addr 0x2ab14a0 size 0x14 virtual false final false
static bool IsHighSurrogate(uint32_t c) ;

/// @brief Method IsLowSurrogate addr 0x2ab14b4 size 0x14 virtual false final false
static bool IsLowSurrogate(uint32_t c) ;

/// @brief Method ConvertToUTF32 addr 0x2ab14c8 size 0x14 virtual false final false
static uint32_t ConvertToUTF32(uint32_t highSurrogate, uint32_t lowSurrogate) ;

// Ctor Parameters []
explicit TMP_TextParsingUtilities() ;

/// @brief Method .ctor addr 0x2ab1270 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
NEED_NO_BOX(::TMPro::TMP_TextParsingUtilities);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_TextParsingUtilities, "TMPro", "TMP_TextParsingUtilities");
