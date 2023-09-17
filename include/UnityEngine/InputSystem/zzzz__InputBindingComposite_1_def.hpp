#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/zzzz__InputBindingComposite_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
struct Quaternion;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
template<typename TValue>
class InputBindingComposite_1;
}
namespace UnityEngine::InputSystem {
template<>
class InputBindingComposite_1<::UnityEngine::Quaternion>;
}
namespace UnityEngine::InputSystem {
template<>
class InputBindingComposite_1<::UnityEngine::Vector2>;
}
namespace UnityEngine::InputSystem {
template<>
class InputBindingComposite_1<::UnityEngine::Vector3>;
}
namespace UnityEngine::InputSystem {
template<>
class InputBindingComposite_1<float_t>;
}
// Type: UnityEngine.InputSystem::InputBindingComposite`1
// Type: UnityEngine.InputSystem::InputBindingComposite`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6273)), TypeDefinitionIndex(TypeDefinitionIndex(6272))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6273), inst: 374 })
// CS Name: UnityEngine.InputSystem.InputBindingComposite`1
class CORDL_TYPE InputBindingComposite_1<float_t> : public ::UnityEngine::InputSystem::InputBindingComposite {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputBindingComposite_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputBindingComposite_1", modifiers: " const&", def_value: None }]
constexpr InputBindingComposite_1(InputBindingComposite_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputBindingComposite_1", modifiers: "&&", def_value: None }]
constexpr InputBindingComposite_1(InputBindingComposite_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputBindingComposite_1(void* ptr) noexcept : ::UnityEngine::InputSystem::InputBindingComposite(ptr) {
}


  constexpr InputBindingComposite_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputBindingComposite_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputBindingComposite_1& operator=(InputBindingComposite_1&& o) noexcept = default;
  constexpr InputBindingComposite_1& operator=(InputBindingComposite_1 const& o) noexcept = default;
                


// Properties

 ::System::Type __declspec(property(get=get_valueType))  valueType;

 int32_t __declspec(property(get=get_valueSizeInBytes))  valueSizeInBytes;


// Methods

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Type get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context) ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context, void* buffer, int32_t bufferSize) ;

/// @brief Method ReadValueAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueAsObject(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context) ;

// Ctor Parameters []
explicit InputBindingComposite_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputBindingComposite`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6273)), TypeDefinitionIndex(TypeDefinitionIndex(6272))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6273), inst: 393 })
// CS Name: UnityEngine.InputSystem.InputBindingComposite`1
class CORDL_TYPE InputBindingComposite_1<::UnityEngine::Vector2> : public ::UnityEngine::InputSystem::InputBindingComposite {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputBindingComposite_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputBindingComposite_1", modifiers: " const&", def_value: None }]
constexpr InputBindingComposite_1(InputBindingComposite_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputBindingComposite_1", modifiers: "&&", def_value: None }]
constexpr InputBindingComposite_1(InputBindingComposite_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputBindingComposite_1(void* ptr) noexcept : ::UnityEngine::InputSystem::InputBindingComposite(ptr) {
}


  constexpr InputBindingComposite_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputBindingComposite_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputBindingComposite_1& operator=(InputBindingComposite_1&& o) noexcept = default;
  constexpr InputBindingComposite_1& operator=(InputBindingComposite_1 const& o) noexcept = default;
                


// Properties

 ::System::Type __declspec(property(get=get_valueType))  valueType;

 int32_t __declspec(property(get=get_valueSizeInBytes))  valueSizeInBytes;


// Methods

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Type get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Vector2 ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context) ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context, void* buffer, int32_t bufferSize) ;

/// @brief Method ReadValueAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueAsObject(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context) ;

// Ctor Parameters []
explicit InputBindingComposite_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputBindingComposite`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6273)), TypeDefinitionIndex(TypeDefinitionIndex(6272))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6273), inst: 394 })
// CS Name: UnityEngine.InputSystem.InputBindingComposite`1
class CORDL_TYPE InputBindingComposite_1<::UnityEngine::Vector3> : public ::UnityEngine::InputSystem::InputBindingComposite {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputBindingComposite_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputBindingComposite_1", modifiers: " const&", def_value: None }]
constexpr InputBindingComposite_1(InputBindingComposite_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputBindingComposite_1", modifiers: "&&", def_value: None }]
constexpr InputBindingComposite_1(InputBindingComposite_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputBindingComposite_1(void* ptr) noexcept : ::UnityEngine::InputSystem::InputBindingComposite(ptr) {
}


  constexpr InputBindingComposite_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputBindingComposite_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputBindingComposite_1& operator=(InputBindingComposite_1&& o) noexcept = default;
  constexpr InputBindingComposite_1& operator=(InputBindingComposite_1 const& o) noexcept = default;
                


// Properties

 ::System::Type __declspec(property(get=get_valueType))  valueType;

 int32_t __declspec(property(get=get_valueSizeInBytes))  valueSizeInBytes;


// Methods

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Type get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Vector3 ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context) ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context, void* buffer, int32_t bufferSize) ;

/// @brief Method ReadValueAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueAsObject(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context) ;

// Ctor Parameters []
explicit InputBindingComposite_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputBindingComposite`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6273)), TypeDefinitionIndex(TypeDefinitionIndex(6272))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6273), inst: 3222 })
// CS Name: UnityEngine.InputSystem.InputBindingComposite`1
class CORDL_TYPE InputBindingComposite_1<::UnityEngine::Quaternion> : public ::UnityEngine::InputSystem::InputBindingComposite {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~InputBindingComposite_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputBindingComposite_1", modifiers: " const&", def_value: None }]
constexpr InputBindingComposite_1(InputBindingComposite_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputBindingComposite_1", modifiers: "&&", def_value: None }]
constexpr InputBindingComposite_1(InputBindingComposite_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputBindingComposite_1(void* ptr) noexcept : ::UnityEngine::InputSystem::InputBindingComposite(ptr) {
}


  constexpr InputBindingComposite_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputBindingComposite_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputBindingComposite_1& operator=(InputBindingComposite_1&& o) noexcept = default;
  constexpr InputBindingComposite_1& operator=(InputBindingComposite_1 const& o) noexcept = default;
                


// Properties

 ::System::Type __declspec(property(get=get_valueType))  valueType;

 int32_t __declspec(property(get=get_valueSizeInBytes))  valueSizeInBytes;


// Methods

/// @brief Method get_valueType addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Type get_valueType() ;

/// @brief Method get_valueSizeInBytes addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_valueSizeInBytes() ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Quaternion ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context) ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual true final false
 void ReadValue(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context, void* buffer, int32_t bufferSize) ;

/// @brief Method ReadValueAsObject addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ReadValueAsObject(ByRef<::UnityEngine::InputSystem::InputBindingCompositeContext> context) ;

// Ctor Parameters []
explicit InputBindingComposite_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::InputSystem::InputBindingComposite_1, "UnityEngine.InputSystem", "InputBindingComposite`1");
