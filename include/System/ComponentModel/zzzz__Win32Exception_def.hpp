#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Runtime/InteropServices/zzzz__ExternalException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::ComponentModel {
class Win32Exception;
}
// Type: System.ComponentModel::Win32Exception
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3298))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8343))
// CS Name: System.ComponentModel.Win32Exception
class CORDL_TYPE Win32Exception : public System::Runtime::InteropServices::ExternalException {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~Win32Exception() = default;

// Ctor Parameters [CppParam { name: "", ty: "Win32Exception", modifiers: " const&", def_value: None }]
constexpr Win32Exception(Win32Exception const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Win32Exception", modifiers: "&&", def_value: None }]
constexpr Win32Exception(Win32Exception&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Win32Exception(void* ptr) noexcept : System::Runtime::InteropServices::ExternalException(ptr) {
}


  constexpr Win32Exception& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Win32Exception& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Win32Exception& operator=(Win32Exception&& o) noexcept = default;
  constexpr Win32Exception& operator=(Win32Exception const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_nativeErrorCode, put=__set_nativeErrorCode))  nativeErrorCode;

constexpr void __set_nativeErrorCode(int32_t value) ;

constexpr int32_t __get_nativeErrorCode() const;


// Properties

 int32_t __declspec(property(get=get_NativeErrorCode))  NativeErrorCode;


// Methods

// Ctor Parameters []
explicit Win32Exception() ;

/// @brief Method .ctor addr 0x27a7230 size 0x74 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "error", ty: "int32_t", modifiers: "", def_value: None }]
explicit Win32Exception(int32_t error) ;

/// @brief Method .ctor addr 0x27a72a4 size 0x38 virtual false final false
 void _ctor(int32_t error) ;

// Ctor Parameters [CppParam { name: "error", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "message", ty: "::StringW", modifiers: "", def_value: None }]
explicit Win32Exception(int32_t error, ::StringW message) ;

/// @brief Method .ctor addr 0x27a7bd0 size 0x2c virtual false final false
 void _ctor(int32_t error, ::StringW message) ;

// Ctor Parameters [CppParam { name: "info", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit Win32Exception(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x27a7bfc size 0x88 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method get_NativeErrorCode addr 0x27a7c84 size 0x8 virtual false final false
 int32_t get_NativeErrorCode() ;

/// @brief Method GetObjectData addr 0x27a7c8c size 0xcc virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetErrorMessage addr 0x27a72dc size 0x8f4 virtual false final false
static ::StringW GetErrorMessage(int32_t error) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::Win32Exception);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::Win32Exception, "System.ComponentModel", "Win32Exception");
