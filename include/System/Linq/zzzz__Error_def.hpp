#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Linq {
class Error;
}
// Type: System.Linq::Error
namespace System::Linq {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14535))
// CS Name: System.Linq.Error
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

/// @brief Method ArgumentNull addr 0x2680b34 size 0x64 virtual false final false
static System::Exception ArgumentNull(::StringW s) ;

/// @brief Method ArgumentOutOfRange addr 0x2680b98 size 0x64 virtual false final false
static System::Exception ArgumentOutOfRange(::StringW s) ;

/// @brief Method MoreThanOneElement addr 0x2680bfc size 0x74 virtual false final false
static System::Exception MoreThanOneElement() ;

/// @brief Method MoreThanOneMatch addr 0x2680c70 size 0x74 virtual false final false
static System::Exception MoreThanOneMatch() ;

/// @brief Method NoElements addr 0x2680ce4 size 0x74 virtual false final false
static System::Exception NoElements() ;

/// @brief Method NoMatch addr 0x2680d58 size 0x74 virtual false final false
static System::Exception NoMatch() ;

/// @brief Method NotSupported addr 0x2680dcc size 0x5c virtual false final false
static System::Exception NotSupported() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Linq
NEED_NO_BOX(System::Linq::Error);
DEFINE_IL2CPP_ARG_TYPE(System::Linq::Error, "System.Linq", "Error");
