#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace Zenject {
class SceneContext;
}
namespace Zenject {
class SceneContextRegistry;
}
namespace Zenject {
class IInitializable;
}
namespace System {
class IDisposable;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class SceneContextRegistryAdderAndRemover;
}
// Type: Zenject::SceneContextRegistryAdderAndRemover
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11275))
// CS Name: Zenject.SceneContextRegistryAdderAndRemover
class CORDL_TYPE SceneContextRegistryAdderAndRemover : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::IInitializable
constexpr operator  Zenject::IInitializable() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~SceneContextRegistryAdderAndRemover() = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneContextRegistryAdderAndRemover", modifiers: " const&", def_value: None }]
constexpr SceneContextRegistryAdderAndRemover(SceneContextRegistryAdderAndRemover const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneContextRegistryAdderAndRemover", modifiers: "&&", def_value: None }]
constexpr SceneContextRegistryAdderAndRemover(SceneContextRegistryAdderAndRemover&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SceneContextRegistryAdderAndRemover(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SceneContextRegistryAdderAndRemover& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SceneContextRegistryAdderAndRemover& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SceneContextRegistryAdderAndRemover& operator=(SceneContextRegistryAdderAndRemover&& o) noexcept = default;
  constexpr SceneContextRegistryAdderAndRemover& operator=(SceneContextRegistryAdderAndRemover const& o) noexcept = default;
                


// Fields

 Zenject::SceneContextRegistry __declspec(property(get=__get__registry, put=__set__registry))  _registry;

constexpr void __set__registry(Zenject::SceneContextRegistry value) ;

constexpr Zenject::SceneContextRegistry __get__registry() const;

 Zenject::SceneContext __declspec(property(get=__get__sceneContext, put=__set__sceneContext))  _sceneContext;

constexpr void __set__sceneContext(Zenject::SceneContext value) ;

constexpr Zenject::SceneContext __get__sceneContext() const;


// Methods

static Zenject::SceneContextRegistryAdderAndRemover New_ctor(Zenject::SceneContext sceneContext, Zenject::SceneContextRegistry registry) ;

/// @brief Method .ctor addr 0x2d9f454 size 0x2c virtual false final false
 void _ctor(Zenject::SceneContext sceneContext, Zenject::SceneContextRegistry registry) ;

/// @brief Method Initialize addr 0x2d9f480 size 0x20 virtual true final true
 void Initialize() ;

/// @brief Method Dispose addr 0x2d9f4a0 size 0x20 virtual true final true
 void Dispose() ;

/// @brief Method __zenCreate addr 0x2d9f4c0 size 0x11c virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2d9f5dc size 0x304 virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::SceneContextRegistryAdderAndRemover);
DEFINE_IL2CPP_ARG_TYPE(Zenject::SceneContextRegistryAdderAndRemover, "Zenject", "SceneContextRegistryAdderAndRemover");
