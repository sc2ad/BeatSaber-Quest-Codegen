#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class InternalUtility;
}
namespace UnityEngine::ProBuilder {
class ____UnityEngine__ProBuilder__InternalUtility____c__DisplayClass7_0;
}
// Type: ::<>c__DisplayClass7_0
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12072))
// CS Name: UnityEngine.ProBuilder.InternalUtility::<>c__DisplayClass7_0
class CORDL_TYPE ____UnityEngine__ProBuilder__InternalUtility____c__DisplayClass7_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____UnityEngine__ProBuilder__InternalUtility____c__DisplayClass7_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ProBuilder__InternalUtility____c__DisplayClass7_0", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__ProBuilder__InternalUtility____c__DisplayClass7_0(____UnityEngine__ProBuilder__InternalUtility____c__DisplayClass7_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ProBuilder__InternalUtility____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__ProBuilder__InternalUtility____c__DisplayClass7_0(____UnityEngine__ProBuilder__InternalUtility____c__DisplayClass7_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__ProBuilder__InternalUtility____c__DisplayClass7_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__ProBuilder__InternalUtility____c__DisplayClass7_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__ProBuilder__InternalUtility____c__DisplayClass7_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__ProBuilder__InternalUtility____c__DisplayClass7_0& operator=(____UnityEngine__ProBuilder__InternalUtility____c__DisplayClass7_0&& o) noexcept = default;
  constexpr ____UnityEngine__ProBuilder__InternalUtility____c__DisplayClass7_0& operator=(____UnityEngine__ProBuilder__InternalUtility____c__DisplayClass7_0 const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_valid, put=__set_valid))  valid;

constexpr void __set_valid(::StringW value) ;

constexpr ::StringW __get_valid() const;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__ProBuilder__InternalUtility____c__DisplayClass7_0() ;

/// @brief Method .ctor addr 0x29b2ac4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <TryParseColor>b__0 addr 0x29b2db4 size 0x1c virtual false final false
 bool _TryParseColor_b__0(char16_t c) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
// Type: UnityEngine.ProBuilder::InternalUtility
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12073))
// CS Name: UnityEngine.ProBuilder.InternalUtility
class CORDL_TYPE InternalUtility : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass7_0 = ::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__InternalUtility____c__DisplayClass7_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InternalUtility() = default;

// Ctor Parameters [CppParam { name: "", ty: "InternalUtility", modifiers: " const&", def_value: None }]
constexpr InternalUtility(InternalUtility const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InternalUtility", modifiers: "&&", def_value: None }]
constexpr InternalUtility(InternalUtility&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InternalUtility(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InternalUtility& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InternalUtility& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InternalUtility& operator=(InternalUtility&& o) noexcept = default;
  constexpr InternalUtility& operator=(InternalUtility const& o) noexcept = default;
                


// Methods

/// @brief Method GetComponents addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::ArrayW<T> GetComponents(::System::Collections::Generic::IEnumerable_1<::UnityEngine::GameObject> gameObjects) ;

/// @brief Method GetComponents addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::ArrayW<T> GetComponents(::UnityEngine::GameObject go) ;

/// @brief Method GetComponents addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::ArrayW<T> GetComponents(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Transform> transforms) ;

/// @brief Method EmptyGameObjectWithTransform addr 0x29b2570 size 0xe8 virtual false final false
static ::UnityEngine::GameObject EmptyGameObjectWithTransform(::UnityEngine::Transform t) ;

/// @brief Method MeshGameObjectWithTransform addr 0x29b2658 size 0x11c virtual false final false
static ::UnityEngine::GameObject MeshGameObjectWithTransform(::StringW name, ::UnityEngine::Transform t, ::UnityEngine::Mesh mesh, ::UnityEngine::Material mat, bool inheritParent) ;

/// @brief Method NextEnumValue addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T NextEnumValue(T current) ;

/// @brief Method ControlKeyString addr 0x29b2774 size 0xf0 virtual false final false
static ::StringW ControlKeyString(char16_t character) ;

/// @brief Method TryParseColor addr 0x29b2864 size 0x260 virtual false final false
static bool TryParseColor(::StringW value, ByRef<::UnityEngine::Color> col) ;

/// @brief Method StringToVector3Array addr 0x29b2acc size 0x2e8 virtual false final false
static ::ArrayW<::UnityEngine::Vector3> StringToVector3Array(::StringW str) ;

/// @brief Method DemandComponent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T DemandComponent(::UnityEngine::Component component) ;

/// @brief Method DemandComponent addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T DemandComponent(::UnityEngine::GameObject gameObject) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ProBuilder::InternalUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::InternalUtility, "UnityEngine.ProBuilder", "InternalUtility");
NEED_NO_BOX(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__InternalUtility____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::____UnityEngine__ProBuilder__InternalUtility____c__DisplayClass7_0, "UnityEngine.ProBuilder", "InternalUtility/<>c__DisplayClass7_0");
