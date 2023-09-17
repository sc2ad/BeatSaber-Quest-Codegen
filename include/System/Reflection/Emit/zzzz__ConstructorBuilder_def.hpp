#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System {
class Type;
}
namespace System::Reflection {
struct MethodAttributes;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
class Binder;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
struct MethodImplAttributes;
}
namespace System {
struct RuntimeMethodHandle;
}
namespace System::Reflection {
struct BindingFlags;
}
// Forward declare root types
namespace System::Reflection::Emit {
class ConstructorBuilder;
}
// Type: System.Reflection.Emit::ConstructorBuilder
namespace System::Reflection::Emit {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3453))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3527))
// CS Name: System.Reflection.Emit.ConstructorBuilder
class CORDL_TYPE ConstructorBuilder : public ::System::Reflection::ConstructorInfo {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ConstructorBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "ConstructorBuilder", modifiers: " const&", def_value: None }]
constexpr ConstructorBuilder(ConstructorBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ConstructorBuilder", modifiers: "&&", def_value: None }]
constexpr ConstructorBuilder(ConstructorBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ConstructorBuilder(void* ptr) noexcept : ::System::Reflection::ConstructorInfo(ptr) {
}


  constexpr ConstructorBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ConstructorBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ConstructorBuilder& operator=(ConstructorBuilder&& o) noexcept = default;
  constexpr ConstructorBuilder& operator=(ConstructorBuilder const& o) noexcept = default;
                


// Properties

 ::System::Reflection::MethodAttributes __declspec(property(get=get_Attributes))  Attributes;

 ::System::Type __declspec(property(get=get_DeclaringType))  DeclaringType;

 ::StringW __declspec(property(get=get_Name))  Name;

 ::System::RuntimeMethodHandle __declspec(property(get=get_MethodHandle))  MethodHandle;

 ::System::Type __declspec(property(get=get_ReflectedType))  ReflectedType;


// Methods

/// @brief Method get_Attributes addr 0x238c600 size 0x40 virtual true final false
 ::System::Reflection::MethodAttributes get_Attributes() ;

/// @brief Method get_DeclaringType addr 0x238c640 size 0x40 virtual true final false
 ::System::Type get_DeclaringType() ;

/// @brief Method get_Name addr 0x238c680 size 0x40 virtual true final false
 ::StringW get_Name() ;

/// @brief Method GetParameters addr 0x238c6c0 size 0x40 virtual true final false
 ::ArrayW<::System::Reflection::ParameterInfo> GetParameters() ;

/// @brief Method GetMethodImplementationFlags addr 0x238c700 size 0x40 virtual true final false
 ::System::Reflection::MethodImplAttributes GetMethodImplementationFlags() ;

/// @brief Method get_MethodHandle addr 0x238c740 size 0x40 virtual true final false
 ::System::RuntimeMethodHandle get_MethodHandle() ;

/// @brief Method Invoke addr 0x238c780 size 0x40 virtual true final false
 ::bs_hook::Il2CppWrapperType Invoke(::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder binder, ::ArrayW<::bs_hook::Il2CppWrapperType> parameters, ::System::Globalization::CultureInfo culture) ;

/// @brief Method IsDefined addr 0x238c7c0 size 0x40 virtual true final false
 bool IsDefined(::System::Type attributeType, bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x238c800 size 0x40 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x238c840 size 0x40 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(::System::Type attributeType, bool inherit) ;

/// @brief Method get_ReflectedType addr 0x238c880 size 0x40 virtual true final false
 ::System::Type get_ReflectedType() ;

/// @brief Method Invoke addr 0x238c8c0 size 0x40 virtual true final false
 ::bs_hook::Il2CppWrapperType Invoke(::bs_hook::Il2CppWrapperType obj, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder binder, ::ArrayW<::bs_hook::Il2CppWrapperType> parameters, ::System::Globalization::CultureInfo culture) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection::Emit
} // end anonymous namespace
NEED_NO_BOX(::System::Reflection::Emit::ConstructorBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Emit::ConstructorBuilder, "System.Reflection.Emit", "ConstructorBuilder");
