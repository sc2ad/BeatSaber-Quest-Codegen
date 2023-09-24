#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform {
class ApplicationOptions;
}
// Type: Oculus.Platform::ApplicationOptions
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13164))
// CS Name: Oculus.Platform.ApplicationOptions
class CORDL_TYPE ApplicationOptions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ApplicationOptions() = default;

// Ctor Parameters [CppParam { name: "", ty: "ApplicationOptions", modifiers: " const&", def_value: None }]
constexpr ApplicationOptions(ApplicationOptions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ApplicationOptions", modifiers: "&&", def_value: None }]
constexpr ApplicationOptions(ApplicationOptions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ApplicationOptions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ApplicationOptions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ApplicationOptions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ApplicationOptions& operator=(ApplicationOptions&& o) noexcept = default;
  constexpr ApplicationOptions& operator=(ApplicationOptions const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_Handle, put=__set_Handle))  Handle;

constexpr void __set_Handle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_Handle() const;


// Methods

static Oculus::Platform::ApplicationOptions New_ctor() ;

/// @brief Method .ctor addr 0x2553068 size 0x64 virtual false final false
 void _ctor() ;

/// @brief Method SetDeeplinkMessage addr 0x2553134 size 0x68 virtual false final false
 void SetDeeplinkMessage(::StringW value) ;

/// @brief Method SetDestinationApiName addr 0x255323c size 0x68 virtual false final false
 void SetDestinationApiName(::StringW value) ;

/// @brief Method SetLobbySessionId addr 0x2553344 size 0x68 virtual false final false
 void SetLobbySessionId(::StringW value) ;

/// @brief Method SetMatchSessionId addr 0x255344c size 0x68 virtual false final false
 void SetMatchSessionId(::StringW value) ;

/// @brief Method SetRoomId addr 0x2553554 size 0x68 virtual false final false
 void SetRoomId(uint64_t value) ;

/// @brief Method op_Explicit addr 0x2553640 size 0x58 virtual false final false
static ::cordl_internals::intptr_t op_Explicit___cordl_internals__intptr_t(Oculus::Platform::ApplicationOptions options) ;

/// @brief Method Finalize addr 0x2553698 size 0xd4 virtual true final false
 void Finalize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::ApplicationOptions);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::ApplicationOptions, "Oculus.Platform", "ApplicationOptions");
