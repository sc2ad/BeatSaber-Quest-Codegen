#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace Oculus::Platform {
struct MultiplayerErrorErrorKey;
}
// Forward declare root types
namespace Oculus::Platform {
class MultiplayerErrorOptions;
}
// Type: Oculus.Platform::MultiplayerErrorOptions
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13298))
// CS Name: Oculus.Platform.MultiplayerErrorOptions
class CORDL_TYPE MultiplayerErrorOptions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MultiplayerErrorOptions() = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerErrorOptions", modifiers: " const&", def_value: None }]
constexpr MultiplayerErrorOptions(MultiplayerErrorOptions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MultiplayerErrorOptions", modifiers: "&&", def_value: None }]
constexpr MultiplayerErrorOptions(MultiplayerErrorOptions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MultiplayerErrorOptions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MultiplayerErrorOptions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MultiplayerErrorOptions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MultiplayerErrorOptions& operator=(MultiplayerErrorOptions&& o) noexcept = default;
  constexpr MultiplayerErrorOptions& operator=(MultiplayerErrorOptions const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_Handle, put=__set_Handle))  Handle;

constexpr void __set_Handle(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_Handle() const;


// Methods

// Ctor Parameters []
explicit MultiplayerErrorOptions() ;

/// @brief Method .ctor addr 0x2584ac0 size 0x64 virtual false final false
 void _ctor() ;

/// @brief Method SetErrorKey addr 0x2584b24 size 0x68 virtual false final false
 void SetErrorKey(Oculus::Platform::MultiplayerErrorErrorKey value) ;

/// @brief Method op_Explicit addr 0x2584b8c size 0x58 virtual false final false
static ::cordl_internals::intptr_t op_Explicit___cordl_internals__intptr_t(Oculus::Platform::MultiplayerErrorOptions options) ;

/// @brief Method Finalize addr 0x2584be4 size 0xd4 virtual true final false
 void Finalize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::MultiplayerErrorOptions);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::MultiplayerErrorOptions, "Oculus.Platform", "MultiplayerErrorOptions");
