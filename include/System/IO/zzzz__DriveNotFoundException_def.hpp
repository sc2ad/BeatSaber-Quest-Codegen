#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/IO/zzzz__IOException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::IO {
class DriveNotFoundException;
}
// Type: System.IO::DriveNotFoundException
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3557))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3574))
// CS Name: System.IO.DriveNotFoundException
class CORDL_TYPE DriveNotFoundException : public System::IO::IOException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~DriveNotFoundException() = default;

// Ctor Parameters [CppParam { name: "", ty: "DriveNotFoundException", modifiers: " const&", def_value: None }]
constexpr DriveNotFoundException(DriveNotFoundException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DriveNotFoundException", modifiers: "&&", def_value: None }]
constexpr DriveNotFoundException(DriveNotFoundException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DriveNotFoundException(void* ptr) noexcept : System::IO::IOException(ptr) {
}


  constexpr DriveNotFoundException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DriveNotFoundException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DriveNotFoundException& operator=(DriveNotFoundException&& o) noexcept = default;
  constexpr DriveNotFoundException& operator=(DriveNotFoundException const& o) noexcept = default;
                


// Methods

static System::IO::DriveNotFoundException New_ctor() ;

/// @brief Method .ctor addr 0x2399ebc size 0x5c virtual false final false
 void _ctor() ;

static System::IO::DriveNotFoundException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x2399f18 size 0x24 virtual false final false
 void _ctor(::StringW message) ;

static System::IO::DriveNotFoundException New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2399f3c size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
NEED_NO_BOX(System::IO::DriveNotFoundException);
DEFINE_IL2CPP_ARG_TYPE(System::IO::DriveNotFoundException, "System.IO", "DriveNotFoundException");
