#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Text {
class EncoderFallback;
}
namespace System::Text {
class Encoding;
}
namespace System::Text {
class DecoderFallback;
}
// Forward declare root types
namespace System::Text {
class EncodingProvider;
}
// Type: System.Text::EncodingProvider
namespace System::Text {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2846))
// CS Name: System.Text.EncodingProvider
class CORDL_TYPE EncodingProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EncodingProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "EncodingProvider", modifiers: " const&", def_value: None }]
constexpr EncodingProvider(EncodingProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EncodingProvider", modifiers: "&&", def_value: None }]
constexpr EncodingProvider(EncodingProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EncodingProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EncodingProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EncodingProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EncodingProvider& operator=(EncodingProvider&& o) noexcept = default;
  constexpr EncodingProvider& operator=(EncodingProvider const& o) noexcept = default;
                


// Fields

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_s_InternalSyncObject, put=__set_s_InternalSyncObject))  s_InternalSyncObject;

static void __set_s_InternalSyncObject(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_s_InternalSyncObject() ;

static ::ArrayW<System::Text::EncodingProvider> __declspec(property(get=__get_s_providers, put=__set_s_providers))  s_providers;

static void __set_s_providers(::ArrayW<System::Text::EncodingProvider> value) ;

static ::ArrayW<System::Text::EncodingProvider> __get_s_providers() ;


// Methods

/// @brief Method GetEncoding addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Text::Encoding GetEncoding(::StringW name) ;

/// @brief Method GetEncoding addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Text::Encoding GetEncoding(int32_t codepage) ;

/// @brief Method GetEncoding addr 0x22cb1b8 size 0xfc virtual true final false
 System::Text::Encoding GetEncoding(int32_t codepage, System::Text::EncoderFallback encoderFallback, System::Text::DecoderFallback decoderFallback) ;

/// @brief Method GetEncodingFromProvider addr 0x22cb2b4 size 0xdc virtual false final false
static System::Text::Encoding GetEncodingFromProvider(int32_t codepage) ;

/// @brief Method GetEncodingFromProvider addr 0x22cb390 size 0xdc virtual false final false
static System::Text::Encoding GetEncodingFromProvider(::StringW encodingName) ;

/// @brief Method GetEncodingFromProvider addr 0x22cb46c size 0xf4 virtual false final false
static System::Text::Encoding GetEncodingFromProvider(int32_t codepage, System::Text::EncoderFallback enc, System::Text::DecoderFallback dec) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
NEED_NO_BOX(System::Text::EncodingProvider);
DEFINE_IL2CPP_ARG_TYPE(System::Text::EncodingProvider, "System.Text", "EncodingProvider");
