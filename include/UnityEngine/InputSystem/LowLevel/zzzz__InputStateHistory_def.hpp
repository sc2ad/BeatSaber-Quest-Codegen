#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct UnityEngine__InputSystem__LowLevel__InputStateHistory__Enumerator;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputUpdateType;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T1,typename T2,typename T3,typename TResult>
class Func_4;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace UnityEngine::InputSystem::LowLevel {
class IInputStateChangeMonitor;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct UnityEngine__InputSystem__LowLevel__InputStateHistory__Record;
}
namespace System::Collections {
class IEnumerable;
}
namespace UnityEngine::InputSystem::LowLevel {
struct UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader;
}
namespace UnityEngine::InputSystem::LowLevel {
struct InputEventPtr;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace GlobalNamespace {
struct UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer;
}
namespace GlobalNamespace {
struct UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
class InputStateHistory;
}
namespace GlobalNamespace {
struct UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer;
}
namespace GlobalNamespace {
struct UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer;
}
namespace UnityEngine::InputSystem::LowLevel {
struct UnityEngine__InputSystem__LowLevel__InputStateHistory__Enumerator;
}
namespace UnityEngine::InputSystem::LowLevel {
struct UnityEngine__InputSystem__LowLevel__InputStateHistory__Record;
}
namespace UnityEngine::InputSystem::LowLevel {
struct UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader;
}
// Type: ::Enumerator
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6652))
// CS Name: UnityEngine.InputSystem.LowLevel.InputStateHistory::Enumerator
struct CORDL_TYPE UnityEngine__InputSystem__LowLevel__InputStateHistory__Enumerator : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory__Record>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory__Record>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_History", ty: "UnityEngine::InputSystem::LowLevel::InputStateHistory", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__LowLevel__InputStateHistory__Enumerator(UnityEngine::InputSystem::LowLevel::InputStateHistory m_History, int32_t m_Index) noexcept;


                    constexpr UnityEngine__InputSystem__LowLevel__InputStateHistory__Enumerator(UnityEngine__InputSystem__LowLevel__InputStateHistory__Enumerator const&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__InputStateHistory__Enumerator(UnityEngine__InputSystem__LowLevel__InputStateHistory__Enumerator&&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__InputStateHistory__Enumerator& operator=(UnityEngine__InputSystem__LowLevel__InputStateHistory__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__LowLevel__InputStateHistory__Enumerator& operator=(UnityEngine__InputSystem__LowLevel__InputStateHistory__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__LowLevel__InputStateHistory__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::InputSystem::LowLevel::InputStateHistory __declspec(property(get=__get_m_History, put=__set_m_History))  m_History;

constexpr void __set_m_History(UnityEngine::InputSystem::LowLevel::InputStateHistory value) ;

constexpr UnityEngine::InputSystem::LowLevel::InputStateHistory __get_m_History() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory__Record __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x2965400 size 0x10 virtual false final false
 void _ctor(UnityEngine::InputSystem::LowLevel::InputStateHistory history) ;

/// @brief Method MoveNext addr 0x29659b4 size 0x3c virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x29659f0 size 0xc virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x29659fc size 0x20 virtual true final true
 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory__Record get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x2965a1c size 0x64 virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x2965a80 size 0x4 virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: ::<m_StateWithoutControlIndex>e__FixedBuffer
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6653))
// CS Name: UnityEngine.InputSystem.LowLevel.InputStateHistory::RecordHeader::<m_StateWithoutControlIndex>e__FixedBuffer
struct CORDL_TYPE UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer(uint8_t FixedElementField) noexcept;


                    constexpr UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer(UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer const&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer(UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer&&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer& operator=(UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer& operator=(UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint8_t __declspec(property(get=__get_FixedElementField, put=__set_FixedElementField))  FixedElementField;

constexpr void __set_FixedElementField(uint8_t value) ;

constexpr uint8_t __get_FixedElementField() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<m_StateWithControlIndex>e__FixedBuffer
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6654))
// CS Name: UnityEngine.InputSystem.LowLevel.InputStateHistory::RecordHeader::<m_StateWithControlIndex>e__FixedBuffer
struct CORDL_TYPE UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer(uint8_t FixedElementField) noexcept;


                    constexpr UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer(UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer const&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer(UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer&&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer& operator=(UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer& operator=(UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 uint8_t __declspec(property(get=__get_FixedElementField, put=__set_FixedElementField))  FixedElementField;

constexpr void __set_FixedElementField(uint8_t value) ;

constexpr uint8_t __get_FixedElementField() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::RecordHeader
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6655))
// CS Name: UnityEngine.InputSystem.LowLevel.InputStateHistory::RecordHeader
struct CORDL_TYPE UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _m_StateWithControlIndex_e__FixedBuffer = GlobalNamespace::UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer;

using _m_StateWithoutControlIndex_e__FixedBuffer = GlobalNamespace::UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer;

// Ctor Parameters [CppParam { name: "time", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "version", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "controlIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_StateWithoutControlIndex", ty: "GlobalNamespace::UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer", modifiers: "", def_value: None }, CppParam { name: "m_StateWithControlIndex", ty: "GlobalNamespace::UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader(double_t time, uint32_t version, int32_t controlIndex, GlobalNamespace::UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer m_StateWithoutControlIndex, GlobalNamespace::UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer m_StateWithControlIndex) noexcept;


                    constexpr UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader(UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader const&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader(UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader&&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader& operator=(UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader& operator=(UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 double_t __declspec(property(get=__get_time, put=__set_time))  time;

constexpr void __set_time(double_t value) ;

constexpr double_t __get_time() const;

 uint32_t __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(uint32_t value) ;

constexpr uint32_t __get_version() const;

 int32_t __declspec(property(get=__get_controlIndex, put=__set_controlIndex))  controlIndex;

constexpr void __set_controlIndex(int32_t value) ;

constexpr int32_t __get_controlIndex() const;

 GlobalNamespace::UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer __declspec(property(get=__get_m_StateWithoutControlIndex, put=__set_m_StateWithoutControlIndex))  m_StateWithoutControlIndex;

constexpr void __set_m_StateWithoutControlIndex(GlobalNamespace::UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer value) ;

constexpr GlobalNamespace::UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer __get_m_StateWithoutControlIndex() const;

 GlobalNamespace::UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer __declspec(property(get=__get_m_StateWithControlIndex, put=__set_m_StateWithControlIndex))  m_StateWithControlIndex;

constexpr void __set_m_StateWithControlIndex(GlobalNamespace::UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer value) ;

constexpr GlobalNamespace::UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer __get_m_StateWithControlIndex() const;

/// @brief Field kSizeWithControlIndex offset 0
static constexpr int32_t  kSizeWithControlIndex{16};

/// @brief Field kSizeWithoutControlIndex offset 0
static constexpr int32_t  kSizeWithoutControlIndex{12};


// Properties

 void* __declspec(property(get=get_statePtrWithControlIndex))  statePtrWithControlIndex;

 void* __declspec(property(get=get_statePtrWithoutControlIndex))  statePtrWithoutControlIndex;


// Methods

/// @brief Method get_statePtrWithControlIndex addr 0x2965398 size 0x8 virtual false final false
 void* get_statePtrWithControlIndex() ;

/// @brief Method get_statePtrWithoutControlIndex addr 0x2965390 size 0x8 virtual false final false
 void* get_statePtrWithoutControlIndex() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: ::Record
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6656))
// CS Name: UnityEngine.InputSystem.LowLevel.InputStateHistory::Record
struct CORDL_TYPE UnityEngine__InputSystem__LowLevel__InputStateHistory__Record : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory__Record>
constexpr operator  System::IEquatable_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory__Record>() const;

// Ctor Parameters [CppParam { name: "m_Owner", ty: "UnityEngine::InputSystem::LowLevel::InputStateHistory", modifiers: "", def_value: None }, CppParam { name: "m_IndexPlusOne", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__LowLevel__InputStateHistory__Record(UnityEngine::InputSystem::LowLevel::InputStateHistory m_Owner, int32_t m_IndexPlusOne, uint32_t m_Version) noexcept;


                    constexpr UnityEngine__InputSystem__LowLevel__InputStateHistory__Record(UnityEngine__InputSystem__LowLevel__InputStateHistory__Record const&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__InputStateHistory__Record(UnityEngine__InputSystem__LowLevel__InputStateHistory__Record&&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__InputStateHistory__Record& operator=(UnityEngine__InputSystem__LowLevel__InputStateHistory__Record const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__LowLevel__InputStateHistory__Record& operator=(UnityEngine__InputSystem__LowLevel__InputStateHistory__Record&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__LowLevel__InputStateHistory__Record(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::InputSystem::LowLevel::InputStateHistory __declspec(property(get=__get_m_Owner, put=__set_m_Owner))  m_Owner;

constexpr void __set_m_Owner(UnityEngine::InputSystem::LowLevel::InputStateHistory value) ;

constexpr UnityEngine::InputSystem::LowLevel::InputStateHistory __get_m_Owner() const;

 int32_t __declspec(property(get=__get_m_IndexPlusOne, put=__set_m_IndexPlusOne))  m_IndexPlusOne;

constexpr void __set_m_IndexPlusOne(int32_t value) ;

constexpr int32_t __get_m_IndexPlusOne() const;

 uint32_t __declspec(property(get=__get_m_Version, put=__set_m_Version))  m_Version;

constexpr void __set_m_Version(uint32_t value) ;

constexpr uint32_t __get_m_Version() const;


// Properties

 void* __declspec(property(get=get_header))  header;

 int32_t __declspec(property(get=get_recordIndex))  recordIndex;

 uint32_t __declspec(property(get=get_version))  version;

 bool __declspec(property(get=get_valid))  valid;

 UnityEngine::InputSystem::LowLevel::InputStateHistory __declspec(property(get=get_owner))  owner;

 int32_t __declspec(property(get=get_index))  index;

 double_t __declspec(property(get=get_time))  time;

 UnityEngine::InputSystem::InputControl __declspec(property(get=get_control))  control;

 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory__Record __declspec(property(get=get_next))  next;

 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory__Record __declspec(property(get=get_previous))  previous;


// Methods

/// @brief Method get_header addr 0x2965a84 size 0x24 virtual false final false
 void* get_header() ;

/// @brief Method get_recordIndex addr 0x2965aa8 size 0xc virtual false final false
 int32_t get_recordIndex() ;

/// @brief Method get_version addr 0x2965ab4 size 0x8 virtual false final false
 uint32_t get_version() ;

/// @brief Method get_valid addr 0x2965abc size 0x48 virtual false final false
 bool get_valid() ;

/// @brief Method get_owner addr 0x2965b04 size 0x8 virtual false final false
 UnityEngine::InputSystem::LowLevel::InputStateHistory get_owner() ;

/// @brief Method get_index addr 0x2965b0c size 0x3c virtual false final false
 int32_t get_index() ;

/// @brief Method get_time addr 0x2965bf8 size 0x28 virtual false final false
 double_t get_time() ;

/// @brief Method get_control addr 0x2965c20 size 0xb4 virtual false final false
 UnityEngine::InputSystem::InputControl get_control() ;

/// @brief Method get_next addr 0x2965cd4 size 0x90 virtual false final false
 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory__Record get_next() ;

/// @brief Method get_previous addr 0x2965d64 size 0x88 virtual false final false
 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory__Record get_previous() ;

/// @brief Method .ctor addr 0x2964194 size 0x28 virtual false final false
 void _ctor(UnityEngine::InputSystem::LowLevel::InputStateHistory owner, int32_t index, void* header) ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
 TValue ReadValue() ;

/// @brief Method ReadValueAsObject addr 0x2965dec size 0x38 virtual false final false
 ::bs_hook::Il2CppWrapperType ReadValueAsObject() ;

/// @brief Method GetUnsafeMemoryPtr addr 0x2965e24 size 0x18 virtual false final false
 void* GetUnsafeMemoryPtr() ;

/// @brief Method GetUnsafeMemoryPtrUnchecked addr 0x2965e3c size 0x80 virtual false final false
 void* GetUnsafeMemoryPtrUnchecked() ;

/// @brief Method GetUnsafeExtraMemoryPtr addr 0x2965ebc size 0x18 virtual false final false
 void* GetUnsafeExtraMemoryPtr() ;

/// @brief Method GetUnsafeExtraMemoryPtrUnchecked addr 0x2965ed4 size 0xd0 virtual false final false
 void* GetUnsafeExtraMemoryPtrUnchecked() ;

/// @brief Method CopyFrom addr 0x29642f4 size 0x380 virtual false final false
 void CopyFrom(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory__Record record) ;

/// @brief Method CheckValid addr 0x2965b48 size 0xb0 virtual false final false
 void CheckValid() ;

/// @brief Method Equals addr 0x2965fa4 size 0x34 virtual true final true
 bool Equals(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory__Record other) ;

/// @brief Method Equals addr 0x2965fd8 size 0x98 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x2966070 size 0x48 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x29660b8 size 0xd8 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::InputStateHistory
namespace UnityEngine::InputSystem::LowLevel {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6657))
// CS Name: UnityEngine.InputSystem.LowLevel.InputStateHistory
class CORDL_TYPE InputStateHistory : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Record = UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory__Record;

using RecordHeader = UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader;

using Enumerator = UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory__Enumerator;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory__Record>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory__Record>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor
constexpr operator  UnityEngine::InputSystem::LowLevel::IInputStateChangeMonitor() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~InputStateHistory() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputStateHistory", modifiers: " const&", def_value: None }]
constexpr InputStateHistory(InputStateHistory const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputStateHistory", modifiers: "&&", def_value: None }]
constexpr InputStateHistory(InputStateHistory&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputStateHistory(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InputStateHistory& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputStateHistory& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputStateHistory& operator=(InputStateHistory&& o) noexcept = default;
  constexpr InputStateHistory& operator=(InputStateHistory const& o) noexcept = default;
                


// Fields

/// @brief Field kDefaultHistorySize offset 0
static constexpr int32_t  kDefaultHistorySize{128};

 System::Action_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory__Record> __declspec(property(get=__get__onRecordAdded_k__BackingField, put=__set__onRecordAdded_k__BackingField))  _onRecordAdded_k__BackingField;

constexpr void __set__onRecordAdded_k__BackingField(System::Action_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory__Record> value) ;

constexpr System::Action_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory__Record> __get__onRecordAdded_k__BackingField() const;

 System::Func_4<UnityEngine::InputSystem::InputControl,double_t,UnityEngine::InputSystem::LowLevel::InputEventPtr,bool> __declspec(property(get=__get__onShouldRecordStateChange_k__BackingField, put=__set__onShouldRecordStateChange_k__BackingField))  _onShouldRecordStateChange_k__BackingField;

constexpr void __set__onShouldRecordStateChange_k__BackingField(System::Func_4<UnityEngine::InputSystem::InputControl,double_t,UnityEngine::InputSystem::LowLevel::InputEventPtr,bool> value) ;

constexpr System::Func_4<UnityEngine::InputSystem::InputControl,double_t,UnityEngine::InputSystem::LowLevel::InputEventPtr,bool> __get__onShouldRecordStateChange_k__BackingField() const;

 ::ArrayW<UnityEngine::InputSystem::InputControl> __declspec(property(get=__get_m_Controls, put=__set_m_Controls))  m_Controls;

constexpr void __set_m_Controls(::ArrayW<UnityEngine::InputSystem::InputControl> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::InputControl> __get_m_Controls() const;

 int32_t __declspec(property(get=__get_m_ControlCount, put=__set_m_ControlCount))  m_ControlCount;

constexpr void __set_m_ControlCount(int32_t value) ;

constexpr int32_t __get_m_ControlCount() const;

 Unity::Collections::NativeArray_1<uint8_t> __declspec(property(get=__get_m_RecordBuffer, put=__set_m_RecordBuffer))  m_RecordBuffer;

constexpr void __set_m_RecordBuffer(Unity::Collections::NativeArray_1<uint8_t> value) ;

constexpr Unity::Collections::NativeArray_1<uint8_t> __get_m_RecordBuffer() const;

 int32_t __declspec(property(get=__get_m_StateSizeInBytes, put=__set_m_StateSizeInBytes))  m_StateSizeInBytes;

constexpr void __set_m_StateSizeInBytes(int32_t value) ;

constexpr int32_t __get_m_StateSizeInBytes() const;

 int32_t __declspec(property(get=__get_m_RecordCount, put=__set_m_RecordCount))  m_RecordCount;

constexpr void __set_m_RecordCount(int32_t value) ;

constexpr int32_t __get_m_RecordCount() const;

 int32_t __declspec(property(get=__get_m_HistoryDepth, put=__set_m_HistoryDepth))  m_HistoryDepth;

constexpr void __set_m_HistoryDepth(int32_t value) ;

constexpr int32_t __get_m_HistoryDepth() const;

 int32_t __declspec(property(get=__get_m_ExtraMemoryPerRecord, put=__set_m_ExtraMemoryPerRecord))  m_ExtraMemoryPerRecord;

constexpr void __set_m_ExtraMemoryPerRecord(int32_t value) ;

constexpr int32_t __get_m_ExtraMemoryPerRecord() const;

 int32_t __declspec(property(get=__get_m_HeadIndex, put=__set_m_HeadIndex))  m_HeadIndex;

constexpr void __set_m_HeadIndex(int32_t value) ;

constexpr int32_t __get_m_HeadIndex() const;

 uint32_t __declspec(property(get=__get_m_CurrentVersion, put=__set_m_CurrentVersion))  m_CurrentVersion;

constexpr void __set_m_CurrentVersion(uint32_t value) ;

constexpr uint32_t __get_m_CurrentVersion() const;

 System::Nullable_1<UnityEngine::InputSystem::LowLevel::InputUpdateType> __declspec(property(get=__get_m_UpdateMask, put=__set_m_UpdateMask))  m_UpdateMask;

constexpr void __set_m_UpdateMask(System::Nullable_1<UnityEngine::InputSystem::LowLevel::InputUpdateType> value) ;

constexpr System::Nullable_1<UnityEngine::InputSystem::LowLevel::InputUpdateType> __get_m_UpdateMask() const;

 bool __declspec(property(get=__get_m_AddNewControls, put=__set_m_AddNewControls))  m_AddNewControls;

constexpr void __set_m_AddNewControls(bool value) ;

constexpr bool __get_m_AddNewControls() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 uint32_t __declspec(property(get=get_version))  version;

 int32_t __declspec(property(get=get_historyDepth, put=set_historyDepth))  historyDepth;

 int32_t __declspec(property(get=get_extraMemoryPerRecord, put=set_extraMemoryPerRecord))  extraMemoryPerRecord;

 UnityEngine::InputSystem::LowLevel::InputUpdateType __declspec(property(get=get_updateMask, put=set_updateMask))  updateMask;

 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputControl> __declspec(property(get=get_controls))  controls;

 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory__Record __declspec(property(get=get_Item, put=set_Item))  Item;

 System::Action_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory__Record> __declspec(property(get=get_onRecordAdded, put=set_onRecordAdded))  onRecordAdded;

 System::Func_4<UnityEngine::InputSystem::InputControl,double_t,UnityEngine::InputSystem::LowLevel::InputEventPtr,bool> __declspec(property(get=get_onShouldRecordStateChange, put=set_onShouldRecordStateChange))  onShouldRecordStateChange;

 int32_t __declspec(property(get=get_bytesPerRecord))  bytesPerRecord;


// Methods

/// @brief Method get_Count addr 0x2963bc0 size 0x8 virtual true final true
 int32_t get_Count() ;

/// @brief Method get_version addr 0x2963bc8 size 0x8 virtual false final false
 uint32_t get_version() ;

/// @brief Method get_historyDepth addr 0x2963bd0 size 0x8 virtual false final false
 int32_t get_historyDepth() ;

/// @brief Method set_historyDepth addr 0x2963bd8 size 0xe4 virtual false final false
 void set_historyDepth(int32_t value) ;

/// @brief Method get_extraMemoryPerRecord addr 0x2963cbc size 0x8 virtual false final false
 int32_t get_extraMemoryPerRecord() ;

/// @brief Method set_extraMemoryPerRecord addr 0x2963cc4 size 0xe4 virtual false final false
 void set_extraMemoryPerRecord(int32_t value) ;

/// @brief Method get_updateMask addr 0x2963da8 size 0x94 virtual false final false
 UnityEngine::InputSystem::LowLevel::InputUpdateType get_updateMask() ;

/// @brief Method set_updateMask addr 0x2963e3c size 0xcc virtual false final false
 void set_updateMask(UnityEngine::InputSystem::LowLevel::InputUpdateType value) ;

/// @brief Method get_controls addr 0x2963f08 size 0x68 virtual false final false
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::InputControl> get_controls() ;

/// @brief Method get_Item addr 0x2963f70 size 0x114 virtual false final false
 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory__Record get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x29641bc size 0x138 virtual false final false
 void set_Item(int32_t index, UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory__Record value) ;

/// @brief Method get_onRecordAdded addr 0x2964674 size 0x8 virtual false final false
 System::Action_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory__Record> get_onRecordAdded() ;

/// @brief Method set_onRecordAdded addr 0x296467c size 0x8 virtual false final false
 void set_onRecordAdded(System::Action_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory__Record> value) ;

/// @brief Method get_onShouldRecordStateChange addr 0x2964684 size 0x8 virtual false final false
 System::Func_4<UnityEngine::InputSystem::InputControl,double_t,UnityEngine::InputSystem::LowLevel::InputEventPtr,bool> get_onShouldRecordStateChange() ;

/// @brief Method set_onShouldRecordStateChange addr 0x296468c size 0x8 virtual false final false
 void set_onShouldRecordStateChange(System::Func_4<UnityEngine::InputSystem::InputControl,double_t,UnityEngine::InputSystem::LowLevel::InputEventPtr,bool> value) ;

static UnityEngine::InputSystem::LowLevel::InputStateHistory New_ctor(int32_t maxStateSizeInBytes) ;

/// @brief Method .ctor addr 0x2964694 size 0xb4 virtual false final false
 void _ctor(int32_t maxStateSizeInBytes) ;

static UnityEngine::InputSystem::LowLevel::InputStateHistory New_ctor(::StringW path) ;

/// @brief Method .ctor addr 0x2964748 size 0x158 virtual false final false
 void _ctor(::StringW path) ;

static UnityEngine::InputSystem::LowLevel::InputStateHistory New_ctor(UnityEngine::InputSystem::InputControl control) ;

/// @brief Method .ctor addr 0x29648a0 size 0xfc virtual false final false
 void _ctor(UnityEngine::InputSystem::InputControl control) ;

static UnityEngine::InputSystem::LowLevel::InputStateHistory New_ctor(System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::InputControl> controls) ;

/// @brief Method .ctor addr 0x296499c size 0x7c virtual false final false
 void _ctor(System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::InputControl> controls) ;

/// @brief Method Finalize addr 0x2964a18 size 0x94 virtual true final false
 void Finalize() ;

/// @brief Method Clear addr 0x2964b14 size 0x14 virtual false final false
 void Clear() ;

/// @brief Method AddRecord addr 0x2964b28 size 0x6c virtual false final false
 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory__Record AddRecord(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory__Record record) ;

/// @brief Method StartRecording addr 0x2964cb4 size 0x15c virtual false final false
 void StartRecording() ;

/// @brief Method StopRecording addr 0x2964e10 size 0x158 virtual false final false
 void StopRecording() ;

/// @brief Method RecordStateChange addr 0x2964f68 size 0x198 virtual false final false
 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory__Record RecordStateChange(UnityEngine::InputSystem::InputControl control, UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) ;

/// @brief Method RecordStateChange addr 0x2965100 size 0x290 virtual false final false
 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory__Record RecordStateChange(UnityEngine::InputSystem::InputControl control, void* statePtr, double_t time) ;

/// @brief Method GetEnumerator addr 0x29653a0 size 0x60 virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory__Record> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2965410 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Dispose addr 0x2964aac size 0x68 virtual true final true
 void Dispose() ;

/// @brief Method Destroy addr 0x2965414 size 0x78 virtual false final false
 void Destroy() ;

/// @brief Method Allocate addr 0x296548c size 0x254 virtual false final false
 void Allocate() ;

/// @brief Method RecordIndexToUserIndex addr 0x2965730 size 0x24 virtual false final false
 int32_t RecordIndexToUserIndex(int32_t index) ;

/// @brief Method UserIndexToRecordIndex addr 0x2964084 size 0x18 virtual false final false
 int32_t UserIndexToRecordIndex(int32_t index) ;

/// @brief Method GetRecord addr 0x296409c size 0xf8 virtual false final false
 void* GetRecord(int32_t index) ;

/// @brief Method GetRecordUnchecked addr 0x2965754 size 0xac virtual false final false
 void* GetRecordUnchecked(int32_t index) ;

/// @brief Method AllocateRecord addr 0x2964b94 size 0x120 virtual false final false
 void* AllocateRecord(ByRef<int32_t> index) ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
 TValue ReadValue(void* data) ;

/// @brief Method ReadValueAsObject addr 0x2965800 size 0xd8 virtual false final false
 ::bs_hook::Il2CppWrapperType ReadValueAsObject(void* data) ;

/// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyControlStateChanged addr 0x29658d8 size 0xd8 virtual true final true
 void UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyControlStateChanged(UnityEngine::InputSystem::InputControl control, double_t time, UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr, int64_t monitorIndex) ;

/// @brief Method UnityEngine.InputSystem.LowLevel.IInputStateChangeMonitor.NotifyTimerExpired addr 0x29659b0 size 0x4 virtual true final true
 void UnityEngine_InputSystem_LowLevel_IInputStateChangeMonitor_NotifyTimerExpired(UnityEngine::InputSystem::InputControl control, double_t time, int64_t monitorIndex, int32_t timerIndex) ;

/// @brief Method get_bytesPerRecord addr 0x29656e0 size 0x50 virtual false final false
 int32_t get_bytesPerRecord() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
NEED_NO_BOX(UnityEngine::InputSystem::LowLevel::InputStateHistory);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::InputStateHistory, "UnityEngine.InputSystem.LowLevel", "InputStateHistory");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithControlIndex_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "InputStateHistory/RecordHeader/<m_StateWithControlIndex>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader___m_StateWithoutControlIndex_e__FixedBuffer, "UnityEngine.InputSystem.LowLevel", "InputStateHistory/RecordHeader/<m_StateWithoutControlIndex>e__FixedBuffer");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory__Enumerator, "UnityEngine.InputSystem.LowLevel", "InputStateHistory/Enumerator");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory__Record, "UnityEngine.InputSystem.LowLevel", "InputStateHistory/Record");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory__RecordHeader, "UnityEngine.InputSystem.LowLevel", "InputStateHistory/RecordHeader");
