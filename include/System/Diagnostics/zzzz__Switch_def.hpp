#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class WeakReference;
}
// Forward declare root types
namespace System::Diagnostics {
class Switch;
}
// Type: System.Diagnostics::Switch
namespace System::Diagnostics {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7786))
// CS Name: System.Diagnostics.Switch
class CORDL_TYPE Switch : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~Switch() = default;

// Ctor Parameters [CppParam { name: "", ty: "Switch", modifiers: " const&", def_value: None }]
constexpr Switch(Switch const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Switch", modifiers: "&&", def_value: None }]
constexpr Switch(Switch&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Switch(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Switch& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Switch& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Switch& operator=(Switch&& o) noexcept = default;
  constexpr Switch& operator=(Switch const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_description, put=__set_description))  description;

constexpr void __set_description(::StringW value) ;

constexpr ::StringW __get_description() const;

 ::StringW __declspec(property(get=__get_displayName, put=__set_displayName))  displayName;

constexpr void __set_displayName(::StringW value) ;

constexpr ::StringW __get_displayName() const;

 ::StringW __declspec(property(get=__get_switchValueString, put=__set_switchValueString))  switchValueString;

constexpr void __set_switchValueString(::StringW value) ;

constexpr ::StringW __get_switchValueString() const;

 ::StringW __declspec(property(get=__get_defaultValue, put=__set_defaultValue))  defaultValue;

constexpr void __set_defaultValue(::StringW value) ;

constexpr ::StringW __get_defaultValue() const;

static ::System::Collections::Generic::List_1<::System::WeakReference> __declspec(property(get=__get_switches, put=__set_switches))  switches;

static void __set_switches(::System::Collections::Generic::List_1<::System::WeakReference> value) ;

static ::System::Collections::Generic::List_1<::System::WeakReference> __get_switches() ;

static int32_t __declspec(property(get=__get_s_LastCollectionCount, put=__set_s_LastCollectionCount))  s_LastCollectionCount;

static void __set_s_LastCollectionCount(int32_t value) ;

static int32_t __get_s_LastCollectionCount() ;


// Methods

// Ctor Parameters [CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "description", ty: "::StringW", modifiers: "", def_value: None }]
explicit Switch(::StringW displayName, ::StringW description) ;

/// @brief Method .ctor addr 0x27d9abc size 0x60 virtual false final false
 void _ctor(::StringW displayName, ::StringW description) ;

// Ctor Parameters [CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "description", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "defaultSwitchValue", ty: "::StringW", modifiers: "", def_value: None }]
explicit Switch(::StringW displayName, ::StringW description, ::StringW defaultSwitchValue) ;

/// @brief Method .ctor addr 0x27d9b1c size 0x24c virtual false final false
 void _ctor(::StringW displayName, ::StringW description, ::StringW defaultSwitchValue) ;

/// @brief Method _pruneCachedSwitches addr 0x27d9d68 size 0x4e4 virtual false final false
static void _pruneCachedSwitches() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Diagnostics
} // end anonymous namespace
NEED_NO_BOX(::System::Diagnostics::Switch);
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Switch, "System.Diagnostics", "Switch");
