#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__TimeoutException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
struct TimeSpan;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
// Forward declare root types
namespace System::Text::RegularExpressions {
class RegexMatchTimeoutException;
}
// Type: System.Text.RegularExpressions::RegexMatchTimeoutException
namespace System::Text::RegularExpressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2486))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7774))
// CS Name: System.Text.RegularExpressions.RegexMatchTimeoutException
class CORDL_TYPE RegexMatchTimeoutException : public System::TimeoutException {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~RegexMatchTimeoutException() = default;

// Ctor Parameters [CppParam { name: "", ty: "RegexMatchTimeoutException", modifiers: " const&", def_value: None }]
constexpr RegexMatchTimeoutException(RegexMatchTimeoutException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RegexMatchTimeoutException", modifiers: "&&", def_value: None }]
constexpr RegexMatchTimeoutException(RegexMatchTimeoutException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RegexMatchTimeoutException(void* ptr) noexcept : System::TimeoutException(ptr) {
}


  constexpr RegexMatchTimeoutException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RegexMatchTimeoutException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RegexMatchTimeoutException& operator=(RegexMatchTimeoutException&& o) noexcept = default;
  constexpr RegexMatchTimeoutException& operator=(RegexMatchTimeoutException const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__Input_k__BackingField, put=__set__Input_k__BackingField))  _Input_k__BackingField;

constexpr void __set__Input_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Input_k__BackingField() const;

 ::StringW __declspec(property(get=__get__Pattern_k__BackingField, put=__set__Pattern_k__BackingField))  _Pattern_k__BackingField;

constexpr void __set__Pattern_k__BackingField(::StringW value) ;

constexpr ::StringW __get__Pattern_k__BackingField() const;

 System::TimeSpan __declspec(property(get=__get__MatchTimeout_k__BackingField, put=__set__MatchTimeout_k__BackingField))  _MatchTimeout_k__BackingField;

constexpr void __set__MatchTimeout_k__BackingField(System::TimeSpan value) ;

constexpr System::TimeSpan __get__MatchTimeout_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_Input))  Input;

 ::StringW __declspec(property(get=get_Pattern))  Pattern;

 System::TimeSpan __declspec(property(get=get_MatchTimeout))  MatchTimeout;


// Methods

// Ctor Parameters [CppParam { name: "regexInput", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "regexPattern", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "matchTimeout", ty: "System::TimeSpan", modifiers: "", def_value: None }]
explicit RegexMatchTimeoutException(::StringW regexInput, ::StringW regexPattern, System::TimeSpan matchTimeout) ;

/// @brief Method .ctor addr 0x27cf30c size 0xcc virtual false final false
 void _ctor(::StringW regexInput, ::StringW regexPattern, System::TimeSpan matchTimeout) ;

// Ctor Parameters []
explicit RegexMatchTimeoutException() ;

/// @brief Method .ctor addr 0x27cf3d8 size 0x94 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit RegexMatchTimeoutException(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x27cf46c size 0x138 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x27cf5a4 size 0xd4 virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_Input addr 0x27cf678 size 0x8 virtual false final false
 ::StringW get_Input() ;

/// @brief Method get_Pattern addr 0x27cf680 size 0x8 virtual false final false
 ::StringW get_Pattern() ;

/// @brief Method get_MatchTimeout addr 0x27cf688 size 0x8 virtual false final false
 System::TimeSpan get_MatchTimeout() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Text::RegularExpressions
NEED_NO_BOX(System::Text::RegularExpressions::RegexMatchTimeoutException);
DEFINE_IL2CPP_ARG_TYPE(System::Text::RegularExpressions::RegexMatchTimeoutException, "System.Text.RegularExpressions", "RegexMatchTimeoutException");
