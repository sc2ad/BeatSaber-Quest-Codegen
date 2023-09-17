#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class MainCameraCullingMask;
}
namespace GlobalNamespace {
class ____GlobalNamespace__MainCameraCullingMask__InitData;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15308))
// CS Name: MainCameraCullingMask::InitData
class CORDL_TYPE ____GlobalNamespace__MainCameraCullingMask__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____GlobalNamespace__MainCameraCullingMask__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MainCameraCullingMask__InitData", modifiers: " const&", def_value: None }]
constexpr ____GlobalNamespace__MainCameraCullingMask__InitData(____GlobalNamespace__MainCameraCullingMask__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____GlobalNamespace__MainCameraCullingMask__InitData", modifiers: "&&", def_value: None }]
constexpr ____GlobalNamespace__MainCameraCullingMask__InitData(____GlobalNamespace__MainCameraCullingMask__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____GlobalNamespace__MainCameraCullingMask__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____GlobalNamespace__MainCameraCullingMask__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____GlobalNamespace__MainCameraCullingMask__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____GlobalNamespace__MainCameraCullingMask__InitData& operator=(____GlobalNamespace__MainCameraCullingMask__InitData&& o) noexcept = default;
  constexpr ____GlobalNamespace__MainCameraCullingMask__InitData& operator=(____GlobalNamespace__MainCameraCullingMask__InitData const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_showDebris, put=__set_showDebris))  showDebris;

constexpr void __set_showDebris(bool value) ;

constexpr bool __get_showDebris() const;


// Methods

// Ctor Parameters [CppParam { name: "showDebris", ty: "bool", modifiers: "", def_value: None }]
explicit ____GlobalNamespace__MainCameraCullingMask__InitData(bool showDebris) ;

/// @brief Method .ctor addr 0x2676864 size 0x28 virtual false final false
 void _ctor(bool showDebris) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::MainCameraCullingMask
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15309))
// CS Name: MainCameraCullingMask
class CORDL_TYPE MainCameraCullingMask : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using InitData = ::GlobalNamespace::____GlobalNamespace__MainCameraCullingMask__InitData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MainCameraCullingMask() = default;

// Ctor Parameters [CppParam { name: "", ty: "MainCameraCullingMask", modifiers: " const&", def_value: None }]
constexpr MainCameraCullingMask(MainCameraCullingMask const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MainCameraCullingMask", modifiers: "&&", def_value: None }]
constexpr MainCameraCullingMask(MainCameraCullingMask&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MainCameraCullingMask(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr MainCameraCullingMask& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MainCameraCullingMask& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MainCameraCullingMask& operator=(MainCameraCullingMask&& o) noexcept = default;
  constexpr MainCameraCullingMask& operator=(MainCameraCullingMask const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Camera __declspec(property(get=__get__camera, put=__set__camera))  _camera;

constexpr void __set__camera(::UnityEngine::Camera value) ;

constexpr ::UnityEngine::Camera __get__camera() const;

 ::GlobalNamespace::____GlobalNamespace__MainCameraCullingMask__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(::GlobalNamespace::____GlobalNamespace__MainCameraCullingMask__InitData value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__MainCameraCullingMask__InitData __get__initData() const;


// Methods

/// @brief Method Start addr 0x2676744 size 0xb0 virtual false final false
 void Start() ;

// Ctor Parameters []
explicit MainCameraCullingMask() ;

/// @brief Method .ctor addr 0x26767f4 size 0x70 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::MainCameraCullingMask);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainCameraCullingMask, "", "MainCameraCullingMask");
NEED_NO_BOX(::GlobalNamespace::____GlobalNamespace__MainCameraCullingMask__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::____GlobalNamespace__MainCameraCullingMask__InitData, "", "MainCameraCullingMask/InitData");
