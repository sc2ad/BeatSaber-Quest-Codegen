#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Reflection/zzzz__MethodBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
class Binder;
}
namespace System::Reflection {
struct MemberTypes;
}
namespace System::Globalization {
class CultureInfo;
}
// Forward declare root types
namespace System::Reflection {
class ConstructorInfo;
}
// Type: System.Reflection::ConstructorInfo
namespace System::Reflection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3469))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3453))
// CS Name: System.Reflection.ConstructorInfo
class CORDL_TYPE ConstructorInfo : public ::System::Reflection::MethodBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ConstructorInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConstructorInfo", modifiers: " const&", def_value: None }]
constexpr ConstructorInfo(ConstructorInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConstructorInfo", modifiers: "&&", def_value: None }]
constexpr ConstructorInfo(ConstructorInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConstructorInfo(void* ptr) noexcept : ::System::Reflection::MethodBase(ptr) {
}


  constexpr ConstructorInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConstructorInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConstructorInfo& operator=(ConstructorInfo&& o) noexcept = default;
  constexpr ConstructorInfo& operator=(ConstructorInfo const& o) noexcept = default;
                


// Fields

static ::StringW __declspec(property(get=__get_ConstructorName, put=__set_ConstructorName))  ConstructorName;

static void __set_ConstructorName(::StringW value) ;

static ::StringW __get_ConstructorName() ;

static ::StringW __declspec(property(get=__get_TypeConstructorName, put=__set_TypeConstructorName))  TypeConstructorName;

static void __set_TypeConstructorName(::StringW value) ;

static ::StringW __get_TypeConstructorName() ;


// Properties

 ::System::Reflection::MemberTypes __declspec(property(get=get_MemberType))  MemberType;


// Methods

// Ctor Parameters []
explicit ConstructorInfo() ;

/// @brief Method .ctor addr 0x2378eb8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method get_MemberType addr 0x2378ec8 size 0x8 virtual true final false
 ::System::Reflection::MemberTypes get_MemberType() ;

/// @brief Method Invoke addr 0x2378ed0 size 0x20 virtual false final false
 ::bs_hook::Il2CppWrapperType Invoke(::ArrayW<::bs_hook::Il2CppWrapperType> parameters) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType Invoke(::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder binder, ::ArrayW<::bs_hook::Il2CppWrapperType> parameters, ::System::Globalization::CultureInfo culture) ;

/// @brief Method Equals addr 0x2378ef0 size 0x8 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2378f00 size 0x8 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method op_Equality addr 0x2378f10 size 0x2c virtual false final false
static bool op_Equality(::System::Reflection::ConstructorInfo left, ::System::Reflection::ConstructorInfo right) ;

/// @brief Method op_Inequality addr 0x2378f3c size 0x94 virtual false final false
static bool op_Inequality(::System::Reflection::ConstructorInfo left, ::System::Reflection::ConstructorInfo right) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection
} // end anonymous namespace
NEED_NO_BOX(::System::Reflection::ConstructorInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::ConstructorInfo, "System.Reflection", "ConstructorInfo");
