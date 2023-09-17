#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace System::Runtime::Serialization {
class TypeLoadExceptionHolder;
}
// Type: System.Runtime.Serialization::TypeLoadExceptionHolder
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3220))
// CS Name: System.Runtime.Serialization.TypeLoadExceptionHolder
class CORDL_TYPE TypeLoadExceptionHolder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~TypeLoadExceptionHolder() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeLoadExceptionHolder", modifiers: " const&", def_value: None }]
constexpr TypeLoadExceptionHolder(TypeLoadExceptionHolder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeLoadExceptionHolder", modifiers: "&&", def_value: None }]
constexpr TypeLoadExceptionHolder(TypeLoadExceptionHolder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypeLoadExceptionHolder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TypeLoadExceptionHolder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypeLoadExceptionHolder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypeLoadExceptionHolder& operator=(TypeLoadExceptionHolder&& o) noexcept = default;
  constexpr TypeLoadExceptionHolder& operator=(TypeLoadExceptionHolder const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_m_typeName, put=__set_m_typeName))  m_typeName;

constexpr void __set_m_typeName(::StringW value) ;

constexpr ::StringW __get_m_typeName() const;


// Properties

 ::StringW __declspec(property(get=get_TypeName))  TypeName;


// Methods

// Ctor Parameters [CppParam { name: "typeName", ty: "::StringW", modifiers: "", def_value: None }]
explicit TypeLoadExceptionHolder(::StringW typeName) ;

/// @brief Method .ctor addr 0x2350b28 size 0x28 virtual false final false
 void _ctor(::StringW typeName) ;

/// @brief Method get_TypeName addr 0x2350b50 size 0x8 virtual false final false
 ::StringW get_TypeName() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Serialization::TypeLoadExceptionHolder);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::TypeLoadExceptionHolder, "System.Runtime.Serialization", "TypeLoadExceptionHolder");
