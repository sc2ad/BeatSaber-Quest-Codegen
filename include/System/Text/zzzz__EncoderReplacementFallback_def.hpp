#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Text/zzzz__EncoderFallback_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Text {
class EncoderFallbackBuffer;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Text {
class EncoderReplacementFallback;
}
// Type: System.Text::EncoderReplacementFallback
namespace System::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2840))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2843))
// CS Name: System.Text.EncoderReplacementFallback
class CORDL_TYPE EncoderReplacementFallback : public System::Text::EncoderFallback {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~EncoderReplacementFallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "EncoderReplacementFallback", modifiers: " const&", def_value: None }]
constexpr EncoderReplacementFallback(EncoderReplacementFallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EncoderReplacementFallback", modifiers: "&&", def_value: None }]
constexpr EncoderReplacementFallback(EncoderReplacementFallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EncoderReplacementFallback(void* ptr) noexcept : System::Text::EncoderFallback(ptr) {
}


  constexpr EncoderReplacementFallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EncoderReplacementFallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EncoderReplacementFallback& operator=(EncoderReplacementFallback&& o) noexcept = default;
  constexpr EncoderReplacementFallback& operator=(EncoderReplacementFallback const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__strDefault, put=__set__strDefault))  _strDefault;

constexpr void __set__strDefault(::StringW value) ;

constexpr ::StringW __get__strDefault() const;


// Properties

 ::StringW __declspec(property(get=get_DefaultString))  DefaultString;

 int32_t __declspec(property(get=get_MaxCharCount))  MaxCharCount;


// Methods

static System::Text::EncoderReplacementFallback New_ctor() ;

/// @brief Method .ctor addr 0x22c97ac size 0x48 virtual false final false
 void _ctor() ;

static System::Text::EncoderReplacementFallback New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x22c999c size 0x104 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x22c9aa0 size 0x5c virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static System::Text::EncoderReplacementFallback New_ctor(::StringW replacement) ;

/// @brief Method .ctor addr 0x22c97f4 size 0x1a8 virtual false final false
 void _ctor(::StringW replacement) ;

/// @brief Method get_DefaultString addr 0x22c9afc size 0x8 virtual false final false
 ::StringW get_DefaultString() ;

/// @brief Method CreateFallbackBuffer addr 0x22c9b04 size 0x60 virtual true final false
 System::Text::EncoderFallbackBuffer CreateFallbackBuffer() ;

/// @brief Method get_MaxCharCount addr 0x22c9bac size 0x1c virtual true final false
 int32_t get_MaxCharCount() ;

/// @brief Method Equals addr 0x22c9bc8 size 0x80 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetHashCode addr 0x22c9c48 size 0x20 virtual true final false
 int32_t GetHashCode() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text
NEED_NO_BOX(System::Text::EncoderReplacementFallback);
DEFINE_IL2CPP_ARG_TYPE(System::Text::EncoderReplacementFallback, "System.Text", "EncoderReplacementFallback");
