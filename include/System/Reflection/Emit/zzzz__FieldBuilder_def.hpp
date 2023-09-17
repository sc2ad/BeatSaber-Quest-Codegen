#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Reflection {
struct BindingFlags;
}
namespace System {
struct RuntimeFieldHandle;
}
namespace System {
class Type;
}
namespace System::Reflection {
struct FieldAttributes;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
class Binder;
}
// Forward declare root types
namespace System::Reflection::Emit {
class FieldBuilder;
}
// Type: System.Reflection.Emit::FieldBuilder
namespace System::Reflection::Emit {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3461))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3531))
// CS Name: System.Reflection.Emit.FieldBuilder
class CORDL_TYPE FieldBuilder : public ::System::Reflection::FieldInfo {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~FieldBuilder() = default;

// Ctor Parameters [CppParam { name: "", ty: "FieldBuilder", modifiers: " const&", def_value: None }]
constexpr FieldBuilder(FieldBuilder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FieldBuilder", modifiers: "&&", def_value: None }]
constexpr FieldBuilder(FieldBuilder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FieldBuilder(void* ptr) noexcept : ::System::Reflection::FieldInfo(ptr) {
}


  constexpr FieldBuilder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FieldBuilder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FieldBuilder& operator=(FieldBuilder&& o) noexcept = default;
  constexpr FieldBuilder& operator=(FieldBuilder const& o) noexcept = default;
                


// Properties

 ::System::Reflection::FieldAttributes __declspec(property(get=get_Attributes))  Attributes;

 ::System::Type __declspec(property(get=get_DeclaringType))  DeclaringType;

 ::System::RuntimeFieldHandle __declspec(property(get=get_FieldHandle))  FieldHandle;

 ::System::Type __declspec(property(get=get_FieldType))  FieldType;

 ::StringW __declspec(property(get=get_Name))  Name;

 ::System::Type __declspec(property(get=get_ReflectedType))  ReflectedType;


// Methods

/// @brief Method get_Attributes addr 0x238d440 size 0x8 virtual true final false
 ::System::Reflection::FieldAttributes get_Attributes() ;

/// @brief Method get_DeclaringType addr 0x238d448 size 0x8 virtual true final false
 ::System::Type get_DeclaringType() ;

/// @brief Method get_FieldHandle addr 0x238d450 size 0x8 virtual true final false
 ::System::RuntimeFieldHandle get_FieldHandle() ;

/// @brief Method get_FieldType addr 0x238d458 size 0x8 virtual true final false
 ::System::Type get_FieldType() ;

/// @brief Method get_Name addr 0x238d460 size 0x8 virtual true final false
 ::StringW get_Name() ;

/// @brief Method get_ReflectedType addr 0x238d468 size 0x8 virtual true final false
 ::System::Type get_ReflectedType() ;

/// @brief Method GetCustomAttributes addr 0x238d470 size 0x8 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(bool inherit) ;

/// @brief Method GetCustomAttributes addr 0x238d478 size 0x8 virtual true final false
 ::ArrayW<::bs_hook::Il2CppWrapperType> GetCustomAttributes(::System::Type attributeType, bool inherit) ;

/// @brief Method GetValue addr 0x238d480 size 0x8 virtual true final false
 ::bs_hook::Il2CppWrapperType GetValue(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method IsDefined addr 0x238d488 size 0x8 virtual true final false
 bool IsDefined(::System::Type attributeType, bool inherit) ;

/// @brief Method SetValue addr 0x238d490 size 0x40 virtual true final false
 void SetValue(::bs_hook::Il2CppWrapperType obj, ::bs_hook::Il2CppWrapperType val, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder binder, ::System::Globalization::CultureInfo culture) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Reflection::Emit
} // end anonymous namespace
NEED_NO_BOX(::System::Reflection::Emit::FieldBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Emit::FieldBuilder, "System.Reflection.Emit", "FieldBuilder");
