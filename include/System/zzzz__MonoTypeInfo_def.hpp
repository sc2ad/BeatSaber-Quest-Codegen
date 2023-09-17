#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Reflection {
class RuntimeConstructorInfo;
}
// Forward declare root types
namespace System {
class MonoTypeInfo;
}
// Type: System::MonoTypeInfo
namespace System {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2579))
// CS Name: System.MonoTypeInfo
class CORDL_TYPE MonoTypeInfo : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~MonoTypeInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoTypeInfo", modifiers: " const&", def_value: None }]
constexpr MonoTypeInfo(MonoTypeInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoTypeInfo", modifiers: "&&", def_value: None }]
constexpr MonoTypeInfo(MonoTypeInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoTypeInfo(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MonoTypeInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoTypeInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoTypeInfo& operator=(MonoTypeInfo&& o) noexcept = default;
  constexpr MonoTypeInfo& operator=(MonoTypeInfo const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_full_name, put=__set_full_name))  full_name;

constexpr void __set_full_name(::StringW value) ;

constexpr ::StringW __get_full_name() const;

 ::System::Reflection::RuntimeConstructorInfo __declspec(property(get=__get_default_ctor, put=__set_default_ctor))  default_ctor;

constexpr void __set_default_ctor(::System::Reflection::RuntimeConstructorInfo value) ;

constexpr ::System::Reflection::RuntimeConstructorInfo __get_default_ctor() const;


// Methods

// Ctor Parameters []
explicit MonoTypeInfo() ;

/// @brief Method .ctor addr 0x2487e30 size 0x4 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
NEED_NO_BOX(::System::MonoTypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::MonoTypeInfo, "System", "MonoTypeInfo");
