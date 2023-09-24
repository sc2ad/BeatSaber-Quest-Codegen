#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Zenject {
struct TypeValuePair;
}
namespace System {
class Action;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class IProvider;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Zenject {
class ResourceProvider;
}
// Type: Zenject::ResourceProvider
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11178))
// CS Name: Zenject.ResourceProvider
class CORDL_TYPE ResourceProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::IProvider
constexpr operator  Zenject::IProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~ResourceProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "ResourceProvider", modifiers: " const&", def_value: None }]
constexpr ResourceProvider(ResourceProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ResourceProvider", modifiers: "&&", def_value: None }]
constexpr ResourceProvider(ResourceProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ResourceProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ResourceProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ResourceProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ResourceProvider& operator=(ResourceProvider&& o) noexcept = default;
  constexpr ResourceProvider& operator=(ResourceProvider const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get__resourceType, put=__set__resourceType))  _resourceType;

constexpr void __set__resourceType(System::Type value) ;

constexpr System::Type __get__resourceType() const;

 ::StringW __declspec(property(get=__get__resourcePath, put=__set__resourcePath))  _resourcePath;

constexpr void __set__resourcePath(::StringW value) ;

constexpr ::StringW __get__resourcePath() const;

 bool __declspec(property(get=__get__matchSingle, put=__set__matchSingle))  _matchSingle;

constexpr void __set__matchSingle(bool value) ;

constexpr bool __get__matchSingle() const;


// Properties

 bool __declspec(property(get=get_IsCached))  IsCached;

 bool __declspec(property(get=get_TypeVariesBasedOnMemberType))  TypeVariesBasedOnMemberType;


// Methods

static Zenject::ResourceProvider New_ctor(::StringW resourcePath, System::Type resourceType, bool matchSingle) ;

/// @brief Method .ctor addr 0x2d90b08 size 0x3c virtual false final false
 void _ctor(::StringW resourcePath, System::Type resourceType, bool matchSingle) ;

/// @brief Method get_IsCached addr 0x2d90b44 size 0x8 virtual true final true
 bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x2d90b4c size 0x8 virtual true final true
 bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method GetInstanceType addr 0x2d90b54 size 0x8 virtual true final true
 System::Type GetInstanceType(Zenject::InjectContext context) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x2d90b5c size 0x1d8 virtual true final true
 void GetAllInstancesWithInjectSplit(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, ByRef<System::Action> injectAction, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::ResourceProvider);
DEFINE_IL2CPP_ARG_TYPE(Zenject::ResourceProvider, "Zenject", "ResourceProvider");
