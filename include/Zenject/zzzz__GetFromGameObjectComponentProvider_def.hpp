#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
namespace System {
class Type;
}
namespace UnityEngine {
class GameObject;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System {
class Action;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace Zenject {
class GetFromGameObjectComponentProvider;
}
// Type: Zenject::GetFromGameObjectComponentProvider
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11129))
// CS Name: Zenject.GetFromGameObjectComponentProvider
class CORDL_TYPE GetFromGameObjectComponentProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::IProvider
constexpr operator  Zenject::IProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GetFromGameObjectComponentProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "GetFromGameObjectComponentProvider", modifiers: " const&", def_value: None }]
constexpr GetFromGameObjectComponentProvider(GetFromGameObjectComponentProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GetFromGameObjectComponentProvider", modifiers: "&&", def_value: None }]
constexpr GetFromGameObjectComponentProvider(GetFromGameObjectComponentProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GetFromGameObjectComponentProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GetFromGameObjectComponentProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GetFromGameObjectComponentProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GetFromGameObjectComponentProvider& operator=(GetFromGameObjectComponentProvider&& o) noexcept = default;
  constexpr GetFromGameObjectComponentProvider& operator=(GetFromGameObjectComponentProvider const& o) noexcept = default;
                


// Fields

 UnityEngine::GameObject __declspec(property(get=__get__gameObject, put=__set__gameObject))  _gameObject;

constexpr void __set__gameObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__gameObject() const;

 System::Type __declspec(property(get=__get__componentType, put=__set__componentType))  _componentType;

constexpr void __set__componentType(System::Type value) ;

constexpr System::Type __get__componentType() const;

 bool __declspec(property(get=__get__matchSingle, put=__set__matchSingle))  _matchSingle;

constexpr void __set__matchSingle(bool value) ;

constexpr bool __get__matchSingle() const;


// Properties

 bool __declspec(property(get=get_IsCached))  IsCached;

 bool __declspec(property(get=get_TypeVariesBasedOnMemberType))  TypeVariesBasedOnMemberType;


// Methods

static Zenject::GetFromGameObjectComponentProvider New_ctor(System::Type componentType, UnityEngine::GameObject gameObject, bool matchSingle) ;

/// @brief Method .ctor addr 0x2d8d710 size 0x3c virtual false final false
 void _ctor(System::Type componentType, UnityEngine::GameObject gameObject, bool matchSingle) ;

/// @brief Method get_IsCached addr 0x2d8d74c size 0x8 virtual true final true
 bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x2d8d754 size 0x8 virtual true final true
 bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method GetInstanceType addr 0x2d8d75c size 0x8 virtual true final true
 System::Type GetInstanceType(Zenject::InjectContext context) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x2d8d764 size 0x1b4 virtual true final true
 void GetAllInstancesWithInjectSplit(Zenject::InjectContext context, System::Collections::Generic::List_1<Zenject::TypeValuePair> args, ByRef<System::Action> injectAction, System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> buffer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::GetFromGameObjectComponentProvider);
DEFINE_IL2CPP_ARG_TYPE(Zenject::GetFromGameObjectComponentProvider, "Zenject", "GetFromGameObjectComponentProvider");
