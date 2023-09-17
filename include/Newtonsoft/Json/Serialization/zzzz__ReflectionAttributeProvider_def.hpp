#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace Newtonsoft::Json::Serialization {
class IAttributeProvider;
}
namespace System {
class Attribute;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class ReflectionAttributeProvider;
}
// Type: Newtonsoft.Json.Serialization::ReflectionAttributeProvider
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11851))
// CS Name: Newtonsoft.Json.Serialization.ReflectionAttributeProvider
class CORDL_TYPE ReflectionAttributeProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Newtonsoft::Json::Serialization::IAttributeProvider
constexpr operator  ::Newtonsoft::Json::Serialization::IAttributeProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ReflectionAttributeProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionAttributeProvider", modifiers: " const&", def_value: None }]
constexpr ReflectionAttributeProvider(ReflectionAttributeProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionAttributeProvider", modifiers: "&&", def_value: None }]
constexpr ReflectionAttributeProvider(ReflectionAttributeProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ReflectionAttributeProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ReflectionAttributeProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ReflectionAttributeProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ReflectionAttributeProvider& operator=(ReflectionAttributeProvider&& o) noexcept = default;
  constexpr ReflectionAttributeProvider& operator=(ReflectionAttributeProvider const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__attributeProvider, put=__set__attributeProvider))  _attributeProvider;

constexpr void __set__attributeProvider(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__attributeProvider() const;


// Methods

// Ctor Parameters [CppParam { name: "attributeProvider", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }]
explicit ReflectionAttributeProvider(::bs_hook::Il2CppWrapperType attributeProvider) ;

/// @brief Method .ctor addr 0x24f2e1c size 0x68 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType attributeProvider) ;

/// @brief Method GetAttributes addr 0x24f2e84 size 0x6c virtual true final true
 ::System::Collections::Generic::IList_1<::System::Attribute> GetAttributes(bool inherit) ;

/// @brief Method GetAttributes addr 0x24f2ef0 size 0x70 virtual true final true
 ::System::Collections::Generic::IList_1<::System::Attribute> GetAttributes(::System::Type attributeType, bool inherit) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::Serialization::ReflectionAttributeProvider);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::ReflectionAttributeProvider, "Newtonsoft.Json.Serialization", "ReflectionAttributeProvider");
