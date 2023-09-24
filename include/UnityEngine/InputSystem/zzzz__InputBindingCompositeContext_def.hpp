#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputActionState__BindingState;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::InputSystem {
template<typename TValue>
struct UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1;
}
namespace UnityEngine::InputSystem {
class InputActionState;
}
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding;
}
namespace UnityEngine::InputSystem {
class UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace System::Collections::Generic {
template<typename T>
class IComparer_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem {
class UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2;
}
namespace UnityEngine::InputSystem {
template<typename TValue>
struct UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1;
}
namespace UnityEngine::InputSystem {
struct InputBindingCompositeContext;
}
namespace UnityEngine::InputSystem {
template<::cordl_internals::il2cpp_reference_type TValue>
struct UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1<TValue>;
}
namespace UnityEngine::InputSystem {
template<>
struct UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1<float_t>;
}
namespace UnityEngine::InputSystem {
struct UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding;
}
// Type: ::PartBinding
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6274))
// CS Name: UnityEngine.InputSystem.InputBindingCompositeContext::PartBinding
struct CORDL_TYPE UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "_part_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_control_k__BackingField", ty: "UnityEngine::InputSystem::InputControl", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding(int32_t _part_k__BackingField, UnityEngine::InputSystem::InputControl _control_k__BackingField) noexcept;


                    constexpr UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding(UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding const&) = default;
                    constexpr UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding(UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding&&) = default;
                    constexpr UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding& operator=(UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding& operator=(UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get__part_k__BackingField, put=__set__part_k__BackingField))  _part_k__BackingField;

constexpr void __set__part_k__BackingField(int32_t value) ;

constexpr int32_t __get__part_k__BackingField() const;

 UnityEngine::InputSystem::InputControl __declspec(property(get=__get__control_k__BackingField, put=__set__control_k__BackingField))  _control_k__BackingField;

constexpr void __set__control_k__BackingField(UnityEngine::InputSystem::InputControl value) ;

constexpr UnityEngine::InputSystem::InputControl __get__control_k__BackingField() const;


// Properties

 int32_t __declspec(property(get=get_part, put=set_part))  part;

 UnityEngine::InputSystem::InputControl __declspec(property(get=get_control, put=set_control))  control;


// Methods

/// @brief Method get_part addr 0x28c3d94 size 0x8 virtual false final false
 int32_t get_part() ;

/// @brief Method set_part addr 0x28c3d9c size 0x8 virtual false final false
 void set_part(int32_t value) ;

/// @brief Method get_control addr 0x28c3da4 size 0x8 virtual false final false
 UnityEngine::InputSystem::InputControl get_control() ;

/// @brief Method set_control addr 0x28c3dac size 0x8 virtual false final false
 void set_control(UnityEngine::InputSystem::InputControl value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::DefaultComparer`1
// Type: ::<get_controls>d__2
namespace UnityEngine::InputSystem {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6276))
// CS Name: UnityEngine.InputSystem.InputBindingCompositeContext::<get_controls>d__2
class CORDL_TYPE UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2(UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2(UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2& operator=(UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2& operator=(UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding value) ;

constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 UnityEngine::InputSystem::InputBindingCompositeContext __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(UnityEngine::InputSystem::InputBindingCompositeContext value) ;

constexpr UnityEngine::InputSystem::InputBindingCompositeContext __get___4__this() const;

 UnityEngine::InputSystem::InputBindingCompositeContext __declspec(property(get=__get___3____4__this, put=__set___3____4__this))  __3____4__this;

constexpr void __set___3____4__this(UnityEngine::InputSystem::InputBindingCompositeContext value) ;

constexpr UnityEngine::InputSystem::InputBindingCompositeContext __get___3____4__this() const;

 int32_t __declspec(property(get=__get__totalBindingCount_5__2, put=__set__totalBindingCount_5__2))  _totalBindingCount_5__2;

constexpr void __set__totalBindingCount_5__2(int32_t value) ;

constexpr int32_t __get__totalBindingCount_5__2() const;

 int32_t __declspec(property(get=__get__bindingIndex_5__3, put=__set__bindingIndex_5__3))  _bindingIndex_5__3;

constexpr void __set__bindingIndex_5__3(int32_t value) ;

constexpr int32_t __get__bindingIndex_5__3() const;

 UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState __declspec(property(get=__get__bindingState_5__4, put=__set__bindingState_5__4))  _bindingState_5__4;

constexpr void __set__bindingState_5__4(UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState value) ;

constexpr UnityEngine::InputSystem::UnityEngine__InputSystem__InputActionState__BindingState __get__bindingState_5__4() const;

 int32_t __declspec(property(get=__get__controlStartIndex_5__5, put=__set__controlStartIndex_5__5))  _controlStartIndex_5__5;

constexpr void __set__controlStartIndex_5__5(int32_t value) ;

constexpr int32_t __get__controlStartIndex_5__5() const;

 int32_t __declspec(property(get=__get__i_5__6, put=__set__i_5__6))  _i_5__6;

constexpr void __set__i_5__6(int32_t value) ;

constexpr int32_t __get__i_5__6() const;


// Properties

 UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x28c3c48 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x28c3db4 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x28c3db8 size 0x100 virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputBindingCompositeContext.PartBinding>.get_Current addr 0x28c3eb8 size 0xc virtual true final true
 UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x28c3ec4 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x28c3f04 size 0x5c virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputBindingCompositeContext.PartBinding>.GetEnumerator addr 0x28c3f60 size 0xb0 virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding> System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputBindingCompositeContext_PartBinding__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x28c4010 size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: UnityEngine.InputSystem::InputBindingCompositeContext
namespace UnityEngine::InputSystem {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6277))
// CS Name: UnityEngine.InputSystem.InputBindingCompositeContext
struct CORDL_TYPE InputBindingCompositeContext : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _get_controls_d__2 = UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2;

template<typename TValue>
using DefaultComparer_1 = UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1<TValue>;

using PartBinding = UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding;

// Ctor Parameters [CppParam { name: "m_State", ty: "UnityEngine::InputSystem::InputActionState", modifiers: "", def_value: None }, CppParam { name: "m_BindingIndex", ty: "int32_t", modifiers: "", def_value: None }]
constexpr InputBindingCompositeContext(UnityEngine::InputSystem::InputActionState m_State, int32_t m_BindingIndex) noexcept;


                    constexpr InputBindingCompositeContext(InputBindingCompositeContext const&) = default;
                    constexpr InputBindingCompositeContext(InputBindingCompositeContext&&) = default;
                    constexpr InputBindingCompositeContext& operator=(InputBindingCompositeContext const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr InputBindingCompositeContext& operator=(InputBindingCompositeContext&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit InputBindingCompositeContext(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::InputSystem::InputActionState __declspec(property(get=__get_m_State, put=__set_m_State))  m_State;

constexpr void __set_m_State(UnityEngine::InputSystem::InputActionState value) ;

constexpr UnityEngine::InputSystem::InputActionState __get_m_State() const;

 int32_t __declspec(property(get=__get_m_BindingIndex, put=__set_m_BindingIndex))  m_BindingIndex;

constexpr void __set_m_BindingIndex(int32_t value) ;

constexpr int32_t __get_m_BindingIndex() const;


// Properties

 System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding> __declspec(property(get=get_controls))  controls;


// Methods

/// @brief Method get_controls addr 0x28c3bcc size 0x7c virtual false final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding> get_controls() ;

/// @brief Method EvaluateMagnitude addr 0x28c3c7c size 0x24 virtual false final false
 float_t EvaluateMagnitude(int32_t partNumber) ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
 TValue ReadValue(int32_t partNumber) ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue>
 TValue ReadValue(int32_t partNumber, ByRef<UnityEngine::InputSystem::InputControl> sourceControl) ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue,typename TComparer>
 TValue ReadValue(int32_t partNumber, TComparer comparer) ;

/// @brief Method ReadValue addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TValue,typename TComparer>
 TValue ReadValue(int32_t partNumber, ByRef<UnityEngine::InputSystem::InputControl> sourceControl, TComparer comparer) ;

/// @brief Method ReadValueAsButton addr 0x28c3ca0 size 0x88 virtual false final false
 bool ReadValueAsButton(int32_t partNumber) ;

/// @brief Method ReadValue addr 0x28c3d28 size 0x24 virtual false final false
 void ReadValue(int32_t partNumber, void* buffer, int32_t bufferSize) ;

/// @brief Method ReadValueAsObject addr 0x28c3d4c size 0x24 virtual false final false
 ::bs_hook::Il2CppWrapperType ReadValueAsObject(int32_t partNumber) ;

/// @brief Method GetPressTime addr 0x28c3d70 size 0x24 virtual false final false
 double_t GetPressTime(int32_t partNumber) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::DefaultComparer`1
namespace UnityEngine::InputSystem {
// cpp template
template<>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6275)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6275), inst: 374 })
// CS Name: UnityEngine.InputSystem.InputBindingCompositeContext::DefaultComparer`1
struct CORDL_TYPE UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1<float_t> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IComparer_1<float_t>
constexpr operator  System::Collections::Generic::IComparer_1<float_t>() const;


                    constexpr UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1(UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1 const&) = default;
                    constexpr UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1(UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1&&) = default;
                    constexpr UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1& operator=(UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1& operator=(UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Methods

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t Compare(float_t x, float_t y) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
// Type: ::DefaultComparer`1
namespace UnityEngine::InputSystem {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6275)), TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6275), inst: 2 })
// CS Name: UnityEngine.InputSystem.InputBindingCompositeContext::DefaultComparer`1
struct CORDL_TYPE UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1<TValue> : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IComparer_1<TValue>
constexpr operator  System::Collections::Generic::IComparer_1<TValue>() const;


                    constexpr UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1(UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1 const&) = default;
                    constexpr UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1(UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1&&) = default;
                    constexpr UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1& operator=(UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1& operator=(UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Methods

/// @brief Method Compare addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t Compare(TValue x, TValue y) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem
NEED_NO_BOX(UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext___get_controls_d__2, "UnityEngine.InputSystem", "InputBindingCompositeContext/<get_controls>d__2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__DefaultComparer_1, "UnityEngine.InputSystem", "InputBindingCompositeContext/DefaultComparer`1");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::InputBindingCompositeContext, "UnityEngine.InputSystem", "InputBindingCompositeContext");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::UnityEngine__InputSystem__InputBindingCompositeContext__PartBinding, "UnityEngine.InputSystem", "InputBindingCompositeContext/PartBinding");
