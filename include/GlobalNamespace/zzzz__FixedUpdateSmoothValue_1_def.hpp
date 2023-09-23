#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class FixedUpdateSmoothValue_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class FixedUpdateSmoothValue_1<T>;
}
namespace GlobalNamespace {
template<>
class FixedUpdateSmoothValue_1<UnityEngine::Vector3>;
}
// Type: ::FixedUpdateSmoothValue`1
// Type: ::FixedUpdateSmoothValue`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13738))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13738), inst: 2 })
// CS Name: FixedUpdateSmoothValue`1
class CORDL_TYPE FixedUpdateSmoothValue_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~FixedUpdateSmoothValue_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "FixedUpdateSmoothValue_1", modifiers: " const&", def_value: None }]
constexpr FixedUpdateSmoothValue_1(FixedUpdateSmoothValue_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FixedUpdateSmoothValue_1", modifiers: "&&", def_value: None }]
constexpr FixedUpdateSmoothValue_1(FixedUpdateSmoothValue_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FixedUpdateSmoothValue_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FixedUpdateSmoothValue_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FixedUpdateSmoothValue_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FixedUpdateSmoothValue_1& operator=(FixedUpdateSmoothValue_1&& o) noexcept = default;
  constexpr FixedUpdateSmoothValue_1& operator=(FixedUpdateSmoothValue_1 const& o) noexcept = default;
                


// Fields

 T __declspec(property(get=__get__currentSmoothedValue, put=__set__currentSmoothedValue))  _currentSmoothedValue;

constexpr void __set__currentSmoothedValue(T value) ;

constexpr T __get__currentSmoothedValue() const;

 T __declspec(property(get=__get__prevSmoothedValue, put=__set__prevSmoothedValue))  _prevSmoothedValue;

constexpr void __set__prevSmoothedValue(T value) ;

constexpr T __get__prevSmoothedValue() const;

 float_t __declspec(property(get=__get__smooth, put=__set__smooth))  _smooth;

constexpr void __set__smooth(float_t value) ;

constexpr float_t __get__smooth() const;


// Methods

// Ctor Parameters [CppParam { name: "smooth", ty: "float_t", modifiers: "", def_value: None }]
explicit FixedUpdateSmoothValue_1(float_t smooth) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(float_t smooth) ;

/// @brief Method SetStartValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetStartValue(T value) ;

/// @brief Method FixedUpdate addr 0x0 size 0xffffffffffffffff virtual false final false
 void FixedUpdate(T value) ;

/// @brief Method GetValue addr 0x0 size 0xffffffffffffffff virtual false final false
 T GetValue(float_t interpolationFactor) ;

/// @brief Method Interpolate addr 0x0 size 0xffffffffffffffff virtual true final false
 T Interpolate(T value0, T value1, float_t t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::FixedUpdateSmoothValue`1
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13738))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13738), inst: 394 })
// CS Name: FixedUpdateSmoothValue`1
class CORDL_TYPE FixedUpdateSmoothValue_1<UnityEngine::Vector3> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~FixedUpdateSmoothValue_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "FixedUpdateSmoothValue_1", modifiers: " const&", def_value: None }]
constexpr FixedUpdateSmoothValue_1(FixedUpdateSmoothValue_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "FixedUpdateSmoothValue_1", modifiers: "&&", def_value: None }]
constexpr FixedUpdateSmoothValue_1(FixedUpdateSmoothValue_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit FixedUpdateSmoothValue_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr FixedUpdateSmoothValue_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr FixedUpdateSmoothValue_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr FixedUpdateSmoothValue_1& operator=(FixedUpdateSmoothValue_1&& o) noexcept = default;
  constexpr FixedUpdateSmoothValue_1& operator=(FixedUpdateSmoothValue_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get__currentSmoothedValue, put=__set__currentSmoothedValue))  _currentSmoothedValue;

constexpr void __set__currentSmoothedValue(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__currentSmoothedValue() const;

 UnityEngine::Vector3 __declspec(property(get=__get__prevSmoothedValue, put=__set__prevSmoothedValue))  _prevSmoothedValue;

constexpr void __set__prevSmoothedValue(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__prevSmoothedValue() const;

 float_t __declspec(property(get=__get__smooth, put=__set__smooth))  _smooth;

constexpr void __set__smooth(float_t value) ;

constexpr float_t __get__smooth() const;


// Methods

// Ctor Parameters [CppParam { name: "smooth", ty: "float_t", modifiers: "", def_value: None }]
explicit FixedUpdateSmoothValue_1(float_t smooth) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(float_t smooth) ;

/// @brief Method SetStartValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetStartValue(UnityEngine::Vector3 value) ;

/// @brief Method FixedUpdate addr 0x0 size 0xffffffffffffffff virtual false final false
 void FixedUpdate(UnityEngine::Vector3 value) ;

/// @brief Method GetValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::Vector3 GetValue(float_t interpolationFactor) ;

/// @brief Method Interpolate addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Vector3 Interpolate(UnityEngine::Vector3 value0, UnityEngine::Vector3 value1, float_t t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::FixedUpdateSmoothValue_1, "", "FixedUpdateSmoothValue`1");
