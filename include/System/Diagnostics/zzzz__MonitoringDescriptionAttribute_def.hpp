#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__DescriptionAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace System::Diagnostics {
class MonitoringDescriptionAttribute;
}
// Type: System.Diagnostics::MonitoringDescriptionAttribute
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8239))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7810))
// CS Name: System.Diagnostics.MonitoringDescriptionAttribute
class CORDL_TYPE MonitoringDescriptionAttribute : public System::ComponentModel::DescriptionAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~MonitoringDescriptionAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonitoringDescriptionAttribute", modifiers: " const&", def_value: None }]
constexpr MonitoringDescriptionAttribute(MonitoringDescriptionAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonitoringDescriptionAttribute", modifiers: "&&", def_value: None }]
constexpr MonitoringDescriptionAttribute(MonitoringDescriptionAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonitoringDescriptionAttribute(void* ptr) noexcept : System::ComponentModel::DescriptionAttribute(ptr) {
}


  constexpr MonitoringDescriptionAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonitoringDescriptionAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonitoringDescriptionAttribute& operator=(MonitoringDescriptionAttribute&& o) noexcept = default;
  constexpr MonitoringDescriptionAttribute& operator=(MonitoringDescriptionAttribute const& o) noexcept = default;
                


// Properties

 ::StringW __declspec(property(get=get_Description))  Description;


// Methods

static System::Diagnostics::MonitoringDescriptionAttribute New_ctor(::StringW description) ;

/// @brief Method .ctor addr 0x27e1700 size 0x68 virtual false final false
 void _ctor(::StringW description) ;

/// @brief Method get_Description addr 0x27e1768 size 0x8 virtual true final false
 ::StringW get_Description() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics
NEED_NO_BOX(System::Diagnostics::MonitoringDescriptionAttribute);
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::MonitoringDescriptionAttribute, "System.Diagnostics", "MonitoringDescriptionAttribute");
