#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Type;
}
namespace UnityEngine {
class Object;
}
namespace Zenject {
struct InvalidBindResponses;
}
namespace Zenject {
class IProvider;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Zenject {
class BindingUtil;
}
// Type: Zenject::BindingUtil
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10894))
// CS Name: Zenject.BindingUtil
class CORDL_TYPE BindingUtil : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~BindingUtil() = default;

// Ctor Parameters [CppParam { name: "", ty: "BindingUtil", modifiers: " const&", def_value: None }]
constexpr BindingUtil(BindingUtil const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BindingUtil", modifiers: "&&", def_value: None }]
constexpr BindingUtil(BindingUtil&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BindingUtil(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr BindingUtil& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BindingUtil& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BindingUtil& operator=(BindingUtil&& o) noexcept = default;
  constexpr BindingUtil& operator=(BindingUtil const& o) noexcept = default;
                


// Methods

/// @brief Method AssertIsValidPrefab addr 0x2d62814 size 0x5c virtual false final false
static void AssertIsValidPrefab(UnityEngine::Object prefab) ;

/// @brief Method AssertIsValidGameObject addr 0x2d661fc size 0x5c virtual false final false
static void AssertIsValidGameObject(UnityEngine::GameObject gameObject) ;

/// @brief Method AssertIsNotComponent addr 0x2d66258 size 0x2c0 virtual false final false
static void AssertIsNotComponent(System::Collections::Generic::IEnumerable_1<System::Type> types) ;

/// @brief Method AssertIsNotComponent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void AssertIsNotComponent() ;

/// @brief Method AssertIsNotComponent addr 0x2d66518 size 0xe0 virtual false final false
static void AssertIsNotComponent(System::Type type) ;

/// @brief Method AssertDerivesFromUnityObject addr 0x2d665f8 size 0x2c0 virtual false final false
static void AssertDerivesFromUnityObject(System::Collections::Generic::IEnumerable_1<System::Type> types) ;

/// @brief Method AssertDerivesFromUnityObject addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void AssertDerivesFromUnityObject() ;

/// @brief Method AssertDerivesFromUnityObject addr 0x2d668b8 size 0x94 virtual false final false
static void AssertDerivesFromUnityObject(System::Type type) ;

/// @brief Method AssertTypesAreNotComponents addr 0x2d6694c size 0x2c0 virtual false final false
static void AssertTypesAreNotComponents(System::Collections::Generic::IEnumerable_1<System::Type> types) ;

/// @brief Method AssertIsValidResourcePath addr 0x2d62df4 size 0x5c virtual false final false
static void AssertIsValidResourcePath(::StringW resourcePath) ;

/// @brief Method AssertIsInterfaceOrScriptableObject addr 0x2d66c0c size 0x2c0 virtual false final false
static void AssertIsInterfaceOrScriptableObject(System::Collections::Generic::IEnumerable_1<System::Type> types) ;

/// @brief Method AssertIsInterfaceOrScriptableObject addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void AssertIsInterfaceOrScriptableObject() ;

/// @brief Method AssertIsInterfaceOrScriptableObject addr 0x2d66ecc size 0x104 virtual false final false
static void AssertIsInterfaceOrScriptableObject(System::Type type) ;

/// @brief Method AssertIsInterfaceOrComponent addr 0x2d66fd0 size 0x2c0 virtual false final false
static void AssertIsInterfaceOrComponent(System::Collections::Generic::IEnumerable_1<System::Type> types) ;

/// @brief Method AssertIsInterfaceOrComponent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void AssertIsInterfaceOrComponent() ;

/// @brief Method AssertIsInterfaceOrComponent addr 0x2d67290 size 0x104 virtual false final false
static void AssertIsInterfaceOrComponent(System::Type type) ;

/// @brief Method AssertIsComponent addr 0x2d67394 size 0x2c0 virtual false final false
static void AssertIsComponent(System::Collections::Generic::IEnumerable_1<System::Type> types) ;

/// @brief Method AssertIsComponent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void AssertIsComponent() ;

/// @brief Method AssertIsComponent addr 0x2d67654 size 0xdc virtual false final false
static void AssertIsComponent(System::Type type) ;

/// @brief Method AssertTypesAreNotAbstract addr 0x2d67730 size 0x2c0 virtual false final false
static void AssertTypesAreNotAbstract(System::Collections::Generic::IEnumerable_1<System::Type> types) ;

/// @brief Method AssertIsNotAbstract addr 0x2d67a74 size 0x2c0 virtual false final false
static void AssertIsNotAbstract(System::Collections::Generic::IEnumerable_1<System::Type> types) ;

/// @brief Method AssertIsNotAbstract addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void AssertIsNotAbstract() ;

/// @brief Method AssertIsNotAbstract addr 0x2d679f0 size 0x84 virtual false final false
static void AssertIsNotAbstract(System::Type type) ;

/// @brief Method AssertIsDerivedFromType addr 0x2d67d34 size 0x144 virtual false final false
static void AssertIsDerivedFromType(System::Type concreteType, System::Type parentType) ;

/// @brief Method AssertConcreteTypeListIsNotEmpty addr 0x2d67e78 size 0x78 virtual false final false
static void AssertConcreteTypeListIsNotEmpty(System::Collections::Generic::IEnumerable_1<System::Type> concreteTypes) ;

/// @brief Method AssertIsDerivedFromTypes addr 0x2d67ef0 size 0xa4 virtual false final false
static void AssertIsDerivedFromTypes(System::Collections::Generic::IEnumerable_1<System::Type> concreteTypes, System::Collections::Generic::IEnumerable_1<System::Type> parentTypes, Zenject::InvalidBindResponses invalidBindResponse) ;

/// @brief Method AssertIsDerivedFromTypes addr 0x2d67f94 size 0x2d4 virtual false final false
static void AssertIsDerivedFromTypes(System::Collections::Generic::IEnumerable_1<System::Type> concreteTypes, System::Collections::Generic::IEnumerable_1<System::Type> parentTypes) ;

/// @brief Method AssertIsDerivedFromTypes addr 0x2d68268 size 0x2d8 virtual false final false
static void AssertIsDerivedFromTypes(System::Type concreteType, System::Collections::Generic::IEnumerable_1<System::Type> parentTypes) ;

/// @brief Method AssertInstanceDerivesFromOrEqual addr 0x2d68540 size 0x2e4 virtual false final false
static void AssertInstanceDerivesFromOrEqual(::bs_hook::Il2CppWrapperType instance, System::Collections::Generic::IEnumerable_1<System::Type> parentTypes) ;

/// @brief Method AssertInstanceDerivesFromOrEqual addr 0x2d68824 size 0xe4 virtual false final false
static void AssertInstanceDerivesFromOrEqual(::bs_hook::Il2CppWrapperType instance, System::Type baseType) ;

/// @brief Method CreateCachedProvider addr 0x2d68908 size 0x10c virtual false final false
static Zenject::IProvider CreateCachedProvider(Zenject::IProvider creator) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::BindingUtil);
DEFINE_IL2CPP_ARG_TYPE(Zenject::BindingUtil, "Zenject", "BindingUtil");
