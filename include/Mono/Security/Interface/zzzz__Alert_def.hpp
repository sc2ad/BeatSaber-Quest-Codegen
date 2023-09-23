#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Mono::Security::Interface {
struct AlertLevel;
}
namespace Mono::Security::Interface {
struct AlertDescription;
}
// Forward declare root types
namespace Mono::Security::Interface {
class Alert;
}
// Type: Mono.Security.Interface::Alert
namespace Mono::Security::Interface {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13985))
// CS Name: Mono.Security.Interface.Alert
class CORDL_TYPE Alert : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~Alert() = default;

// Ctor Parameters [CppParam { name: "", ty: "Alert", modifiers: " const&", def_value: None }]
constexpr Alert(Alert const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Alert", modifiers: "&&", def_value: None }]
constexpr Alert(Alert&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Alert(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Alert& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Alert& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Alert& operator=(Alert&& o) noexcept = default;
  constexpr Alert& operator=(Alert const& o) noexcept = default;
                


// Fields

 Mono::Security::Interface::AlertLevel __declspec(property(get=__get_level, put=__set_level))  level;

constexpr void __set_level(Mono::Security::Interface::AlertLevel value) ;

constexpr Mono::Security::Interface::AlertLevel __get_level() const;

 Mono::Security::Interface::AlertDescription __declspec(property(get=__get_description, put=__set_description))  description;

constexpr void __set_description(Mono::Security::Interface::AlertDescription value) ;

constexpr Mono::Security::Interface::AlertDescription __get_description() const;


// Properties

 Mono::Security::Interface::AlertLevel __declspec(property(get=get_Level))  Level;

 Mono::Security::Interface::AlertDescription __declspec(property(get=get_Description))  Description;


// Methods

/// @brief Method get_Level addr 0x22952c8 size 0x8 virtual false final false
 Mono::Security::Interface::AlertLevel get_Level() ;

/// @brief Method get_Description addr 0x22952d0 size 0x8 virtual false final false
 Mono::Security::Interface::AlertDescription get_Description() ;

// Ctor Parameters [CppParam { name: "description", ty: "Mono::Security::Interface::AlertDescription", modifiers: "", def_value: None }]
explicit Alert(Mono::Security::Interface::AlertDescription description) ;

/// @brief Method .ctor addr 0x22952d8 size 0x6c virtual false final false
 void _ctor(Mono::Security::Interface::AlertDescription description) ;

/// @brief Method inferAlertLevel addr 0x2295344 size 0x40 virtual false final false
 void inferAlertLevel() ;

/// @brief Method ToString addr 0x2295384 size 0xbc virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::Interface
NEED_NO_BOX(Mono::Security::Interface::Alert);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Interface::Alert, "Mono.Security.Interface", "Alert");
