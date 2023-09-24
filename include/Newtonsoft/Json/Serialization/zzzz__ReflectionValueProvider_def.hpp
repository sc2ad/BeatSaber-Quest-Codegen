#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Reflection {
class MemberInfo;
}
namespace Newtonsoft::Json::Serialization {
class IValueProvider;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class ReflectionValueProvider;
}
// Type: Newtonsoft.Json.Serialization::ReflectionValueProvider
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11905))
// CS Name: Newtonsoft.Json.Serialization.ReflectionValueProvider
class CORDL_TYPE ReflectionValueProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Newtonsoft::Json::Serialization::IValueProvider
constexpr operator  Newtonsoft::Json::Serialization::IValueProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ReflectionValueProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionValueProvider", modifiers: " const&", def_value: None }]
constexpr ReflectionValueProvider(ReflectionValueProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionValueProvider", modifiers: "&&", def_value: None }]
constexpr ReflectionValueProvider(ReflectionValueProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReflectionValueProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ReflectionValueProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReflectionValueProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReflectionValueProvider& operator=(ReflectionValueProvider&& o) noexcept = default;
  constexpr ReflectionValueProvider& operator=(ReflectionValueProvider const& o) noexcept = default;
                


// Fields

 System::Reflection::MemberInfo __declspec(property(get=__get__memberInfo, put=__set__memberInfo))  _memberInfo;

constexpr void __set__memberInfo(System::Reflection::MemberInfo value) ;

constexpr System::Reflection::MemberInfo __get__memberInfo() const;


// Methods

static Newtonsoft::Json::Serialization::ReflectionValueProvider New_ctor(System::Reflection::MemberInfo memberInfo) ;

/// @brief Method .ctor addr 0x2517570 size 0x6c virtual false final false
 void _ctor(System::Reflection::MemberInfo memberInfo) ;

/// @brief Method SetValue addr 0x25175dc size 0x1a4 virtual true final true
 void SetValue(::bs_hook::Il2CppWrapperType target, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetValue addr 0x2517780 size 0x1a0 virtual true final true
 ::bs_hook::Il2CppWrapperType GetValue(::bs_hook::Il2CppWrapperType target) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(Newtonsoft::Json::Serialization::ReflectionValueProvider);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::ReflectionValueProvider, "Newtonsoft.Json.Serialization", "ReflectionValueProvider");
