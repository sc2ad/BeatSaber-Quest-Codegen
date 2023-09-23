#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentBrandingManager;
}
namespace GlobalNamespace {
class GlobalNamespace__EnvironmentBrandingManager__InitData;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4804))
// CS Name: EnvironmentBrandingManager::InitData
class CORDL_TYPE GlobalNamespace__EnvironmentBrandingManager__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__EnvironmentBrandingManager__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__EnvironmentBrandingManager__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__EnvironmentBrandingManager__InitData(GlobalNamespace__EnvironmentBrandingManager__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__EnvironmentBrandingManager__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__EnvironmentBrandingManager__InitData(GlobalNamespace__EnvironmentBrandingManager__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__EnvironmentBrandingManager__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__EnvironmentBrandingManager__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__EnvironmentBrandingManager__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__EnvironmentBrandingManager__InitData& operator=(GlobalNamespace__EnvironmentBrandingManager__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__EnvironmentBrandingManager__InitData& operator=(GlobalNamespace__EnvironmentBrandingManager__InitData const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_hideBranding, put=__set_hideBranding))  hideBranding;

constexpr void __set_hideBranding(bool value) ;

constexpr bool __get_hideBranding() const;


// Methods

// Ctor Parameters [CppParam { name: "hideBranding", ty: "bool", modifiers: "", def_value: None }]
explicit GlobalNamespace__EnvironmentBrandingManager__InitData(bool hideBranding) ;

/// @brief Method .ctor addr 0x222ca88 size 0x28 virtual false final false
 void _ctor(bool hideBranding) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::EnvironmentBrandingManager
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4805))
// CS Name: EnvironmentBrandingManager
class CORDL_TYPE EnvironmentBrandingManager : public UnityEngine::MonoBehaviour {
public:
// Declarations
using InitData = GlobalNamespace::GlobalNamespace__EnvironmentBrandingManager__InitData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~EnvironmentBrandingManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentBrandingManager", modifiers: " const&", def_value: None }]
constexpr EnvironmentBrandingManager(EnvironmentBrandingManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvironmentBrandingManager", modifiers: "&&", def_value: None }]
constexpr EnvironmentBrandingManager(EnvironmentBrandingManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnvironmentBrandingManager(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr EnvironmentBrandingManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnvironmentBrandingManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnvironmentBrandingManager& operator=(EnvironmentBrandingManager&& o) noexcept = default;
  constexpr EnvironmentBrandingManager& operator=(EnvironmentBrandingManager const& o) noexcept = default;
                


// Fields

 ::ArrayW<UnityEngine::GameObject> __declspec(property(get=__get__brandingObjects, put=__set__brandingObjects))  _brandingObjects;

constexpr void __set__brandingObjects(::ArrayW<UnityEngine::GameObject> value) ;

constexpr ::ArrayW<UnityEngine::GameObject> __get__brandingObjects() const;

 ::ArrayW<UnityEngine::GameObject> __declspec(property(get=__get__replacementBrandingObjects, put=__set__replacementBrandingObjects))  _replacementBrandingObjects;

constexpr void __set__replacementBrandingObjects(::ArrayW<UnityEngine::GameObject> value) ;

constexpr ::ArrayW<UnityEngine::GameObject> __get__replacementBrandingObjects() const;

 GlobalNamespace::GlobalNamespace__EnvironmentBrandingManager__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(GlobalNamespace::GlobalNamespace__EnvironmentBrandingManager__InitData value) ;

constexpr GlobalNamespace::GlobalNamespace__EnvironmentBrandingManager__InitData __get__initData() const;


// Methods

/// @brief Method Start addr 0x222c9b4 size 0xcc virtual false final false
 void Start() ;

// Ctor Parameters []
explicit EnvironmentBrandingManager() ;

/// @brief Method .ctor addr 0x222ca80 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::EnvironmentBrandingManager);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnvironmentBrandingManager, "", "EnvironmentBrandingManager");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__EnvironmentBrandingManager__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__EnvironmentBrandingManager__InitData, "", "EnvironmentBrandingManager/InitData");
