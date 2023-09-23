#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
struct RuntimeMethodHandle;
}
namespace System {
class Type;
}
namespace System::Reflection {
class Binder;
}
namespace System::Reflection {
struct MethodImplAttributes;
}
namespace System::Reflection {
struct MethodAttributes;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
struct BindingFlags;
}
// Forward declare root types
namespace System::Reflection::Emit {
class MethodBuilder;
}
// Type: System.Reflection.Emit::MethodBuilder
namespace System::Reflection::Emit {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3471))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3535))
// CS Name: System.Reflection.Emit.MethodBuilder
class CORDL_TYPE MethodBuilder : public System::Reflection::MethodInfo {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~MethodBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodBuilder", modifiers: " const&", def_value: None }]
constexpr MethodBuilder(MethodBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MethodBuilder", modifiers: "&&", def_value: None }]
constexpr MethodBuilder(MethodBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MethodBuilder(void* ptr) noexcept : System::Reflection::MethodInfo(ptr) {
}


  constexpr MethodBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MethodBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MethodBuilder& operator=(MethodBuilder&& o) noexcept = default;
  constexpr MethodBuilder& operator=(MethodBuilder const& o) noexcept = default;
                


// Properties

 System::Reflection::MethodAttributes __declspec(property(get=get_Attributes))  Attributes;

 System::Type __declspec(property(get=get_DeclaringType))  DeclaringType;

 System::RuntimeMethodHandle __declspec(property(get=get_MethodHandle))  MethodHandle;

 ::StringW __declspec(property(get=get_Name))  Name;

 System::Type __declspec(property(get=get_ReflectedType))  ReflectedType;


// Methods

/// @brief Method get_Attributes addr 0x238dd10 size 0x40 virtual true final false
 System::Reflection::MethodAttributes get_Attributes() ;

/// @brief Method get_DeclaringType addr 0x238dd50 size 0x40 virtual true final false
 System::Type get_DeclaringType() ;

/// @brief Method get_MethodHandle addr 0x238dd90 size 0x40 virtual true final false
 System::RuntimeMethodHandle get_MethodHandle() ;

/// @brief Method get_Name addr 0x238ddd0 size 0x40 virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_ReflectedType addr 0x238de10 size 0x40 virtual true final false
 System::Type get_ReflectedType() ;

/// @brief Method GetBaseDefinition addr 0x238de50 size 0x40 virtual true final false
 System::Reflection::MethodInfo GetBaseDefinition() ;

/// @brief Method GetCustomAttributes addr 0x238de90 size 0x40 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x238ded0 size 0x40 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(System::Type attributeType, bool inherit) ;

/// @brief Method GetMethodImplementationFlags addr 0x238df10 size 0x40 virtual true final false
 System::Reflection::MethodImplAttributes GetMethodImplementationFlags() ;

/// @brief Method GetParameters addr 0x238df50 size 0x40 virtual true final false
 ::ArrayW<System::Reflection::ParameterInfo> GetParameters() ;

/// @brief Method Invoke addr 0x238df90 size 0x40 virtual true final false
 ::bs_hook::Il2CppWrapperType Invoke(::bs_hook::Il2CppWrapperType obj, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder binder, ::ArrayW<::bs_hook::Il2CppWrapperType> parameters, System::Globalization::CultureInfo culture) ;

/// @brief Method IsDefined addr 0x238dfd0 size 0x40 virtual true final false
 bool IsDefined(System::Type attributeType, bool inherit) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection::Emit
NEED_NO_BOX(System::Reflection::Emit::MethodBuilder);
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Emit::MethodBuilder, "System.Reflection.Emit", "MethodBuilder");
