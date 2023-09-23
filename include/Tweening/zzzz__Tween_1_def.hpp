#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Tweening/zzzz__Tween_def.hpp"
#include <cmath>
namespace GlobalNamespace {
struct EaseType;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Tweening {
template<typename T>
class Tween_1;
}
namespace Tweening {
template<::cordl_internals::il2cpp_reference_type T>
class Tween_1<T>;
}
namespace Tweening {
template<>
class Tween_1<UnityEngine::Color>;
}
namespace Tweening {
template<>
class Tween_1<UnityEngine::Vector2>;
}
namespace Tweening {
template<>
class Tween_1<UnityEngine::Vector3>;
}
namespace Tweening {
template<>
class Tween_1<float_t>;
}
// Type: Tweening::Tween`1
// Type: Tweening::Tween`1
namespace Tweening {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15936)), TypeDefinitionIndex(TypeDefinitionIndex(15937))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15937), inst: 2 })
// CS Name: Tweening.Tween`1
class CORDL_TYPE Tween_1<T> : public Tweening::Tween {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Tween_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tween_1", modifiers: " const&", def_value: None }]
constexpr Tween_1(Tween_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tween_1", modifiers: "&&", def_value: None }]
constexpr Tween_1(Tween_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tween_1(void* ptr) noexcept : Tweening::Tween(ptr) {
}


  constexpr Tween_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tween_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tween_1& operator=(Tween_1&& o) noexcept = default;
  constexpr Tween_1& operator=(Tween_1 const& o) noexcept = default;
                


// Fields

 T __declspec(property(get=__get_fromValue, put=__set_fromValue))  fromValue;

constexpr void __set_fromValue(T value) ;

constexpr T __get_fromValue() const;

 T __declspec(property(get=__get_toValue, put=__set_toValue))  toValue;

constexpr void __set_toValue(T value) ;

constexpr T __get_toValue() const;

 System::Action_1<T> __declspec(property(get=__get_onUpdate, put=__set_onUpdate))  onUpdate;

constexpr void __set_onUpdate(System::Action_1<T> value) ;

constexpr System::Action_1<T> __get_onUpdate() const;


// Methods

/// @brief Method OnSpawned addr 0x0 size 0xffffffffffffffff virtual false final false
static void OnSpawned(T fromValue, T toValue, System::Action_1<T> onUpdate, float_t duration, GlobalNamespace::EaseType easeType, float_t delay, Tweening::Tween_1<T> t) ;

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual false final false
static void OnDespawned(Tweening::Tween_1<T> t) ;

// Ctor Parameters []
explicit Tween_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "fromValue", ty: "T", modifiers: "", def_value: None }, CppParam { name: "toValue", ty: "T", modifiers: "", def_value: None }, CppParam { name: "onUpdate", ty: "System::Action_1<T>", modifiers: "", def_value: None }, CppParam { name: "duration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "easeType", ty: "GlobalNamespace::EaseType", modifiers: "", def_value: None }, CppParam { name: "delay", ty: "float_t", modifiers: "", def_value: None }]
explicit Tween_1(T fromValue, T toValue, System::Action_1<T> onUpdate, float_t duration, GlobalNamespace::EaseType easeType, float_t delay) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(T fromValue, T toValue, System::Action_1<T> onUpdate, float_t duration, GlobalNamespace::EaseType easeType, float_t delay) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
 void Init(T fromValue, T toValue, System::Action_1<T> onUpdate, float_t duration, GlobalNamespace::EaseType easeType, float_t delay) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
 void Update(float_t currentTime) ;

/// @brief Method Sample addr 0x0 size 0xffffffffffffffff virtual true final false
 void Sample(float_t t) ;

/// @brief Method ForceOnUpdate addr 0x0 size 0xffffffffffffffff virtual false final false
 void ForceOnUpdate() ;

/// @brief Method GetValue addr 0x0 size 0xffffffffffffffff virtual true final false
 T GetValue(float_t t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tweening
// Type: Tweening::Tween`1
namespace Tweening {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15936)), TypeDefinitionIndex(TypeDefinitionIndex(15937))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15937), inst: 280 })
// CS Name: Tweening.Tween`1
class CORDL_TYPE Tween_1<UnityEngine::Color> : public Tweening::Tween {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Tween_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tween_1", modifiers: " const&", def_value: None }]
constexpr Tween_1(Tween_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tween_1", modifiers: "&&", def_value: None }]
constexpr Tween_1(Tween_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tween_1(void* ptr) noexcept : Tweening::Tween(ptr) {
}


  constexpr Tween_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tween_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tween_1& operator=(Tween_1&& o) noexcept = default;
  constexpr Tween_1& operator=(Tween_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::Color __declspec(property(get=__get_fromValue, put=__set_fromValue))  fromValue;

constexpr void __set_fromValue(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_fromValue() const;

 UnityEngine::Color __declspec(property(get=__get_toValue, put=__set_toValue))  toValue;

constexpr void __set_toValue(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get_toValue() const;

 System::Action_1<UnityEngine::Color> __declspec(property(get=__get_onUpdate, put=__set_onUpdate))  onUpdate;

constexpr void __set_onUpdate(System::Action_1<UnityEngine::Color> value) ;

constexpr System::Action_1<UnityEngine::Color> __get_onUpdate() const;


// Methods

/// @brief Method OnSpawned addr 0x0 size 0xffffffffffffffff virtual false final false
static void OnSpawned(UnityEngine::Color fromValue, UnityEngine::Color toValue, System::Action_1<UnityEngine::Color> onUpdate, float_t duration, GlobalNamespace::EaseType easeType, float_t delay, Tweening::Tween_1<UnityEngine::Color> t) ;

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual false final false
static void OnDespawned(Tweening::Tween_1<UnityEngine::Color> t) ;

// Ctor Parameters []
explicit Tween_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "fromValue", ty: "UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "toValue", ty: "UnityEngine::Color", modifiers: "", def_value: None }, CppParam { name: "onUpdate", ty: "System::Action_1<UnityEngine::Color>", modifiers: "", def_value: None }, CppParam { name: "duration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "easeType", ty: "GlobalNamespace::EaseType", modifiers: "", def_value: None }, CppParam { name: "delay", ty: "float_t", modifiers: "", def_value: None }]
explicit Tween_1(UnityEngine::Color fromValue, UnityEngine::Color toValue, System::Action_1<UnityEngine::Color> onUpdate, float_t duration, GlobalNamespace::EaseType easeType, float_t delay) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::Color fromValue, UnityEngine::Color toValue, System::Action_1<UnityEngine::Color> onUpdate, float_t duration, GlobalNamespace::EaseType easeType, float_t delay) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
 void Init(UnityEngine::Color fromValue, UnityEngine::Color toValue, System::Action_1<UnityEngine::Color> onUpdate, float_t duration, GlobalNamespace::EaseType easeType, float_t delay) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
 void Update(float_t currentTime) ;

/// @brief Method Sample addr 0x0 size 0xffffffffffffffff virtual true final false
 void Sample(float_t t) ;

/// @brief Method ForceOnUpdate addr 0x0 size 0xffffffffffffffff virtual false final false
 void ForceOnUpdate() ;

/// @brief Method GetValue addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Color GetValue(float_t t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tweening
// Type: Tweening::Tween`1
namespace Tweening {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15937)), TypeDefinitionIndex(TypeDefinitionIndex(15936))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15937), inst: 374 })
// CS Name: Tweening.Tween`1
class CORDL_TYPE Tween_1<float_t> : public Tweening::Tween {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Tween_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tween_1", modifiers: " const&", def_value: None }]
constexpr Tween_1(Tween_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tween_1", modifiers: "&&", def_value: None }]
constexpr Tween_1(Tween_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tween_1(void* ptr) noexcept : Tweening::Tween(ptr) {
}


  constexpr Tween_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tween_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tween_1& operator=(Tween_1&& o) noexcept = default;
  constexpr Tween_1& operator=(Tween_1 const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get_fromValue, put=__set_fromValue))  fromValue;

constexpr void __set_fromValue(float_t value) ;

constexpr float_t __get_fromValue() const;

 float_t __declspec(property(get=__get_toValue, put=__set_toValue))  toValue;

constexpr void __set_toValue(float_t value) ;

constexpr float_t __get_toValue() const;

 System::Action_1<float_t> __declspec(property(get=__get_onUpdate, put=__set_onUpdate))  onUpdate;

constexpr void __set_onUpdate(System::Action_1<float_t> value) ;

constexpr System::Action_1<float_t> __get_onUpdate() const;


// Methods

/// @brief Method OnSpawned addr 0x0 size 0xffffffffffffffff virtual false final false
static void OnSpawned(float_t fromValue, float_t toValue, System::Action_1<float_t> onUpdate, float_t duration, GlobalNamespace::EaseType easeType, float_t delay, Tweening::Tween_1<float_t> t) ;

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual false final false
static void OnDespawned(Tweening::Tween_1<float_t> t) ;

// Ctor Parameters []
explicit Tween_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "fromValue", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "toValue", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "onUpdate", ty: "System::Action_1<float_t>", modifiers: "", def_value: None }, CppParam { name: "duration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "easeType", ty: "GlobalNamespace::EaseType", modifiers: "", def_value: None }, CppParam { name: "delay", ty: "float_t", modifiers: "", def_value: None }]
explicit Tween_1(float_t fromValue, float_t toValue, System::Action_1<float_t> onUpdate, float_t duration, GlobalNamespace::EaseType easeType, float_t delay) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(float_t fromValue, float_t toValue, System::Action_1<float_t> onUpdate, float_t duration, GlobalNamespace::EaseType easeType, float_t delay) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
 void Init(float_t fromValue, float_t toValue, System::Action_1<float_t> onUpdate, float_t duration, GlobalNamespace::EaseType easeType, float_t delay) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
 void Update(float_t currentTime) ;

/// @brief Method Sample addr 0x0 size 0xffffffffffffffff virtual true final false
 void Sample(float_t t) ;

/// @brief Method ForceOnUpdate addr 0x0 size 0xffffffffffffffff virtual false final false
 void ForceOnUpdate() ;

/// @brief Method GetValue addr 0x0 size 0xffffffffffffffff virtual true final false
 float_t GetValue(float_t t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tweening
// Type: Tweening::Tween`1
namespace Tweening {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15936)), TypeDefinitionIndex(TypeDefinitionIndex(15937))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15937), inst: 393 })
// CS Name: Tweening.Tween`1
class CORDL_TYPE Tween_1<UnityEngine::Vector2> : public Tweening::Tween {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Tween_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tween_1", modifiers: " const&", def_value: None }]
constexpr Tween_1(Tween_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tween_1", modifiers: "&&", def_value: None }]
constexpr Tween_1(Tween_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tween_1(void* ptr) noexcept : Tweening::Tween(ptr) {
}


  constexpr Tween_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tween_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tween_1& operator=(Tween_1&& o) noexcept = default;
  constexpr Tween_1& operator=(Tween_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector2 __declspec(property(get=__get_fromValue, put=__set_fromValue))  fromValue;

constexpr void __set_fromValue(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_fromValue() const;

 UnityEngine::Vector2 __declspec(property(get=__get_toValue, put=__set_toValue))  toValue;

constexpr void __set_toValue(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_toValue() const;

 System::Action_1<UnityEngine::Vector2> __declspec(property(get=__get_onUpdate, put=__set_onUpdate))  onUpdate;

constexpr void __set_onUpdate(System::Action_1<UnityEngine::Vector2> value) ;

constexpr System::Action_1<UnityEngine::Vector2> __get_onUpdate() const;


// Methods

/// @brief Method OnSpawned addr 0x0 size 0xffffffffffffffff virtual false final false
static void OnSpawned(UnityEngine::Vector2 fromValue, UnityEngine::Vector2 toValue, System::Action_1<UnityEngine::Vector2> onUpdate, float_t duration, GlobalNamespace::EaseType easeType, float_t delay, Tweening::Tween_1<UnityEngine::Vector2> t) ;

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual false final false
static void OnDespawned(Tweening::Tween_1<UnityEngine::Vector2> t) ;

// Ctor Parameters []
explicit Tween_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "fromValue", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "toValue", ty: "UnityEngine::Vector2", modifiers: "", def_value: None }, CppParam { name: "onUpdate", ty: "System::Action_1<UnityEngine::Vector2>", modifiers: "", def_value: None }, CppParam { name: "duration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "easeType", ty: "GlobalNamespace::EaseType", modifiers: "", def_value: None }, CppParam { name: "delay", ty: "float_t", modifiers: "", def_value: None }]
explicit Tween_1(UnityEngine::Vector2 fromValue, UnityEngine::Vector2 toValue, System::Action_1<UnityEngine::Vector2> onUpdate, float_t duration, GlobalNamespace::EaseType easeType, float_t delay) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::Vector2 fromValue, UnityEngine::Vector2 toValue, System::Action_1<UnityEngine::Vector2> onUpdate, float_t duration, GlobalNamespace::EaseType easeType, float_t delay) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
 void Init(UnityEngine::Vector2 fromValue, UnityEngine::Vector2 toValue, System::Action_1<UnityEngine::Vector2> onUpdate, float_t duration, GlobalNamespace::EaseType easeType, float_t delay) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
 void Update(float_t currentTime) ;

/// @brief Method Sample addr 0x0 size 0xffffffffffffffff virtual true final false
 void Sample(float_t t) ;

/// @brief Method ForceOnUpdate addr 0x0 size 0xffffffffffffffff virtual false final false
 void ForceOnUpdate() ;

/// @brief Method GetValue addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Vector2 GetValue(float_t t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tweening
// Type: Tweening::Tween`1
namespace Tweening {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15937)), TypeDefinitionIndex(TypeDefinitionIndex(15936))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15937), inst: 394 })
// CS Name: Tweening.Tween`1
class CORDL_TYPE Tween_1<UnityEngine::Vector3> : public Tweening::Tween {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Tween_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "Tween_1", modifiers: " const&", def_value: None }]
constexpr Tween_1(Tween_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Tween_1", modifiers: "&&", def_value: None }]
constexpr Tween_1(Tween_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Tween_1(void* ptr) noexcept : Tweening::Tween(ptr) {
}


  constexpr Tween_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Tween_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Tween_1& operator=(Tween_1&& o) noexcept = default;
  constexpr Tween_1& operator=(Tween_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_fromValue, put=__set_fromValue))  fromValue;

constexpr void __set_fromValue(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_fromValue() const;

 UnityEngine::Vector3 __declspec(property(get=__get_toValue, put=__set_toValue))  toValue;

constexpr void __set_toValue(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_toValue() const;

 System::Action_1<UnityEngine::Vector3> __declspec(property(get=__get_onUpdate, put=__set_onUpdate))  onUpdate;

constexpr void __set_onUpdate(System::Action_1<UnityEngine::Vector3> value) ;

constexpr System::Action_1<UnityEngine::Vector3> __get_onUpdate() const;


// Methods

/// @brief Method OnSpawned addr 0x0 size 0xffffffffffffffff virtual false final false
static void OnSpawned(UnityEngine::Vector3 fromValue, UnityEngine::Vector3 toValue, System::Action_1<UnityEngine::Vector3> onUpdate, float_t duration, GlobalNamespace::EaseType easeType, float_t delay, Tweening::Tween_1<UnityEngine::Vector3> t) ;

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual false final false
static void OnDespawned(Tweening::Tween_1<UnityEngine::Vector3> t) ;

// Ctor Parameters []
explicit Tween_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "fromValue", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "toValue", ty: "UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "onUpdate", ty: "System::Action_1<UnityEngine::Vector3>", modifiers: "", def_value: None }, CppParam { name: "duration", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "easeType", ty: "GlobalNamespace::EaseType", modifiers: "", def_value: None }, CppParam { name: "delay", ty: "float_t", modifiers: "", def_value: None }]
explicit Tween_1(UnityEngine::Vector3 fromValue, UnityEngine::Vector3 toValue, System::Action_1<UnityEngine::Vector3> onUpdate, float_t duration, GlobalNamespace::EaseType easeType, float_t delay) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::Vector3 fromValue, UnityEngine::Vector3 toValue, System::Action_1<UnityEngine::Vector3> onUpdate, float_t duration, GlobalNamespace::EaseType easeType, float_t delay) ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual false final false
 void Init(UnityEngine::Vector3 fromValue, UnityEngine::Vector3 toValue, System::Action_1<UnityEngine::Vector3> onUpdate, float_t duration, GlobalNamespace::EaseType easeType, float_t delay) ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual true final false
 void Update(float_t currentTime) ;

/// @brief Method Sample addr 0x0 size 0xffffffffffffffff virtual true final false
 void Sample(float_t t) ;

/// @brief Method ForceOnUpdate addr 0x0 size 0xffffffffffffffff virtual false final false
 void ForceOnUpdate() ;

/// @brief Method GetValue addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Vector3 GetValue(float_t t) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tweening
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Tweening::Tween_1, "Tweening", "Tween`1");
