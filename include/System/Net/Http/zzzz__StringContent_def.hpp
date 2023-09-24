#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Net/Http/zzzz__ByteArrayContent_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace System::Net::Http {
class StringContent;
}
// Type: System.Net.Http::StringContent
namespace System::Net::Http {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14800))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14817))
// CS Name: System.Net.Http.StringContent
class CORDL_TYPE StringContent : public System::Net::Http::ByteArrayContent {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~StringContent() = default;

// Ctor Parameters [CppParam { name: "", ty: "StringContent", modifiers: " const&", def_value: None }]
constexpr StringContent(StringContent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StringContent", modifiers: "&&", def_value: None }]
constexpr StringContent(StringContent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StringContent(void* ptr) noexcept : System::Net::Http::ByteArrayContent(ptr) {
}


  constexpr StringContent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StringContent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StringContent& operator=(StringContent&& o) noexcept = default;
  constexpr StringContent& operator=(StringContent const& o) noexcept = default;
                


// Methods

static System::Net::Http::StringContent New_ctor(::StringW content) ;

/// @brief Method .ctor addr 0x26a2d10 size 0xc virtual false final false
 void _ctor(::StringW content) ;

static System::Net::Http::StringContent New_ctor(::StringW content, System::Text::Encoding encoding, ::StringW mediaType) ;

/// @brief Method .ctor addr 0x26a2d1c size 0x108 virtual false final false
 void _ctor(::StringW content, System::Text::Encoding encoding, ::StringW mediaType) ;

/// @brief Method GetByteArray addr 0x26a2e24 size 0x3c virtual false final false
static ::ArrayW<uint8_t> GetByteArray(::StringW content, System::Text::Encoding encoding) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http
NEED_NO_BOX(System::Net::Http::StringContent);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::StringContent, "System.Net.Http", "StringContent");
