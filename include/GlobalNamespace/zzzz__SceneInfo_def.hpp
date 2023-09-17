#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class SceneInfo;
}
// Type: ::SceneInfo
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13868))
// CS Name: SceneInfo
class CORDL_TYPE SceneInfo : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SceneInfo() = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneInfo", modifiers: " const&", def_value: None }]
constexpr SceneInfo(SceneInfo const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneInfo", modifiers: "&&", def_value: None }]
constexpr SceneInfo(SceneInfo&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SceneInfo(void* ptr) noexcept : ::GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr SceneInfo& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SceneInfo& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SceneInfo& operator=(SceneInfo&& o) noexcept = default;
  constexpr SceneInfo& operator=(SceneInfo const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__sceneName, put=__set__sceneName))  _sceneName;

constexpr void __set__sceneName(::StringW value) ;

constexpr ::StringW __get__sceneName() const;

 bool __declspec(property(get=__get__disabledRootObjects, put=__set__disabledRootObjects))  _disabledRootObjects;

constexpr void __set__disabledRootObjects(bool value) ;

constexpr bool __get__disabledRootObjects() const;


// Properties

 ::StringW __declspec(property(get=get_sceneName))  sceneName;

 bool __declspec(property(get=get_disabledRootObjects))  disabledRootObjects;


// Methods

/// @brief Method get_sceneName addr 0x1f829e4 size 0x8 virtual false final false
 ::StringW get_sceneName() ;

/// @brief Method get_disabledRootObjects addr 0x1f829ec size 0x8 virtual false final false
 bool get_disabledRootObjects() ;

// Ctor Parameters []
explicit SceneInfo() ;

/// @brief Method .ctor addr 0x1f829f4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SceneInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SceneInfo, "", "SceneInfo");
