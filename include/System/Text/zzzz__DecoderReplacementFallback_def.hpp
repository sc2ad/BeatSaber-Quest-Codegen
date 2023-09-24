#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Text/zzzz__DecoderFallback_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Text {
class DecoderFallbackBuffer;
}
// Forward declare root types
namespace System::Text {
class DecoderReplacementFallback;
}
// Type: System.Text::DecoderReplacementFallback
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2829))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2832))
// CS Name: System.Text.DecoderReplacementFallback
class CORDL_TYPE DecoderReplacementFallback : public System::Text::DecoderFallback {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~DecoderReplacementFallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "DecoderReplacementFallback", modifiers: " const&", def_value: None }]
constexpr DecoderReplacementFallback(DecoderReplacementFallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DecoderReplacementFallback", modifiers: "&&", def_value: None }]
constexpr DecoderReplacementFallback(DecoderReplacementFallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DecoderReplacementFallback(void* ptr) noexcept : System::Text::DecoderFallback(ptr) {
}


  constexpr DecoderReplacementFallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DecoderReplacementFallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DecoderReplacementFallback& operator=(DecoderReplacementFallback&& o) noexcept = default;
  constexpr DecoderReplacementFallback& operator=(DecoderReplacementFallback const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__strDefault, put=__set__strDefault))  _strDefault;

constexpr void __set__strDefault(::StringW value) ;

constexpr ::StringW __get__strDefault() const;


// Properties

 ::StringW __declspec(property(get=get_DefaultString))  DefaultString;

 int32_t __declspec(property(get=get_MaxCharCount))  MaxCharCount;


// Methods

static System::Text::DecoderReplacementFallback New_ctor() ;

/// @brief Method .ctor addr 0x24c2e38 size 0x48 virtual false final false
 void _ctor() ;

static System::Text::DecoderReplacementFallback New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x24c4144 size 0x104 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x24c4248 size 0x5c virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static System::Text::DecoderReplacementFallback New_ctor(::StringW replacement) ;

/// @brief Method .ctor addr 0x24c3f9c size 0x1a8 virtual false final false
 void _ctor(::StringW replacement) ;

/// @brief Method get_DefaultString addr 0x24c42a4 size 0x8 virtual false final false
 ::StringW get_DefaultString() ;

/// @brief Method CreateFallbackBuffer addr 0x24c42ac size 0x60 virtual true final false
 System::Text::DecoderFallbackBuffer CreateFallbackBuffer() ;

/// @brief Method get_MaxCharCount addr 0x24c4348 size 0x1c virtual true final false
 int32_t get_MaxCharCount() ;

/// @brief Method Equals addr 0x24c4364 size 0x80 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetHashCode addr 0x24c43e4 size 0x20 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
NEED_NO_BOX(System::Text::DecoderReplacementFallback);
DEFINE_IL2CPP_ARG_TYPE(System::Text::DecoderReplacementFallback, "System.Text", "DecoderReplacementFallback");
