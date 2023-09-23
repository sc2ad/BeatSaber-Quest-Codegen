#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType;
}
namespace GlobalNamespace {
class GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects;
}
namespace GlobalNamespace {
class MenuEnvironmentManager;
}
// Type: ::MenuEnvironmentType
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4806))
// CS Name: MenuEnvironmentManager::MenuEnvironmentType
struct CORDL_TYPE GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType(int32_t value__) noexcept;


                    constexpr GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType(GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType const&) = default;
                    constexpr GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType(GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType&&) = default;
                    constexpr GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType& operator=(GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType& operator=(GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType_Unwrapped : int32_t {
__None = 0,
__Default = 1,
__Lobby = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static GlobalNamespace::GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType const None;

/// @brief Field Default offset 0
static GlobalNamespace::GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType const Default;

/// @brief Field Lobby offset 0
static GlobalNamespace::GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType const Lobby;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MenuEnvironmentObjects
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4807))
// CS Name: MenuEnvironmentManager::MenuEnvironmentObjects
class CORDL_TYPE GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects(GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects(GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects& operator=(GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects&& o) noexcept = default;
  constexpr GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects& operator=(GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType __declspec(property(get=__get__menuEnvironmentType, put=__set__menuEnvironmentType))  _menuEnvironmentType;

constexpr void __set__menuEnvironmentType(GlobalNamespace::GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType value) ;

constexpr GlobalNamespace::GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType __get__menuEnvironmentType() const;

 UnityEngine::GameObject __declspec(property(get=__get__wrapper, put=__set__wrapper))  _wrapper;

constexpr void __set__wrapper(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__wrapper() const;


// Properties

 GlobalNamespace::GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType __declspec(property(get=get_menuEnvironmentType))  menuEnvironmentType;

 UnityEngine::GameObject __declspec(property(get=get_wrapper))  wrapper;


// Methods

/// @brief Method get_menuEnvironmentType addr 0x222cc40 size 0x8 virtual false final false
 GlobalNamespace::GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType get_menuEnvironmentType() ;

/// @brief Method get_wrapper addr 0x222cc48 size 0x8 virtual false final false
 UnityEngine::GameObject get_wrapper() ;

// Ctor Parameters []
explicit GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects() ;

/// @brief Method .ctor addr 0x222cc50 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MenuEnvironmentManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4808))
// CS Name: MenuEnvironmentManager
class CORDL_TYPE MenuEnvironmentManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
using MenuEnvironmentObjects = GlobalNamespace::GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects;

using MenuEnvironmentType = GlobalNamespace::GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MenuEnvironmentManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "MenuEnvironmentManager", modifiers: " const&", def_value: None }]
constexpr MenuEnvironmentManager(MenuEnvironmentManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MenuEnvironmentManager", modifiers: "&&", def_value: None }]
constexpr MenuEnvironmentManager(MenuEnvironmentManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MenuEnvironmentManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MenuEnvironmentManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MenuEnvironmentManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MenuEnvironmentManager& operator=(MenuEnvironmentManager&& o) noexcept = default;
  constexpr MenuEnvironmentManager& operator=(MenuEnvironmentManager const& o) noexcept = default;
                


// Fields

 ::ArrayW<GlobalNamespace::GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects> __declspec(property(get=__get__data, put=__set__data))  _data;

constexpr void __set__data(::ArrayW<GlobalNamespace::GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects> __get__data() const;

 GlobalNamespace::GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType __declspec(property(get=__get__prevMenuEnvironmentType, put=__set__prevMenuEnvironmentType))  _prevMenuEnvironmentType;

constexpr void __set__prevMenuEnvironmentType(GlobalNamespace::GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType value) ;

constexpr GlobalNamespace::GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType __get__prevMenuEnvironmentType() const;


// Methods

/// @brief Method Start addr 0x222cab0 size 0x8 virtual false final false
 void Start() ;

/// @brief Method ShowEnvironmentType addr 0x222cab8 size 0x180 virtual false final false
 void ShowEnvironmentType(GlobalNamespace::GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType menuEnvironmentType) ;

// Ctor Parameters []
explicit MenuEnvironmentManager() ;

/// @brief Method .ctor addr 0x222cc38 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentType, "", "MenuEnvironmentManager/MenuEnvironmentType");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__MenuEnvironmentManager__MenuEnvironmentObjects, "", "MenuEnvironmentManager/MenuEnvironmentObjects");
NEED_NO_BOX(GlobalNamespace::MenuEnvironmentManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MenuEnvironmentManager, "", "MenuEnvironmentManager");
