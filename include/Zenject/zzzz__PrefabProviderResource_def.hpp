#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Zenject {
class IPrefabProvider;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Zenject {
class PrefabProviderResource;
}
// Type: Zenject::PrefabProviderResource
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11175))
// CS Name: Zenject.PrefabProviderResource
class CORDL_TYPE PrefabProviderResource : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::IPrefabProvider
constexpr operator  Zenject::IPrefabProvider() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~PrefabProviderResource() = default;

// Ctor Parameters [CppParam { name: "", ty: "PrefabProviderResource", modifiers: " const&", def_value: None }]
constexpr PrefabProviderResource(PrefabProviderResource const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PrefabProviderResource", modifiers: "&&", def_value: None }]
constexpr PrefabProviderResource(PrefabProviderResource&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PrefabProviderResource(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PrefabProviderResource& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PrefabProviderResource& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PrefabProviderResource& operator=(PrefabProviderResource&& o) noexcept = default;
  constexpr PrefabProviderResource& operator=(PrefabProviderResource const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__resourcePath, put=__set__resourcePath))  _resourcePath;

constexpr void __set__resourcePath(::StringW value) ;

constexpr ::StringW __get__resourcePath() const;


// Methods

static Zenject::PrefabProviderResource New_ctor(::StringW resourcePath) ;

/// @brief Method .ctor addr 0x2d906f8 size 0x28 virtual false final false
 void _ctor(::StringW resourcePath) ;

/// @brief Method GetPrefab addr 0x2d90720 size 0xcc virtual true final true
 UnityEngine::Object GetPrefab() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
NEED_NO_BOX(Zenject::PrefabProviderResource);
DEFINE_IL2CPP_ARG_TYPE(Zenject::PrefabProviderResource, "Zenject", "PrefabProviderResource");
