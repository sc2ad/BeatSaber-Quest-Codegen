#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/ComponentModel/zzzz__CustomTypeDescriptor_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace System::ComponentModel {
class ICustomTypeDescriptor;
}
namespace System {
class Type;
}
namespace System::ComponentModel {
class IExtenderProvider;
}
namespace System::ComponentModel {
class System__ComponentModel__TypeDescriptionProvider__EmptyCustomTypeDescriptor;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace System::ComponentModel {
class System__ComponentModel__TypeDescriptionProvider__EmptyCustomTypeDescriptor;
}
namespace System::ComponentModel {
class TypeDescriptionProvider;
}
// Type: ::EmptyCustomTypeDescriptor
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8265))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8310))
// CS Name: System.ComponentModel.TypeDescriptionProvider::EmptyCustomTypeDescriptor
class CORDL_TYPE System__ComponentModel__TypeDescriptionProvider__EmptyCustomTypeDescriptor : public System::ComponentModel::CustomTypeDescriptor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~System__ComponentModel__TypeDescriptionProvider__EmptyCustomTypeDescriptor() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ComponentModel__TypeDescriptionProvider__EmptyCustomTypeDescriptor", modifiers: " const&", def_value: None }]
constexpr System__ComponentModel__TypeDescriptionProvider__EmptyCustomTypeDescriptor(System__ComponentModel__TypeDescriptionProvider__EmptyCustomTypeDescriptor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__ComponentModel__TypeDescriptionProvider__EmptyCustomTypeDescriptor", modifiers: "&&", def_value: None }]
constexpr System__ComponentModel__TypeDescriptionProvider__EmptyCustomTypeDescriptor(System__ComponentModel__TypeDescriptionProvider__EmptyCustomTypeDescriptor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__ComponentModel__TypeDescriptionProvider__EmptyCustomTypeDescriptor(void* ptr) noexcept : System::ComponentModel::CustomTypeDescriptor(ptr) {
}


  constexpr System__ComponentModel__TypeDescriptionProvider__EmptyCustomTypeDescriptor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__ComponentModel__TypeDescriptionProvider__EmptyCustomTypeDescriptor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__ComponentModel__TypeDescriptionProvider__EmptyCustomTypeDescriptor& operator=(System__ComponentModel__TypeDescriptionProvider__EmptyCustomTypeDescriptor&& o) noexcept = default;
  constexpr System__ComponentModel__TypeDescriptionProvider__EmptyCustomTypeDescriptor& operator=(System__ComponentModel__TypeDescriptionProvider__EmptyCustomTypeDescriptor const& o) noexcept = default;
                


// Methods

static System::ComponentModel::System__ComponentModel__TypeDescriptionProvider__EmptyCustomTypeDescriptor New_ctor() ;

/// @brief Method .ctor addr 0x27866dc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
// Type: System.ComponentModel::TypeDescriptionProvider
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8311))
// CS Name: System.ComponentModel.TypeDescriptionProvider
class CORDL_TYPE TypeDescriptionProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using EmptyCustomTypeDescriptor = System::ComponentModel::System__ComponentModel__TypeDescriptionProvider__EmptyCustomTypeDescriptor;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TypeDescriptionProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeDescriptionProvider", modifiers: " const&", def_value: None }]
constexpr TypeDescriptionProvider(TypeDescriptionProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TypeDescriptionProvider", modifiers: "&&", def_value: None }]
constexpr TypeDescriptionProvider(TypeDescriptionProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TypeDescriptionProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TypeDescriptionProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TypeDescriptionProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TypeDescriptionProvider& operator=(TypeDescriptionProvider&& o) noexcept = default;
  constexpr TypeDescriptionProvider& operator=(TypeDescriptionProvider const& o) noexcept = default;
                


// Fields

 System::ComponentModel::TypeDescriptionProvider __declspec(property(get=__get__parent, put=__set__parent))  _parent;

constexpr void __set__parent(System::ComponentModel::TypeDescriptionProvider value) ;

constexpr System::ComponentModel::TypeDescriptionProvider __get__parent() const;

 System::ComponentModel::System__ComponentModel__TypeDescriptionProvider__EmptyCustomTypeDescriptor __declspec(property(get=__get__emptyDescriptor, put=__set__emptyDescriptor))  _emptyDescriptor;

constexpr void __set__emptyDescriptor(System::ComponentModel::System__ComponentModel__TypeDescriptionProvider__EmptyCustomTypeDescriptor value) ;

constexpr System::ComponentModel::System__ComponentModel__TypeDescriptionProvider__EmptyCustomTypeDescriptor __get__emptyDescriptor() const;


// Methods

static System::ComponentModel::TypeDescriptionProvider New_ctor() ;

/// @brief Method .ctor addr 0x278662c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method GetCache addr 0x2786634 size 0x18 virtual true final false
 System::Collections::IDictionary GetCache(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetExtendedTypeDescriptor addr 0x278664c size 0x90 virtual true final false
 System::ComponentModel::ICustomTypeDescriptor GetExtendedTypeDescriptor(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetExtenderProviders addr 0x27866e4 size 0xf4 virtual true final false
 ::ArrayW<System::ComponentModel::IExtenderProvider> GetExtenderProviders(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetReflectionType addr 0x27867d8 size 0x10 virtual false final false
 System::Type GetReflectionType(System::Type objectType) ;

/// @brief Method GetReflectionType addr 0x27867e8 size 0x1c virtual true final false
 System::Type GetReflectionType(System::Type objectType, ::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetTypeDescriptor addr 0x2786804 size 0x10 virtual false final false
 System::ComponentModel::ICustomTypeDescriptor GetTypeDescriptor(System::Type objectType) ;

/// @brief Method GetTypeDescriptor addr 0x2786814 size 0x8c virtual false final false
 System::ComponentModel::ICustomTypeDescriptor GetTypeDescriptor(::bs_hook::Il2CppWrapperType instance) ;

/// @brief Method GetTypeDescriptor addr 0x27868a0 size 0xa4 virtual true final false
 System::ComponentModel::ICustomTypeDescriptor GetTypeDescriptor(System::Type objectType, ::bs_hook::Il2CppWrapperType instance) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::ComponentModel
NEED_NO_BOX(System::ComponentModel::System__ComponentModel__TypeDescriptionProvider__EmptyCustomTypeDescriptor);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::System__ComponentModel__TypeDescriptionProvider__EmptyCustomTypeDescriptor, "System.ComponentModel", "TypeDescriptionProvider/EmptyCustomTypeDescriptor");
NEED_NO_BOX(System::ComponentModel::TypeDescriptionProvider);
DEFINE_IL2CPP_ARG_TYPE(System::ComponentModel::TypeDescriptionProvider, "System.ComponentModel", "TypeDescriptionProvider");
