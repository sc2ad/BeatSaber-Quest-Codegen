#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Threading {
template<typename T>
class System__Threading__ThreadLocal_1__FinalizationHelper;
}
namespace System::Threading {
template<typename T>
class System__Threading__ThreadLocal_1__IdManager;
}
namespace System::Threading {
template<typename T>
class System__Threading__ThreadLocal_1__LinkedSlot;
}
namespace System::Threading {
template<typename T>
class ThreadLocal_1;
}
namespace System::Threading {
template<::cordl_internals::il2cpp_reference_type T>
class System__Threading__ThreadLocal_1__FinalizationHelper<T>;
}
namespace System::Threading {
template<::cordl_internals::il2cpp_reference_type T>
class System__Threading__ThreadLocal_1__IdManager<T>;
}
namespace System::Threading {
template<::cordl_internals::il2cpp_reference_type T>
class System__Threading__ThreadLocal_1__LinkedSlot<T>;
}
namespace System::Threading {
template<::cordl_internals::il2cpp_reference_type T>
class ThreadLocal_1<T>;
}
namespace System::Threading {
template<typename T>
struct System__Threading__ThreadLocal_1__LinkedSlotVolatile;
}
// Type: ::LinkedSlotVolatile
namespace System::Threading {
// cpp template
template<typename T>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2701))
// CS Name: System.Threading.ThreadLocal`1::LinkedSlotVolatile
struct CORDL_TYPE System__Threading__ThreadLocal_1__LinkedSlotVolatile : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "Value", ty: "System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T>", modifiers: "", def_value: None }]
constexpr System__Threading__ThreadLocal_1__LinkedSlotVolatile(System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T> Value) noexcept;


                    constexpr System__Threading__ThreadLocal_1__LinkedSlotVolatile(System__Threading__ThreadLocal_1__LinkedSlotVolatile const&) = default;
                    constexpr System__Threading__ThreadLocal_1__LinkedSlotVolatile(System__Threading__ThreadLocal_1__LinkedSlotVolatile&&) = default;
                    constexpr System__Threading__ThreadLocal_1__LinkedSlotVolatile& operator=(System__Threading__ThreadLocal_1__LinkedSlotVolatile const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Threading__ThreadLocal_1__LinkedSlotVolatile& operator=(System__Threading__ThreadLocal_1__LinkedSlotVolatile&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Threading__ThreadLocal_1__LinkedSlotVolatile(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T> __declspec(property(get=__get_Value, put=__set_Value))  Value;

constexpr void __set_Value(System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T> value) ;

constexpr System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T> __get_Value() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Threading
// Type: ::LinkedSlot
// Type: ::IdManager
// Type: ::FinalizationHelper
// Type: System.Threading::ThreadLocal`1
// Type: ::LinkedSlot
namespace System::Threading {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2702))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2702), inst: 2 })
// CS Name: System.Threading.ThreadLocal`1::LinkedSlot
class CORDL_TYPE System__Threading__ThreadLocal_1__LinkedSlot<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~System__Threading__ThreadLocal_1__LinkedSlot() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__ThreadLocal_1__LinkedSlot", modifiers: " const&", def_value: None }]
constexpr System__Threading__ThreadLocal_1__LinkedSlot(System__Threading__ThreadLocal_1__LinkedSlot const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__ThreadLocal_1__LinkedSlot", modifiers: "&&", def_value: None }]
constexpr System__Threading__ThreadLocal_1__LinkedSlot(System__Threading__ThreadLocal_1__LinkedSlot&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Threading__ThreadLocal_1__LinkedSlot(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Threading__ThreadLocal_1__LinkedSlot& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Threading__ThreadLocal_1__LinkedSlot& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Threading__ThreadLocal_1__LinkedSlot& operator=(System__Threading__ThreadLocal_1__LinkedSlot&& o) noexcept = default;
  constexpr System__Threading__ThreadLocal_1__LinkedSlot& operator=(System__Threading__ThreadLocal_1__LinkedSlot const& o) noexcept = default;
                


// Fields

 System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T> __declspec(property(get=__get_Next, put=__set_Next))  Next;

constexpr void __set_Next(System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T> value) ;

constexpr System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T> __get_Next() const;

 System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T> __declspec(property(get=__get_Previous, put=__set_Previous))  Previous;

constexpr void __set_Previous(System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T> value) ;

constexpr System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T> __get_Previous() const;

 ::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> __declspec(property(get=__get_SlotArray, put=__set_SlotArray))  SlotArray;

constexpr void __set_SlotArray(::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> value) ;

constexpr ::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> __get_SlotArray() const;

 T __declspec(property(get=__get_Value, put=__set_Value))  Value;

constexpr void __set_Value(T value) ;

constexpr T __get_Value() const;


// Methods

// Ctor Parameters [CppParam { name: "slotArray", ty: "::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>", modifiers: "", def_value: None }]
explicit System__Threading__ThreadLocal_1__LinkedSlot(::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> slotArray) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> slotArray) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
// Type: ::IdManager
namespace System::Threading {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2703))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2703), inst: 2 })
// CS Name: System.Threading.ThreadLocal`1::IdManager
class CORDL_TYPE System__Threading__ThreadLocal_1__IdManager<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__Threading__ThreadLocal_1__IdManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__ThreadLocal_1__IdManager", modifiers: " const&", def_value: None }]
constexpr System__Threading__ThreadLocal_1__IdManager(System__Threading__ThreadLocal_1__IdManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__ThreadLocal_1__IdManager", modifiers: "&&", def_value: None }]
constexpr System__Threading__ThreadLocal_1__IdManager(System__Threading__ThreadLocal_1__IdManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Threading__ThreadLocal_1__IdManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Threading__ThreadLocal_1__IdManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Threading__ThreadLocal_1__IdManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Threading__ThreadLocal_1__IdManager& operator=(System__Threading__ThreadLocal_1__IdManager&& o) noexcept = default;
  constexpr System__Threading__ThreadLocal_1__IdManager& operator=(System__Threading__ThreadLocal_1__IdManager const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_nextIdToTry, put=__set_m_nextIdToTry))  m_nextIdToTry;

constexpr void __set_m_nextIdToTry(int32_t value) ;

constexpr int32_t __get_m_nextIdToTry() const;

 System::Collections::Generic::List_1<bool> __declspec(property(get=__get_m_freeIds, put=__set_m_freeIds))  m_freeIds;

constexpr void __set_m_freeIds(System::Collections::Generic::List_1<bool> value) ;

constexpr System::Collections::Generic::List_1<bool> __get_m_freeIds() const;


// Methods

/// @brief Method GetId addr 0x0 size 0xffffffffffffffff virtual false final false
 int32_t GetId() ;

/// @brief Method ReturnId addr 0x0 size 0xffffffffffffffff virtual false final false
 void ReturnId(int32_t id) ;

// Ctor Parameters []
explicit System__Threading__ThreadLocal_1__IdManager() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
// Type: ::FinalizationHelper
namespace System::Threading {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2704))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2704), inst: 2 })
// CS Name: System.Threading.ThreadLocal`1::FinalizationHelper
class CORDL_TYPE System__Threading__ThreadLocal_1__FinalizationHelper<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~System__Threading__ThreadLocal_1__FinalizationHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__ThreadLocal_1__FinalizationHelper", modifiers: " const&", def_value: None }]
constexpr System__Threading__ThreadLocal_1__FinalizationHelper(System__Threading__ThreadLocal_1__FinalizationHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Threading__ThreadLocal_1__FinalizationHelper", modifiers: "&&", def_value: None }]
constexpr System__Threading__ThreadLocal_1__FinalizationHelper(System__Threading__ThreadLocal_1__FinalizationHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Threading__ThreadLocal_1__FinalizationHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Threading__ThreadLocal_1__FinalizationHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Threading__ThreadLocal_1__FinalizationHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Threading__ThreadLocal_1__FinalizationHelper& operator=(System__Threading__ThreadLocal_1__FinalizationHelper&& o) noexcept = default;
  constexpr System__Threading__ThreadLocal_1__FinalizationHelper& operator=(System__Threading__ThreadLocal_1__FinalizationHelper const& o) noexcept = default;
                


// Fields

 ::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> __declspec(property(get=__get_SlotArray, put=__set_SlotArray))  SlotArray;

constexpr void __set_SlotArray(::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> value) ;

constexpr ::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> __get_SlotArray() const;

 bool __declspec(property(get=__get_m_trackAllValues, put=__set_m_trackAllValues))  m_trackAllValues;

constexpr void __set_m_trackAllValues(bool value) ;

constexpr bool __get_m_trackAllValues() const;


// Methods

// Ctor Parameters [CppParam { name: "slotArray", ty: "::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>", modifiers: "", def_value: None }, CppParam { name: "trackAllValues", ty: "bool", modifiers: "", def_value: None }]
explicit System__Threading__ThreadLocal_1__FinalizationHelper(::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> slotArray, bool trackAllValues) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> slotArray, bool trackAllValues) ;

/// @brief Method Finalize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Finalize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
// Type: System.Threading::ThreadLocal`1
namespace System::Threading {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2705))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2705), inst: 2 })
// CS Name: System.Threading.ThreadLocal`1
class CORDL_TYPE ThreadLocal_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using FinalizationHelper = System::Threading::System__Threading__ThreadLocal_1__FinalizationHelper<T>;

using IdManager = System::Threading::System__Threading__ThreadLocal_1__IdManager<T>;

using LinkedSlot = System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T>;

using LinkedSlotVolatile = System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~ThreadLocal_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadLocal_1", modifiers: " const&", def_value: None }]
constexpr ThreadLocal_1(ThreadLocal_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ThreadLocal_1", modifiers: "&&", def_value: None }]
constexpr ThreadLocal_1(ThreadLocal_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ThreadLocal_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ThreadLocal_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ThreadLocal_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ThreadLocal_1& operator=(ThreadLocal_1&& o) noexcept = default;
  constexpr ThreadLocal_1& operator=(ThreadLocal_1 const& o) noexcept = default;
                


// Fields

 System::Func_1<T> __declspec(property(get=__get_m_valueFactory, put=__set_m_valueFactory))  m_valueFactory;

constexpr void __set_m_valueFactory(System::Func_1<T> value) ;

constexpr System::Func_1<T> __get_m_valueFactory() const;

static ::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> __declspec(property(get=__get_ts_slotArray, put=__set_ts_slotArray))  ts_slotArray;

static void __set_ts_slotArray(::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> value) ;

static ::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> __get_ts_slotArray() ;

static System::Threading::System__Threading__ThreadLocal_1__FinalizationHelper<T> __declspec(property(get=__get_ts_finalizationHelper, put=__set_ts_finalizationHelper))  ts_finalizationHelper;

static void __set_ts_finalizationHelper(System::Threading::System__Threading__ThreadLocal_1__FinalizationHelper<T> value) ;

static System::Threading::System__Threading__ThreadLocal_1__FinalizationHelper<T> __get_ts_finalizationHelper() ;

 int32_t __declspec(property(get=__get_m_idComplement, put=__set_m_idComplement))  m_idComplement;

constexpr void __set_m_idComplement(int32_t value) ;

constexpr int32_t __get_m_idComplement() const;

 bool __declspec(property(get=__get_m_initialized, put=__set_m_initialized))  m_initialized;

constexpr void __set_m_initialized(bool value) ;

constexpr bool __get_m_initialized() const;

static System::Threading::System__Threading__ThreadLocal_1__IdManager<T> __declspec(property(get=__get_s_idManager, put=__set_s_idManager))  s_idManager;

static void __set_s_idManager(System::Threading::System__Threading__ThreadLocal_1__IdManager<T> value) ;

static System::Threading::System__Threading__ThreadLocal_1__IdManager<T> __get_s_idManager() ;

 System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T> __declspec(property(get=__get_m_linkedSlot, put=__set_m_linkedSlot))  m_linkedSlot;

constexpr void __set_m_linkedSlot(System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T> value) ;

constexpr System::Threading::System__Threading__ThreadLocal_1__LinkedSlot<T> __get_m_linkedSlot() const;

 bool __declspec(property(get=__get_m_trackAllValues, put=__set_m_trackAllValues))  m_trackAllValues;

constexpr void __set_m_trackAllValues(bool value) ;

constexpr bool __get_m_trackAllValues() const;


// Properties

 T __declspec(property(get=get_Value, put=set_Value))  Value;

 bool __declspec(property(get=get_IsValueCreated))  IsValueCreated;


// Methods

// Ctor Parameters []
explicit ThreadLocal_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method Initialize addr 0x0 size 0xffffffffffffffff virtual false final false
 void Initialize(System::Func_1<T> valueFactory, bool trackAllValues) ;

/// @brief Method Finalize addr 0x0 size 0xffffffffffffffff virtual true final false
 void Finalize() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 T get_Value() ;

/// @brief Method set_Value addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_Value(T value) ;

/// @brief Method GetValueSlow addr 0x0 size 0xffffffffffffffff virtual false final false
 T GetValueSlow() ;

/// @brief Method SetValueSlow addr 0x0 size 0xffffffffffffffff virtual false final false
 void SetValueSlow(T value, ::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> slotArray) ;

/// @brief Method CreateLinkedSlot addr 0x0 size 0xffffffffffffffff virtual false final false
 void CreateLinkedSlot(::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>> slotArray, int32_t id, T value) ;

/// @brief Method get_IsValueCreated addr 0x0 size 0xffffffffffffffff virtual false final false
 bool get_IsValueCreated() ;

/// @brief Method GrowTable addr 0x0 size 0xffffffffffffffff virtual false final false
 void GrowTable(ByRef<::ArrayW<System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile<T>>> table, int32_t minLength) ;

/// @brief Method GetNewTableSize addr 0x0 size 0xffffffffffffffff virtual false final false
static int32_t GetNewTableSize(int32_t minSize) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Threading::System__Threading__ThreadLocal_1__FinalizationHelper, "System.Threading", "ThreadLocal`1/FinalizationHelper");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Threading::System__Threading__ThreadLocal_1__IdManager, "System.Threading", "ThreadLocal`1/IdManager");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Threading::System__Threading__ThreadLocal_1__LinkedSlot, "System.Threading", "ThreadLocal`1/LinkedSlot");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Threading::ThreadLocal_1, "System.Threading", "ThreadLocal`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Threading::System__Threading__ThreadLocal_1__LinkedSlotVolatile, "System.Threading", "ThreadLocal`1/LinkedSlotVolatile");
