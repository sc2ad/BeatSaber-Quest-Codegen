#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
// Forward declare root types
namespace GlobalNamespace {
class GameObjectTestExceptionsSO;
}
namespace GlobalNamespace {
class GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException;
}
// Type: ::GameObjectTestException
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4220))
// CS Name: GameObjectTestExceptionsSO::GameObjectTestException
class CORDL_TYPE GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException(GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException(GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException& operator=(GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException&& o) noexcept = default;
  constexpr GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException& operator=(GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException const& o) noexcept = default;
                


// Fields

 GlobalNamespace::EnvironmentInfoSO __declspec(property(get=__get__environmentInfo, put=__set__environmentInfo))  _environmentInfo;

constexpr void __set__environmentInfo(GlobalNamespace::EnvironmentInfoSO value) ;

constexpr GlobalNamespace::EnvironmentInfoSO __get__environmentInfo() const;

 ::StringW __declspec(property(get=__get__exceptionNotes, put=__set__exceptionNotes))  _exceptionNotes;

constexpr void __set__exceptionNotes(::StringW value) ;

constexpr ::StringW __get__exceptionNotes() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__sceneHierarchies, put=__set__sceneHierarchies))  _sceneHierarchies;

constexpr void __set__sceneHierarchies(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__sceneHierarchies() const;


// Properties

 GlobalNamespace::EnvironmentInfoSO __declspec(property(get=get_environmentInfo))  environmentInfo;

 ::ArrayW<::StringW> __declspec(property(get=get_sceneHierarchies))  sceneHierarchies;


// Methods

/// @brief Method get_environmentInfo addr 0x21bff1c size 0x8 virtual false final false
 GlobalNamespace::EnvironmentInfoSO get_environmentInfo() ;

/// @brief Method get_sceneHierarchies addr 0x21bff24 size 0x8 virtual false final false
 ::ArrayW<::StringW> get_sceneHierarchies() ;

// Ctor Parameters []
explicit GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException() ;

/// @brief Method .ctor addr 0x21bff2c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::GameObjectTestExceptionsSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4221))
// CS Name: GameObjectTestExceptionsSO
class CORDL_TYPE GameObjectTestExceptionsSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
using GameObjectTestException = GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GameObjectTestExceptionsSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "GameObjectTestExceptionsSO", modifiers: " const&", def_value: None }]
constexpr GameObjectTestExceptionsSO(GameObjectTestExceptionsSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GameObjectTestExceptionsSO", modifiers: "&&", def_value: None }]
constexpr GameObjectTestExceptionsSO(GameObjectTestExceptionsSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GameObjectTestExceptionsSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr GameObjectTestExceptionsSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GameObjectTestExceptionsSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GameObjectTestExceptionsSO& operator=(GameObjectTestExceptionsSO&& o) noexcept = default;
  constexpr GameObjectTestExceptionsSO& operator=(GameObjectTestExceptionsSO const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException> __declspec(property(get=__get_tubeBloomPrePassLightIgnores, put=__set_tubeBloomPrePassLightIgnores))  tubeBloomPrePassLightIgnores;

constexpr void __set_tubeBloomPrePassLightIgnores(::ArrayW<GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException> __get_tubeBloomPrePassLightIgnores() const;


// Methods

/// @brief Method GetExceptionAsDictionary addr 0x21bfe34 size 0xe0 virtual false final false
static System::Collections::Generic::Dictionary_2<GlobalNamespace::EnvironmentInfoSO,::ArrayW<::StringW>> GetExceptionAsDictionary(::ArrayW<GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException> testExceptionArray) ;

// Ctor Parameters []
explicit GameObjectTestExceptionsSO() ;

/// @brief Method .ctor addr 0x21bff14 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GameObjectTestExceptionsSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameObjectTestExceptionsSO, "", "GameObjectTestExceptionsSO");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__GameObjectTestExceptionsSO__GameObjectTestException, "", "GameObjectTestExceptionsSO/GameObjectTestException");
