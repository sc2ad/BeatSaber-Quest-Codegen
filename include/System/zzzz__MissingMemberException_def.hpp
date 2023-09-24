#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MemberAccessException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System {
class MissingMemberException;
}
// Type: System::MissingMemberException
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2435))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2527))
// CS Name: System.MissingMemberException
class CORDL_TYPE MissingMemberException : public System::MemberAccessException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~MissingMemberException() = default;

// Ctor Parameters [CppParam { name: "", ty: "MissingMemberException", modifiers: " const&", def_value: None }]
constexpr MissingMemberException(MissingMemberException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MissingMemberException", modifiers: "&&", def_value: None }]
constexpr MissingMemberException(MissingMemberException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MissingMemberException(void* ptr) noexcept : System::MemberAccessException(ptr) {
}


  constexpr MissingMemberException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MissingMemberException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MissingMemberException& operator=(MissingMemberException&& o) noexcept = default;
  constexpr MissingMemberException& operator=(MissingMemberException const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_ClassName, put=__set_ClassName))  ClassName;

constexpr void __set_ClassName(::StringW value) ;

constexpr ::StringW __get_ClassName() const;

 ::StringW __declspec(property(get=__get_MemberName, put=__set_MemberName))  MemberName;

constexpr void __set_MemberName(::StringW value) ;

constexpr ::StringW __get_MemberName() const;

 ::ArrayW<uint8_t> __declspec(property(get=__get_Signature, put=__set_Signature))  Signature;

constexpr void __set_Signature(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_Signature() const;


// Properties

 ::StringW __declspec(property(get=get_Message))  Message;


// Methods

static System::MissingMemberException New_ctor() ;

/// @brief Method .ctor addr 0x2463418 size 0x5c virtual false final false
 void _ctor() ;

static System::MissingMemberException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x24633a8 size 0x24 virtual false final false
 void _ctor(::StringW message) ;

static System::MissingMemberException New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2463478 size 0x184 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetObjectData addr 0x246383c size 0x15c virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_Message addr 0x2463710 size 0x12c virtual true final false
 ::StringW get_Message() ;

/// @brief Method FormatSignature addr 0x2463998 size 0x48 virtual false final false
static ::StringW FormatSignature(::ArrayW<uint8_t> signature) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::MissingMemberException);
DEFINE_IL2CPP_ARG_TYPE(System::MissingMemberException, "System", "MissingMemberException");
