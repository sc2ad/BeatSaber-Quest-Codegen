#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
class DirectionalLight;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
struct GlobalNamespace__TimelineArrayReference__ArrayTypes;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class CanvasGroup;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__TimelineArrayReference__ArrayTypes;
}
namespace GlobalNamespace {
class TimelineArrayReference;
}
// Type: ::ArrayTypes
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6071))
// CS Name: TimelineArrayReference::ArrayTypes
struct CORDL_TYPE GlobalNamespace__TimelineArrayReference__ArrayTypes : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__TimelineArrayReference__ArrayTypes(int32_t value__) noexcept;


                    constexpr GlobalNamespace__TimelineArrayReference__ArrayTypes(GlobalNamespace__TimelineArrayReference__ArrayTypes const&) = default;
                    constexpr GlobalNamespace__TimelineArrayReference__ArrayTypes(GlobalNamespace__TimelineArrayReference__ArrayTypes&&) = default;
                    constexpr GlobalNamespace__TimelineArrayReference__ArrayTypes& operator=(GlobalNamespace__TimelineArrayReference__ArrayTypes const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__TimelineArrayReference__ArrayTypes& operator=(GlobalNamespace__TimelineArrayReference__ArrayTypes&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__TimelineArrayReference__ArrayTypes(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__TimelineArrayReference__ArrayTypes_Unwrapped : int32_t {
__TubeLight = 0,
__Transform = 1,
__Canvas = 2,
__TextMeshPro = 3,
__DirectionalLight = 4,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__TimelineArrayReference__ArrayTypes_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__TimelineArrayReference__ArrayTypes_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field TubeLight offset 0
static GlobalNamespace::GlobalNamespace__TimelineArrayReference__ArrayTypes const TubeLight;

/// @brief Field Transform offset 0
static GlobalNamespace::GlobalNamespace__TimelineArrayReference__ArrayTypes const Transform;

/// @brief Field Canvas offset 0
static GlobalNamespace::GlobalNamespace__TimelineArrayReference__ArrayTypes const Canvas;

/// @brief Field TextMeshPro offset 0
static GlobalNamespace::GlobalNamespace__TimelineArrayReference__ArrayTypes const TextMeshPro;

/// @brief Field DirectionalLight offset 0
static GlobalNamespace::GlobalNamespace__TimelineArrayReference__ArrayTypes const DirectionalLight;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TimelineArrayReference
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6072))
// CS Name: TimelineArrayReference
class CORDL_TYPE TimelineArrayReference : public UnityEngine::MonoBehaviour {
public:
// Declarations
using ArrayTypes = GlobalNamespace::GlobalNamespace__TimelineArrayReference__ArrayTypes;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~TimelineArrayReference() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimelineArrayReference", modifiers: " const&", def_value: None }]
constexpr TimelineArrayReference(TimelineArrayReference const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimelineArrayReference", modifiers: "&&", def_value: None }]
constexpr TimelineArrayReference(TimelineArrayReference&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimelineArrayReference(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr TimelineArrayReference& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimelineArrayReference& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimelineArrayReference& operator=(TimelineArrayReference&& o) noexcept = default;
  constexpr TimelineArrayReference& operator=(TimelineArrayReference const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__TimelineArrayReference__ArrayTypes __declspec(property(get=__get_arrayType, put=__set_arrayType))  arrayType;

constexpr void __set_arrayType(GlobalNamespace::GlobalNamespace__TimelineArrayReference__ArrayTypes value) ;

constexpr GlobalNamespace::GlobalNamespace__TimelineArrayReference__ArrayTypes __get_arrayType() const;

 ::ArrayW<GlobalNamespace::TubeBloomPrePassLight> __declspec(property(get=__get__tubeLightArray, put=__set__tubeLightArray))  _tubeLightArray;

constexpr void __set__tubeLightArray(::ArrayW<GlobalNamespace::TubeBloomPrePassLight> value) ;

constexpr ::ArrayW<GlobalNamespace::TubeBloomPrePassLight> __get__tubeLightArray() const;

 ::ArrayW<UnityEngine::CanvasGroup> __declspec(property(get=__get__canvasGroupArray, put=__set__canvasGroupArray))  _canvasGroupArray;

constexpr void __set__canvasGroupArray(::ArrayW<UnityEngine::CanvasGroup> value) ;

constexpr ::ArrayW<UnityEngine::CanvasGroup> __get__canvasGroupArray() const;

 ::ArrayW<TMPro::TextMeshPro> __declspec(property(get=__get__tmproArray, put=__set__tmproArray))  _tmproArray;

constexpr void __set__tmproArray(::ArrayW<TMPro::TextMeshPro> value) ;

constexpr ::ArrayW<TMPro::TextMeshPro> __get__tmproArray() const;

 ::ArrayW<UnityEngine::Transform> __declspec(property(get=__get__transformArray, put=__set__transformArray))  _transformArray;

constexpr void __set__transformArray(::ArrayW<UnityEngine::Transform> value) ;

constexpr ::ArrayW<UnityEngine::Transform> __get__transformArray() const;

 ::ArrayW<GlobalNamespace::DirectionalLight> __declspec(property(get=__get__directionalLights, put=__set__directionalLights))  _directionalLights;

constexpr void __set__directionalLights(::ArrayW<GlobalNamespace::DirectionalLight> value) ;

constexpr ::ArrayW<GlobalNamespace::DirectionalLight> __get__directionalLights() const;


// Methods

static GlobalNamespace::TimelineArrayReference New_ctor() ;

/// @brief Method .ctor addr 0x21b3208 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__TimelineArrayReference__ArrayTypes, "", "TimelineArrayReference/ArrayTypes");
NEED_NO_BOX(GlobalNamespace::TimelineArrayReference);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TimelineArrayReference, "", "TimelineArrayReference");
