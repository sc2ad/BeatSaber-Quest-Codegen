#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class Attribute;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class CustomAttributeExtensions;
}
// Type: System.Reflection::CustomAttributeExtensions
namespace System::Reflection {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3498))
// CS Name: System.Reflection.CustomAttributeExtensions
class CORDL_TYPE CustomAttributeExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CustomAttributeExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomAttributeExtensions", modifiers: " const&", def_value: None }]
constexpr CustomAttributeExtensions(CustomAttributeExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CustomAttributeExtensions", modifiers: "&&", def_value: None }]
constexpr CustomAttributeExtensions(CustomAttributeExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CustomAttributeExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CustomAttributeExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CustomAttributeExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CustomAttributeExtensions& operator=(CustomAttributeExtensions&& o) noexcept = default;
  constexpr CustomAttributeExtensions& operator=(CustomAttributeExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method GetCustomAttribute addr 0x2380cb4 size 0x8 virtual false final false
static System::Attribute GetCustomAttribute(System::Reflection::Assembly element, System::Type attributeType) ;

/// @brief Method GetCustomAttribute addr 0x2380cbc size 0x8 virtual false final false
static System::Attribute GetCustomAttribute(System::Reflection::MemberInfo element, System::Type attributeType) ;

/// @brief Method GetCustomAttribute addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T GetCustomAttribute(System::Reflection::Assembly element) ;

/// @brief Method GetCustomAttribute addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T GetCustomAttribute(System::Reflection::MemberInfo element) ;

/// @brief Method GetCustomAttribute addr 0x2380cc4 size 0xc virtual false final false
static System::Attribute GetCustomAttribute(System::Reflection::MemberInfo element, System::Type attributeType, bool inherit) ;

/// @brief Method GetCustomAttribute addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T GetCustomAttribute(System::Reflection::MemberInfo element, bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x2380cd0 size 0x8 virtual false final false
static System::Collections::Generic::IEnumerable_1<System::Attribute> GetCustomAttributes(System::Reflection::MemberInfo element, System::Type attributeType) ;

/// @brief Method GetCustomAttributes addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static System::Collections::Generic::IEnumerable_1<T> GetCustomAttributes(System::Reflection::MemberInfo element) ;

/// @brief Method GetCustomAttributes addr 0x2380cd8 size 0xc virtual false final false
static System::Collections::Generic::IEnumerable_1<System::Attribute> GetCustomAttributes(System::Reflection::MemberInfo element, System::Type attributeType, bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static System::Collections::Generic::IEnumerable_1<T> GetCustomAttributes(System::Reflection::MemberInfo element, bool inherit) ;

/// @brief Method IsDefined addr 0x2380ce4 size 0x8 virtual false final false
static bool IsDefined(System::Reflection::MemberInfo element, System::Type attributeType) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
NEED_NO_BOX(System::Reflection::CustomAttributeExtensions);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::CustomAttributeExtensions, "System.Reflection", "CustomAttributeExtensions");
