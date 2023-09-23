#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class MainCamera;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class RectTransform;
}
// Forward declare root types
namespace GlobalNamespace {
class GlobalNamespace__SafeAreaRectChecker__InitData;
}
namespace GlobalNamespace {
class SafeAreaRectChecker;
}
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5535))
// CS Name: SafeAreaRectChecker::InitData
class CORDL_TYPE GlobalNamespace__SafeAreaRectChecker__InitData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GlobalNamespace__SafeAreaRectChecker__InitData() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SafeAreaRectChecker__InitData", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__SafeAreaRectChecker__InitData(GlobalNamespace__SafeAreaRectChecker__InitData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__SafeAreaRectChecker__InitData", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__SafeAreaRectChecker__InitData(GlobalNamespace__SafeAreaRectChecker__InitData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__SafeAreaRectChecker__InitData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__SafeAreaRectChecker__InitData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__SafeAreaRectChecker__InitData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__SafeAreaRectChecker__InitData& operator=(GlobalNamespace__SafeAreaRectChecker__InitData&& o) noexcept = default;
  constexpr GlobalNamespace__SafeAreaRectChecker__InitData& operator=(GlobalNamespace__SafeAreaRectChecker__InitData const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_checkingEnabled, put=__set_checkingEnabled))  checkingEnabled;

constexpr void __set_checkingEnabled(bool value) ;

constexpr bool __get_checkingEnabled() const;


// Methods

// Ctor Parameters [CppParam { name: "checkingEnabled", ty: "bool", modifiers: "", def_value: None }]
explicit GlobalNamespace__SafeAreaRectChecker__InitData(bool checkingEnabled) ;

/// @brief Method .ctor addr 0x2127360 size 0x28 virtual false final false
 void _ctor(bool checkingEnabled) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SafeAreaRectChecker
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5536))
// CS Name: SafeAreaRectChecker
class CORDL_TYPE SafeAreaRectChecker : public UnityEngine::MonoBehaviour {
public:
// Declarations
using InitData = GlobalNamespace::GlobalNamespace__SafeAreaRectChecker__InitData;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~SafeAreaRectChecker() = default;

// Ctor Parameters [CppParam { name: "", ty: "SafeAreaRectChecker", modifiers: " const&", def_value: None }]
constexpr SafeAreaRectChecker(SafeAreaRectChecker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SafeAreaRectChecker", modifiers: "&&", def_value: None }]
constexpr SafeAreaRectChecker(SafeAreaRectChecker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SafeAreaRectChecker(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SafeAreaRectChecker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SafeAreaRectChecker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SafeAreaRectChecker& operator=(SafeAreaRectChecker&& o) noexcept = default;
  constexpr SafeAreaRectChecker& operator=(SafeAreaRectChecker const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__minAngleX, put=__set__minAngleX))  _minAngleX;

constexpr void __set__minAngleX(float_t value) ;

constexpr float_t __get__minAngleX() const;

 float_t __declspec(property(get=__get__maxAngleX, put=__set__maxAngleX))  _maxAngleX;

constexpr void __set__maxAngleX(float_t value) ;

constexpr float_t __get__maxAngleX() const;

 float_t __declspec(property(get=__get__minAngleY, put=__set__minAngleY))  _minAngleY;

constexpr void __set__minAngleY(float_t value) ;

constexpr float_t __get__minAngleY() const;

 float_t __declspec(property(get=__get__maxAngleY, put=__set__maxAngleY))  _maxAngleY;

constexpr void __set__maxAngleY(float_t value) ;

constexpr float_t __get__maxAngleY() const;

 UnityEngine::GameObject __declspec(property(get=__get__activeObjectWhenInsideSafeArea, put=__set__activeObjectWhenInsideSafeArea))  _activeObjectWhenInsideSafeArea;

constexpr void __set__activeObjectWhenInsideSafeArea(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__activeObjectWhenInsideSafeArea() const;

 UnityEngine::GameObject __declspec(property(get=__get__activeObjectWhenNotInsideSafeArea, put=__set__activeObjectWhenNotInsideSafeArea))  _activeObjectWhenNotInsideSafeArea;

constexpr void __set__activeObjectWhenNotInsideSafeArea(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__activeObjectWhenNotInsideSafeArea() const;

 UnityEngine::RectTransform __declspec(property(get=__get__rectTransformToCheck, put=__set__rectTransformToCheck))  _rectTransformToCheck;

constexpr void __set__rectTransformToCheck(UnityEngine::RectTransform value) ;

constexpr UnityEngine::RectTransform __get__rectTransformToCheck() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get__corners, put=__set__corners))  _corners;

constexpr void __set__corners(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get__corners() const;

 GlobalNamespace::MainCamera __declspec(property(get=__get__mainCamera, put=__set__mainCamera))  _mainCamera;

constexpr void __set__mainCamera(GlobalNamespace::MainCamera value) ;

constexpr GlobalNamespace::MainCamera __get__mainCamera() const;

 GlobalNamespace::GlobalNamespace__SafeAreaRectChecker__InitData __declspec(property(get=__get__initData, put=__set__initData))  _initData;

constexpr void __set__initData(GlobalNamespace::GlobalNamespace__SafeAreaRectChecker__InitData value) ;

constexpr GlobalNamespace::GlobalNamespace__SafeAreaRectChecker__InitData __get__initData() const;


// Methods

/// @brief Method Start addr 0x21270ac size 0x64 virtual false final false
 void Start() ;

/// @brief Method Update addr 0x2127110 size 0x1ec virtual false final false
 void Update() ;

// Ctor Parameters []
explicit SafeAreaRectChecker() ;

/// @brief Method .ctor addr 0x21272fc size 0x64 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__SafeAreaRectChecker__InitData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__SafeAreaRectChecker__InitData, "", "SafeAreaRectChecker/InitData");
NEED_NO_BOX(GlobalNamespace::SafeAreaRectChecker);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SafeAreaRectChecker, "", "SafeAreaRectChecker");
