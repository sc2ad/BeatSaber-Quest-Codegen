#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System {
class Type;
}
namespace System::Reflection {
class Binder;
}
// Forward declare root types
namespace System {
class Activator;
}
// Type: System::Activator
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2545))
// CS Name: System.Activator
class CORDL_TYPE Activator : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Activator() = default;

// Ctor Parameters [CppParam { name: "", ty: "Activator", modifiers: " const&", def_value: None }]
constexpr Activator(Activator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Activator", modifiers: "&&", def_value: None }]
constexpr Activator(Activator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Activator(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Activator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Activator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Activator& operator=(Activator&& o) noexcept = default;
  constexpr Activator& operator=(Activator const& o) noexcept = default;
                


// Methods

/// @brief Method CreateInstance addr 0x246a9d4 size 0x8 virtual false final false
static ::bs_hook::Il2CppWrapperType CreateInstance(System::Type type, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, ::ArrayW<::bs_hook::Il2CppWrapperType> args, System::Globalization::CultureInfo culture) ;

/// @brief Method CreateInstance addr 0x246a9dc size 0x204 virtual false final false
static ::bs_hook::Il2CppWrapperType CreateInstance(System::Type type, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder binder, ::ArrayW<::bs_hook::Il2CppWrapperType> args, System::Globalization::CultureInfo culture, ::ArrayW<::bs_hook::Il2CppWrapperType> activationAttributes) ;

/// @brief Method CreateInstance addr 0x246b578 size 0x18 virtual false final false
static ::bs_hook::Il2CppWrapperType CreateInstance(System::Type type, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method CreateInstance addr 0x246b590 size 0x18 virtual false final false
static ::bs_hook::Il2CppWrapperType CreateInstance(System::Type type, ::ArrayW<::bs_hook::Il2CppWrapperType> args, ::ArrayW<::bs_hook::Il2CppWrapperType> activationAttributes) ;

/// @brief Method CreateInstance addr 0x246b5a8 size 0xc virtual false final false
static ::bs_hook::Il2CppWrapperType CreateInstance(System::Type type) ;

/// @brief Method CreateInstance addr 0x246b5b4 size 0xc virtual false final false
static ::bs_hook::Il2CppWrapperType CreateInstance(System::Type type, bool nonPublic) ;

/// @brief Method CreateInstance addr 0x246b5c0 size 0x180 virtual false final false
static ::bs_hook::Il2CppWrapperType CreateInstance(System::Type type, bool nonPublic, bool wrapExceptions) ;

/// @brief Method CreateInstance addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T CreateInstance() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::Activator);
DEFINE_IL2CPP_ARG_TYPE(System::Activator, "System", "Activator");
