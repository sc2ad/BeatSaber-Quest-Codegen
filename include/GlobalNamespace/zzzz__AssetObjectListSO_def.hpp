#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class AssetObjectListSO;
}
// Type: ::AssetObjectListSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5907))
// CS Name: AssetObjectListSO
class CORDL_TYPE AssetObjectListSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AssetObjectListSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetObjectListSO", modifiers: " const&", def_value: None }]
constexpr AssetObjectListSO(AssetObjectListSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AssetObjectListSO", modifiers: "&&", def_value: None }]
constexpr AssetObjectListSO(AssetObjectListSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AssetObjectListSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr AssetObjectListSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AssetObjectListSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AssetObjectListSO& operator=(AssetObjectListSO&& o) noexcept = default;
  constexpr AssetObjectListSO& operator=(AssetObjectListSO const& o) noexcept = default;
                


// Fields

 ::ArrayW<UnityEngine::Object> __declspec(property(get=__get__objects, put=__set__objects))  _objects;

constexpr void __set__objects(::ArrayW<UnityEngine::Object> value) ;

constexpr ::ArrayW<UnityEngine::Object> __get__objects() const;


// Properties

 ::ArrayW<UnityEngine::Object> __declspec(property(get=get_objects))  objects;


// Methods

/// @brief Method get_objects addr 0x2190cc0 size 0x8 virtual false final false
 ::ArrayW<UnityEngine::Object> get_objects() ;

static GlobalNamespace::AssetObjectListSO New_ctor() ;

/// @brief Method .ctor addr 0x2190cc8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::AssetObjectListSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AssetObjectListSO, "", "AssetObjectListSO");
