#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
namespace {
namespace TMPro {
class TMP_Character;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TMP_FontAsset;
}
// Forward declare root types
namespace TMPro {
class TMP_FontUtilities;
}
// Type: TMPro::TMP_FontUtilities
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12311))
// CS Name: TMPro.TMP_FontUtilities
class CORDL_TYPE TMP_FontUtilities : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TMP_FontUtilities() = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_FontUtilities", modifiers: " const&", def_value: None }]
constexpr TMP_FontUtilities(TMP_FontUtilities const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TMP_FontUtilities", modifiers: "&&", def_value: None }]
constexpr TMP_FontUtilities(TMP_FontUtilities&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TMP_FontUtilities(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TMP_FontUtilities& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TMP_FontUtilities& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TMP_FontUtilities& operator=(TMP_FontUtilities&& o) noexcept = default;
  constexpr TMP_FontUtilities& operator=(TMP_FontUtilities const& o) noexcept = default;
                


// Fields

static ::System::Collections::Generic::List_1<int32_t> __declspec(property(get=__get_k_searchedFontAssets, put=__set_k_searchedFontAssets))  k_searchedFontAssets;

static void __set_k_searchedFontAssets(::System::Collections::Generic::List_1<int32_t> value) ;

static ::System::Collections::Generic::List_1<int32_t> __get_k_searchedFontAssets() ;


// Methods

/// @brief Method SearchForCharacter addr 0x2a795e8 size 0xe4 virtual false final false
static ::TMPro::TMP_FontAsset SearchForCharacter(::TMPro::TMP_FontAsset font, uint32_t unicode, ByRef<::TMPro::TMP_Character> character) ;

/// @brief Method SearchForCharacter addr 0x2a7995c size 0x4 virtual false final false
static ::TMPro::TMP_FontAsset SearchForCharacter(::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset> fonts, uint32_t unicode, ByRef<::TMPro::TMP_Character> character) ;

/// @brief Method SearchForCharacterInternal addr 0x2a796cc size 0x290 virtual false final false
static ::TMPro::TMP_FontAsset SearchForCharacterInternal(::TMPro::TMP_FontAsset font, uint32_t unicode, ByRef<::TMPro::TMP_Character> character) ;

/// @brief Method SearchForCharacterInternal addr 0x2a79960 size 0xf0 virtual false final false
static ::TMPro::TMP_FontAsset SearchForCharacterInternal(::System::Collections::Generic::List_1<::TMPro::TMP_FontAsset> fonts, uint32_t unicode, ByRef<::TMPro::TMP_Character> character) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
NEED_NO_BOX(::TMPro::TMP_FontUtilities);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_FontUtilities, "TMPro", "TMP_FontUtilities");
