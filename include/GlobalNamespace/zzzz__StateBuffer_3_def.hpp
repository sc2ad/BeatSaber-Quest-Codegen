#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
class IAsyncResult;
}
namespace GlobalNamespace {
struct NodePoseSyncState;
}
namespace System {
struct Int32Enum;
}
namespace System {
class AsyncCallback;
}
namespace GlobalNamespace {
struct PoseSerializable;
}
namespace GlobalNamespace {
struct StandardScoreSyncState;
}
namespace GlobalNamespace {
struct SyncStateId;
}
namespace GlobalNamespace {
template<typename T>
class IEquatableByReference_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class GlobalNamespace__StateBuffer_3__InterpolationDelegate;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class GlobalNamespace__StateBuffer_3__SmoothingDelegate;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
class StateBuffer_3;
}
namespace GlobalNamespace {
template<>
class GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>;
}
namespace GlobalNamespace {
template<>
class GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t>;
}
namespace GlobalNamespace {
template<>
class GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>;
}
namespace GlobalNamespace {
template<>
class GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t>;
}
namespace GlobalNamespace {
template<>
class StateBuffer_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>;
}
namespace GlobalNamespace {
template<>
class StateBuffer_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t>;
}
namespace GlobalNamespace {
template<typename TStateTable,typename TType,typename TState>
struct GlobalNamespace__StateBuffer_3__TimestampedStateTable;
}
namespace GlobalNamespace {
template<>
struct GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>;
}
namespace GlobalNamespace {
template<>
struct GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t>;
}
// Type: ::TimestampedStateTable
// Type: ::InterpolationDelegate
// Type: ::SmoothingDelegate
// Type: ::StateBuffer`3
// Type: ::TimestampedStateTable
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(12921))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12921), inst: 4981 })
// CS Name: StateBuffer`3::TimestampedStateTable
struct CORDL_TYPE GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IEquatableByReference_1<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>>
constexpr operator  GlobalNamespace::IEquatableByReference_1<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>>() const;

// Ctor Parameters [CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "id", ty: "GlobalNamespace::SyncStateId", modifiers: "", def_value: None }, CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "state", ty: "GlobalNamespace::NodePoseSyncState", modifiers: "", def_value: None }]
constexpr GlobalNamespace__StateBuffer_3__TimestampedStateTable(bool isValid, GlobalNamespace::SyncStateId id, float_t time, GlobalNamespace::NodePoseSyncState state) noexcept;


                    constexpr GlobalNamespace__StateBuffer_3__TimestampedStateTable(GlobalNamespace__StateBuffer_3__TimestampedStateTable const&) = default;
                    constexpr GlobalNamespace__StateBuffer_3__TimestampedStateTable(GlobalNamespace__StateBuffer_3__TimestampedStateTable&&) = default;
                    constexpr GlobalNamespace__StateBuffer_3__TimestampedStateTable& operator=(GlobalNamespace__StateBuffer_3__TimestampedStateTable const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__StateBuffer_3__TimestampedStateTable& operator=(GlobalNamespace__StateBuffer_3__TimestampedStateTable&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__StateBuffer_3__TimestampedStateTable(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_isValid, put=__set_isValid))  isValid;

constexpr void __set_isValid(bool value) ;

constexpr bool __get_isValid() const;

 GlobalNamespace::SyncStateId __declspec(property(get=__get_id, put=__set_id))  id;

constexpr void __set_id(GlobalNamespace::SyncStateId value) ;

constexpr GlobalNamespace::SyncStateId __get_id() const;

 float_t __declspec(property(get=__get_time, put=__set_time))  time;

constexpr void __set_time(float_t value) ;

constexpr float_t __get_time() const;

 GlobalNamespace::NodePoseSyncState __declspec(property(get=__get_state, put=__set_state))  state;

constexpr void __set_state(GlobalNamespace::NodePoseSyncState value) ;

constexpr GlobalNamespace::NodePoseSyncState __get_state() const;


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Equals(ByRef<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>> other) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(GlobalNamespace::SyncStateId id, float_t time, GlobalNamespace::NodePoseSyncState state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(float_t time, GlobalNamespace::NodePoseSyncState state) ;

/// @brief Method IEquatableByReference<StateBuffer<TStateTable,TType,TState>.TimestampedStateTable>.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool IEquatableByReference_StateBuffer_TStateTable,TType,TState__TimestampedStateTable__Equals(ByRef<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>> other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::TimestampedStateTable
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(12921))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12921), inst: 4982 })
// CS Name: StateBuffer`3::TimestampedStateTable
struct CORDL_TYPE GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IEquatableByReference_1<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t>>
constexpr operator  GlobalNamespace::IEquatableByReference_1<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t>>() const;

// Ctor Parameters [CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "id", ty: "GlobalNamespace::SyncStateId", modifiers: "", def_value: None }, CppParam { name: "time", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "state", ty: "GlobalNamespace::StandardScoreSyncState", modifiers: "", def_value: None }]
constexpr GlobalNamespace__StateBuffer_3__TimestampedStateTable(bool isValid, GlobalNamespace::SyncStateId id, float_t time, GlobalNamespace::StandardScoreSyncState state) noexcept;


                    constexpr GlobalNamespace__StateBuffer_3__TimestampedStateTable(GlobalNamespace__StateBuffer_3__TimestampedStateTable const&) = default;
                    constexpr GlobalNamespace__StateBuffer_3__TimestampedStateTable(GlobalNamespace__StateBuffer_3__TimestampedStateTable&&) = default;
                    constexpr GlobalNamespace__StateBuffer_3__TimestampedStateTable& operator=(GlobalNamespace__StateBuffer_3__TimestampedStateTable const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GlobalNamespace__StateBuffer_3__TimestampedStateTable& operator=(GlobalNamespace__StateBuffer_3__TimestampedStateTable&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__StateBuffer_3__TimestampedStateTable(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_isValid, put=__set_isValid))  isValid;

constexpr void __set_isValid(bool value) ;

constexpr bool __get_isValid() const;

 GlobalNamespace::SyncStateId __declspec(property(get=__get_id, put=__set_id))  id;

constexpr void __set_id(GlobalNamespace::SyncStateId value) ;

constexpr GlobalNamespace::SyncStateId __get_id() const;

 float_t __declspec(property(get=__get_time, put=__set_time))  time;

constexpr void __set_time(float_t value) ;

constexpr float_t __get_time() const;

 GlobalNamespace::StandardScoreSyncState __declspec(property(get=__get_state, put=__set_state))  state;

constexpr void __set_state(GlobalNamespace::StandardScoreSyncState value) ;

constexpr GlobalNamespace::StandardScoreSyncState __get_state() const;


// Methods

/// @brief Method Equals addr 0x0 size 0xffffffffffffffff virtual false final false
 bool Equals(ByRef<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t>> other) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(GlobalNamespace::SyncStateId id, float_t time, GlobalNamespace::StandardScoreSyncState state) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(float_t time, GlobalNamespace::StandardScoreSyncState state) ;

/// @brief Method IEquatableByReference<StateBuffer<TStateTable,TType,TState>.TimestampedStateTable>.Equals addr 0x0 size 0xffffffffffffffff virtual true final true
 bool IEquatableByReference_StateBuffer_TStateTable,TType,TState__TimestampedStateTable__Equals(ByRef<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t>> other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::InterpolationDelegate
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12922)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12922), inst: 4981 })
// CS Name: StateBuffer`3::InterpolationDelegate
class CORDL_TYPE GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~GlobalNamespace__StateBuffer_3__InterpolationDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__StateBuffer_3__InterpolationDelegate", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__StateBuffer_3__InterpolationDelegate(GlobalNamespace__StateBuffer_3__InterpolationDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__StateBuffer_3__InterpolationDelegate", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__StateBuffer_3__InterpolationDelegate(GlobalNamespace__StateBuffer_3__InterpolationDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__StateBuffer_3__InterpolationDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr GlobalNamespace__StateBuffer_3__InterpolationDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__StateBuffer_3__InterpolationDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__StateBuffer_3__InterpolationDelegate& operator=(GlobalNamespace__StateBuffer_3__InterpolationDelegate&& o) noexcept = default;
  constexpr GlobalNamespace__StateBuffer_3__InterpolationDelegate& operator=(GlobalNamespace__StateBuffer_3__InterpolationDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__StateBuffer_3__InterpolationDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::PoseSerializable Invoke(GlobalNamespace::PoseSerializable a, float_t timeA, GlobalNamespace::PoseSerializable b, float_t timeB, float_t time) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(GlobalNamespace::PoseSerializable a, float_t timeA, GlobalNamespace::PoseSerializable b, float_t timeB, float_t time, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::PoseSerializable EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::InterpolationDelegate
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12922)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12922), inst: 4982 })
// CS Name: StateBuffer`3::InterpolationDelegate
class CORDL_TYPE GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~GlobalNamespace__StateBuffer_3__InterpolationDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__StateBuffer_3__InterpolationDelegate", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__StateBuffer_3__InterpolationDelegate(GlobalNamespace__StateBuffer_3__InterpolationDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__StateBuffer_3__InterpolationDelegate", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__StateBuffer_3__InterpolationDelegate(GlobalNamespace__StateBuffer_3__InterpolationDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__StateBuffer_3__InterpolationDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr GlobalNamespace__StateBuffer_3__InterpolationDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__StateBuffer_3__InterpolationDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__StateBuffer_3__InterpolationDelegate& operator=(GlobalNamespace__StateBuffer_3__InterpolationDelegate&& o) noexcept = default;
  constexpr GlobalNamespace__StateBuffer_3__InterpolationDelegate& operator=(GlobalNamespace__StateBuffer_3__InterpolationDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__StateBuffer_3__InterpolationDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Invoke(int32_t a, float_t timeA, int32_t b, float_t timeB, float_t time) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t a, float_t timeA, int32_t b, float_t timeB, float_t time, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SmoothingDelegate
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12923)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12923), inst: 4981 })
// CS Name: StateBuffer`3::SmoothingDelegate
class CORDL_TYPE GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~GlobalNamespace__StateBuffer_3__SmoothingDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__StateBuffer_3__SmoothingDelegate", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__StateBuffer_3__SmoothingDelegate(GlobalNamespace__StateBuffer_3__SmoothingDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__StateBuffer_3__SmoothingDelegate", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__StateBuffer_3__SmoothingDelegate(GlobalNamespace__StateBuffer_3__SmoothingDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__StateBuffer_3__SmoothingDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr GlobalNamespace__StateBuffer_3__SmoothingDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__StateBuffer_3__SmoothingDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__StateBuffer_3__SmoothingDelegate& operator=(GlobalNamespace__StateBuffer_3__SmoothingDelegate&& o) noexcept = default;
  constexpr GlobalNamespace__StateBuffer_3__SmoothingDelegate& operator=(GlobalNamespace__StateBuffer_3__SmoothingDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__StateBuffer_3__SmoothingDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::PoseSerializable Invoke(GlobalNamespace::PoseSerializable a, GlobalNamespace::PoseSerializable b, float_t smooth) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(GlobalNamespace::PoseSerializable a, GlobalNamespace::PoseSerializable b, float_t smooth, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::PoseSerializable EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::SmoothingDelegate
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12923)), TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12923), inst: 4982 })
// CS Name: StateBuffer`3::SmoothingDelegate
class CORDL_TYPE GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t> : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~GlobalNamespace__StateBuffer_3__SmoothingDelegate() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__StateBuffer_3__SmoothingDelegate", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__StateBuffer_3__SmoothingDelegate(GlobalNamespace__StateBuffer_3__SmoothingDelegate const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__StateBuffer_3__SmoothingDelegate", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__StateBuffer_3__SmoothingDelegate(GlobalNamespace__StateBuffer_3__SmoothingDelegate&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__StateBuffer_3__SmoothingDelegate(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr GlobalNamespace__StateBuffer_3__SmoothingDelegate& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__StateBuffer_3__SmoothingDelegate& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__StateBuffer_3__SmoothingDelegate& operator=(GlobalNamespace__StateBuffer_3__SmoothingDelegate&& o) noexcept = default;
  constexpr GlobalNamespace__StateBuffer_3__SmoothingDelegate& operator=(GlobalNamespace__StateBuffer_3__SmoothingDelegate const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit GlobalNamespace__StateBuffer_3__SmoothingDelegate(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t Invoke(int32_t a, int32_t b, float_t smooth) ;

/// @brief Method BeginInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 System::IAsyncResult BeginInvoke(int32_t a, int32_t b, float_t smooth, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::StateBuffer`3
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12924))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12924), inst: 4981 })
// CS Name: StateBuffer`3
class CORDL_TYPE StateBuffer_3<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using SmoothingDelegate = GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::NodePoseSyncState, System::Int32Enum, GlobalNamespace::PoseSerializable>;

using InterpolationDelegate = GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::NodePoseSyncState, System::Int32Enum, GlobalNamespace::PoseSerializable>;

using TimestampedStateTable = GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::NodePoseSyncState, System::Int32Enum, GlobalNamespace::PoseSerializable>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~StateBuffer_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "StateBuffer_3", modifiers: " const&", def_value: None }]
constexpr StateBuffer_3(StateBuffer_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StateBuffer_3", modifiers: "&&", def_value: None }]
constexpr StateBuffer_3(StateBuffer_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StateBuffer_3(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StateBuffer_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StateBuffer_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StateBuffer_3& operator=(StateBuffer_3&& o) noexcept = default;
  constexpr StateBuffer_3& operator=(StateBuffer_3 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__currentIndex, put=__set__currentIndex))  _currentIndex;

constexpr void __set__currentIndex(int32_t value) ;

constexpr int32_t __get__currentIndex() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>> __declspec(property(get=__get__buffer, put=__set__buffer))  _buffer;

constexpr void __set__buffer(::ArrayW<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>> __get__buffer() const;

 GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> __declspec(property(get=__get__interpolator, put=__set__interpolator))  _interpolator;

constexpr void __set__interpolator(GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> value) ;

constexpr GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> __get__interpolator() const;

 GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> __declspec(property(get=__get__smoother, put=__set__smoother))  _smoother;

constexpr void __set__smoother(GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> value) ;

constexpr GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> __get__smoother() const;


// Methods

// Ctor Parameters [CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "interpolator", ty: "GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>", modifiers: "", def_value: None }, CppParam { name: "smoother", ty: "GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable>", modifiers: "", def_value: None }]
explicit StateBuffer_3(int32_t size, GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> interpolator, GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> smoother) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t size, GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> interpolator, GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::NodePoseSyncState,System::Int32Enum,GlobalNamespace::PoseSerializable> smoother) ;

/// @brief Method GetPreviousIndex addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t GetPreviousIndex(int32_t offset) ;

/// @brief Method InsertState addr 0x0 size 0xffffffffffffffff virtual false final false
 void InsertState(ByRef<GlobalNamespace::NodePoseSyncState> state, float_t time) ;

/// @brief Method GetState addr 0x0 size 0xffffffffffffffff virtual false final false
 GlobalNamespace::PoseSerializable GetState(System::Int32Enum type, float_t time) ;

/// @brief Method GetLatestState addr 0x0 size 0xffffffffffffffff virtual false final false
 GlobalNamespace::PoseSerializable GetLatestState(System::Int32Enum type) ;

/// @brief Method GetLatestTime addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t GetLatestTime() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final false
 void Clear() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::StateBuffer`3
namespace GlobalNamespace {
// cpp template
template<>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12924))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(12924), inst: 4982 })
// CS Name: StateBuffer`3
class CORDL_TYPE StateBuffer_3<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using SmoothingDelegate = GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::StandardScoreSyncState, System::Int32Enum, int32_t>;

using InterpolationDelegate = GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::StandardScoreSyncState, System::Int32Enum, int32_t>;

using TimestampedStateTable = GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::StandardScoreSyncState, System::Int32Enum, int32_t>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~StateBuffer_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "StateBuffer_3", modifiers: " const&", def_value: None }]
constexpr StateBuffer_3(StateBuffer_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StateBuffer_3", modifiers: "&&", def_value: None }]
constexpr StateBuffer_3(StateBuffer_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StateBuffer_3(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StateBuffer_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StateBuffer_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StateBuffer_3& operator=(StateBuffer_3&& o) noexcept = default;
  constexpr StateBuffer_3& operator=(StateBuffer_3 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__currentIndex, put=__set__currentIndex))  _currentIndex;

constexpr void __set__currentIndex(int32_t value) ;

constexpr int32_t __get__currentIndex() const;

 ::ArrayW<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t>> __declspec(property(get=__get__buffer, put=__set__buffer))  _buffer;

constexpr void __set__buffer(::ArrayW<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t>> value) ;

constexpr ::ArrayW<GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t>> __get__buffer() const;

 GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t> __declspec(property(get=__get__interpolator, put=__set__interpolator))  _interpolator;

constexpr void __set__interpolator(GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t> value) ;

constexpr GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t> __get__interpolator() const;

 GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t> __declspec(property(get=__get__smoother, put=__set__smoother))  _smoother;

constexpr void __set__smoother(GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t> value) ;

constexpr GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t> __get__smoother() const;


// Methods

// Ctor Parameters [CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "interpolator", ty: "GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t>", modifiers: "", def_value: None }, CppParam { name: "smoother", ty: "GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t>", modifiers: "", def_value: None }]
explicit StateBuffer_3(int32_t size, GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t> interpolator, GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t> smoother) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t size, GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t> interpolator, GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate<GlobalNamespace::StandardScoreSyncState,System::Int32Enum,int32_t> smoother) ;

/// @brief Method GetPreviousIndex addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t GetPreviousIndex(int32_t offset) ;

/// @brief Method InsertState addr 0x0 size 0xffffffffffffffff virtual false final false
 void InsertState(ByRef<GlobalNamespace::StandardScoreSyncState> state, float_t time) ;

/// @brief Method GetState addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t GetState(System::Int32Enum type, float_t time) ;

/// @brief Method GetLatestState addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t GetLatestState(System::Int32Enum type) ;

/// @brief Method GetLatestTime addr 0x0 size 0xffffffffffffffff virtual false final false
 float_t GetLatestTime() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final false
 void Clear() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::GlobalNamespace__StateBuffer_3__InterpolationDelegate, "", "StateBuffer`3/InterpolationDelegate");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::GlobalNamespace__StateBuffer_3__SmoothingDelegate, "", "StateBuffer`3/SmoothingDelegate");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::StateBuffer_3, "", "StateBuffer`3");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(GlobalNamespace::GlobalNamespace__StateBuffer_3__TimestampedStateTable, "", "StateBuffer`3/TimestampedStateTable");
