#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
struct Zenject__ZenAutoInjecter__ContainerSources;
}
namespace Zenject {
class ZenAutoInjecter;
}
// Type: ::ContainerSources
namespace Zenject {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11301))
// CS Name: Zenject.ZenAutoInjecter::ContainerSources
struct CORDL_TYPE Zenject__ZenAutoInjecter__ContainerSources : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr Zenject__ZenAutoInjecter__ContainerSources(int32_t value__) noexcept;


                    constexpr Zenject__ZenAutoInjecter__ContainerSources(Zenject__ZenAutoInjecter__ContainerSources const&) = default;
                    constexpr Zenject__ZenAutoInjecter__ContainerSources(Zenject__ZenAutoInjecter__ContainerSources&&) = default;
                    constexpr Zenject__ZenAutoInjecter__ContainerSources& operator=(Zenject__ZenAutoInjecter__ContainerSources const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Zenject__ZenAutoInjecter__ContainerSources& operator=(Zenject__ZenAutoInjecter__ContainerSources&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Zenject__ZenAutoInjecter__ContainerSources(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Zenject__ZenAutoInjecter__ContainerSources_Unwrapped : int32_t {
__SceneContext = 0,
__ProjectContext = 1,
__SearchHierarchy = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Zenject__ZenAutoInjecter__ContainerSources_Unwrapped () const noexcept {
return std::bit_cast<__Zenject__ZenAutoInjecter__ContainerSources_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field SceneContext offset 0
static Zenject::Zenject__ZenAutoInjecter__ContainerSources const SceneContext;

/// @brief Field ProjectContext offset 0
static Zenject::Zenject__ZenAutoInjecter__ContainerSources const ProjectContext;

/// @brief Field SearchHierarchy offset 0
static Zenject::Zenject__ZenAutoInjecter__ContainerSources const SearchHierarchy;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::ZenAutoInjecter
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11302))
// CS Name: Zenject.ZenAutoInjecter
class CORDL_TYPE ZenAutoInjecter : public UnityEngine::MonoBehaviour {
public:
// Declarations
using ContainerSources = Zenject::Zenject__ZenAutoInjecter__ContainerSources;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ZenAutoInjecter() = default;

// Ctor Parameters [CppParam { name: "", ty: "ZenAutoInjecter", modifiers: " const&", def_value: None }]
constexpr ZenAutoInjecter(ZenAutoInjecter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ZenAutoInjecter", modifiers: "&&", def_value: None }]
constexpr ZenAutoInjecter(ZenAutoInjecter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ZenAutoInjecter(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ZenAutoInjecter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ZenAutoInjecter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ZenAutoInjecter& operator=(ZenAutoInjecter&& o) noexcept = default;
  constexpr ZenAutoInjecter& operator=(ZenAutoInjecter const& o) noexcept = default;
                


// Fields

 Zenject::Zenject__ZenAutoInjecter__ContainerSources __declspec(property(get=__get__containerSource, put=__set__containerSource))  _containerSource;

constexpr void __set__containerSource(Zenject::Zenject__ZenAutoInjecter__ContainerSources value) ;

constexpr Zenject::Zenject__ZenAutoInjecter__ContainerSources __get__containerSource() const;

 bool __declspec(property(get=__get__hasInjected, put=__set__hasInjected))  _hasInjected;

constexpr void __set__hasInjected(bool value) ;

constexpr bool __get__hasInjected() const;


// Properties

 Zenject::Zenject__ZenAutoInjecter__ContainerSources __declspec(property(get=get_ContainerSource, put=set_ContainerSource))  ContainerSource;


// Methods

/// @brief Method get_ContainerSource addr 0x2da6728 size 0x8 virtual false final false
 Zenject::Zenject__ZenAutoInjecter__ContainerSources get_ContainerSource() ;

/// @brief Method set_ContainerSource addr 0x2da6730 size 0x8 virtual false final false
 void set_ContainerSource(Zenject::Zenject__ZenAutoInjecter__ContainerSources value) ;

/// @brief Method Construct addr 0x2da6738 size 0x44 virtual false final false
 void Construct() ;

/// @brief Method Awake addr 0x2da677c size 0x48 virtual false final false
 void Awake() ;

/// @brief Method LookupContainer addr 0x2da67c4 size 0x158 virtual false final false
 Zenject::DiContainer LookupContainer() ;

/// @brief Method GetContainerForCurrentScene addr 0x2da691c size 0x90 virtual false final false
 Zenject::DiContainer GetContainerForCurrentScene() ;

// Ctor Parameters []
explicit ZenAutoInjecter() ;

/// @brief Method .ctor addr 0x2da69ac size 0x10 virtual false final false
 void _ctor() ;

/// @brief Method __zenInjectMethod0 addr 0x2da69bc size 0x80 virtual false final false
static void __zenInjectMethod0(::bs_hook::Il2CppWrapperType P_0, ::ArrayW<::bs_hook::Il2CppWrapperType> P_1) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2da6a3c size 0x254 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE(Zenject::Zenject__ZenAutoInjecter__ContainerSources, "Zenject", "ZenAutoInjecter/ContainerSources");
NEED_NO_BOX(Zenject::ZenAutoInjecter);
DEFINE_IL2CPP_ARG_TYPE(Zenject::ZenAutoInjecter, "Zenject", "ZenAutoInjecter");
