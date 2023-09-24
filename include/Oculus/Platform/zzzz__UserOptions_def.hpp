#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Oculus::Platform {
struct ServiceProvider;
}
namespace Oculus::Platform {
struct TimeWindow;
}
// Forward declare root types
namespace Oculus::Platform {
class UserOptions;
}
// Type: Oculus.Platform::UserOptions
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13366))
// CS Name: Oculus.Platform.UserOptions
class CORDL_TYPE UserOptions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~UserOptions() = default;

// Ctor Parameters [CppParam { name: "", ty: "UserOptions", modifiers: " const&", def_value: None }]
constexpr UserOptions(UserOptions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UserOptions", modifiers: "&&", def_value: None }]
constexpr UserOptions(UserOptions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UserOptions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UserOptions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UserOptions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UserOptions& operator=(UserOptions&& o) noexcept = default;
  constexpr UserOptions& operator=(UserOptions const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_Handle, put=__set_Handle))  Handle;

constexpr void __set_Handle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_Handle() const;


// Methods

static Oculus::Platform::UserOptions New_ctor() ;

/// @brief Method .ctor addr 0x2598e04 size 0x68 virtual false final false
 void _ctor() ;

/// @brief Method SetMaxUsers addr 0x259a45c size 0x6c virtual false final false
 void SetMaxUsers(uint32_t value) ;

/// @brief Method AddServiceProvider addr 0x2598e6c size 0x6c virtual false final false
 void AddServiceProvider(Oculus::Platform::ServiceProvider value) ;

/// @brief Method ClearServiceProviders addr 0x259a4c8 size 0x5c virtual false final false
 void ClearServiceProviders() ;

/// @brief Method SetTimeWindow addr 0x259a524 size 0x6c virtual false final false
 void SetTimeWindow(Oculus::Platform::TimeWindow value) ;

/// @brief Method op_Explicit addr 0x2598ed8 size 0x58 virtual false final false
static ::cordl_internals::intptr_t op_Explicit___cordl_internals__intptr_t(Oculus::Platform::UserOptions options) ;

/// @brief Method Finalize addr 0x259a590 size 0xd8 virtual true final false
 void Finalize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::UserOptions);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::UserOptions, "Oculus.Platform", "UserOptions");
