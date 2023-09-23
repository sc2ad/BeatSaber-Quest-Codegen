#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class StringBuilderExtension;
}
// Type: ::StringBuilderExtension
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13836))
// CS Name: StringBuilderExtension
class CORDL_TYPE StringBuilderExtension : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~StringBuilderExtension() = default;

// Ctor Parameters [CppParam { name: "", ty: "StringBuilderExtension", modifiers: " const&", def_value: None }]
constexpr StringBuilderExtension(StringBuilderExtension const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StringBuilderExtension", modifiers: "&&", def_value: None }]
constexpr StringBuilderExtension(StringBuilderExtension&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StringBuilderExtension(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StringBuilderExtension& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StringBuilderExtension& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StringBuilderExtension& operator=(StringBuilderExtension&& o) noexcept = default;
  constexpr StringBuilderExtension& operator=(StringBuilderExtension const& o) noexcept = default;
                


// Fields

static ::ArrayW<char16_t> __declspec(property(get=__get_charToInt, put=__set_charToInt))  charToInt;

static void __set_charToInt(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_charToInt() ;


// Methods

/// @brief Method Swap addr 0x1f7b9ac size 0xac virtual false final false
static void Swap(System::Text::StringBuilder sb, int32_t startIndex, int32_t endIndex) ;

/// @brief Method AppendNumber addr 0x1f7ba58 size 0x128 virtual false final false
static void AppendNumber(System::Text::StringBuilder sb, int32_t number) ;

/// @brief Method AppendNumber addr 0x1f7bb80 size 0x104 virtual false final false
static void AppendNumber(System::Text::StringBuilder sb, uint32_t unumber) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::StringBuilderExtension);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StringBuilderExtension, "", "StringBuilderExtension");
