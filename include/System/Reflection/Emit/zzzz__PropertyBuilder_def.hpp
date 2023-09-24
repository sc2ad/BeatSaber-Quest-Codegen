#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Type;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
class Binder;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Globalization {
class CultureInfo;
}
// Forward declare root types
namespace System::Reflection::Emit {
class PropertyBuilder;
}
// Type: System.Reflection.Emit::PropertyBuilder
namespace System::Reflection::Emit {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3538))
// CS Name: System.Reflection.Emit.PropertyBuilder
class CORDL_TYPE PropertyBuilder : public System::Reflection::PropertyInfo {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PropertyBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "PropertyBuilder", modifiers: " const&", def_value: None }]
constexpr PropertyBuilder(PropertyBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PropertyBuilder", modifiers: "&&", def_value: None }]
constexpr PropertyBuilder(PropertyBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PropertyBuilder(void* ptr) noexcept : System::Reflection::PropertyInfo(ptr) {
}


  constexpr PropertyBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PropertyBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PropertyBuilder& operator=(PropertyBuilder&& o) noexcept = default;
  constexpr PropertyBuilder& operator=(PropertyBuilder const& o) noexcept = default;
                


// Properties

 bool __declspec(property(get=get_CanRead))  CanRead;

 bool __declspec(property(get=get_CanWrite))  CanWrite;

 System::Type __declspec(property(get=get_DeclaringType))  DeclaringType;

 ::StringW __declspec(property(get=get_Name))  Name;

 System::Type __declspec(property(get=get_PropertyType))  PropertyType;

 System::Type __declspec(property(get=get_ReflectedType))  ReflectedType;


// Methods

/// @brief Method get_CanRead addr 0x238e010 size 0x40 virtual true final false
 bool get_CanRead() ;

/// @brief Method get_CanWrite addr 0x238e050 size 0x40 virtual true final false
 bool get_CanWrite() ;

/// @brief Method get_DeclaringType addr 0x238e090 size 0x40 virtual true final false
 System::Type get_DeclaringType() ;

/// @brief Method get_Name addr 0x238e0d0 size 0x40 virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_PropertyType addr 0x238e110 size 0x40 virtual true final false
 System::Type get_PropertyType() ;

/// @brief Method get_ReflectedType addr 0x238e150 size 0x40 virtual true final false
 System::Type get_ReflectedType() ;

/// @brief Method GetCustomAttributes addr 0x238e190 size 0x40 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x238e1d0 size 0x40 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(System::Type attributeType, bool inherit) ;

/// @brief Method GetGetMethod addr 0x238e210 size 0x40 virtual true final false
 System::Reflection::MethodInfo GetGetMethod(bool nonPublic) ;

/// @brief Method GetIndexParameters addr 0x238e250 size 0x40 virtual true final false
 ::ArrayW<System::Reflection::ParameterInfo> GetIndexParameters() ;

/// @brief Method GetSetMethod addr 0x238e290 size 0x40 virtual true final false
 System::Reflection::MethodInfo GetSetMethod(bool nonPublic) ;

/// @brief Method GetValue addr 0x238e2d0 size 0x40 virtual true final false
 ::bs_hook::Il2CppWrapperType GetValue(::bs_hook::Il2CppWrapperType obj, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder binder, ::ArrayW<::bs_hook::Il2CppWrapperType> index, System::Globalization::CultureInfo culture) ;

/// @brief Method IsDefined addr 0x238e310 size 0x40 virtual true final false
 bool IsDefined(System::Type attributeType, bool inherit) ;

/// @brief Method SetValue addr 0x238e350 size 0x40 virtual true final false
 void SetValue(::bs_hook::Il2CppWrapperType obj, ::bs_hook::Il2CppWrapperType value, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder binder, ::ArrayW<::bs_hook::Il2CppWrapperType> index, System::Globalization::CultureInfo culture) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection::Emit
NEED_NO_BOX(System::Reflection::Emit::PropertyBuilder);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Emit::PropertyBuilder, "System.Reflection.Emit", "PropertyBuilder");
