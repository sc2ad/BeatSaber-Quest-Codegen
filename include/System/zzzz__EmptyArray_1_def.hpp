#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
struct ____GlobalNamespace__AveragingValueRecorder__AverageValueData;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData;
}
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRSpatialAnchor__UnboundAnchor;
}
namespace LiteNetLib {
struct ____LiteNetLib__NatPunchModule__RequestEventData;
}
namespace LiteNetLib {
struct ____LiteNetLib__NatPunchModule__SuccessEventData;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System {
struct Guid;
}
namespace System {
struct Int32Enum;
}
namespace System::Reflection {
struct CustomAttributeNamedArgument;
}
namespace System::Reflection {
struct CustomAttributeTypedArgument;
}
namespace System::Reflection {
struct ParameterModifier;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System::Xml::Schema {
struct ____System__Xml__Schema__SequenceNode__SequenceConstructPosContext;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine::UIElements::StyleSheets {
struct ____UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine::UIElements {
struct ____UnityEngine__UIElements__EventDispatcher__DispatchContext;
}
namespace UnityEngine::UIElements {
struct ____UnityEngine__UIElements__EventDispatcher__EventRecord;
}
namespace UnityEngine::UIElements {
struct ____UnityEngine__UIElements__StyleVariableResolver__ResolveContext;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace System {
template<typename T>
class EmptyArray_1;
}
namespace System {
template<::cordl_internals::il2cpp_reference_type T>
class EmptyArray_1<T>;
}
namespace System {
template<>
class EmptyArray_1<::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData>;
}
namespace System {
template<>
class EmptyArray_1<::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData>;
}
namespace System {
template<>
class EmptyArray_1<::GlobalNamespace::____GlobalNamespace__OVRSpatialAnchor__UnboundAnchor>;
}
namespace System {
template<>
class EmptyArray_1<::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData>;
}
namespace System {
template<>
class EmptyArray_1<::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData>;
}
namespace System {
template<>
class EmptyArray_1<::System::Collections::Generic::KeyValuePair_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>>;
}
namespace System {
template<>
class EmptyArray_1<::System::Guid>;
}
namespace System {
template<>
class EmptyArray_1<::System::Int32Enum>;
}
namespace System {
template<>
class EmptyArray_1<::System::Reflection::CustomAttributeNamedArgument>;
}
namespace System {
template<>
class EmptyArray_1<::System::Reflection::CustomAttributeTypedArgument>;
}
namespace System {
template<>
class EmptyArray_1<::System::Reflection::ParameterModifier>;
}
namespace System {
template<>
class EmptyArray_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>>;
}
namespace System {
template<>
class EmptyArray_1<::System::Xml::Schema::____System__Xml__Schema__SequenceNode__SequenceConstructPosContext>;
}
namespace System {
template<>
class EmptyArray_1<::UnityEngine::Matrix4x4>;
}
namespace System {
template<>
class EmptyArray_1<::UnityEngine::Rect>;
}
namespace System {
template<>
class EmptyArray_1<::UnityEngine::UIElements::StyleSheets::____UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext>;
}
namespace System {
template<>
class EmptyArray_1<::UnityEngine::UIElements::TextureId>;
}
namespace System {
template<>
class EmptyArray_1<::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__DispatchContext>;
}
namespace System {
template<>
class EmptyArray_1<::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord>;
}
namespace System {
template<>
class EmptyArray_1<::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__ResolveContext>;
}
namespace System {
template<>
class EmptyArray_1<::UnityEngine::Vector2>;
}
namespace System {
template<>
class EmptyArray_1<bool>;
}
namespace System {
template<>
class EmptyArray_1<char16_t>;
}
namespace System {
template<>
class EmptyArray_1<float_t>;
}
namespace System {
template<>
class EmptyArray_1<int32_t>;
}
namespace System {
template<>
class EmptyArray_1<uint16_t>;
}
namespace System {
template<>
class EmptyArray_1<uint32_t>;
}
namespace System {
template<>
class EmptyArray_1<uint8_t>;
}
// Type: System::EmptyArray`1
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2591))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2591), inst: 2 })
// CS Name: System.EmptyArray`1
class CORDL_TYPE EmptyArray_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyArray_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: " const&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyArray_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyArray_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyArray_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyArray_1& operator=(EmptyArray_1&& o) noexcept = default;
  constexpr EmptyArray_1& operator=(EmptyArray_1 const& o) noexcept = default;
                


// Fields

static ::ArrayW<T> __declspec(property(get=__get_Value, put=__set_Value))  Value;

static void __set_Value(::ArrayW<T> value) ;

static ::ArrayW<T> __get_Value() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2591))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2591), inst: 92 })
// CS Name: System.EmptyArray`1
class CORDL_TYPE EmptyArray_1<int32_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyArray_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: " const&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyArray_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyArray_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyArray_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyArray_1& operator=(EmptyArray_1&& o) noexcept = default;
  constexpr EmptyArray_1& operator=(EmptyArray_1 const& o) noexcept = default;
                


// Fields

static ::ArrayW<int32_t> __declspec(property(get=__get_Value, put=__set_Value))  Value;

static void __set_Value(::ArrayW<int32_t> value) ;

static ::ArrayW<int32_t> __get_Value() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2591))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2591), inst: 99 })
// CS Name: System.EmptyArray`1
class CORDL_TYPE EmptyArray_1<bool> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyArray_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: " const&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyArray_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyArray_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyArray_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyArray_1& operator=(EmptyArray_1&& o) noexcept = default;
  constexpr EmptyArray_1& operator=(EmptyArray_1 const& o) noexcept = default;
                


// Fields

static ::ArrayW<bool> __declspec(property(get=__get_Value, put=__set_Value))  Value;

static void __set_Value(::ArrayW<bool> value) ;

static ::ArrayW<bool> __get_Value() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2591))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2591), inst: 279 })
// CS Name: System.EmptyArray`1
class CORDL_TYPE EmptyArray_1<char16_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyArray_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: " const&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyArray_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyArray_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyArray_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyArray_1& operator=(EmptyArray_1&& o) noexcept = default;
  constexpr EmptyArray_1& operator=(EmptyArray_1 const& o) noexcept = default;
                


// Fields

static ::ArrayW<char16_t> __declspec(property(get=__get_Value, put=__set_Value))  Value;

static void __set_Value(::ArrayW<char16_t> value) ;

static ::ArrayW<char16_t> __get_Value() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2591))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2591), inst: 374 })
// CS Name: System.EmptyArray`1
class CORDL_TYPE EmptyArray_1<float_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyArray_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: " const&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyArray_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyArray_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyArray_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyArray_1& operator=(EmptyArray_1&& o) noexcept = default;
  constexpr EmptyArray_1& operator=(EmptyArray_1 const& o) noexcept = default;
                


// Fields

static ::ArrayW<float_t> __declspec(property(get=__get_Value, put=__set_Value))  Value;

static void __set_Value(::ArrayW<float_t> value) ;

static ::ArrayW<float_t> __get_Value() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2591))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2591), inst: 393 })
// CS Name: System.EmptyArray`1
class CORDL_TYPE EmptyArray_1<::UnityEngine::Vector2> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyArray_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: " const&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyArray_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyArray_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyArray_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyArray_1& operator=(EmptyArray_1&& o) noexcept = default;
  constexpr EmptyArray_1& operator=(EmptyArray_1 const& o) noexcept = default;
                


// Fields

static ::ArrayW<::UnityEngine::Vector2> __declspec(property(get=__get_Value, put=__set_Value))  Value;

static void __set_Value(::ArrayW<::UnityEngine::Vector2> value) ;

static ::ArrayW<::UnityEngine::Vector2> __get_Value() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2591))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2591), inst: 717 })
// CS Name: System.EmptyArray`1
class CORDL_TYPE EmptyArray_1<uint8_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyArray_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: " const&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyArray_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyArray_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyArray_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyArray_1& operator=(EmptyArray_1&& o) noexcept = default;
  constexpr EmptyArray_1& operator=(EmptyArray_1 const& o) noexcept = default;
                


// Fields

static ::ArrayW<uint8_t> __declspec(property(get=__get_Value, put=__set_Value))  Value;

static void __set_Value(::ArrayW<uint8_t> value) ;

static ::ArrayW<uint8_t> __get_Value() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2591))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2591), inst: 728 })
// CS Name: System.EmptyArray`1
class CORDL_TYPE EmptyArray_1<uint16_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyArray_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: " const&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyArray_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyArray_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyArray_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyArray_1& operator=(EmptyArray_1&& o) noexcept = default;
  constexpr EmptyArray_1& operator=(EmptyArray_1 const& o) noexcept = default;
                


// Fields

static ::ArrayW<uint16_t> __declspec(property(get=__get_Value, put=__set_Value))  Value;

static void __set_Value(::ArrayW<uint16_t> value) ;

static ::ArrayW<uint16_t> __get_Value() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2591))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2591), inst: 729 })
// CS Name: System.EmptyArray`1
class CORDL_TYPE EmptyArray_1<uint32_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyArray_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: " const&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyArray_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyArray_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyArray_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyArray_1& operator=(EmptyArray_1&& o) noexcept = default;
  constexpr EmptyArray_1& operator=(EmptyArray_1 const& o) noexcept = default;
                


// Fields

static ::ArrayW<uint32_t> __declspec(property(get=__get_Value, put=__set_Value))  Value;

static void __set_Value(::ArrayW<uint32_t> value) ;

static ::ArrayW<uint32_t> __get_Value() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2591))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2591), inst: 2494 })
// CS Name: System.EmptyArray`1
class CORDL_TYPE EmptyArray_1<::System::Guid> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyArray_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: " const&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyArray_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyArray_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyArray_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyArray_1& operator=(EmptyArray_1&& o) noexcept = default;
  constexpr EmptyArray_1& operator=(EmptyArray_1 const& o) noexcept = default;
                


// Fields

static ::ArrayW<::System::Guid> __declspec(property(get=__get_Value, put=__set_Value))  Value;

static void __set_Value(::ArrayW<::System::Guid> value) ;

static ::ArrayW<::System::Guid> __get_Value() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2591))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2591), inst: 2952 })
// CS Name: System.EmptyArray`1
class CORDL_TYPE EmptyArray_1<::System::Collections::Generic::KeyValuePair_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyArray_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: " const&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyArray_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyArray_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyArray_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyArray_1& operator=(EmptyArray_1&& o) noexcept = default;
  constexpr EmptyArray_1& operator=(EmptyArray_1 const& o) noexcept = default;
                


// Fields

static ::ArrayW<::System::Collections::Generic::KeyValuePair_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_Value, put=__set_Value))  Value;

static void __set_Value(::ArrayW<::System::Collections::Generic::KeyValuePair_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> value) ;

static ::ArrayW<::System::Collections::Generic::KeyValuePair_2<::bs_hook::Il2CppWrapperType,::bs_hook::Il2CppWrapperType>> __get_Value() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2591))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2591), inst: 3205 })
// CS Name: System.EmptyArray`1
class CORDL_TYPE EmptyArray_1<::UnityEngine::Matrix4x4> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyArray_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: " const&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyArray_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyArray_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyArray_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyArray_1& operator=(EmptyArray_1&& o) noexcept = default;
  constexpr EmptyArray_1& operator=(EmptyArray_1 const& o) noexcept = default;
                


// Fields

static ::ArrayW<::UnityEngine::Matrix4x4> __declspec(property(get=__get_Value, put=__set_Value))  Value;

static void __set_Value(::ArrayW<::UnityEngine::Matrix4x4> value) ;

static ::ArrayW<::UnityEngine::Matrix4x4> __get_Value() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2591))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2591), inst: 3225 })
// CS Name: System.EmptyArray`1
class CORDL_TYPE EmptyArray_1<::UnityEngine::Rect> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyArray_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: " const&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyArray_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyArray_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyArray_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyArray_1& operator=(EmptyArray_1&& o) noexcept = default;
  constexpr EmptyArray_1& operator=(EmptyArray_1 const& o) noexcept = default;
                


// Fields

static ::ArrayW<::UnityEngine::Rect> __declspec(property(get=__get_Value, put=__set_Value))  Value;

static void __set_Value(::ArrayW<::UnityEngine::Rect> value) ;

static ::ArrayW<::UnityEngine::Rect> __get_Value() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2591))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2591), inst: 3480 })
// CS Name: System.EmptyArray`1
class CORDL_TYPE EmptyArray_1<::System::Reflection::CustomAttributeNamedArgument> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyArray_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: " const&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyArray_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyArray_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyArray_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyArray_1& operator=(EmptyArray_1&& o) noexcept = default;
  constexpr EmptyArray_1& operator=(EmptyArray_1 const& o) noexcept = default;
                


// Fields

static ::ArrayW<::System::Reflection::CustomAttributeNamedArgument> __declspec(property(get=__get_Value, put=__set_Value))  Value;

static void __set_Value(::ArrayW<::System::Reflection::CustomAttributeNamedArgument> value) ;

static ::ArrayW<::System::Reflection::CustomAttributeNamedArgument> __get_Value() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2591))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2591), inst: 3481 })
// CS Name: System.EmptyArray`1
class CORDL_TYPE EmptyArray_1<::System::Reflection::CustomAttributeTypedArgument> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyArray_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: " const&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyArray_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyArray_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyArray_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyArray_1& operator=(EmptyArray_1&& o) noexcept = default;
  constexpr EmptyArray_1& operator=(EmptyArray_1 const& o) noexcept = default;
                


// Fields

static ::ArrayW<::System::Reflection::CustomAttributeTypedArgument> __declspec(property(get=__get_Value, put=__set_Value))  Value;

static void __set_Value(::ArrayW<::System::Reflection::CustomAttributeTypedArgument> value) ;

static ::ArrayW<::System::Reflection::CustomAttributeTypedArgument> __get_Value() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2591))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2591), inst: 4255 })
// CS Name: System.EmptyArray`1
class CORDL_TYPE EmptyArray_1<::GlobalNamespace::____GlobalNamespace__OVRSpatialAnchor__UnboundAnchor> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyArray_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: " const&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyArray_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyArray_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyArray_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyArray_1& operator=(EmptyArray_1&& o) noexcept = default;
  constexpr EmptyArray_1& operator=(EmptyArray_1 const& o) noexcept = default;
                


// Fields

static ::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRSpatialAnchor__UnboundAnchor> __declspec(property(get=__get_Value, put=__set_Value))  Value;

static void __set_Value(::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRSpatialAnchor__UnboundAnchor> value) ;

static ::ArrayW<::GlobalNamespace::____GlobalNamespace__OVRSpatialAnchor__UnboundAnchor> __get_Value() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2591))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2591), inst: 4724 })
// CS Name: System.EmptyArray`1
class CORDL_TYPE EmptyArray_1<::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyArray_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: " const&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyArray_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyArray_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyArray_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyArray_1& operator=(EmptyArray_1&& o) noexcept = default;
  constexpr EmptyArray_1& operator=(EmptyArray_1 const& o) noexcept = default;
                


// Fields

static ::ArrayW<::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData> __declspec(property(get=__get_Value, put=__set_Value))  Value;

static void __set_Value(::ArrayW<::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData> value) ;

static ::ArrayW<::GlobalNamespace::____GlobalNamespace__AveragingValueRecorder__AverageValueData> __get_Value() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2591))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2591), inst: 4725 })
// CS Name: System.EmptyArray`1
class CORDL_TYPE EmptyArray_1<::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyArray_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: " const&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyArray_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyArray_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyArray_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyArray_1& operator=(EmptyArray_1&& o) noexcept = default;
  constexpr EmptyArray_1& operator=(EmptyArray_1 const& o) noexcept = default;
                


// Fields

static ::ArrayW<::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord> __declspec(property(get=__get_Value, put=__set_Value))  Value;

static void __set_Value(::ArrayW<::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord> value) ;

static ::ArrayW<::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__EventRecord> __get_Value() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2591))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2591), inst: 4726 })
// CS Name: System.EmptyArray`1
class CORDL_TYPE EmptyArray_1<::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyArray_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: " const&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyArray_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyArray_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyArray_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyArray_1& operator=(EmptyArray_1&& o) noexcept = default;
  constexpr EmptyArray_1& operator=(EmptyArray_1 const& o) noexcept = default;
                


// Fields

static ::ArrayW<::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData> __declspec(property(get=__get_Value, put=__set_Value))  Value;

static void __set_Value(::ArrayW<::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData> value) ;

static ::ArrayW<::GlobalNamespace::____GlobalNamespace__MultiplayerConnectedPlayerBeatmapObjectEventManager__TimestampedBeatmapObjectEventData> __get_Value() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2591))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2591), inst: 4727 })
// CS Name: System.EmptyArray`1
class CORDL_TYPE EmptyArray_1<::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyArray_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: " const&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyArray_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyArray_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyArray_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyArray_1& operator=(EmptyArray_1&& o) noexcept = default;
  constexpr EmptyArray_1& operator=(EmptyArray_1 const& o) noexcept = default;
                


// Fields

static ::ArrayW<::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData> __declspec(property(get=__get_Value, put=__set_Value))  Value;

static void __set_Value(::ArrayW<::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData> value) ;

static ::ArrayW<::LiteNetLib::____LiteNetLib__NatPunchModule__RequestEventData> __get_Value() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2591))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2591), inst: 4728 })
// CS Name: System.EmptyArray`1
class CORDL_TYPE EmptyArray_1<::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyArray_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: " const&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyArray_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyArray_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyArray_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyArray_1& operator=(EmptyArray_1&& o) noexcept = default;
  constexpr EmptyArray_1& operator=(EmptyArray_1 const& o) noexcept = default;
                


// Fields

static ::ArrayW<::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData> __declspec(property(get=__get_Value, put=__set_Value))  Value;

static void __set_Value(::ArrayW<::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData> value) ;

static ::ArrayW<::LiteNetLib::____LiteNetLib__NatPunchModule__SuccessEventData> __get_Value() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2591))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2591), inst: 4825 })
// CS Name: System.EmptyArray`1
class CORDL_TYPE EmptyArray_1<::System::Int32Enum> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyArray_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: " const&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyArray_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyArray_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyArray_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyArray_1& operator=(EmptyArray_1&& o) noexcept = default;
  constexpr EmptyArray_1& operator=(EmptyArray_1 const& o) noexcept = default;
                


// Fields

static ::ArrayW<::System::Int32Enum> __declspec(property(get=__get_Value, put=__set_Value))  Value;

static void __set_Value(::ArrayW<::System::Int32Enum> value) ;

static ::ArrayW<::System::Int32Enum> __get_Value() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2591))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2591), inst: 4859 })
// CS Name: System.EmptyArray`1
class CORDL_TYPE EmptyArray_1<::UnityEngine::UIElements::TextureId> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyArray_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: " const&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyArray_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyArray_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyArray_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyArray_1& operator=(EmptyArray_1&& o) noexcept = default;
  constexpr EmptyArray_1& operator=(EmptyArray_1 const& o) noexcept = default;
                


// Fields

static ::ArrayW<::UnityEngine::UIElements::TextureId> __declspec(property(get=__get_Value, put=__set_Value))  Value;

static void __set_Value(::ArrayW<::UnityEngine::UIElements::TextureId> value) ;

static ::ArrayW<::UnityEngine::UIElements::TextureId> __get_Value() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2591))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2591), inst: 4860 })
// CS Name: System.EmptyArray`1
class CORDL_TYPE EmptyArray_1<::UnityEngine::UIElements::StyleSheets::____UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyArray_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: " const&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyArray_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyArray_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyArray_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyArray_1& operator=(EmptyArray_1&& o) noexcept = default;
  constexpr EmptyArray_1& operator=(EmptyArray_1 const& o) noexcept = default;
                


// Fields

static ::ArrayW<::UnityEngine::UIElements::StyleSheets::____UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext> __declspec(property(get=__get_Value, put=__set_Value))  Value;

static void __set_Value(::ArrayW<::UnityEngine::UIElements::StyleSheets::____UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext> value) ;

static ::ArrayW<::UnityEngine::UIElements::StyleSheets::____UnityEngine__UIElements__StyleSheets__BaseStyleMatcher__MatchContext> __get_Value() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2591))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2591), inst: 4861 })
// CS Name: System.EmptyArray`1
class CORDL_TYPE EmptyArray_1<::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__DispatchContext> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyArray_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: " const&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyArray_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyArray_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyArray_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyArray_1& operator=(EmptyArray_1&& o) noexcept = default;
  constexpr EmptyArray_1& operator=(EmptyArray_1 const& o) noexcept = default;
                


// Fields

static ::ArrayW<::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__DispatchContext> __declspec(property(get=__get_Value, put=__set_Value))  Value;

static void __set_Value(::ArrayW<::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__DispatchContext> value) ;

static ::ArrayW<::UnityEngine::UIElements::____UnityEngine__UIElements__EventDispatcher__DispatchContext> __get_Value() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2591))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2591), inst: 4862 })
// CS Name: System.EmptyArray`1
class CORDL_TYPE EmptyArray_1<::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__ResolveContext> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyArray_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: " const&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyArray_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyArray_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyArray_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyArray_1& operator=(EmptyArray_1&& o) noexcept = default;
  constexpr EmptyArray_1& operator=(EmptyArray_1 const& o) noexcept = default;
                


// Fields

static ::ArrayW<::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__ResolveContext> __declspec(property(get=__get_Value, put=__set_Value))  Value;

static void __set_Value(::ArrayW<::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__ResolveContext> value) ;

static ::ArrayW<::UnityEngine::UIElements::____UnityEngine__UIElements__StyleVariableResolver__ResolveContext> __get_Value() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2591))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2591), inst: 5866 })
// CS Name: System.EmptyArray`1
class CORDL_TYPE EmptyArray_1<::System::Xml::Schema::____System__Xml__Schema__SequenceNode__SequenceConstructPosContext> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyArray_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: " const&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyArray_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyArray_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyArray_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyArray_1& operator=(EmptyArray_1&& o) noexcept = default;
  constexpr EmptyArray_1& operator=(EmptyArray_1 const& o) noexcept = default;
                


// Fields

static ::ArrayW<::System::Xml::Schema::____System__Xml__Schema__SequenceNode__SequenceConstructPosContext> __declspec(property(get=__get_Value, put=__set_Value))  Value;

static void __set_Value(::ArrayW<::System::Xml::Schema::____System__Xml__Schema__SequenceNode__SequenceConstructPosContext> value) ;

static ::ArrayW<::System::Xml::Schema::____System__Xml__Schema__SequenceNode__SequenceConstructPosContext> __get_Value() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2591))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2591), inst: 5957 })
// CS Name: System.EmptyArray`1
class CORDL_TYPE EmptyArray_1<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyArray_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: " const&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyArray_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyArray_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyArray_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyArray_1& operator=(EmptyArray_1&& o) noexcept = default;
  constexpr EmptyArray_1& operator=(EmptyArray_1 const& o) noexcept = default;
                


// Fields

static ::ArrayW<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> __declspec(property(get=__get_Value, put=__set_Value))  Value;

static void __set_Value(::ArrayW<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> value) ;

static ::ArrayW<::System::ValueTuple_2<::bs_hook::Il2CppWrapperType,int64_t>> __get_Value() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
// Type: System::EmptyArray`1
namespace System {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2591))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2591), inst: 6718 })
// CS Name: System.EmptyArray`1
class CORDL_TYPE EmptyArray_1<::System::Reflection::ParameterModifier> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EmptyArray_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: " const&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyArray_1", modifiers: "&&", def_value: None }]
constexpr EmptyArray_1(EmptyArray_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyArray_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EmptyArray_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyArray_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyArray_1& operator=(EmptyArray_1&& o) noexcept = default;
  constexpr EmptyArray_1& operator=(EmptyArray_1 const& o) noexcept = default;
                


// Fields

static ::ArrayW<::System::Reflection::ParameterModifier> __declspec(property(get=__get_Value, put=__set_Value))  Value;

static void __set_Value(::ArrayW<::System::Reflection::ParameterModifier> value) ;

static ::ArrayW<::System::Reflection::ParameterModifier> __get_Value() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::EmptyArray_1, "System", "EmptyArray`1");
