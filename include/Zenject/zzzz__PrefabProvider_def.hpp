#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace Zenject {
class IPrefabProvider;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Zenject {
class PrefabProvider;
}
// Type: Zenject::PrefabProvider
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11174))
// CS Name: Zenject.PrefabProvider
class CORDL_TYPE PrefabProvider : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::Zenject::IPrefabProvider
constexpr operator  ::Zenject::IPrefabProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PrefabProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "PrefabProvider", modifiers: " const&", def_value: None }]
constexpr PrefabProvider(PrefabProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PrefabProvider", modifiers: "&&", def_value: None }]
constexpr PrefabProvider(PrefabProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PrefabProvider(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PrefabProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PrefabProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PrefabProvider& operator=(PrefabProvider&& o) noexcept = default;
  constexpr PrefabProvider& operator=(PrefabProvider const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Object __declspec(property(get=__get__prefab, put=__set__prefab))  _prefab;

constexpr void __set__prefab(::UnityEngine::Object value) ;

constexpr ::UnityEngine::Object __get__prefab() const;


// Methods

// Ctor Parameters [CppParam { name: "prefab", ty: "::UnityEngine::Object", modifiers: "", def_value: None }]
explicit PrefabProvider(::UnityEngine::Object prefab) ;

/// @brief Method .ctor addr 0x2d906bc size 0x34 virtual false final false
 void _ctor(::UnityEngine::Object prefab) ;

/// @brief Method GetPrefab addr 0x2d906f0 size 0x8 virtual true final true
 ::UnityEngine::Object GetPrefab() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::PrefabProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PrefabProvider, "Zenject", "PrefabProvider");
