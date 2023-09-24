#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputStateHistory_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace UnityEngine::InputSystem::LowLevel {
struct TouchState;
}
namespace System::Collections {
class IEnumerable;
}
namespace UnityEngine::InputSystem::LowLevel {
template<typename TValue>
struct UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record;
}
namespace UnityEngine::InputSystem::LowLevel {
template<typename TValue>
struct UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Enumerator;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace UnityEngine::InputSystem {
template<typename TValue>
class InputControl_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::LowLevel {
template<typename TValue>
class InputStateHistory_1;
}
namespace UnityEngine::InputSystem::LowLevel {
template<>
class InputStateHistory_1<UnityEngine::InputSystem::LowLevel::TouchState>;
}
namespace UnityEngine::InputSystem::LowLevel {
template<typename TValue>
struct UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Enumerator;
}
namespace UnityEngine::InputSystem::LowLevel {
template<typename TValue>
struct UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record;
}
namespace UnityEngine::InputSystem::LowLevel {
template<>
struct UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Enumerator<UnityEngine::InputSystem::LowLevel::TouchState>;
}
namespace UnityEngine::InputSystem::LowLevel {
template<>
struct UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record<UnityEngine::InputSystem::LowLevel::TouchState>;
}
// Type: ::Enumerator
// Type: ::Record
// Type: UnityEngine.InputSystem.LowLevel::InputStateHistory`1
// Type: ::Enumerator
namespace UnityEngine::InputSystem::LowLevel {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(6658))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6658), inst: 3759 })
// CS Name: UnityEngine.InputSystem.LowLevel.InputStateHistory`1::Enumerator
struct CORDL_TYPE UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Enumerator<UnityEngine::InputSystem::LowLevel::TouchState> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record<UnityEngine::InputSystem::LowLevel::TouchState>>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record<UnityEngine::InputSystem::LowLevel::TouchState>>() const;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_History", ty: "UnityEngine::InputSystem::LowLevel::InputStateHistory_1<UnityEngine::InputSystem::LowLevel::TouchState>", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Enumerator(UnityEngine::InputSystem::LowLevel::InputStateHistory_1<UnityEngine::InputSystem::LowLevel::TouchState> m_History, int32_t m_Index) noexcept;


                    constexpr UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Enumerator(UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Enumerator const&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Enumerator(UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Enumerator&&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Enumerator& operator=(UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Enumerator const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Enumerator& operator=(UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Enumerator&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Enumerator(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::InputSystem::LowLevel::InputStateHistory_1<UnityEngine::InputSystem::LowLevel::TouchState> __declspec(property(get=__get_m_History, put=__set_m_History))  m_History;

constexpr void __set_m_History(UnityEngine::InputSystem::LowLevel::InputStateHistory_1<UnityEngine::InputSystem::LowLevel::TouchState> value) ;

constexpr UnityEngine::InputSystem::LowLevel::InputStateHistory_1<UnityEngine::InputSystem::LowLevel::TouchState> __get_m_History() const;

 int32_t __declspec(property(get=__get_m_Index, put=__set_m_Index))  m_Index;

constexpr void __set_m_Index(int32_t value) ;

constexpr int32_t __get_m_Index() const;


// Properties

 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record<UnityEngine::InputSystem::LowLevel::TouchState> __declspec(property(get=get_Current))  Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::InputSystem::LowLevel::InputStateHistory_1<UnityEngine::InputSystem::LowLevel::TouchState> history) ;

/// @brief Method MoveNext addr 0x0 size 0xffffffffffffffff virtual true final true
 bool MoveNext() ;

/// @brief Method Reset addr 0x0 size 0xffffffffffffffff virtual true final true
 void Reset() ;

/// @brief Method get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record<UnityEngine::InputSystem::LowLevel::TouchState> get_Current() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x0 size 0xffffffffffffffff virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: ::Record
namespace UnityEngine::InputSystem::LowLevel {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6659)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6659), inst: 3759 })
// CS Name: UnityEngine.InputSystem.LowLevel.InputStateHistory`1::Record
struct CORDL_TYPE UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record<UnityEngine::InputSystem::LowLevel::TouchState> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IEquatable_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record<UnityEngine::InputSystem::LowLevel::TouchState>>
constexpr operator  System::IEquatable_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record<UnityEngine::InputSystem::LowLevel::TouchState>>() const;

// Ctor Parameters [CppParam { name: "m_Owner", ty: "UnityEngine::InputSystem::LowLevel::InputStateHistory_1<UnityEngine::InputSystem::LowLevel::TouchState>", modifiers: "", def_value: None }, CppParam { name: "m_IndexPlusOne", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record(UnityEngine::InputSystem::LowLevel::InputStateHistory_1<UnityEngine::InputSystem::LowLevel::TouchState> m_Owner, int32_t m_IndexPlusOne, uint32_t m_Version) noexcept;


                    constexpr UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record(UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record const&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record(UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record&&) = default;
                    constexpr UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record& operator=(UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record& operator=(UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::InputSystem::LowLevel::InputStateHistory_1<UnityEngine::InputSystem::LowLevel::TouchState> __declspec(property(get=__get_m_Owner, put=__set_m_Owner))  m_Owner;

constexpr void __set_m_Owner(UnityEngine::InputSystem::LowLevel::InputStateHistory_1<UnityEngine::InputSystem::LowLevel::TouchState> value) ;

constexpr UnityEngine::InputSystem::LowLevel::InputStateHistory_1<UnityEngine::InputSystem::LowLevel::TouchState> __get_m_Owner() const;

 int32_t __declspec(property(get=__get_m_IndexPlusOne, put=__set_m_IndexPlusOne))  m_IndexPlusOne;

constexpr void __set_m_IndexPlusOne(int32_t value) ;

constexpr int32_t __get_m_IndexPlusOne() const;

 uint32_t __declspec(property(get=__get_m_Version, put=__set_m_Version))  m_Version;

constexpr void __set_m_Version(uint32_t value) ;

constexpr uint32_t __get_m_Version() const;


// Properties

 void* __declspec(property(get=get_header))  header;

 int32_t __declspec(property(get=get_recordIndex))  recordIndex;

 bool __declspec(property(get=get_valid))  valid;

 UnityEngine::InputSystem::LowLevel::InputStateHistory_1<UnityEngine::InputSystem::LowLevel::TouchState> __declspec(property(get=get_owner))  owner;

 int32_t __declspec(property(get=get_index))  index;

 double_t __declspec(property(get=get_time))  time;

 UnityEngine::InputSystem::InputControl_1<UnityEngine::InputSystem::LowLevel::TouchState> __declspec(property(get=get_control))  control;

 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record<UnityEngine::InputSystem::LowLevel::TouchState> __declspec(property(get=get_next))  next;

 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record<UnityEngine::InputSystem::LowLevel::TouchState> __declspec(property(get=get_previous))  previous;


// Methods

/// @brief Method get_header addr 0x0 size 0xffffffffffffffff virtual false final false
 void* get_header() ;

/// @brief Method get_recordIndex addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_recordIndex() ;

/// @brief Method get_valid addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_valid() ;

/// @brief Method get_owner addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::LowLevel::InputStateHistory_1<UnityEngine::InputSystem::LowLevel::TouchState> get_owner() ;

/// @brief Method get_index addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t get_index() ;

/// @brief Method get_time addr 0x0 size 0xffffffffffffffff virtual false final false
 double_t get_time() ;

/// @brief Method get_control addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::InputControl_1<UnityEngine::InputSystem::LowLevel::TouchState> get_control() ;

/// @brief Method get_next addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record<UnityEngine::InputSystem::LowLevel::TouchState> get_next() ;

/// @brief Method get_previous addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record<UnityEngine::InputSystem::LowLevel::TouchState> get_previous() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::InputSystem::LowLevel::InputStateHistory_1<UnityEngine::InputSystem::LowLevel::TouchState> owner, int32_t index, void* header) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::InputSystem::LowLevel::InputStateHistory_1<UnityEngine::InputSystem::LowLevel::TouchState> owner, int32_t index) ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::LowLevel::TouchState ReadValue() ;

/// @brief Method GetUnsafeMemoryPtr addr 0x0 size 0xffffffffffffffff virtual false final false
 void* GetUnsafeMemoryPtr() ;

/// @brief Method GetUnsafeMemoryPtrUnchecked addr 0x0 size 0xffffffffffffffff virtual false final false
 void* GetUnsafeMemoryPtrUnchecked() ;

/// @brief Method GetUnsafeExtraMemoryPtr addr 0x0 size 0xffffffffffffffff virtual false final false
 void* GetUnsafeExtraMemoryPtr() ;

/// @brief Method GetUnsafeExtraMemoryPtrUnchecked addr 0x0 size 0xffffffffffffffff virtual false final false
 void* GetUnsafeExtraMemoryPtrUnchecked() ;

/// @brief Method CopyFrom addr 0x0 size 0xffffffffffffffff virtual false final false
 void CopyFrom(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record<UnityEngine::InputSystem::LowLevel::TouchState> record) ;

/// @brief Method CheckValid addr 0x0 size 0xffffffffffffffff virtual false final false
 void CheckValid() ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Equals(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record<UnityEngine::InputSystem::LowLevel::TouchState> other) ;

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t GetHashCode() ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
// Type: UnityEngine.InputSystem.LowLevel::InputStateHistory`1
namespace UnityEngine::InputSystem::LowLevel {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6660)), TypeDefinitionIndex(TypeDefinitionIndex(6657))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6660), inst: 3759 })
// CS Name: UnityEngine.InputSystem.LowLevel.InputStateHistory`1
class CORDL_TYPE InputStateHistory_1<UnityEngine::InputSystem::LowLevel::TouchState> : public UnityEngine::InputSystem::LowLevel::InputStateHistory {
public:
// Declarations
using Record = UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record<UnityEngine::InputSystem::LowLevel::TouchState>;

using Enumerator = UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Enumerator<UnityEngine::InputSystem::LowLevel::TouchState>;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyList_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record<UnityEngine::InputSystem::LowLevel::TouchState>>
constexpr operator  System::Collections::Generic::IReadOnlyList_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record<UnityEngine::InputSystem::LowLevel::TouchState>>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record<UnityEngine::InputSystem::LowLevel::TouchState>>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record<UnityEngine::InputSystem::LowLevel::TouchState>>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record<UnityEngine::InputSystem::LowLevel::TouchState>>
constexpr operator  System::Collections::Generic::IReadOnlyCollection_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record<UnityEngine::InputSystem::LowLevel::TouchState>>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~InputStateHistory_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputStateHistory_1", modifiers: " const&", def_value: None }]
constexpr InputStateHistory_1(InputStateHistory_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputStateHistory_1", modifiers: "&&", def_value: None }]
constexpr InputStateHistory_1(InputStateHistory_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputStateHistory_1(void* ptr) noexcept : UnityEngine::InputSystem::LowLevel::InputStateHistory(ptr) {
}


  constexpr InputStateHistory_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputStateHistory_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputStateHistory_1& operator=(InputStateHistory_1&& o) noexcept = default;
  constexpr InputStateHistory_1& operator=(InputStateHistory_1 const& o) noexcept = default;
                


// Properties

 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record<UnityEngine::InputSystem::LowLevel::TouchState> __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

static UnityEngine::InputSystem::LowLevel::InputStateHistory_1<UnityEngine::InputSystem::LowLevel::TouchState> New_ctor(System::Nullable_1<int32_t> maxStateSizeInBytes) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Nullable_1<int32_t> maxStateSizeInBytes) ;

static UnityEngine::InputSystem::LowLevel::InputStateHistory_1<UnityEngine::InputSystem::LowLevel::TouchState> New_ctor(UnityEngine::InputSystem::InputControl_1<UnityEngine::InputSystem::LowLevel::TouchState> control) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(UnityEngine::InputSystem::InputControl_1<UnityEngine::InputSystem::LowLevel::TouchState> control) ;

static UnityEngine::InputSystem::LowLevel::InputStateHistory_1<UnityEngine::InputSystem::LowLevel::TouchState> New_ctor(::StringW path) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::StringW path) ;

/// @brief Method Finalize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Finalize() ;

/// @brief Method AddRecord addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record<UnityEngine::InputSystem::LowLevel::TouchState> AddRecord(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record<UnityEngine::InputSystem::LowLevel::TouchState> record) ;

/// @brief Method RecordStateChange addr 0x0 size 0xffffffffffffffff virtual false final false
 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record<UnityEngine::InputSystem::LowLevel::TouchState> RecordStateChange(UnityEngine::InputSystem::InputControl_1<UnityEngine::InputSystem::LowLevel::TouchState> control, UnityEngine::InputSystem::LowLevel::TouchState value, double_t time) ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record<UnityEngine::InputSystem::LowLevel::TouchState>> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final true
 UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record<UnityEngine::InputSystem::LowLevel::TouchState> get_Item(int32_t index) ;

/// @brief Method set_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Item(int32_t index, UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record<UnityEngine::InputSystem::LowLevel::TouchState> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::LowLevel
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::InputSystem::LowLevel::InputStateHistory_1, "UnityEngine.InputSystem.LowLevel", "InputStateHistory`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Enumerator, "UnityEngine.InputSystem.LowLevel", "InputStateHistory`1/Enumerator");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(UnityEngine::InputSystem::LowLevel::UnityEngine__InputSystem__LowLevel__InputStateHistory_1__Record, "UnityEngine.InputSystem.LowLevel", "InputStateHistory`1/Record");
