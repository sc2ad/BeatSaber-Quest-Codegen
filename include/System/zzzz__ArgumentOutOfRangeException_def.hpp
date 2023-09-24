#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__ArgumentException_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System {
class ArgumentOutOfRangeException;
}
// Type: System::ArgumentOutOfRangeException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2344))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2346))
// CS Name: System.ArgumentOutOfRangeException
class CORDL_TYPE ArgumentOutOfRangeException : public System::ArgumentException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~ArgumentOutOfRangeException() = default;

// Ctor Parameters [CppParam { name: "", ty: "ArgumentOutOfRangeException", modifiers: " const&", def_value: None }]
constexpr ArgumentOutOfRangeException(ArgumentOutOfRangeException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ArgumentOutOfRangeException", modifiers: "&&", def_value: None }]
constexpr ArgumentOutOfRangeException(ArgumentOutOfRangeException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ArgumentOutOfRangeException(void* ptr) noexcept : System::ArgumentException(ptr) {
}


  constexpr ArgumentOutOfRangeException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ArgumentOutOfRangeException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ArgumentOutOfRangeException& operator=(ArgumentOutOfRangeException&& o) noexcept = default;
  constexpr ArgumentOutOfRangeException& operator=(ArgumentOutOfRangeException const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__actualValue, put=__set__actualValue))  _actualValue;

constexpr void __set__actualValue(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__actualValue() const;


// Properties

 ::StringW __declspec(property(get=get_Message))  Message;


// Methods

static System::ArgumentOutOfRangeException New_ctor() ;

/// @brief Method .ctor addr 0x23b4208 size 0x5c virtual false final false
 void _ctor() ;

static System::ArgumentOutOfRangeException New_ctor(::StringW paramName) ;

/// @brief Method .ctor addr 0x23b4264 size 0x6c virtual false final false
 void _ctor(::StringW paramName) ;

static System::ArgumentOutOfRangeException New_ctor(::StringW paramName, ::StringW message) ;

/// @brief Method .ctor addr 0x23afdec size 0x38 virtual false final false
 void _ctor(::StringW paramName, ::StringW message) ;

static System::ArgumentOutOfRangeException New_ctor(::StringW paramName, ::bs_hook::Il2CppWrapperType actualValue, ::StringW message) ;

/// @brief Method .ctor addr 0x23b0f0c size 0x3c virtual false final false
 void _ctor(::StringW paramName, ::bs_hook::Il2CppWrapperType actualValue, ::StringW message) ;

static System::ArgumentOutOfRangeException New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x23b42d0 size 0xd8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetObjectData addr 0x23b43a8 size 0xd8 virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_Message addr 0x23b4480 size 0xac virtual true final false
 ::StringW get_Message() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::ArgumentOutOfRangeException);
DEFINE_IL2CPP_ARG_TYPE(System::ArgumentOutOfRangeException, "System", "ArgumentOutOfRangeException");
