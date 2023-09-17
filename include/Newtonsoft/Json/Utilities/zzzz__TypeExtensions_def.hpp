#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class Delegate;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
struct MemberTypes;
}
namespace System {
class Type;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
class Assembly;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class TypeExtensions;
}
// Type: Newtonsoft.Json.Utilities::TypeExtensions
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11843))
// CS Name: Newtonsoft.Json.Utilities.TypeExtensions
class CORDL_TYPE TypeExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TypeExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeExtensions", modifiers: " const&", def_value: None }]
constexpr TypeExtensions(TypeExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeExtensions", modifiers: "&&", def_value: None }]
constexpr TypeExtensions(TypeExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypeExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TypeExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypeExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypeExtensions& operator=(TypeExtensions&& o) noexcept = default;
  constexpr TypeExtensions& operator=(TypeExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method Method addr 0x24f1e18 size 0x14 virtual false final false
static ::System::Reflection::MethodInfo Method(::System::Delegate d) ;

/// @brief Method MemberType addr 0x24e337c size 0x1c virtual false final false
static ::System::Reflection::MemberTypes MemberType(::System::Reflection::MemberInfo memberInfo) ;

/// @brief Method ContainsGenericParameters addr 0x24f1e2c size 0x20 virtual false final false
static bool ContainsGenericParameters(::System::Type type) ;

/// @brief Method IsInterface addr 0x24e53f4 size 0x14 virtual false final false
static bool IsInterface(::System::Type type) ;

/// @brief Method IsGenericType addr 0x24ee284 size 0x20 virtual false final false
static bool IsGenericType(::System::Type type) ;

/// @brief Method IsGenericTypeDefinition addr 0x24e5408 size 0x20 virtual false final false
static bool IsGenericTypeDefinition(::System::Type type) ;

/// @brief Method BaseType addr 0x24ee850 size 0x20 virtual false final false
static ::System::Type BaseType(::System::Type type) ;

/// @brief Method Assembly addr 0x24f1e4c size 0x20 virtual false final false
static ::System::Reflection::Assembly Assembly(::System::Type type) ;

/// @brief Method IsEnum addr 0x24e3ee0 size 0x20 virtual false final false
static bool IsEnum(::System::Type type) ;

/// @brief Method IsClass addr 0x24ee754 size 0x14 virtual false final false
static bool IsClass(::System::Type type) ;

/// @brief Method IsSealed addr 0x24f1e6c size 0x14 virtual false final false
static bool IsSealed(::System::Type type) ;

/// @brief Method IsAbstract addr 0x24e5428 size 0x14 virtual false final false
static bool IsAbstract(::System::Type type) ;

/// @brief Method IsVisible addr 0x24f1e80 size 0x14 virtual false final false
static bool IsVisible(::System::Type type) ;

/// @brief Method IsValueType addr 0x24ee0e8 size 0x14 virtual false final false
static bool IsValueType(::System::Type type) ;

/// @brief Method AssignableToTypeName addr 0x24f1e94 size 0x10c virtual false final false
static bool AssignableToTypeName(::System::Type type, ::StringW fullTypeName, ByRef<::System::Type> match) ;

/// @brief Method AssignableToTypeName addr 0x24f1fa0 size 0x1c virtual false final false
static bool AssignableToTypeName(::System::Type type, ::StringW fullTypeName) ;

/// @brief Method ImplementInterface addr 0x24f1fbc size 0x368 virtual false final false
static bool ImplementInterface(::System::Type type, ::System::Type interfaceType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::Utilities::TypeExtensions);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::TypeExtensions, "Newtonsoft.Json.Utilities", "TypeExtensions");
