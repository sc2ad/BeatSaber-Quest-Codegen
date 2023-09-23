#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__TypeDescriptionProvider_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System::ComponentModel {
class TypeDescriptionProvider;
}
namespace System::Collections {
class IDictionary;
}
namespace System {
class Type;
}
namespace System::ComponentModel {
class ICustomTypeDescriptor;
}
namespace System::ComponentModel {
class IExtenderProvider;
}
// Forward declare root types
namespace System::ComponentModel {
class DelegatingTypeDescriptionProvider;
}
// Type: System.ComponentModel::DelegatingTypeDescriptionProvider
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8311))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8270))
// CS Name: System.ComponentModel.DelegatingTypeDescriptionProvider
class CORDL_TYPE DelegatingTypeDescriptionProvider : public System::ComponentModel::TypeDescriptionProvider {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~DelegatingTypeDescriptionProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "DelegatingTypeDescriptionProvider", modifiers: " const&", def_value: None }]
constexpr DelegatingTypeDescriptionProvider(DelegatingTypeDescriptionProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DelegatingTypeDescriptionProvider", modifiers: "&&", def_value: None }]
constexpr DelegatingTypeDescriptionProvider(DelegatingTypeDescriptionProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DelegatingTypeDescriptionProvider(void* ptr) noexcept : System::ComponentModel::TypeDescriptionProvider(ptr) {
}


  constexpr DelegatingTypeDescriptionProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DelegatingTypeDescriptionProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DelegatingTypeDescriptionProvider& operator=(DelegatingTypeDescriptionProvider&& o) noexcept = default;
  constexpr DelegatingTypeDescriptionProvider& operator=(DelegatingTypeDescriptionProvider const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get__type, put=__set__type))  _type;

constexpr void __set__type(System::Type value) ;

constexpr System::Type __get__type() const;


// Properties

 System::ComponentModel::TypeDescriptionProvider __declspec(property(get=get_Provider))  Provider;


// Methods

// Ctor Parameters [CppParam { name: "type", ty: "System::Type", modifiers: "", def_value: None }]
explicit DelegatingTypeDescriptionProvider(System::Type type) ;

/// @brief Method .ctor addr 0x277bd30 size 0x28 virtual false final false
 void _ctor(System::Type type) ;

/// @brief Method get_Provider addr 0x277bd58 size 0x5c virtual false final false
 System::ComponentModel::TypeDescriptionProvider get_Provider() ;

/// @brief Method GetCache addr 0x277bdb4 size 0x28 virtual true final false
 System::Collections::IDictionary GetCache(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetExtendedTypeDescriptor addr 0x277bddc size 0x28 virtual true final false
 System::ComponentModel::ICustomTypeDescriptor GetExtendedTypeDescriptor(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetExtenderProviders addr 0x277be04 size 0x28 virtual true final false
 ::ArrayW<System::ComponentModel::IExtenderProvider> GetExtenderProviders(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetReflectionType addr 0x277be2c size 0x38 virtual true final false
 System::Type GetReflectionType(System::Type objectType, ::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetTypeDescriptor addr 0x277be64 size 0x38 virtual true final false
 System::ComponentModel::ICustomTypeDescriptor GetTypeDescriptor(System::Type objectType, ::bs_hook::Il2CppWrapperType instance) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::DelegatingTypeDescriptionProvider);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::DelegatingTypeDescriptionProvider, "System.ComponentModel", "DelegatingTypeDescriptionProvider");
