#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace System::IO {
class Error;
}
// Type: System.IO::Error
namespace System::IO {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3550))
// CS Name: System.IO.Error
class CORDL_TYPE Error : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Error() = default;

// Ctor Parameters [CppParam { name: "", ty: "Error", modifiers: " const&", def_value: None }]
constexpr Error(Error const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Error", modifiers: "&&", def_value: None }]
constexpr Error(Error&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Error(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Error& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Error& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Error& operator=(Error&& o) noexcept = default;
  constexpr Error& operator=(Error const& o) noexcept = default;
                


// Methods

/// @brief Method GetStreamIsClosed addr 0x238ee10 size 0x78 virtual false final false
static System::Exception GetStreamIsClosed() ;

/// @brief Method GetEndOfFile addr 0x238ee88 size 0x80 virtual false final false
static System::Exception GetEndOfFile() ;

/// @brief Method GetReadNotSupported addr 0x238ef08 size 0x74 virtual false final false
static System::Exception GetReadNotSupported() ;

/// @brief Method GetWriteNotSupported addr 0x238ef7c size 0x74 virtual false final false
static System::Exception GetWriteNotSupported() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::IO
NEED_NO_BOX(System::IO::Error);
DEFINE_IL2CPP_ARG_TYPE(System::IO::Error, "System.IO", "Error");
