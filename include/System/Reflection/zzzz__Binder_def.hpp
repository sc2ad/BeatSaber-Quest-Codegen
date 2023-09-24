#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Reflection {
class MethodBase;
}
namespace System::Reflection {
struct ParameterModifier;
}
namespace System {
class Type;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Globalization {
class CultureInfo;
}
// Forward declare root types
namespace System::Reflection {
class Binder;
}
// Type: System.Reflection::Binder
namespace System::Reflection {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3450))
// CS Name: System.Reflection.Binder
class CORDL_TYPE Binder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Binder() = default;

// Ctor Parameters [CppParam { name: "", ty: "Binder", modifiers: " const&", def_value: None }]
constexpr Binder(Binder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Binder", modifiers: "&&", def_value: None }]
constexpr Binder(Binder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Binder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Binder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Binder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Binder& operator=(Binder&& o) noexcept = default;
  constexpr Binder& operator=(Binder const& o) noexcept = default;
                


// Methods

static System::Reflection::Binder New_ctor() ;

/// @brief Method .ctor addr 0x2378eb0 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method BindToField addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Reflection::FieldInfo BindToField(System::Reflection::BindingFlags bindingAttr, ::ArrayW<System::Reflection::FieldInfo> match, ::bs_hook::Il2CppWrapperType value, System::Globalization::CultureInfo culture) ;

/// @brief Method BindToMethod addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Reflection::MethodBase BindToMethod(System::Reflection::BindingFlags bindingAttr, ::ArrayW<System::Reflection::MethodBase> match, ByRef<::ArrayW<::bs_hook::Il2CppWrapperType>> args, ::ArrayW<System::Reflection::ParameterModifier> modifiers, System::Globalization::CultureInfo culture, ::ArrayW<::StringW> names, ByRef<::bs_hook::Il2CppWrapperType> state) ;

/// @brief Method ChangeType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ChangeType(::bs_hook::Il2CppWrapperType value, System::Type type, System::Globalization::CultureInfo culture) ;

/// @brief Method ReorderArgumentArray addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReorderArgumentArray(ByRef<::ArrayW<::bs_hook::Il2CppWrapperType>> args, ::bs_hook::Il2CppWrapperType state) ;

/// @brief Method SelectMethod addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Reflection::MethodBase SelectMethod(System::Reflection::BindingFlags bindingAttr, ::ArrayW<System::Reflection::MethodBase> match, ::ArrayW<System::Type> types, ::ArrayW<System::Reflection::ParameterModifier> modifiers) ;

/// @brief Method SelectProperty addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Reflection::PropertyInfo SelectProperty(System::Reflection::BindingFlags bindingAttr, ::ArrayW<System::Reflection::PropertyInfo> match, System::Type returnType, ::ArrayW<System::Type> indexes, ::ArrayW<System::Reflection::ParameterModifier> modifiers) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::Binder);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Binder, "System.Reflection", "Binder");
