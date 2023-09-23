#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
struct LightAxis;
}
namespace GlobalNamespace {
class BasicSpectrogramData;
}
// Forward declare root types
namespace GlobalNamespace {
class TransformSpectrogram;
}
// Type: ::TransformSpectrogram
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5101))
// CS Name: TransformSpectrogram
class CORDL_TYPE TransformSpectrogram : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~TransformSpectrogram() = default;

// Ctor Parameters [CppParam { name: "", ty: "TransformSpectrogram", modifiers: " const&", def_value: None }]
constexpr TransformSpectrogram(TransformSpectrogram const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TransformSpectrogram", modifiers: "&&", def_value: None }]
constexpr TransformSpectrogram(TransformSpectrogram&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TransformSpectrogram(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr TransformSpectrogram& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TransformSpectrogram& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TransformSpectrogram& operator=(TransformSpectrogram&& o) noexcept = default;
  constexpr TransformSpectrogram& operator=(TransformSpectrogram const& o) noexcept = default;
                


// Fields

 ::ArrayW<UnityEngine::Transform> __declspec(property(get=__get__transforms, put=__set__transforms))  _transforms;

constexpr void __set__transforms(::ArrayW<UnityEngine::Transform> value) ;

constexpr ::ArrayW<UnityEngine::Transform> __get__transforms() const;

 GlobalNamespace::LightAxis __declspec(property(get=__get__axis, put=__set__axis))  _axis;

constexpr void __set__axis(GlobalNamespace::LightAxis value) ;

constexpr GlobalNamespace::LightAxis __get__axis() const;

 float_t __declspec(property(get=__get__minPosition, put=__set__minPosition))  _minPosition;

constexpr void __set__minPosition(float_t value) ;

constexpr float_t __get__minPosition() const;

 float_t __declspec(property(get=__get__maxPosition, put=__set__maxPosition))  _maxPosition;

constexpr void __set__maxPosition(float_t value) ;

constexpr float_t __get__maxPosition() const;

 bool __declspec(property(get=__get__scaleSamples, put=__set__scaleSamples))  _scaleSamples;

constexpr void __set__scaleSamples(bool value) ;

constexpr bool __get__scaleSamples() const;

 float_t __declspec(property(get=__get__scale, put=__set__scale))  _scale;

constexpr void __set__scale(float_t value) ;

constexpr float_t __get__scale() const;

 GlobalNamespace::BasicSpectrogramData __declspec(property(get=__get__spectrogramData, put=__set__spectrogramData))  _spectrogramData;

constexpr void __set__spectrogramData(GlobalNamespace::BasicSpectrogramData value) ;

constexpr GlobalNamespace::BasicSpectrogramData __get__spectrogramData() const;

 UnityEngine::Vector3 __declspec(property(get=__get__direction, put=__set__direction))  _direction;

constexpr void __set__direction(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__direction() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get__defaultPositions, put=__set__defaultPositions))  _defaultPositions;

constexpr void __set__defaultPositions(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get__defaultPositions() const;


// Methods

/// @brief Method Awake addr 0x226c2c0 size 0x188 virtual false final false
 void Awake() ;

/// @brief Method Update addr 0x226c448 size 0x268 virtual false final false
 void Update() ;

// Ctor Parameters []
explicit TransformSpectrogram() ;

/// @brief Method .ctor addr 0x226c6b0 size 0x1c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::TransformSpectrogram);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TransformSpectrogram, "", "TransformSpectrogram");
