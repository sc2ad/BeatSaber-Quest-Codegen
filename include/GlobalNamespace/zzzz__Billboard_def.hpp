#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct GlobalNamespace__Billboard__RotationMode;
}
namespace GlobalNamespace {
class Billboard;
}
// Type: ::RotationMode
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13774))
// CS Name: Billboard::RotationMode
struct CORDL_TYPE GlobalNamespace__Billboard__RotationMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlobalNamespace__Billboard__RotationMode(int32_t value__) noexcept;


                    constexpr GlobalNamespace__Billboard__RotationMode(GlobalNamespace__Billboard__RotationMode const&) = default;
                    constexpr GlobalNamespace__Billboard__RotationMode(GlobalNamespace__Billboard__RotationMode&&) = default;
                    constexpr GlobalNamespace__Billboard__RotationMode& operator=(GlobalNamespace__Billboard__RotationMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__Billboard__RotationMode& operator=(GlobalNamespace__Billboard__RotationMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__Billboard__RotationMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __GlobalNamespace__Billboard__RotationMode_Unwrapped : int32_t {
__AllAxis = 0,
__XAxis = 1,
__YAxis = 2,
__ZAxis = 3,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GlobalNamespace__Billboard__RotationMode_Unwrapped () const noexcept {
return std::bit_cast<__GlobalNamespace__Billboard__RotationMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field AllAxis offset 0
static GlobalNamespace::GlobalNamespace__Billboard__RotationMode const AllAxis;

/// @brief Field XAxis offset 0
static GlobalNamespace::GlobalNamespace__Billboard__RotationMode const XAxis;

/// @brief Field YAxis offset 0
static GlobalNamespace::GlobalNamespace__Billboard__RotationMode const YAxis;

/// @brief Field ZAxis offset 0
static GlobalNamespace::GlobalNamespace__Billboard__RotationMode const ZAxis;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Billboard
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13775))
// CS Name: Billboard
class CORDL_TYPE Billboard : public UnityEngine::MonoBehaviour {
public:
// Declarations
using RotationMode = GlobalNamespace::GlobalNamespace__Billboard__RotationMode;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Billboard() = default;

// Ctor Parameters [CppParam { name: "", ty: "Billboard", modifiers: " const&", def_value: None }]
constexpr Billboard(Billboard const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Billboard", modifiers: "&&", def_value: None }]
constexpr Billboard(Billboard&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Billboard(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr Billboard& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Billboard& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Billboard& operator=(Billboard&& o) noexcept = default;
  constexpr Billboard& operator=(Billboard const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__Billboard__RotationMode __declspec(property(get=__get__rotationMode, put=__set__rotationMode))  _rotationMode;

constexpr void __set__rotationMode(GlobalNamespace::GlobalNamespace__Billboard__RotationMode value) ;

constexpr GlobalNamespace::GlobalNamespace__Billboard__RotationMode __get__rotationMode() const;

 bool __declspec(property(get=__get__flipDirection, put=__set__flipDirection))  _flipDirection;

constexpr void __set__flipDirection(bool value) ;

constexpr bool __get__flipDirection() const;

 UnityEngine::Transform __declspec(property(get=__get__transform, put=__set__transform))  _transform;

constexpr void __set__transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__transform() const;


// Methods

/// @brief Method Awake addr 0x1f750c8 size 0x1c virtual false final false
 void Awake() ;

/// @brief Method OnWillRenderObject addr 0x1f750e4 size 0xd0 virtual false final false
 void OnWillRenderObject() ;

// Ctor Parameters []
explicit Billboard() ;

/// @brief Method .ctor addr 0x1f751b4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__Billboard__RotationMode, "", "Billboard/RotationMode");
NEED_NO_BOX(GlobalNamespace::Billboard);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::Billboard, "", "Billboard");
