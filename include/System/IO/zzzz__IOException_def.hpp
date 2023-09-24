#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System::IO {
class IOException;
}
// Type: System.IO::IOException
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3557))
// CS Name: System.IO.IOException
class CORDL_TYPE IOException : public System::SystemException {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~IOException() = default;

// Ctor Parameters [CppParam { name: "", ty: "IOException", modifiers: " const&", def_value: None }]
constexpr IOException(IOException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IOException", modifiers: "&&", def_value: None }]
constexpr IOException(IOException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IOException(void* ptr) noexcept : System::SystemException(ptr) {
}


  constexpr IOException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IOException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IOException& operator=(IOException&& o) noexcept = default;
  constexpr IOException& operator=(IOException const& o) noexcept = default;
                


// Methods

static System::IO::IOException New_ctor() ;

/// @brief Method .ctor addr 0x238f9c4 size 0x5c virtual false final false
 void _ctor() ;

static System::IO::IOException New_ctor(::StringW message) ;

/// @brief Method .ctor addr 0x238ed30 size 0x24 virtual false final false
 void _ctor(::StringW message) ;

static System::IO::IOException New_ctor(::StringW message, int32_t hresult) ;

/// @brief Method .ctor addr 0x238fa20 size 0x28 virtual false final false
 void _ctor(::StringW message, int32_t hresult) ;

static System::IO::IOException New_ctor(::StringW message, System::Exception innerException) ;

/// @brief Method .ctor addr 0x238fa48 size 0x24 virtual false final false
 void _ctor(::StringW message, System::Exception innerException) ;

static System::IO::IOException New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x238ed80 size 0x8 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
NEED_NO_BOX(System::IO::IOException);
DEFINE_IL2CPP_ARG_TYPE(System::IO::IOException, "System.IO", "IOException");
